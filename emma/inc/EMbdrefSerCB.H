/*******************************************************************************
 * \file           EMbdrefSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefSerCB_H
#define __EMbdrefSerCB_H


//-------------------- Includes ----------------------------------------

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


//-------------------- Declaration de la classe ------------------------

class EMbdrefSerCB {

public:

    // Methodes communes
    static void activeCB(
        int  nIdClient,
        const char*  gClient,
        const char*  gMachine
        );
    static void deconnexionCB(
        EMstatut  nStatut,
        int  nIdClient
        );
    static void desactiveCB(
        int  nIdClient
        );


    // Methodes de reception des messages provenant du client
    static  void  cree_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_pointCB(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_pointCB(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_pointCB(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_pointCB(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_pointCB(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_point_trkCB(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_point_trkCB(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_route_trkCB(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_route_trkCB(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_route_trkCB(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_route_trkCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones





















































private:

    // Mesures de securite :
    EMbdrefSerCB();
    virtual ~EMbdrefSerCB();
    EMbdrefSerCB(const EMbdrefSerCB&);
    EMbdrefSerCB& operator = (const EMbdrefSerCB&);
    int operator == (const EMbdrefSerCB&);
    int operator != (const EMbdrefSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefSerCB.H
//------------------------------------------------------------------------------

