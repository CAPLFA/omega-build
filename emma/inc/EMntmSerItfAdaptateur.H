/*******************************************************************************
 * \file           EMntmSerItfAdaptateur.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'adaptateur cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmSerItfAdaptateur_H
#define __EMntmSerItfAdaptateur_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMnoyau.H"
#include "Singleton.H"
#include "EMversion.H"
#include "Echec.H"
#include "TableInformationsConnexions.H"
#include "InformationsClient.H"
#include "InformationsServeur.H"
#include "Automate.H"
#include "IAdaptateurServeur.H"

#include "EMnotamData.H"

/// Pour pouvoir appeler les clients du service ntm.
#include "EMntmServeurVersClientC.H"

/// Pour pouvoir recevoir les envois des clients du service ntm.
#include "EMntmClientVersServeurImplementation.H"


using namespace std;
using namespace emma;

namespace emma
{
//-----------------------------------------------------------------------------
/*! \class EMntmSerItfAdaptateur
 *  \brief   Adaptateur qui permet à une application serveuse d'interagir avec
 *    EMMA pour le service ntm.
 *  \author  Générateur EMMA 3.
 *  \date
 *
 *  \par   Description
 *    A compléter.
 *
 *  \par   Dynamique
 *    A compléter.
 *
 *  \par   Enchaînement des opérations
 *    A compléter.
 */
