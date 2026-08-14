/*******************************************************************************
 * \file           EMgmsSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsSerCBfoncteur_H
#define __EMgmsSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmessageData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMgmsSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMgmsSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMgmsSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMgmsSerCB_cree_message(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::cree_messageCB,
        GetSmartPtr(p_message),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMgmsSerCB_modifie_message(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::modifie_messageCB,
        GetSmartPtr(p_message),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMgmsSerCB_abonne_message(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::abonne_messageCB,
        GetSmartPtr(p_message),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMgmsSerCB_fin_abonne_message(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMgmsSerCB::fin_abonne_messageCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMgmsSerCBfoncteur.H
//------------------------------------------------------------------------------

