/*******************************************************************************
 * \file           EMmtoSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoSerCBfoncteur_H
#define __EMmtoSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmtopubData.H"
#include "EMmtoqnhData.H"
#include "EMmtolocData.H"
#include "EMmtozoneData.H"
#include "EMqiraData.H"
#include "EMrepiraData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMmtoSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMmtoSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMmtoSerCB_consulte_mtopub(
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::consulte_mtopubCB,
        GetSmartPtr(p_mtopub),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_abonne_mtopub(
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::abonne_mtopubCB,
        GetSmartPtr(p_mtopub),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_evenement_mtopub(
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::evenement_mtopubCB,
        GetSmartPtr(p_mtopub),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_abonne_mtoqnh(
        EMmtoqnhData*  p_mtoqnh,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::abonne_mtoqnhCB,
        GetSmartPtr(p_mtoqnh),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_cree_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::cree_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_consulte_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::consulte_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_abonne_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::abonne_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_evenement_mtoloc(
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::evenement_mtolocCB,
        GetSmartPtr(p_mtoloc),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_cree_mtozone(
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::cree_mtozoneCB,
        GetSmartPtr(p_mtozone),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_liste_mtozone(
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::liste_mtozoneCB,
        GetSmartPtr(p_mtozone),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_evenement_mtozone(
        EMmtozoneData*  p_mtozone,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::evenement_mtozoneCB,
        GetSmartPtr(p_mtozone),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_cree_qira(
        EMqiraData*  p_qira,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::cree_qiraCB,
        GetSmartPtr(p_qira),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_supprime_repira(
        EMrepiraData*  p_repira,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::supprime_repiraCB,
        GetSmartPtr(p_repira),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_abonne_repira(
        EMrepiraData*  p_repira,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::abonne_repiraCB,
        GetSmartPtr(p_repira),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_fin_abonne_mtopub(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::fin_abonne_mtopubCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_fin_abonne_mtoqnh(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::fin_abonne_mtoqnhCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_fin_abonne_mtoloc(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::fin_abonne_mtolocCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMmtoSerCB_fin_abonne_repira(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMmtoSerCB::fin_abonne_repiraCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMmtoSerCBfoncteur.H
//------------------------------------------------------------------------------

