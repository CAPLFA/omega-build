/*******************************************************************************
 * \file           EMbdrefSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefSerCBfoncteur_H
#define __EMbdrefSerCBfoncteur_H


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
inline IExecutable* creerEMbdrefSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMbdrefSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMbdrefSerCB_cree_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_aeronef(
        EMaeronefData*  p_aeronef,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_aeronefCB,
        GetSmartPtr(p_aeronef),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_dvm(
        EMdvmData*  p_dvm,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_dvmCB,
        GetSmartPtr(p_dvm),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_preroute(
        EMprerouteData*  p_preroute,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_prerouteCB,
        GetSmartPtr(p_preroute),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_typaero(
        EMtypaeroData*  p_typaero,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_typaeroCB,
        GetSmartPtr(p_typaero),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_point(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_pointCB,
        GetSmartPtr(p_point),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_point(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_pointCB,
        GetSmartPtr(p_point),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_point(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_pointCB,
        GetSmartPtr(p_point),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_point(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_pointCB,
        GetSmartPtr(p_point),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_point(
        EMpointData*  p_point,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_pointCB,
        GetSmartPtr(p_point),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_rt_strip(
        EMrt_stripData*  p_rt_strip,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_rt_stripCB,
        GetSmartPtr(p_rt_strip),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_cree_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::cree_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_modifie_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::modifie_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_supprime_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::supprime_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_aerodrome(
        EMaerodromeData*  p_aerodrome,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_aerodromeCB,
        GetSmartPtr(p_aerodrome),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_point_trk(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_point_trkCB,
        GetSmartPtr(p_point_trk),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_point_trk(
        EMpoint_trkData*  p_point_trk,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_point_trkCB,
        GetSmartPtr(p_point_trk),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_consulte_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::consulte_route_trkCB,
        GetSmartPtr(p_route_trk),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_liste_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::liste_route_trkCB,
        GetSmartPtr(p_route_trk),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_abonne_route_trk(
        EMroute_trkData*  p_route_trk,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::abonne_route_trkCB,
        GetSmartPtr(p_route_trk),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMbdrefSerCB_fin_abonne_route_trk(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMbdrefSerCB::fin_abonne_route_trkCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefSerCBfoncteur.H
//------------------------------------------------------------------------------

