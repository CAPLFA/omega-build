/*******************************************************************************
 * \file           EMmtoCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoCliCBfoncteur_H
#define __EMmtoCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmtopubData.H"
#include "EMmtoqnhData.H"
#include "EMmtolocData.H"
#include "EMmtozoneData.H"
#include "EMqiraData.H"
#include "EMrepiraData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMmtoCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMmtoCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMmtoCliCB_consulte_mtopub(
        int  nResuSigma,
        EMmtopubData*  p_mtopub,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::consulte_mtopubCB,
        nResuSigma,
        GetSmartPtr(p_mtopub),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_notifie_mtopub(
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::notifie_mtopubCB,
        GetSmartPtr(p_mtopub),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_ini_abo_mtopub(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_ini_abo_mtopubCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_abonne_mtopub(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_abonne_mtopubCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_evenement_mtopub(
        EMmtopubData*  p_mtopub,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::evenement_mtopubCB,
        GetSmartPtr(p_mtopub),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_notifie_mtoqnh(
        EMmtoqnhData*  p_mtoqnh,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::notifie_mtoqnhCB,
        GetSmartPtr(p_mtoqnh),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_ini_abo_mtoqnh(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_ini_abo_mtoqnhCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_abonne_mtoqnh(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_abonne_mtoqnhCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_cree_mtoloc(
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::cree_mtolocCB,
        nResuSigma,
        GetSmartPtr(p_mtoloc),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_consulte_mtoloc(
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::consulte_mtolocCB,
        nResuSigma,
        GetSmartPtr(p_mtoloc),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_notifie_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::notifie_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_ini_abo_mtoloc(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_ini_abo_mtolocCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_abonne_mtoloc(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_abonne_mtolocCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_evenement_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::evenement_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_cree_mtozone(
        int  nResuSigma,
        EMmtozoneData*  p_mtozone,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::cree_mtozoneCB,
        nResuSigma,
        GetSmartPtr(p_mtozone),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_liste_mtozone(
        EMmtozoneData*  p_mtozone,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::liste_mtozoneCB,
        GetSmartPtr(p_mtozone),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_liste_mtozone(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_liste_mtozoneCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_evenement_mtozone(
        EMmtozoneData*  p_mtozone,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::evenement_mtozoneCB,
        GetSmartPtr(p_mtozone),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_cree_qira(
        int  nResuSigma,
        EMqiraData*  p_qira,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::cree_qiraCB,
        nResuSigma,
        GetSmartPtr(p_qira),
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_supprime_repira(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::supprime_repiraCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_notifie_repira(
        EMrepiraData*  p_repira,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::notifie_repiraCB,
        GetSmartPtr(p_repira),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_ini_abo_repira(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_ini_abo_repiraCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMmtoCliCB_fin_abonne_repira(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMmtoCliCB::fin_abonne_repiraCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMmtoCliCBfoncteur.H
//------------------------------------------------------------------------------

