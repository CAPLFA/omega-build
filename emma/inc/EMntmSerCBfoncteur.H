/*******************************************************************************
 * \file           EMntmSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmSerCBfoncteur_H
#define __EMntmSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMnotamData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMntmSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMntmSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMntmSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMntmSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMntmSerCB_consulte_notam(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::consulte_notamCB,
        GetSmartPtr(p_notam),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMntmSerCB_liste_notam(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::liste_notamCB,
        GetSmartPtr(p_notam),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMntmSerCB_abonne_notam(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::abonne_notamCB,
        GetSmartPtr(p_notam),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMntmSerCB_evenement_notam(
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::evenement_notamCB,
        GetSmartPtr(p_notam),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMntmSerCB_fin_abonne_notam(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMntmSerCB::fin_abonne_notamCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMntmSerCBfoncteur.H
//------------------------------------------------------------------------------

