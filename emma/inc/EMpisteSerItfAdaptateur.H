/*******************************************************************************
 * \file           EMpisteSerItfAdaptateur.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'adaptateur cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteSerItfAdaptateur_H
#define __EMpisteSerItfAdaptateur_H


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

#include "EMpisteData.H"
#include "EMpisteTYPES.H"

/// Pour pouvoir appeler les clients du service piste.
#include "EMpisteServeurVersClientC.H"

/// Pour pouvoir recevoir les envois des clients du service piste.
#include "EMpisteClientVersServeurImplementation.H"


using namespace std;
using namespace emma;

namespace emma
{
//-----------------------------------------------------------------------------
/*! \class EMpisteSerItfAdaptateur
 *  \brief   Adaptateur qui permet à une application serveuse d'interagir avec
 *    EMMA pour le service piste.
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
class EMpisteSerItfAdaptateur :
    public Singleton<EMpisteSerItfAdaptateur>,
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
    EMstatut  notifie_piste(
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_piste(   // Compatibilite
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdClient
        );
    EMstatut  repond_piste(
        EMpisteData*  pPiste,
        int  nIdRequete,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  repond_piste(   // Compatibilite
        EMpisteData*  pPiste,
        int  nIdRequete,
        int  nIdClient
        );
    EMstatut  signale_info(
        int  nStatus,
        char*  gMessage,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  signale_info(   // Compatibilite
        int  nStatus,
        char*  gMessage,
        int  nIdOp,
        int  nIdClient
        );

protected:
    //-------------------------------------------------------------------------
    /*! Constructeur.
     */
    //-------------------------------------------------------------------------
    EMpisteSerItfAdaptateur();
    //-------------------------------------------------------------------------
    /*! Destructeur.
     */
    //-------------------------------------------------------------------------
    virtual ~EMpisteSerItfAdaptateur();
    friend class Singleton<EMpisteSerItfAdaptateur>;
    friend class auto_ptr<EMpisteSerItfAdaptateur>;

private:

    //-------------------------------------------------------------------------
    /*! Vérifie si l'adaptateur est bien activé.
     *  \param messageErreur Message à tracer si l'adaptateur n'est pas activé.
     */
    //-------------------------------------------------------------------------
    void verifierActivation(
        const string& message = "Opération non permise car le service piste n'est pas activé.")
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
    EMpisteSerItfAdaptateur(const EMpisteSerItfAdaptateur&);
    EMpisteSerItfAdaptateur& operator = (const EMpisteSerItfAdaptateur&);
    int operator == (const EMpisteSerItfAdaptateur&);
    int operator != (const EMpisteSerItfAdaptateur&);

    //! Objet chargé de la réception des messages des clients pour le 
    //! service piste en niveau v3_0_0.
    auto_ptr<POA_EMpiste_v3_0_0_ClientVersServeurImplementation> _serveur_v3_0_0;
    const EMversion _version1;



};

extern EMpisteSerItfAdaptateur& empisteSerItfAdaptateur();

}
#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteSerItfAdaptateur.H
//------------------------------------------------------------------------------

