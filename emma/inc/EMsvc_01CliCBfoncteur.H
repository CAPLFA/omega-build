/*******************************************************************************
 * \file           EMsvc_01CliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_01.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMsvc_01CliCBfoncteur_H
#define __EMsvc_01CliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMsvc_01CliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMsvc_01CliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMsvc_01CliCB_envoi_objetChaine(
        EMobjetChaineData*  p_objetChaine)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::envoi_objetChaineCB,
        GetSmartPtr(p_objetChaine));
}

inline IExecutable* creerEMsvc_01CliCB_envoi_objetBase(
        EMobjetBaseData*  p_objetBase)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::envoi_objetBaseCB,
        GetSmartPtr(p_objetBase));
}

inline IExecutable* creerEMsvc_01CliCB_envoi_objetMultiple(
        EMobjetMultipleData*  p_objetMultiple)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::envoi_objetMultipleCB,
        GetSmartPtr(p_objetMultiple));
}

inline IExecutable* creerEMsvc_01CliCB_envoi_objetCompose(
        EMobjetComposeData*  p_objetCompose)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::envoi_objetComposeCB,
        GetSmartPtr(p_objetCompose));
}

inline IExecutable* creerEMsvc_01CliCB_reponse_objetChaine(
        EMobjetChaineData*  p_objetChaine,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::reponse_objetChaineCB,
        GetSmartPtr(p_objetChaine),
        nIdOpe);
}

inline IExecutable* creerEMsvc_01CliCB_reponse_objetBase(
        EMobjetBaseData*  p_objetBase,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::reponse_objetBaseCB,
        GetSmartPtr(p_objetBase),
        nIdOpe);
}

inline IExecutable* creerEMsvc_01CliCB_reponse_objetMultiple(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::reponse_objetMultipleCB,
        GetSmartPtr(p_objetMultiple),
        nIdOpe);
}

inline IExecutable* creerEMsvc_01CliCB_reponse_objetCompose(
        EMobjetComposeData*  p_objetCompose,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMsvc_01CliCB::reponse_objetComposeCB,
        GetSmartPtr(p_objetCompose),
        nIdOpe);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_01CliCBfoncteur.H
//------------------------------------------------------------------------------

