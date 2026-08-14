/*******************************************************************************
 * \file           EMpisteSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteSerCBfoncteur_H
#define __EMpisteSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"



//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMpisteSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMpisteSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMpisteSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMpisteSerCB_abonne_piste(
        char*  gTerrain,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::abonne_pisteCB,
        GetSmartTab(gTerrain),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpisteSerCB_consulte_piste(
        char*  gTerrain,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::consulte_pisteCB,
        GetSmartTab(gTerrain),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpisteSerCB_fin_abonne_piste(
        int  nIdAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpisteSerCB::fin_abonne_pisteCB,
        nIdAbo,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMpisteSerCBfoncteur.H
//------------------------------------------------------------------------------

