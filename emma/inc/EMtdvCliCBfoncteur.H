/*******************************************************************************
 * \file           EMtdvCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvCliCBfoncteur_H
#define __EMtdvCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"
#include "EMstrip_volData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMtdvCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMtdvCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMtdvCliCB_cree_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::cree_volCB,
        nResuSigma,
        GetSmartPtr(p_vol),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_modifie_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::modifie_volCB,
        nResuSigma,
        GetSmartPtr(p_vol),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_consulte_vol(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::consulte_volCB,
        nResuSigma,
        GetSmartPtr(p_vol),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_liste_vol(
        EMvolData*  p_vol,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::liste_volCB,
        GetSmartPtr(p_vol),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_liste_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_liste_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_notifie_vol(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::notifie_volCB,
        GetSmartPtr(p_vol),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_ini_abo_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_ini_abo_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_abonne_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_abonne_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_signale_vol(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::signale_volCB,
        GetSmartPtr(p_vol),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_connexion_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::connexion_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_connexion_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_connexion_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_evenement_vol(
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::evenement_volCB,
        GetSmartPtr(p_vol),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_cree_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::cree_vlrCB,
        nResuSigma,
        GetSmartPtr(p_vlr),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_modifie_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::modifie_vlrCB,
        nResuSigma,
        GetSmartPtr(p_vlr),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_consulte_vlr(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::consulte_vlrCB,
        nResuSigma,
        GetSmartPtr(p_vlr),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_liste_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::liste_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_liste_vlr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_liste_vlrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_notifie_vlr(
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::notifie_vlrCB,
        GetSmartPtr(p_vlr),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_ini_abo_vlr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_ini_abo_vlrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_abonne_vlr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_abonne_vlrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_evenement_vlr(
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::evenement_vlrCB,
        GetSmartPtr(p_vlr),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_cree_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::cree_volalarmeCB,
        nResuSigma,
        GetSmartPtr(p_volalarme),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_modifie_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::modifie_volalarmeCB,
        nResuSigma,
        GetSmartPtr(p_volalarme),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_consulte_volalarme(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::consulte_volalarmeCB,
        nResuSigma,
        GetSmartPtr(p_volalarme),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_notifie_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::notifie_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_ini_abo_volalarme(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_ini_abo_volalarmeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_abonne_volalarme(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_abonne_volalarmeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_evenement_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::evenement_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_cree_volmsg(
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::cree_volmsgCB,
        nResuSigma,
        GetSmartPtr(p_volmsg),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_supprime_volmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::supprime_volmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_liste_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::liste_volmsgCB,
        GetSmartPtr(p_volmsg),
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_liste_volmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_liste_volmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_notifie_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::notifie_volmsgCB,
        GetSmartPtr(p_volmsg),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_ini_abo_volmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_ini_abo_volmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_abonne_volmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_abonne_volmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_signale_strip_vol(
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::signale_strip_volCB,
        GetSmartPtr(p_strip_vol),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_connexion_strip_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::connexion_strip_volCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMtdvCliCB_fin_connexion_strip_vol(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMtdvCliCB::fin_connexion_strip_volCB,
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMtdvCliCBfoncteur.H
//------------------------------------------------------------------------------

