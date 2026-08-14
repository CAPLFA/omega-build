/*******************************************************************************
 * \file           EMpdvSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvSerCBfoncteur_H
#define __EMpdvSerCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMddvData.H"
#include "EMdvrData.H"
#include "EMddvmsgData.H"
#include "EMddv_infotactData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMpdvSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMpdvSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMpdvSerCB_cree_ddv(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::cree_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_modifie_ddv(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::modifie_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_consulte_ddv(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::consulte_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_liste_ddv(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::liste_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_abonne_ddv(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::abonne_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_evenement_ddv(
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::evenement_ddvCB,
        GetSmartPtr(p_ddv),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_liste_dvr(
        EMdvrData*  p_dvr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::liste_dvrCB,
        GetSmartPtr(p_dvr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_cree_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::cree_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_supprime_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::supprime_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_liste_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::liste_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_abonne_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::abonne_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_evenement_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::evenement_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_consulte_ddv_infotact(
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::consulte_ddv_infotactCB,
        GetSmartPtr(p_ddv_infotact),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_fin_abonne_ddv(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::fin_abonne_ddvCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMpdvSerCB_fin_abonne_ddvmsg(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMpdvSerCB::fin_abonne_ddvmsgCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMpdvSerCBfoncteur.H
//------------------------------------------------------------------------------

