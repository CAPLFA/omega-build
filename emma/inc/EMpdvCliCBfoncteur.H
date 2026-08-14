/*******************************************************************************
 * \file           EMpdvCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvCliCBfoncteur_H
#define __EMpdvCliCBfoncteur_H


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
inline IExecutable* creerEMpdvCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMpdvCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMpdvCliCB_cree_ddv(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::cree_ddvCB,
        nResuSigma,
        GetSmartPtr(p_ddv),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_modifie_ddv(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::modifie_ddvCB,
        nResuSigma,
        GetSmartPtr(p_ddv),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_consulte_ddv(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::consulte_ddvCB,
        nResuSigma,
        GetSmartPtr(p_ddv),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_liste_ddv(
        EMddvData*  p_ddv,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::liste_ddvCB,
        GetSmartPtr(p_ddv),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_liste_ddv(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_liste_ddvCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_notifie_ddv(
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::notifie_ddvCB,
        GetSmartPtr(p_ddv),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_ini_abo_ddv(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_ini_abo_ddvCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_abonne_ddv(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_abonne_ddvCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_evenement_ddv(
        EMddvData*  p_ddv,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::evenement_ddvCB,
        GetSmartPtr(p_ddv),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_liste_dvr(
        EMdvrData*  p_dvr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::liste_dvrCB,
        GetSmartPtr(p_dvr),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_liste_dvr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_liste_dvrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_cree_ddvmsg(
        int  nResuSigma,
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::cree_ddvmsgCB,
        nResuSigma,
        GetSmartPtr(p_ddvmsg),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_supprime_ddvmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::supprime_ddvmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_liste_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::liste_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_liste_ddvmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_liste_ddvmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_notifie_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::notifie_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_ini_abo_ddvmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_ini_abo_ddvmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_fin_abonne_ddvmsg(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::fin_abonne_ddvmsgCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_evenement_ddvmsg(
        EMddvmsgData*  p_ddvmsg,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::evenement_ddvmsgCB,
        GetSmartPtr(p_ddvmsg),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMpdvCliCB_consulte_ddv_infotact(
        int  nResuSigma,
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMpdvCliCB::consulte_ddv_infotactCB,
        nResuSigma,
        GetSmartPtr(p_ddv_infotact),
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMpdvCliCBfoncteur.H
//------------------------------------------------------------------------------

