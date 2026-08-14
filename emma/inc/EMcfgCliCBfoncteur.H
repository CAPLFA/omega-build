/*******************************************************************************
 * \file           EMcfgCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgCliCBfoncteur_H
#define __EMcfgCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMcfgCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMcfgCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMcfgCliCB_cree_config(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::cree_configCB,
        nResuSigma,
        GetSmartPtr(p_config),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_modifie_config(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::modifie_configCB,
        nResuSigma,
        GetSmartPtr(p_config),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_supprime_config(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::supprime_configCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_consulte_config(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::consulte_configCB,
        nResuSigma,
        GetSmartPtr(p_config),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_liste_config(
        EMconfigData*  p_config,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::liste_configCB,
        GetSmartPtr(p_config),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_liste_config(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_liste_configCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_notifie_config(
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::notifie_configCB,
        GetSmartPtr(p_config),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_ini_abo_config(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_ini_abo_configCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_abonne_config(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_abonne_configCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_evenement_config(
        EMconfigData*  p_config,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::evenement_configCB,
        GetSmartPtr(p_config),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_cree_poslog(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::cree_poslogCB,
        nResuSigma,
        GetSmartPtr(p_poslog),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_modifie_poslog(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::modifie_poslogCB,
        nResuSigma,
        GetSmartPtr(p_poslog),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_consulte_poslog(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::consulte_poslogCB,
        nResuSigma,
        GetSmartPtr(p_poslog),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_liste_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::liste_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_liste_poslog(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_liste_poslogCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_notifie_poslog(
        EMposlogData*  p_poslog,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::notifie_poslogCB,
        GetSmartPtr(p_poslog),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_ini_abo_poslog(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_ini_abo_poslogCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcfgCliCB_fin_abonne_poslog(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcfgCliCB::fin_abonne_poslogCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMcfgCliCBfoncteur.H
//------------------------------------------------------------------------------

