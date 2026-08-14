/*******************************************************************************
 * \file           EMmassifSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifSerCBfoncteur_H
#define __EMmassifSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMaboData.H"
#include "EMmassifactionData.H"
#include "EMrequeteData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMmassifSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMmassifSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMmassifSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMmassifSerCB_abonne_vol(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::abonne_volCB,
        GetSmartPtr(pAbo),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmassifSerCB_consulte_transaction(
        EMmassifactionData*  pTransac,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::consulte_transactionCB,
        GetSmartPtr(pTransac),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmassifSerCB_consulte_requete(
        EMrequeteData*  pRequete,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::consulte_requeteCB,
        GetSmartPtr(pRequete),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmassifSerCB_modifie_abonne_vol(
        int  nIdAbonn,
        EMaboData*  pAbo,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::modifie_abonne_volCB,
        nIdAbonn,
        GetSmartPtr(pAbo),
        nIdClient);
}

inline IExecutable* creerEMmassifSerCB_fin_abonne_vol(
        int  nIdAbonn,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmassifSerCB::fin_abonne_volCB,
        nIdAbonn,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMmassifSerCBfoncteur.H
//------------------------------------------------------------------------------

