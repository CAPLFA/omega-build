/*******************************************************************************
 * \file           EMgmsCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsCliCBfoncteur_H
#define __EMgmsCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmessageData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMgmsCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMgmsCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMgmsCliCB_cree_message(
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::cree_messageCB,
        nResuSigma,
        GetSmartPtr(p_message),
        nIdOp);
}

inline IExecutable* creerEMgmsCliCB_modifie_message(
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::modifie_messageCB,
        nResuSigma,
        GetSmartPtr(p_message),
        nIdOp);
}

inline IExecutable* creerEMgmsCliCB_notifie_message(
        EMmessageData*  p_message,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::notifie_messageCB,
        GetSmartPtr(p_message),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMgmsCliCB_fin_ini_abo_message(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::fin_ini_abo_messageCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMgmsCliCB_fin_abonne_message(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMgmsCliCB::fin_abonne_messageCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMgmsCliCBfoncteur.H
//------------------------------------------------------------------------------

