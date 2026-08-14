/*******************************************************************************
 * \file           EMldmSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmSerCBfoncteur_H
#define __EMldmSerCBfoncteur_H


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
inline IExecutable* creerEMldmSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMldmSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMldmSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMldmSerCB_cree_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::cree_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_modifie_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::modifie_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_consulte_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::consulte_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_liste_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::liste_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_abonne_mvt(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::abonne_mvtCB,
        GetSmartPtr(p_mvt),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_connexion_mvt(
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::connexion_mvtCB,
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_evenement_mvt(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::evenement_mvtCB,
        GetSmartPtr(p_mvt),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_modifie_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::modifie_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_supprime_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::supprime_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_liste_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::liste_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_abonne_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::abonne_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_evenement_mvtmsg(
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::evenement_mvtmsgCB,
        GetSmartPtr(p_mvtmsg),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_evenement_mvtssr(
        EMmvtssrData*  p_mvtssr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::evenement_mvtssrCB,
        GetSmartPtr(p_mvtssr),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_fin_abonne_mvt(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::fin_abonne_mvtCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_fin_connexion_mvt(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::fin_connexion_mvtCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMldmSerCB_fin_abonne_mvtmsg(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMldmSerCB::fin_abonne_mvtmsgCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMldmSerCBfoncteur.H
//------------------------------------------------------------------------------

