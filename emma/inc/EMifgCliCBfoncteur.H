/*******************************************************************************
 * \file           EMifgCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgCliCBfoncteur_H
#define __EMifgCliCBfoncteur_H


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
inline IExecutable* creerEMifgCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMifgCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMifgCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMifgCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMifgCliCB_cree_infoad(
        int  nResuSigma,
        EMinfoadData*  p_infoad,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::cree_infoadCB,
        nResuSigma,
        GetSmartPtr(p_infoad),
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_infoad(
        EMinfoadData*  p_infoad,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_infoadCB,
        GetSmartPtr(p_infoad),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_infoad(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_infoadCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_infoad(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_infoadCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_infoatis(
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_infoatisCB,
        GetSmartPtr(p_infoatis),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_infoatis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_infoatisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_infoatis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_infoatisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_evenement_infoatis(
        EMinfoatisData*  p_infoatis,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::evenement_infoatisCB,
        GetSmartPtr(p_infoatis),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_consulte_regulation(
        int  nResuSigma,
        EMregulationData*  p_regulation,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::consulte_regulationCB,
        nResuSigma,
        GetSmartPtr(p_regulation),
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_regulation(
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_regulationCB,
        GetSmartPtr(p_regulation),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_regulation(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_regulationCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_regulation(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_regulationCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_evenement_regulation(
        EMregulationData*  p_regulation,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::evenement_regulationCB,
        GetSmartPtr(p_regulation),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_cree_infosynth(
        int  nResuSigma,
        EMinfosynthData*  p_infosynth,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::cree_infosynthCB,
        nResuSigma,
        GetSmartPtr(p_infosynth),
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_infosynth(
        EMinfosynthData*  p_infosynth,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_infosynthCB,
        GetSmartPtr(p_infosynth),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_infosynth(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_infosynthCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_infosynth(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_infosynthCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_cree_infotexte(
        int  nResuSigma,
        EMinfotexteData*  p_infotexte,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::cree_infotexteCB,
        nResuSigma,
        GetSmartPtr(p_infotexte),
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_infotexte(
        EMinfotexteData*  p_infotexte,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_infotexteCB,
        GetSmartPtr(p_infotexte),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_infotexte(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_infotexteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_infotexte(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_infotexteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_modifie_code_infra(
        int  nResuSigma,
        EMcode_infraData*  p_code_infra,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::modifie_code_infraCB,
        nResuSigma,
        GetSmartPtr(p_code_infra),
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_notifie_code_infra(
        EMcode_infraData*  p_code_infra,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::notifie_code_infraCB,
        GetSmartPtr(p_code_infra),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_ini_abo_code_infra(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_ini_abo_code_infraCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMifgCliCB_fin_abonne_code_infra(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMifgCliCB::fin_abonne_code_infraCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMifgCliCBfoncteur.H
//------------------------------------------------------------------------------

