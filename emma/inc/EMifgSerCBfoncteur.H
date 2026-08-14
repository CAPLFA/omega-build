/*******************************************************************************
 * \file           EMifgSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgSerCBfoncteur_H
#define __EMifgSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMinfoadData.H"
#include "EMinfoatisData.H"
#include "EMregulationData.H"
#include "EMinfosynthData.H"
#include "EMinfotexteData.H"
#include "EMcode_infraData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMifgSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMifgSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMifgSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMifgSerCB_cree_infoad(
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::cree_infoadCB,
        GetSmartPtr(p_infoad),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_infoad(
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_infoadCB,
        GetSmartPtr(p_infoad),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_infoatis(
        EMinfoatisData*  p_infoatis,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_infoatisCB,
        GetSmartPtr(p_infoatis),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_evenement_infoatis(
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::evenement_infoatisCB,
        GetSmartPtr(p_infoatis),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_consulte_regulation(
        EMregulationData*  p_regulation,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::consulte_regulationCB,
        GetSmartPtr(p_regulation),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_regulation(
        EMregulationData*  p_regulation,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_regulationCB,
        GetSmartPtr(p_regulation),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_evenement_regulation(
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::evenement_regulationCB,
        GetSmartPtr(p_regulation),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_cree_infosynth(
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::cree_infosynthCB,
        GetSmartPtr(p_infosynth),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_infosynth(
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_infosynthCB,
        GetSmartPtr(p_infosynth),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_cree_infotexte(
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::cree_infotexteCB,
        GetSmartPtr(p_infotexte),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_infotexte(
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_infotexteCB,
        GetSmartPtr(p_infotexte),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_modifie_code_infra(
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::modifie_code_infraCB,
        GetSmartPtr(p_code_infra),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_abonne_code_infra(
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::abonne_code_infraCB,
        GetSmartPtr(p_code_infra),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_infoad(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_infoadCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_infoatis(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_infoatisCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_regulation(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_regulationCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_infosynth(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_infosynthCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_infotexte(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_infotexteCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMifgSerCB_fin_abonne_code_infra(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMifgSerCB::fin_abonne_code_infraCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMifgSerCBfoncteur.H
//------------------------------------------------------------------------------

