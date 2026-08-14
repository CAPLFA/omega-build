/*******************************************************************************
 * \file           EMtdvSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvSerCBfoncteur_H
#define __EMtdvSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMtdvSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMtdvSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMtdvSerCB_cree_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::cree_volCB,
        GetSmartPtr(p_vol),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_modifie_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::modifie_volCB,
        GetSmartPtr(p_vol),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_consulte_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::consulte_volCB,
        GetSmartPtr(p_vol),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_liste_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::liste_volCB,
        GetSmartPtr(p_vol),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_abonne_vol(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::abonne_volCB,
        GetSmartPtr(p_vol),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_connexion_vol(
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::connexion_volCB,
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_evenement_vol(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::evenement_volCB,
        GetSmartPtr(p_vol),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_cree_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::cree_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_modifie_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::modifie_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_consulte_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::consulte_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_liste_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::liste_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_abonne_vlr(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::abonne_vlrCB,
        GetSmartPtr(p_vlr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_evenement_vlr(
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::evenement_vlrCB,
        GetSmartPtr(p_vlr),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_cree_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::cree_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_modifie_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::modifie_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_consulte_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::consulte_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_abonne_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::abonne_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_evenement_volalarme(
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::evenement_volalarmeCB,
        GetSmartPtr(p_volalarme),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_cree_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::cree_volmsgCB,
        GetSmartPtr(p_volmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_supprime_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::supprime_volmsgCB,
        GetSmartPtr(p_volmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_liste_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::liste_volmsgCB,
        GetSmartPtr(p_volmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_abonne_volmsg(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::abonne_volmsgCB,
        GetSmartPtr(p_volmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_connexion_strip_vol(
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::connexion_strip_volCB,
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_abonne_vol(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_abonne_volCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_connexion_vol(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_connexion_volCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_abonne_vlr(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_abonne_vlrCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_abonne_volalarme(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_abonne_volalarmeCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_abonne_volmsg(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_abonne_volmsgCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMtdvSerCB_fin_connexion_strip_vol(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMtdvSerCB::fin_connexion_strip_volCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMtdvSerCBfoncteur.H
//------------------------------------------------------------------------------

