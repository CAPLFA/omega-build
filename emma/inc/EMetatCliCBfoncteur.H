/*******************************************************************************
 * \file           EMetatCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatCliCBfoncteur_H
#define __EMetatCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMetatData.H"
#include "EMetatTYPES.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMetatCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMetatCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMetatCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMetatCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMetatCliCB_notifie_etat(
        EMetatData*  pEtat,
        EM_ETAT_TYPE_NOTIF  eNotif,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMetatCliCB::notifie_etatCB,
        GetSmartPtr(pEtat),
        eNotif,
        nIdAbo);
}

inline IExecutable* creerEMetatCliCB_repond_etat(
        EMetatData*  pEtat,
        int  nIdRequete)
{
	return creerFoncteurExecutable(
		EMetatCliCB::repond_etatCB,
        GetSmartPtr(pEtat),
        nIdRequete);
}

inline IExecutable* creerEMetatCliCB_signale_info(
        int  nStatus,
        char*  gMessage,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMetatCliCB::signale_infoCB,
        nStatus,
        GetSmartTab(gMessage),
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMetatCliCBfoncteur.H
//------------------------------------------------------------------------------

