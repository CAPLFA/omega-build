/*******************************************************************************
 * \file           EMpisteCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteCliCBfoncteur_H
#define __EMpisteCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMpisteData.H"
#include "EMpisteTYPES.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMpisteCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMpisteCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMpisteCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMpisteCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMpisteCliCB_notifie_piste(
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMpisteCliCB::notifie_pisteCB,
        GetSmartPtr(pPiste),
        eNotif,
        nIdAbo);
}

inline IExecutable* creerEMpisteCliCB_repond_piste(
        EMpisteData*  pPiste,
        int  nIdRequete)
{
	return creerFoncteurExecutable(
		EMpisteCliCB::repond_pisteCB,
        GetSmartPtr(pPiste),
        nIdRequete);
}

inline IExecutable* creerEMpisteCliCB_signale_info(
        int  nStatus,
        char*  gMessage,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpisteCliCB::signale_infoCB,
        nStatus,
        GetSmartTab(gMessage),
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMpisteCliCBfoncteur.H
//------------------------------------------------------------------------------

