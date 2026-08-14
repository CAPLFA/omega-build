/*******************************************************************************
 * \file           EMcdvSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvSerCBfoncteur_H
#define __EMcdvSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMvol_completData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMcdvSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMcdvSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMcdvSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMcdvSerCB_cree_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::cree_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcdvSerCB_modifie_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::modifie_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcdvSerCB_supprime_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::supprime_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcdvSerCB_consulte_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::consulte_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMcdvSerCB_liste_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMcdvSerCB::liste_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMcdvSerCBfoncteur.H
//------------------------------------------------------------------------------

