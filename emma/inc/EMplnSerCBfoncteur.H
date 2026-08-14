/*******************************************************************************
 * \file           EMplnSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnSerCBfoncteur_H
#define __EMplnSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMaboData.H"
#include "EMtransactionData.H"
#include "EMrequeteData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMplnSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMplnSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMplnSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMplnSerCB_abonne_pln(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::abonne_plnCB,
        GetSmartPtr(pAbo),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_consulte_transaction(
        EMtransactionData*  pTransac,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::consulte_transactionCB,
        GetSmartPtr(pTransac),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_consulte_requete(
        EMrequeteData*  pRequete,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::consulte_requeteCB,
        GetSmartPtr(pRequete),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_abonne_strip(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::abonne_stripCB,
        GetSmartPtr(pAbo),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_fin_abonne_pln(
        int  nIdAbonn,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::fin_abonne_plnCB,
        nIdAbonn,
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_modifie_abonne_pln(
        int  nIdAbonn,
        EMaboData*  pAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::modifie_abonne_plnCB,
        nIdAbonn,
        GetSmartPtr(pAbo),
        nIdClient);
}

inline IExecutable* creerEMplnSerCB_fin_abonne_strip(
        int  nIdAbonn,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMplnSerCB::fin_abonne_stripCB,
        nIdAbonn,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMplnSerCBfoncteur.H
//------------------------------------------------------------------------------