//-----------------------------------------------------------------------------
class EMntmSerItfAdaptateur :
    public Singleton<EMntmSerItfAdaptateur>,
    /// Pour rendre polymorphiques les opérations communes à tous
    /// les adaptateurs serveurs. Permet d'appeler les callbacks sans savoir
    /// de quel service il s'agit.
    public IAdaptateurServeur
{

public:
    // --------------------------------------------------------------------------
    /*! Demande d'activation pour l'adaptateur du côté serveur.
     *  Le rôle de cette méthode est de :
     *     1. vérifier que le noyau, et donc l'ORB, est bien activé;
     *     2. enregistrer les objets CORBA chargés de la réception des messages
     *        envoyés par les clients.
     */
    //-------------------------------------------------------------------------
    virtual EMstatut active() throw();

    // --------------------------------------------------------------------------
    /*! Demande de désactivation pour l'adaptateur du côté serveur.
     *  \return
     *     - EMS_OK si tout s'est bien passé.
     *     - A compléter (DCO).
     */
    //-------------------------------------------------------------------------
    virtual EMstatut desactive() throw();

    // --------------------------------------------------------------------------
    /*! Méthode obsolète.
     *  \return Retourne systématiquement EMS_OK.
     */
    //-------------------------------------------------------------------------
    void  detruitServeurParasite() throw();

    // --------------------------------------------------------------------------
    /*! Renvoie le numéro de version de la connexion pour le client indiqué.
     *  \return - un objet EMversion contenant la version utilisée si une
     *             connexion est ouverte avec le client,
     *           - une exception Echec(EMS_SERVICE_NON_ACTIVE)
     *             ou Echec(EMS_CLIENT_ID_INVALIDE) sinon.
     */
    //-------------------------------------------------------------------------
    EMversion  lireVersion(int  nIdClient) const throw();

    // -------------------------------------------------------------------------
    /*!    Renvoie la ou les version(s) de service gérée(s) par la librairie.
     *  \return un vecteur de 1 ou 2 objets EMversion correspondant à la ou aux
     *          version(s) gérée(s) par la librairie.
     */
    // -------------------------------------------------------------------------
    vector<EMversion> lireVersionsConnues() const;

    // -------------------------------------------------------------------------
    /*! Notification à l'application serveuse de l'enregistrement d'un nouveau
     *  client.
     *  \param nIdClient Identifiant du nouveau client.
     *  \param nomClient Nom logique de l'application cliente.
     *  \param nomHote   Nom de la machine hôte du client.
     */
    // -------------------------------------------------------------------------
    virtual void activeCB (int nIdClient, const string& nomClient,
                           const string& nomMachine);

    // -------------------------------------------------------------------------
    /*! Notification à l'application serveuse du désenregistrement d'un client.
     *  \param nStatut Motif de la déconnexion.
     *  \param nIdClient Identifiant du client.
     */
    // -------------------------------------------------------------------------
    virtual void deconnexionCB (EMstatut nStatut, int nIdClient);    
    
    virtual void notifierDeconnexionCB (EMstatut nStatut, int nIdClient);

    virtual void desactiveCB(int statut);

    virtual string lireNomService();
    //-------------------------------------------------------------------------
    //! \return Renvoie le nom de l'application.
    //-------------------------------------------------------------------------    
    virtual string lireNomApplication();
    //-------------------------------------------------------------------------
    /*! Renvoie le nom de l'hôte d'exécution de l'application.
     *  \return Nom de l'hôte.
     */
    //-------------------------------------------------------------------------  
    virtual string lireNomHote();
    
    // Méthodes d'émission vers le client
    EMstatut  consulte_notam(
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_notam(   // Compatibilite
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_notam(
        EMnotamData*  p_notam,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_notam(   // Compatibilite
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_notam(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_notam(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_notam(
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_notam(   // Compatibilite
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_notam(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_notam(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_notam(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_notam(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  evenement_notam(
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  evenement_notam(   // Compatibilite
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

protected:
    //-------------------------------------------------------------------------
    /*! Constructeur.
     */
    //-------------------------------------------------------------------------
    EMntmSerItfAdaptateur();
    //-------------------------------------------------------------------------
    /*! Destructeur.
     */
    //-------------------------------------------------------------------------
    virtual ~EMntmSerItfAdaptateur();
    friend class Singleton<EMntmSerItfAdaptateur>;
    friend class auto_ptr<EMntmSerItfAdaptateur>;

private:

    //-------------------------------------------------------------------------
    /*! Vérifie si l'adaptateur est bien activé.
     *  \param messageErreur Message à tracer si l'adaptateur n'est pas activé.
     */
    //-------------------------------------------------------------------------
    void verifierActivation(
        const string& message = "Opération non permise car le service ntm n'est pas activé.")
      const throw(Echec);

    //! Etat de l'adaptateur.
    typedef enum
    {
      //! Adaptateur dans l'état désactivé.
      Desactive,
      //! L'activation a été faite dans le niveau v1.0.
      Active
     } EtatAdaptateur;

    //! Stimuli autorisés pour le déclenchement des transitions.
    typedef enum
    {
      activation,
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

    //-------------------------------------------------------------------------
    /*! Classe d'objet-fonction permettant de notifier un client.
     */
    //-------------------------------------------------------------------------
    class DeconnecterClient
    {
      public:
        //---------------------------------------------------------------------
        /*! Opération de notification.
         */
        //---------------------------------------------------------------------
        void operator()( int idClient );
      private:
        CORBA::Object* _reference;
        emma_corba__Client* _proxy;
    };


    //! Numéro de version du serveur.
    string _identifiant;

    // Mesures de securité.
    EMntmSerItfAdaptateur(const EMntmSerItfAdaptateur&);
    EMntmSerItfAdaptateur& operator = (const EMntmSerItfAdaptateur&);
    int operator == (const EMntmSerItfAdaptateur&);
    int operator != (const EMntmSerItfAdaptateur&);

    //! Objet chargé de la réception des messages des clients pour le 
    //! service ntm en niveau v3_0_0.
    auto_ptr<POA_EMntm_v3_0_0_ClientVersServeurImplementation> _serveur_v3_0_0;
    const EMversion _version1;



};

extern EMntmSerItfAdaptateur& emntmSerItfAdaptateur();

}
#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmSerItfAdaptateur.H
//------------------------------------------------------------------------------

