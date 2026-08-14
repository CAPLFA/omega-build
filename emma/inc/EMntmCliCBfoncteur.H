/*******************************************************************************
 * \file           EMntmCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmCliCBfoncteur_H
#define __EMntmCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMnotamData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMntmCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMntmCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMntmCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMntmCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMntmCliCB_consulte_notam(
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::consulte_notamCB,
        nResuSigma,
        GetSmartPtr(p_notam),
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_liste_notam(
        EMnotamData*  p_notam,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::liste_notamCB,
        GetSmartPtr(p_notam),
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_fin_liste_notam(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::fin_liste_notamCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_notifie_notam(
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::notifie_notamCB,
        GetSmartPtr(p_notam),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_fin_ini_abo_notam(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::fin_ini_abo_notamCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_fin_abonne_notam(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::fin_abonne_notamCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMntmCliCB_evenement_notam(
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMntmCliCB::evenement_notamCB,
        GetSmartPtr(p_notam),
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMntmCliCBfoncteur.H
//------------------------------------------------------------------------------

