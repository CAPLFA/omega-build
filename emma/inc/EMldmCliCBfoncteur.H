/*******************************************************************************
 * \file           EMldmCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmCliCBfoncteur_H
#define __EMldmCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmvtData.H"
#include "EMmvtmsgData.H"
#include "EMmvtssrData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMldmCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMldmCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMldmCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMldmCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMldmCliCB_cree_mvt(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::cree_mvtCB,
        nResuSigma,
        GetSmartPtr(p_mvt),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_modifie_mvt(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::modifie_mvtCB,
        nResuSigma,
        GetSmartPtr(p_mvt),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_consulte_mvt(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::consulte_mvtCB,
        nResuSigma,
        GetSmartPtr(p_mvt),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_liste_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::liste_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_liste_mvt(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_liste_mvtCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_notifie_mvt(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::notifie_mvtCB,
        GetSmartPtr(p_mvt),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_ini_abo_mvt(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_ini_abo_mvtCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_abonne_mvt(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_abonne_mvtCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_signale_mvt(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::signale_mvtCB,
        GetSmartPtr(p_mvt),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_connexion_mvt(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::connexion_mvtCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_connexion_mvt(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_connexion_mvtCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_evenement_mvt(
        EMmvtData*  p_mvt,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::evenement_mvtCB,
        GetSmartPtr(p_mvt),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_modifie_mvtmsg(
        int  nResuSigma,
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::modifie_mvtmsgCB,
        nResuSigma,
        GetSmartPtr(p_mvtmsg),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_supprime_mvtmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::supprime_mvtmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_liste_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::liste_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_liste_mvtmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_liste_mvtmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_notifie_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::notifie_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_ini_abo_mvtmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_ini_abo_mvtmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_fin_abonne_mvtmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::fin_abonne_mvtmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_evenement_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::evenement_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMldmCliCB_evenement_mvtssr(
        EMmvtssrData*  p_mvtssr,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMldmCliCB::evenement_mvtssrCB,
        GetSmartPtr(p_mvtssr),
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMldmCliCBfoncteur.H
//------------------------------------------------------------------------------

