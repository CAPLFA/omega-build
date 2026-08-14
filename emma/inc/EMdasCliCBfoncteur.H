/*******************************************************************************
 * \file           EMdasCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasCliCBfoncteur_H
#define __EMdasCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMdasData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMdasCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMdasCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMdasCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMdasCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMdasCliCB_notifie_das(
        EMdasData*  pDas,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMdasCliCB::notifie_dasCB,
        GetSmartPtr(pDas),
        nIdAbo);
}

inline IExecutable* creerEMdasCliCB_signale_info(
        int  nErreur,
        char*  gMessage,
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMdasCliCB::signale_infoCB,
        nErreur,
        GetSmartTab(gMessage),
        nIdAbo);
}

inline IExecutable* creerEMdasCliCB_fin_ini_abo_das(
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMdasCliCB::fin_ini_abo_dasCB,
        nIdAbo);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMdasCliCBfoncteur.H
//------------------------------------------------------------------------------

