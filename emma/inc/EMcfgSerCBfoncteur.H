/*******************************************************************************
 * \file           EMcfgSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgSerCBfoncteur_H
#define __EMcfgSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMcfgSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMcfgSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMcfgSerCB_cree_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::cree_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_modifie_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::modifie_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_supprime_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::supprime_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_consulte_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::consulte_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_liste_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::liste_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_abonne_config(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::abonne_configCB,
        GetSmartPtr(p_config),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_evenement_config(
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::evenement_configCB,
        GetSmartPtr(p_config),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_cree_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::cree_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_modifie_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::modifie_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_consulte_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::consulte_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_liste_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::liste_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_abonne_poslog(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::abonne_poslogCB,
        GetSmartPtr(p_poslog),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_fin_abonne_config(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::fin_abonne_configCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcfgSerCB_fin_abonne_poslog(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcfgSerCB::fin_abonne_poslogCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMcfgSerCBfoncteur.H
//------------------------------------------------------------------------------

