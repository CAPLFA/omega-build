/*******************************************************************************
 * \file           EMcdvCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvCliCBfoncteur_H
#define __EMcdvCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMvol_completData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMcdvCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMcdvCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMcdvCliCB_cree_vol_complet(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::cree_vol_completCB,
        nResuSigma,
        GetSmartPtr(p_vol_complet),
        nIdOp);
}

inline IExecutable* creerEMcdvCliCB_modifie_vol_complet(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::modifie_vol_completCB,
        nResuSigma,
        GetSmartPtr(p_vol_complet),
        nIdOp);
}

inline IExecutable* creerEMcdvCliCB_supprime_vol_complet(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::supprime_vol_completCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMcdvCliCB_consulte_vol_complet(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::consulte_vol_completCB,
        nResuSigma,
        GetSmartPtr(p_vol_complet),
        nIdOp);
}

inline IExecutable* creerEMcdvCliCB_liste_vol_complet(
        EMvol_completData*  p_vol_complet,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::liste_vol_completCB,
        GetSmartPtr(p_vol_complet),
        nIdOp);
}

inline IExecutable* creerEMcdvCliCB_fin_liste_vol_complet(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMcdvCliCB::fin_liste_vol_completCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMcdvCliCBfoncteur.H
//------------------------------------------------------------------------------

