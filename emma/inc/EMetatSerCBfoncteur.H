/*******************************************************************************
 * \file           EMetatSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatSerCBfoncteur_H
#define __EMetatSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"



//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMetatSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMetatSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMetatSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMetatSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMetatSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMetatSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMetatSerCB_abonne_etat(
        char*  gSysteme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMetatSerCB::abonne_etatCB,
        GetSmartTab(gSysteme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMetatSerCB_consulte_etat(
        char*  gSysteme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMetatSerCB::consulte_etatCB,
        GetSmartTab(gSysteme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMetatSerCB_fin_abonne_etat(
        int  nIdAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMetatSerCB::fin_abonne_etatCB,
        nIdAbo,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMetatSerCBfoncteur.H
//------------------------------------------------------------------------------

