/*******************************************************************************
 * \file           EMbdrefSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefSerItf_H
#define __EMbdrefSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaeronefData.H"
#include "EMdvmData.H"
#include "EMprerouteData.H"
#include "EMtypaeroData.H"
#include "EMpointData.H"
#include "EMrt_stripData.H"
#include "EMaerodromeData.H"
#include "EMpoint_trkData.H"
#include "EMroute_trkData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMbdrefSerItf {

public:

    //! Méthodes communes
    //---------------------------------------------------------------------------
    /*! Active l'accès au service. Si l'activation réussie, les clients peuvent
     *  être enregistrés.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  active();

    //---------------------------------------------------------------------------
    /*! Désactive l'accès au service. EMMA tente de notifier tous les clients.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  desactive();

    //---------------------------------------------------------------------------
    // Retourne la version utilisée pour la connexion avec le client nIdClient,
    // ou VERSION_NULLE si la connexion n'est pas établie.
    //---------------------------------------------------------------------------
    static  EMversion  lireVersion(int  nIdClient);

    //---------------------------------------------------------------------------
    // Retourne la ou les version(s) de service gerée(s) par la librairie.
    //---------------------------------------------------------------------------
    static vector<EMversion> lireVersionsConnues();

    //---------------------------------------------------------------------------
    // Méthode vide conservée pour la compatibilité.
    //---------------------------------------------------------------------------
    static  void  detruitServeurParasite();


    //---------------------------------------------------------------------------
    // Méthodes d'émission vers le client.
    //---------------------------------------------------------------------------
    static  EMstatut  cree_aeronef(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_aeronef(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_aeronef(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_aeronef(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_aeronef(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_aeronef(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_aeronef(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_aeronef(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_aeronef(   // Nouvelle methode avec nIdMsg
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_aeronef(   // Sans nIdMsg pour compatibilite
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_aeronef(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_aeronef(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_dvm(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_dvm(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_dvm(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_dvm(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_dvm(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_dvm(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_dvm(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_dvm(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_dvm(   // Nouvelle methode avec nIdMsg
        EMdvmData*  p_dvm,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_dvm(   // Sans nIdMsg pour compatibilite
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_dvm(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_dvm(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_preroute(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_preroute(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_preroute(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_preroute(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_preroute(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_preroute(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_preroute(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_preroute(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_preroute(   // Nouvelle methode avec nIdMsg
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_preroute(   // Sans nIdMsg pour compatibilite
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_preroute(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_preroute(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_typaero(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_typaero(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_typaero(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_typaero(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_typaero(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_typaero(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_typaero(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_typaero(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_typaero(   // Nouvelle methode avec nIdMsg
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_typaero(   // Sans nIdMsg pour compatibilite
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_typaero(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_typaero(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_point(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_point(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_point(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_point(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_point(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_point(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_point(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_point(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_point(   // Nouvelle methode avec nIdMsg
        EMpointData*  p_point,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_point(   // Sans nIdMsg pour compatibilite
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_point(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_point(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_rt_strip(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_rt_strip(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_rt_strip(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_rt_strip(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_rt_strip(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_rt_strip(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_rt_strip(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_rt_strip(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_rt_strip(   // Nouvelle methode avec nIdMsg
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_rt_strip(   // Sans nIdMsg pour compatibilite
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_rt_strip(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_rt_strip(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_aerodrome(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_aerodrome(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_aerodrome(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_aerodrome(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_aerodrome(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_aerodrome(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_aerodrome(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_aerodrome(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_aerodrome(   // Nouvelle methode avec nIdMsg
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_aerodrome(   // Sans nIdMsg pour compatibilite
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_aerodrome(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_aerodrome(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_point_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_point_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_point_trk(   // Nouvelle methode avec nIdMsg
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_point_trk(   // Sans nIdMsg pour compatibilite
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_point_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_point_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_route_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_route_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_route_trk(   // Nouvelle methode avec nIdMsg
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_route_trk(   // Sans nIdMsg pour compatibilite
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_route_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_route_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_route_trk(   // Nouvelle methode avec nIdMsg
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_route_trk(   // Sans nIdMsg pour compatibilite
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_route_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_route_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_route_trk(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_route_trk(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMbdrefSerItf();
    virtual ~EMbdrefSerItf();
    EMbdrefSerItf(const EMbdrefSerItf&);
    EMbdrefSerItf& operator = (const EMbdrefSerItf&);
    int operator == (const EMbdrefSerItf&);
    int operator != (const EMbdrefSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefSerItf.H
//------------------------------------------------------------------------------

