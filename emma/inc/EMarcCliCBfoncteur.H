/*******************************************************************************
 * \file           EMarcCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcCliCBfoncteur_H
#define __EMarcCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMarchiveData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMarcCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMarcCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMarcCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMarcCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMarcCliCB_cree_archive(
        int  nResuSigma,
        EMarchiveData*  p_archive,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::cree_archiveCB,
        nResuSigma,
        GetSmartPtr(p_archive),
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_supprime_archive(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::supprime_archiveCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_liste_archive(
        EMarchiveData*  p_archive,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::liste_archiveCB,
        GetSmartPtr(p_archive),
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_fin_liste_archive(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::fin_liste_archiveCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_notifie_archive(
        EMarchiveData*  p_archive,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::notifie_archiveCB,
        GetSmartPtr(p_archive),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_fin_ini_abo_archive(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::fin_ini_abo_archiveCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_fin_abonne_archive(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::fin_abonne_archiveCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMarcCliCB_evenement_archive(
        EMarchiveData*  p_archive,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMarcCliCB::evenement_archiveCB,
        GetSmartPtr(p_archive),
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMarcCliCBfoncteur.H
//------------------------------------------------------------------------------

