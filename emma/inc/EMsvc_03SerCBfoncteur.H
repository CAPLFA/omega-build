/*******************************************************************************
 * \file           EMsvc_03SerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_03.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_03SerCBfoncteur_H
#define __EMsvc_03SerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMsvc_03SerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMsvc_03SerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMsvc_03SerCB_requete_objetChaine(
        EMobjetChaineData*  p_objetChaine,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::requete_objetChaineCB,
        GetSmartPtr(p_objetChaine),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_requete_objetBase(
        EMobjetBaseData*  p_objetBase,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::requete_objetBaseCB,
        GetSmartPtr(p_objetBase),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_requete_objetMultiple(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::requete_objetMultipleCB,
        GetSmartPtr(p_objetMultiple),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_requete_objetCompose(
        EMobjetComposeData*  p_objetCompose,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::requete_objetComposeCB,
        GetSmartPtr(p_objetCompose),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_envoi_objetChaine(
        EMobjetChaineData*  p_objetChaine,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::envoi_objetChaineCB,
        GetSmartPtr(p_objetChaine),
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_envoi_objetBase(
        EMobjetBaseData*  p_objetBase,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::envoi_objetBaseCB,
        GetSmartPtr(p_objetBase),
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_envoi_objetMultiple(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::envoi_objetMultipleCB,
        GetSmartPtr(p_objetMultiple),
        nIdClient);
}

inline IExecutable* creerEMsvc_03SerCB_envoi_objetCompose(
        EMobjetComposeData*  p_objetCompose,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMsvc_03SerCB::envoi_objetComposeCB,
        GetSmartPtr(p_objetCompose),
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_03SerCBfoncteur.H
//------------------------------------------------------------------------------

