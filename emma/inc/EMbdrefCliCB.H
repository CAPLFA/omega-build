/*******************************************************************************
 * \file           EMbdrefCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefCliCB_H
#define __EMbdrefCliCB_H


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

class EMbdrefCliCB {

public:

    // Methodes communes
    static  void  activeCB(
        EMstatut  statut,
        const char*  gServeur,
        const char*  gMachine
        );
    static  void  deconnexionCB(
        EMstatut  statut
        );


    // Methodes de reception des messages provenant du serveur
    static  void  cree_aeronefCB(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp
        );
    static  void  modifie_aeronefCB(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp
        );
    static  void  supprime_aeronefCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_aeronefCB(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp
        );
    static  void  liste_aeronefCB(
        EMaeronefData*  p_aeronef,
        int  nIdOp
        );
    static  void  fin_liste_aeronefCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_dvmCB(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp
        );
    static  void  modifie_dvmCB(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp
        );
    static  void  supprime_dvmCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_dvmCB(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp
        );
    static  void  liste_dvmCB(
        EMdvmData*  p_dvm,
        int  nIdOp
        );
    static  void  fin_liste_dvmCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_prerouteCB(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp
        );
    static  void  modifie_prerouteCB(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp
        );
    static  void  supprime_prerouteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_prerouteCB(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp
        );
    static  void  liste_prerouteCB(
        EMprerouteData*  p_preroute,
        int  nIdOp
        );
    static  void  fin_liste_prerouteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_typaeroCB(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp
        );
    static  void  modifie_typaeroCB(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp
        );
    static  void  supprime_typaeroCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_typaeroCB(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp
        );
    static  void  liste_typaeroCB(
        EMtypaeroData*  p_typaero,
        int  nIdOp
        );
    static  void  fin_liste_typaeroCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_pointCB(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp
        );
    static  void  modifie_pointCB(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp
        );
    static  void  supprime_pointCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_pointCB(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp
        );
    static  void  liste_pointCB(
        EMpointData*  p_point,
        int  nIdOp
        );
    static  void  fin_liste_pointCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_rt_stripCB(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp
        );
    static  void  modifie_rt_stripCB(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp
        );
    static  void  supprime_rt_stripCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_rt_stripCB(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp
        );
    static  void  liste_rt_stripCB(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp
        );
    static  void  fin_liste_rt_stripCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_aerodromeCB(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp
        );
    static  void  modifie_aerodromeCB(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp
        );
    static  void  supprime_aerodromeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_aerodromeCB(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp
        );
    static  void  liste_aerodromeCB(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp
        );
    static  void  fin_liste_aerodromeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_point_trkCB(
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp
        );
    static  void  liste_point_trkCB(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp
        );
    static  void  fin_liste_point_trkCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_route_trkCB(
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp
        );
    static  void  liste_route_trkCB(
        EMroute_trkData*  p_route_trk,
        int  nIdOp
        );
    static  void  fin_liste_route_trkCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_route_trkCB(
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_route_trkCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_route_trkCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones











































private:

    // Mesures de securite :
    EMbdrefCliCB();
    virtual ~EMbdrefCliCB();
    EMbdrefCliCB(const EMbdrefCliCB&);
    EMbdrefCliCB& operator = (const EMbdrefCliCB&);
    int operator == (const EMbdrefCliCB&);
    int operator != (const EMbdrefCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefCliCB.H
//------------------------------------------------------------------------------

