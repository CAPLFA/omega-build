/*******************************************************************************
 * \file           EMbdrefSerItfAdaptateur.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'adaptateur cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefSerItfAdaptateur_H
#define __EMbdrefSerItfAdaptateur_H


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

#include "EMaeronefData.H"
#include "EMdvmData.H"
#include "EMprerouteData.H"
#include "EMtypaeroData.H"
#include "EMpointData.H"
#include "EMrt_stripData.H"
#include "EMaerodromeData.H"
#include "EMpoint_trkData.H"
#include "EMroute_trkData.H"

/// Pour pouvoir appeler les clients du service bdref.
#include "EMbdrefServeurVersClientC.H"

/// Pour pouvoir recevoir les envois des clients du service bdref.
#include "EMbdrefClientVersServeurImplementation.H"


using namespace std;
using namespace emma;

namespace emma
{
//-----------------------------------------------------------------------------
/*! \class EMbdrefSerItfAdaptateur
 *  \brief   Adaptateur qui permet à une application serveuse d'interagir avec
 *    EMMA pour le service bdref.
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
class EMbdrefSerItfAdaptateur :
    public Singleton<EMbdrefSerItfAdaptateur>,
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
    EMstatut  cree_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_aeronef(   // Compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_aeronef(   // Compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_aeronef(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_aeronef(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_aeronef(   // Compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_aeronef(   // Compatibilite
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_aeronef(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_aeronef(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_dvm(   // Compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_dvm(   // Compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_dvm(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_dvm(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_dvm(   // Compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_dvm(   // Compatibilite
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_dvm(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_dvm(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_preroute(   // Compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_preroute(   // Compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_preroute(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_preroute(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_preroute(   // Compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_preroute(   // Compatibilite
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_preroute(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_preroute(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_typaero(   // Compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_typaero(   // Compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_typaero(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_typaero(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_typaero(   // Compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_typaero(   // Compatibilite
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_typaero(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_typaero(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_point(   // Compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_point(   // Compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_point(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_point(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_point(   // Compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_point(
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_point(   // Compatibilite
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_point(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_point(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_rt_strip(   // Compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_rt_strip(   // Compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_rt_strip(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_rt_strip(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_rt_strip(   // Compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_rt_strip(   // Compatibilite
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_rt_strip(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_rt_strip(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  cree_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  cree_aerodrome(   // Compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  modifie_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  modifie_aerodrome(   // Compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  supprime_aerodrome(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  supprime_aerodrome(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_aerodrome(   // Compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_aerodrome(   // Compatibilite
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_aerodrome(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_aerodrome(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_point_trk(
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_point_trk(   // Compatibilite
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_point_trk(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_point_trk(   // Compatibilite
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_point_trk(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_point_trk(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  consulte_route_trk(
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  consulte_route_trk(   // Compatibilite
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  liste_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  liste_route_trk(   // Compatibilite
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_liste_route_trk(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_liste_route_trk(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  notifie_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  notifie_route_trk(   // Compatibilite
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_route_trk(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_ini_abo_route_trk(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    EMstatut  fin_abonne_route_trk(
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    EMstatut  fin_abonne_route_trk(   // Compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

protected:
    //-------------------------------------------------------------------------
    /*! Constructeur.
     */
    //-------------------------------------------------------------------------
    EMbdrefSerItfAdaptateur();
    //-------------------------------------------------------------------------
    /*! Destructeur.
     */
    //-------------------------------------------------------------------------
    virtual ~EMbdrefSerItfAdaptateur();
    friend class Singleton<EMbdrefSerItfAdaptateur>;
    friend class auto_ptr<EMbdrefSerItfAdaptateur>;

private:

    //-------------------------------------------------------------------------
    /*! Vérifie si l'adaptateur est bien activé.
     *  \param messageErreur Message à tracer si l'adaptateur n'est pas activé.
     */
    //-------------------------------------------------------------------------
    void verifierActivation(
        const string& message = "Opération non permise car le service bdref n'est pas activé.")
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
    EMbdrefSerItfAdaptateur(const EMbdrefSerItfAdaptateur&);
    EMbdrefSerItfAdaptateur& operator = (const EMbdrefSerItfAdaptateur&);
    int operator == (const EMbdrefSerItfAdaptateur&);
    int operator != (const EMbdrefSerItfAdaptateur&);

    //! Objet chargé de la réception des messages des clients pour le 
    //! service bdref en niveau v3_0_0.
    auto_ptr<POA_EMbdref_v3_0_0_ClientVersServeurImplementation> _serveur_v3_0_0;
    const EMversion _version1;



};

extern EMbdrefSerItfAdaptateur& embdrefSerItfAdaptateur();

}
#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefSerItfAdaptateur.H
//------------------------------------------------------------------------------

