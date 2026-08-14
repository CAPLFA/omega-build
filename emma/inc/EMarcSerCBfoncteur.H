/*******************************************************************************
 * \file           EMarcSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcSerCBfoncteur_H
#define __EMarcSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMarchiveData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMarcSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMarcSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMarcSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMarcSerCB_cree_archive(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::cree_archiveCB,
        GetSmartPtr(p_archive),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_supprime_archive(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::supprime_archiveCB,
        GetSmartPtr(p_archive),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_liste_archive(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::liste_archiveCB,
        GetSmartPtr(p_archive),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_abonne_archive(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::abonne_archiveCB,
        GetSmartPtr(p_archive),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_evenement_archive(
        EMarchiveData*  p_archive,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::evenement_archiveCB,
        GetSmartPtr(p_archive),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMarcSerCB_fin_abonne_archive(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMarcSerCB::fin_abonne_archiveCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMarcSerCBfoncteur.H
//------------------------------------------------------------------------------

