/*******************************************************************************
 * \file           EMolgaSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaSerCBfoncteur_H
#define __EMolgaSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMolgaSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMolgaSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMolgaSerCB_abonne_confOpe(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::abonne_confOpeCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_abonne_nivTrans(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::abonne_nivTransCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_modifie_confOpe(
        EMconfOpeData*  pConfOpe,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::modifie_confOpeCB,
        GetSmartPtr(pConfOpe),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_modifie_nivTrans(
        EMnivTransData*  pNivTrans,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::modifie_nivTransCB,
        GetSmartPtr(pNivTrans),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_fin_abonne_confOpe(
        int  nIdAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::fin_abonne_confOpeCB,
        nIdAbo,
        nIdClient);
}

inline IExecutable* creerEMolgaSerCB_fin_abonne_nivTrans(
        int  nIdAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMolgaSerCB::fin_abonne_nivTransCB,
        nIdAbo,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMolgaSerCBfoncteur.H
//------------------------------------------------------------------------------

