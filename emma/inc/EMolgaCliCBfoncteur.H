/*******************************************************************************
 * \file           EMolgaCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaCliCBfoncteur_H
#define __EMolgaCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMolgaCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMolgaCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMolgaCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMolgaCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMolgaCliCB_notifie_confOpe(
        EMconfOpeData*  pConfOpe,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMolgaCliCB::notifie_confOpeCB,
        GetSmartPtr(pConfOpe),
        nIdAbo);
}

inline IExecutable* creerEMolgaCliCB_notifie_nivTrans(
        EMnivTransData*  pNivTrans,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMolgaCliCB::notifie_nivTransCB,
        GetSmartPtr(pNivTrans),
        nIdAbo);
}

inline IExecutable* creerEMolgaCliCB_signale_info(
        int  nStatus,
        char*  gMessage,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMolgaCliCB::signale_infoCB,
        nStatus,
        GetSmartTab(gMessage),
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMolgaCliCBfoncteur.H
//------------------------------------------------------------------------------

