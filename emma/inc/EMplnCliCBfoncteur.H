/*******************************************************************************
 * \file           EMplnCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnCliCBfoncteur_H
#define __EMplnCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMplnTYPES.H"
#include "EMplnData.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"
#include "EMstripData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMplnCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMplnCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMplnCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMplnCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMplnCliCB_notifie_contexte(
        EM_CTXT_ATM  eCtxt)
{
	return creerFoncteurExecutable(
		EMplnCliCB::notifie_contexteCB,
        eCtxt);
}

inline IExecutable* creerEMplnCliCB_notifie_pln(
        EMplnData*  pPln,
        EM_PLN_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMplnCliCB::notifie_plnCB,
        GetSmartPtr(pPln),
        eNotif,
        nIdAbo,
        nIdOpe);
}

inline IExecutable* creerEMplnCliCB_repond_reponse(
        EMreponseData*  pPln,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMplnCliCB::repond_reponseCB,
        GetSmartPtr(pPln),
        nIdent);
}

inline IExecutable* creerEMplnCliCB_repond_repStip(
        EMrepStipData*  pRepSTIP,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMplnCliCB::repond_repStipCB,
        GetSmartPtr(pRepSTIP),
        nIdent);
}

inline IExecutable* creerEMplnCliCB_repond_repMult(
        EMrepMultData*  pRepListe,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMplnCliCB::repond_repMultCB,
        GetSmartPtr(pRepListe),
        nIdent);
}

inline IExecutable* creerEMplnCliCB_signale_info(
        int  nErreur,
        char*  gMessage,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMplnCliCB::signale_infoCB,
        nErreur,
        GetSmartTab(gMessage),
        nIdent);
}

inline IExecutable* creerEMplnCliCB_fin_ini_abo_pln(
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMplnCliCB::fin_ini_abo_plnCB,
        nIdAbo);
}

inline IExecutable* creerEMplnCliCB_notifie_strip(
        EMstripData*  pStrip,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMplnCliCB::notifie_stripCB,
        GetSmartPtr(pStrip),
        nIdent);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMplnCliCBfoncteur.H
//------------------------------------------------------------------------------

