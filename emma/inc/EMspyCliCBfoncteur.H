/*******************************************************************************
 * \file           EMspyCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspyCliCBfoncteur_H
#define __EMspyCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"



//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMspyCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMspyCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMspyCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMspyCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMspyCliCBfoncteur.H
//------------------------------------------------------------------------------

