/*******************************************************************************
 * \file           EMspySerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspySerCBfoncteur_H
#define __EMspySerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMnivTraceData.H"
#include "EMetatFctData.H"
#include "EMconfspyData.H"
#include "EMtraceData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMspySerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMspySerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMspySerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMspySerCB_setNiveauTrace(
        EMnivTraceData*  pNiveauTrace,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::setNiveauTraceCB,
        GetSmartPtr(pNiveauTrace),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_setEtatFonction(
        EMetatFctData*  pEtatfct,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::setEtatFonctionCB,
        GetSmartPtr(pEtatfct),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_setConfig(
        EMconfspyData*  pConfig,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::setConfigCB,
        GetSmartPtr(pConfig),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_traceEtat(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::traceEtatCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_traceConfig(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::traceConfigCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_traceTimer(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::traceTimerCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_traceFD(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::traceFDCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMspySerCB_trace(
        EMtraceData*  pTrace,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMspySerCB::traceCB,
        GetSmartPtr(pTrace),
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMspySerCBfoncteur.H
//------------------------------------------------------------------------------

