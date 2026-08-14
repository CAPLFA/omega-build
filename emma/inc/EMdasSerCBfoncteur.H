/*******************************************************************************
 * \file           EMdasSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasSerCBfoncteur_H
#define __EMdasSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMaboData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMdasSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMdasSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMdasSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMdasSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMdasSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMdasSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMdasSerCB_abonne_das(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMdasSerCB::abonne_dasCB,
        GetSmartPtr(pAbo),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMdasSerCB_fin_abonne_das(
        int  nIdAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMdasSerCB::fin_abonne_dasCB,
        nIdAbo,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMdasSerCBfoncteur.H
//------------------------------------------------------------------------------

