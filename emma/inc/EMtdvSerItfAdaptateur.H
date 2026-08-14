/*******************************************************************************
 * \file           EMtdvSerItfAdaptateur.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'adaptateur cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvSerItfAdaptateur_H
#define __EMtdvSerItfAdaptateur_H


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

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"
#include "EMstrip_volData.H"

/// Pour pouvoir appeler les clients du service tdv.
#include "EMtdvServeurVersClientC.H"

/// Pour pouvoir recevoir les envois des clients du service tdv.
#include "EMtdvClientVersServeurImplementation.H"


using namespace std;
using namespace emma;

namespace emma
{
//-----------------------------------------------------------------------------
/*! \class EMtdvSerItfAdaptateur
 *  \brief   Adaptateur qui permet à une application serveuse d'interagir avec
 *    EMMA pour le service tdv.
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
class EMtdvSerItfAdaptateur :
    public Singleton<EMtdvSerItfAdaptateur>,
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
    EMstatut  cree_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_vol(   // Compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_vol(   // Compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_vol(   // Compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_vol(   // Compatibilite
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_vol(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_vol(   // Compatibilite
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  signale_vol(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  signale_vol(   // Compatibilite
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  connexion_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  connexion_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_connexion_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_connexion_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  evenement_vol(
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  evenement_vol(   // Compatibilite
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_vlr(   // Compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_vlr(   // Compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_vlr(   // Compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_vlr(   // Compatibilite
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_vlr(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_vlr(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_vlr(
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_vlr(   // Compatibilite
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_vlr(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_vlr(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_vlr(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_vlr(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  evenement_vlr(
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  evenement_vlr(   // Compatibilite
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_volalarme(   // Compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_volalarme(   // Compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_volalarme(   // Compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_volalarme(   // Compatibilite
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_volalarme(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_volalarme(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_volalarme(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_volalarme(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  evenement_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  evenement_volalarme(   // Compatibilite
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_volmsg(
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_volmsg(   // Compatibilite
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_volmsg(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_volmsg(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_volmsg(   // Compatibilite
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_volmsg(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_volmsg(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_volmsg(   // Compatibilite
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_volmsg(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_volmsg(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_volmsg(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_volmsg(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  signale_strip_vol(
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  signale_strip_vol(   // Compatibilite
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  connexion_strip_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  connexion_strip_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_connexion_strip_vol(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_connexion_strip_vol(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

protected:
    //-------------------------------------------------------------------------
    /*! Constructeur.
     */
    //-------------------------------------------------------------------------
    EMtdvSerItfAdaptateur();
    //-------------------------------------------------------------------------
    /*! Destructeur.
     */
    //-------------------------------------------------------------------------
    virtual ~EMtdvSerItfAdaptateur();
    friend class Singleton<EMtdvSerItfAdaptateur>;
    friend class auto_ptr<EMtdvSerItfAdaptateur>;

private:

    //-------------------------------------------------------------------------
    /*! Vérifie si l'adaptateur est bien activé.
     *  \param messageErreur Message à tracer si l'adaptateur n'est pas activé.
     */
    //-------------------------------------------------------------------------
    void verifierActivation(
        const string& message = "Opération non permise car le service tdv n'est pas activé.")
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
    EMtdvSerItfAdaptateur(const EMtdvSerItfAdaptateur&);
    EMtdvSerItfAdaptateur& operator = (const EMtdvSerItfAdaptateur&);
    int operator == (const EMtdvSerItfAdaptateur&);
    int operator != (const EMtdvSerItfAdaptateur&);

    //! Objet chargé de la réception des messages des clients pour le 
    //! service tdv en niveau v3_0_0.
    auto_ptr<POA_EMtdv_v3_0_0_ClientVersServeurImplementation> _serveur_v3_0_0;
    const EMversion _version1;



};

extern EMtdvSerItfAdaptateur& emtdvSerItfAdaptateur();

}
#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvSerItfAdaptateur.H
//------------------------------------------------------------------------------

