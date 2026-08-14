/*******************************************************************************
 * \file           EMspyCliItfAdaptateur.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'adaptateur cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspyCliItfAdaptateur_H
#define __EMspyCliItfAdaptateur_H


//-------------------- Includes ----------------------------------------

#include <string>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "Echec.H"
#include "NoyauC.H"
#include "Singleton.H"
#include "Automate.H"
#include "EMroutage.H"
#include "EMnoyau.H"
#include "ClientS.H"
#include "CommunS.H"
#include "SurveillantConnexions.H"
#include "IAdaptateurClient.H"

#include "EMnivTraceData.H"
#include "EMetatFctData.H"
#include "EMconfspyData.H"
#include "EMtraceData.H"

#include "EMspyClientVersServeurC.H"
#include "EMspyServeurVersClientImplementation.H"
#include "PortableServer/Servant_Base.h"

using std::string;
using namespace emma;

namespace emma
{

//-------------------- Declaration de la classe ------------------------
class EMspyCliItfAdaptateur :
    public PortableServer::RefCountServantBase,
    /// Permet de notifier l'adaptateur sans avoir à connaître le
    /// service dont il s'agit.
    public IAdaptateurClient,
    /// Permet d'assurer l'unicité de la classe pour l'application.
    public Singleton<EMspyCliItfAdaptateur>,
    /// Permet de recevoir les appels du serveur.
    public POA_emma_corba__Client
{

  public:
    // -------------------------------------------------------------------------
    /*! Cette méthode lance l'activation du service spy.
     *  Pour cela, elle a besoin :
     *  - de connaître la table de routage EMMA. C'est à dire de savoir quelle
     *    application elle doit contacter, et sur quelle machine ;
     *  - une fois connu ce couple (nom application serveuse, nom hôte), il faut
     *    appeler l'annuaire sur l'hôte ;
     *  - avec l'annuaire, on obtient la référence du noyau de l'application
     *    serveuse;
     *  - on demande au noyau de renvoyer la référence sur l'objet serveur,
     *    avec le niveau d'activation de la connexion.
     *
     *    \param nomService Nom logique du service que l'application souhaite
     *    activer.
     *
     *    \return EMS_OK Le service a été activé et est maintenant utilisable.
     *    \sa lireVersion, la fonction renvoyant le niveau de service actuel.
     */
    // -------------------------------------------------------------------------
    EMstatut active(const string& nomService) throw(Echec);

    //-------------------------------------------------------------------------
    /*! Teste si l'adaptateur est activé.
     *  eturn Vrai si l'adaptateur est activé, faux sinon.
     */
    //-------------------------------------------------------------------------
    bool estActive() const;
    
  private:
    //-------------------------------------------------------------------------
    /*! Repasse l'adaptateur à l'état activé si une demande était en cours.
     *  Change le serveur à activer pour la prochaine demande d'activation.
     */
    //-------------------------------------------------------------------------
    void basculerServeur() throw();

    string _nomApplication;
    string _nomHote;
  public:
    // -------------------------------------------------------------------------
    /*!    Coupe la connexion avec l'objet du service qui rend le service spy.
     *     L'application ne peut plus utiliser ensuite le service spy, sous
     *     peine que lui soit retourné une erreur.
     */
    // -------------------------------------------------------------------------
    EMstatut desactive();
    
    // -------------------------------------------------------------------------
    /*! Nettoie l'adaptateur client.
     */
    // -------------------------------------------------------------------------
    void detruire();

    virtual void testerConnexionClient( const char* nomService,  
      const char* nomApplication, const char* nomHote, const int idClient) 
        throw (CORBA::SystemException, emma_corba::ServeurDeconnecte);
        
    virtual void testerConnexionServeur(int numeroClient)
      throw (CORBA::SystemException, emma_corba::ClientDeconnecte);
    // -------------------------------------------------------------------------
    /*!    Renvoie la valeur de la version de la connexion avec le serveur.
     *  \return - un objet EMversion contenant la version utilisée si une
     *            connexion est ouverte avec un serveur,
     *           - une exception Echec(EMS_SERVICE_NON_ACTIVE) sinon.
     */
    // -------------------------------------------------------------------------
    EMversion lireVersion() const throw(Echec);

    //-------------------------------------------------------------------------
    /*!    Renvoie la ou les version(s) de service gérée(s) par la librairie.
     *  \return un vecteur de 1 ou 2 objets EMversion correspondant à la ou aux
     *          version(s) gérée(s) par la librairie.
     */
    //-------------------------------------------------------------------------
    vector<EMversion> lireVersionsConnues() const;

    //-------------------------------------------------------------------------
    /*! Renvoie le numéro de client attribué à l'adaptateur.
     */
    //-------------------------------------------------------------------------
    virtual int lireNumeroClient();

    /// Méthodes d'émission vers le serveur.
    /// Cf. DDI du service spy pour connaître la sémantique.
    EMstatut  setNiveauTrace(
        EMnivTraceData*  pNiveauTrace,
        int&  nIdOp
        );
    EMstatut  setEtatFonction(
        EMetatFctData*  pEtatfct,
        int&  nIdOp
        );
    EMstatut  setConfig(
        EMconfspyData*  pConfig,
        int&  nIdOp
        );
    EMstatut  traceEtat(
        int&  nIdOp
        );
    EMstatut  traceConfig(
        int&  nIdOp
        );
    EMstatut  traceTimer(
        int&  nIdOp
        );
    EMstatut  traceFD(
        int&  nIdOp
        );
    EMstatut  trace(
        EMtraceData*  pTrace,
        int&  nIdOp
        );

    //---------------------------------------------------------------------------
    // Début {interface Client} : méthodes provenant de l'héritage de 
    // l'interface "Client".
    //---------------------------------------------------------------------------

    //---------------------------------------------------------------------------
    /*! Réponse du serveur à une demande d'activation du client.
     *  \param resultat Contient EMS_OK si le serveur a accepté la demande de
     *     connexion. Les autres paramètres n'ont un sens que dans ce cas.
     *     Lorsque le resultat est différent de EMS_OK, les autres paramètres ne
     *     doivent pas être utilisés.
     *  \param nomApplication Nom de l'application rendant le service demandé.
     *  \param nomHote Nom de la machine où s'exécute le serveur.
     *  \param referenceServeur Contient le niveau de service de l'activation,
     *     ainsi que la référence de l'objet rendant le service.
     */
    //---------------------------------------------------------------------------
    virtual void activeCB(int resultat,
                          const char* nomApplication,
                          const char* nomHote,
                          const emma_corba::NiveauReference& referenceServeur,
                          int idClient)
      throw(CORBA::SystemException);

    //-------------------------------------------------------------------------
    /*! Notification d'une déconnexion.
     *  \param resultat Indique la cause de la déconnexion.
     */
    //-------------------------------------------------------------------------
    virtual void deconnexionCB(int resultat) throw(CORBA::SystemException);
    
    //-------------------------------------------------------------------------
    //! Méthode qui notifie l'application d'une déconnexion.
    //-------------------------------------------------------------------------
    virtual void notifierDeconnexionCB(int resultat);
    
    //-------------------------------------------------------------------------
    //! Notifie le changement d'état à l'automate de l'adaptateur.
    //-------------------------------------------------------------------------
    virtual void notifierAutomateDeconnexionCB();

    //-------------------------------------------------------------------------
    /*! Notifie l'échec local d'une demande d'activation.
     *  \param statut Cause de l'échec.
     */
    //-------------------------------------------------------------------------
    virtual void notifierEchecActivation(const EMstatut statut);
    
    //-------------------------------------------------------------------------
    // Fin {interface Client}.
    //-------------------------------------------------------------------------
  private:
    void nettoyerConnexion();

    //! Numéro de version du client (cf. règles de livraison).
    string _identifiant;
  public:
    // -------------------------------------------------------------------------
    /*!    Classe pour notifier d'une exception lorsque le serveur indiqué par
     *    l'URL n'a pu être contacté.
     */
    // -------------------------------------------------------------------------
    struct ServeurInjoignable
    {

        ServeurInjoignable(const string& urlServeur) : url(urlServeur) {};
        string url;
    };


  protected:

    //-------------------------------------------------------------------------
    /*! Initialise les paramètres constants de l'adaptateur.
     * - listeNiveaux est initialisée avec les valeurs supportées par
     * l'adaptateur.
     */
    //-------------------------------------------------------------------------
    EMspyCliItfAdaptateur();
    //-------------------------------------------------------------------------
    /*! Destructeur. Désenregistre les objets POA.
     */
    //-------------------------------------------------------------------------
    virtual ~EMspyCliItfAdaptateur();
    friend class Singleton<EMspyCliItfAdaptateur>;
    friend class auto_ptr<EMspyCliItfAdaptateur>;

  private:
    //---------------------------------------------------------------------------
    /*! Vérifie que l'adaptateur est bien activé, et affiche un message
     *  d'erreur lorsque ce n'est pas le cas.
     *  \param message Message à afficher si l'adaptateur n'est pas activé.
     *  \return Une exception Echec(EMS_SERVICE_NON_ACTIVE) si le service n'est
     *     pas activé.
     */
    //---------------------------------------------------------------------------
    void verifierActivation(
        const string& message = "Opération non permise car le client n'est pas activé.")
      const throw(Echec);

    EMspyCliItfAdaptateur(const EMspyCliItfAdaptateur&);
    EMspyCliItfAdaptateur& operator = (const EMspyCliItfAdaptateur&);
    int operator == (const EMspyCliItfAdaptateur&);
    int operator != (const EMspyCliItfAdaptateur&);

    /// Etat de l'adaptateur.
    typedef enum
    {
      /// Adaptateur dans l'état désactivé.
      Desactive,
      /// Demande d'activation effectuée par l'adaptateur, la réponse du
      /// serveur n'est pas encore arrivée.
      DemandeActivation,
      /// L'activation a été faite dans le niveau v3.0.0.
      Active_v3_0_0

     } EtatAdaptateur;

    /// Stimuli autorisés pour le déclenchement des transitions.
    typedef enum
    {
      activer, 
      activation_v3_0_0,
      activation_,
      echec_activation,
      desactivation,
      deconnexion
    } TransitionsAdaptateur;

    /// Type de l'automate utilisé par l'adaptateur.
    typedef Automate<EtatAdaptateur,TransitionsAdaptateur> AutomateAdaptateur;

    /// Raccourci pour les arcs de l'automate.
    typedef AutomateAdaptateur::Arc ArcAdaptateur;

    /// Instance de l'automate, utilisée principalement pour rendre explicite
    /// l'état du composant.
    AutomateAdaptateur _automate;

    /// Indicateur du serveur courant.
    EMroutage::IdServeur _serveurCourant;

    const EMversion _version1;
    emma_corba::EMspy_v3_0_0_ClientVersServeur_var _proxyv3_0_0;




    /// Numéro de client attribué par le serveur, et renvoyé par activeCB.
    int _numeroClient;


    // --------------------------------------------------------------------------
    /*! Méthode qui crée les POA chargés :
     *    (i) de la réception des envois en provenance des serveurs.
     *    (ii) du traitement des exceptions en cas de défaillance lors d'un appel.
     *    (iii) de la réception d'une valeur de retour en réponse à un appel au
     *          serveur.
     */
    // --------------------------------------------------------------------------
    void _creerPOA();
    // --------------------------------------------------------------------------
    /*! Méthode qui détruit les POA.
     */
    // --------------------------------------------------------------------------    
    void _detruirePOA();


    /// Objet responsable des réceptions pour le service spy en v3_0_0.
    /// \sa creerPOA.
    auto_ptr<POA_EMspy_v3_0_0_ServeurVersClientImplementation> _poa_v3_0_0;    
    PortableServer::ObjectId_var _id_v3_0_0;



    /// Liste des niveaux compris par l'adaptateur client.
    emma_corba::SequenceNiveauReference _listeNiveaux;

    //! Objet responsable des réponses asynchrones pour les envois aux noyaux.
    auto_ptr<RepondeurNoyau> _repondeurRequetesNoyaux;

    /*! Nom logique du service utilisé à la demande d'activation.
     *  \sa active();
     */
    string _nomService;
};


// Commodite d'acces a l'objet adaptateur
extern EMspyCliItfAdaptateur& emspyCliItfAdaptateur();


} /// namespace emma


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMspyCliItfAdaptateur.H
//------------------------------------------------------------------------------

