/*******************************************************************************
 * \file           EMbdrefCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefCliCBfoncteur_H
#define __EMbdrefCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMaeronefData.H"
#include "EMdvmData.H"
#include "EMprerouteData.H"
#include "EMtypaeroData.H"
#include "EMpointData.H"
#include "EMrt_stripData.H"
#include "EMaerodromeData.H"
#include "EMpoint_trkData.H"
#include "EMroute_trkData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMbdrefCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMbdrefCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMbdrefCliCB_cree_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_aeronefCB,
        nResuSigma,
        GetSmartPtr(p_aeronef),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_aeronefCB,
        nResuSigma,
        GetSmartPtr(p_aeronef),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_aeronef(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_aeronefCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_aeronef(
        int  nResuSigma,
        EMaeronefData*  p_aeronef,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_aeronefCB,
        nResuSigma,
        GetSmartPtr(p_aeronef),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_aeronef(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_aeronefCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_dvmCB,
        nResuSigma,
        GetSmartPtr(p_dvm),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_dvmCB,
        nResuSigma,
        GetSmartPtr(p_dvm),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_dvm(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_dvmCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_dvm(
        int  nResuSigma,
        EMdvmData*  p_dvm,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_dvmCB,
        nResuSigma,
        GetSmartPtr(p_dvm),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_dvm(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_dvmCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_prerouteCB,
        nResuSigma,
        GetSmartPtr(p_preroute),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_prerouteCB,
        nResuSigma,
        GetSmartPtr(p_preroute),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_preroute(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_prerouteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_preroute(
        int  nResuSigma,
        EMprerouteData*  p_preroute,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_prerouteCB,
        nResuSigma,
        GetSmartPtr(p_preroute),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_preroute(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_prerouteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_typaeroCB,
        nResuSigma,
        GetSmartPtr(p_typaero),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_typaeroCB,
        nResuSigma,
        GetSmartPtr(p_typaero),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_typaero(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_typaeroCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_typaero(
        int  nResuSigma,
        EMtypaeroData*  p_typaero,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_typaeroCB,
        nResuSigma,
        GetSmartPtr(p_typaero),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_typaero(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_typaeroCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_pointCB,
        nResuSigma,
        GetSmartPtr(p_point),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_pointCB,
        nResuSigma,
        GetSmartPtr(p_point),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_point(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_pointCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_point(
        int  nResuSigma,
        EMpointData*  p_point,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_pointCB,
        nResuSigma,
        GetSmartPtr(p_point),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_point(
        EMpointData*  p_point,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_pointCB,
        GetSmartPtr(p_point),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_point(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_pointCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_rt_stripCB,
        nResuSigma,
        GetSmartPtr(p_rt_strip),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_rt_stripCB,
        nResuSigma,
        GetSmartPtr(p_rt_strip),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_rt_strip(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_rt_stripCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_rt_strip(
        int  nResuSigma,
        EMrt_stripData*  p_rt_strip,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_rt_stripCB,
        nResuSigma,
        GetSmartPtr(p_rt_strip),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_rt_strip(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_rt_stripCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_cree_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::cree_aerodromeCB,
        nResuSigma,
        GetSmartPtr(p_aerodrome),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_modifie_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::modifie_aerodromeCB,
        nResuSigma,
        GetSmartPtr(p_aerodrome),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_supprime_aerodrome(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::supprime_aerodromeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_aerodrome(
        int  nResuSigma,
        EMaerodromeData*  p_aerodrome,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_aerodromeCB,
        nResuSigma,
        GetSmartPtr(p_aerodrome),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_aerodrome(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_aerodromeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_point_trk(
        int  nResuSigma,
        EMpoint_trkData*  p_point_trk,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_point_trkCB,
        nResuSigma,
        GetSmartPtr(p_point_trk),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_point_trk(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_point_trkCB,
        GetSmartPtr(p_point_trk),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_point_trk(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_point_trkCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_consulte_route_trk(
        int  nResuSigma,
        EMroute_trkData*  p_route_trk,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::consulte_route_trkCB,
        nResuSigma,
        GetSmartPtr(p_route_trk),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_liste_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::liste_route_trkCB,
        GetSmartPtr(p_route_trk),
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_liste_route_trk(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_liste_route_trkCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_notifie_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::notifie_route_trkCB,
        GetSmartPtr(p_route_trk),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_ini_abo_route_trk(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_ini_abo_route_trkCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMbdrefCliCB_fin_abonne_route_trk(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMbdrefCliCB::fin_abonne_route_trkCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefCliCBfoncteur.H
//------------------------------------------------------------------------------

