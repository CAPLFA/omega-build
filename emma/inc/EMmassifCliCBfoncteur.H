/*******************************************************************************
 * \file           EMmassifCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifCliCBfoncteur_H
#define __EMmassifCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMvolappData.H"
#include "EMmassifTYPES.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMmassifCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMmassifCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMmassifCliCB_notifie_vol(
        EMvolappData*  pVol,
        EM_MASSIF_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::notifie_volCB,
        GetSmartPtr(pVol),
        eNotif,
        nIdAbo,
        nIdOpe);
}

inline IExecutable* creerEMmassifCliCB_repond_reponse(
        EMreponseData*  pPln,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::repond_reponseCB,
        GetSmartPtr(pPln),
        nIdent);
}

inline IExecutable* creerEMmassifCliCB_repond_repStip(
        EMrepStipData*  pRepSTIP,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::repond_repStipCB,
        GetSmartPtr(pRepSTIP),
        nIdent);
}

inline IExecutable* creerEMmassifCliCB_repond_repMult(
        EMrepMultData*  pRepListe,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::repond_repMultCB,
        GetSmartPtr(pRepListe),
        nIdent);
}

inline IExecutable* creerEMmassifCliCB_signale_info(
        int  nErreur,
        char*  gMessage,
        int  nIdent)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::signale_infoCB,
        nErreur,
        GetSmartTab(gMessage),
        nIdent);
}

inline IExecutable* creerEMmassifCliCB_fin_ini_abo_vol(
        int  nIdAbo)
{
	return creerFoncteurExecutable(
		EMmassifCliCB::fin_ini_abo_volCB,
        nIdAbo);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMmassifCliCBfoncteur.H
//------------------------------------------------------------------------------

