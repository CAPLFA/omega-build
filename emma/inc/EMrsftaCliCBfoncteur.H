/*******************************************************************************
 * \file           EMrsftaCliCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaCliCBfoncteur_H
#define __EMrsftaCliCBfoncteur_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "Executable.H"
#include "SmartPtr.H"

#include "EMmsg_exploiteData.H"
#include "EMmsg_transmisData.H"
#include "EMmsg_preredigeData.H"
#include "EMcpladrData.H"
#include "EMmsg_balsData.H"


//-------------------- Declaration des foncteurs ------------------------

// Methodes communes
inline IExecutable* creerEMrsftaCliCB_active(
        EMstatut statut,
        const char* gServeur,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::activeCB,
        statut,
        GetSmartTab(gServeur),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMrsftaCliCB_deconnexion(
        EMstatut statut)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::deconnexionCB,
        statut);
}

// Methodes spécifique

inline IExecutable* creerEMrsftaCliCB_cree_msg_exploite(
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::cree_msg_exploiteCB,
        nResuSigma,
        GetSmartPtr(p_msg_exploite),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_supprime_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::supprime_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_consulte_msg_exploite(
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::consulte_msg_exploiteCB,
        nResuSigma,
        GetSmartPtr(p_msg_exploite),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_liste_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::liste_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_liste_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_liste_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_notifie_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::notifie_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_ini_abo_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_ini_abo_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_abonne_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_abonne_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_signale_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::signale_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_connexion_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::connexion_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_connexion_msg_exploite(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_connexion_msg_exploiteCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_evenement_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::evenement_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_cree_msg_transmis(
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::cree_msg_transmisCB,
        nResuSigma,
        GetSmartPtr(p_msg_transmis),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_consulte_msg_transmis(
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::consulte_msg_transmisCB,
        nResuSigma,
        GetSmartPtr(p_msg_transmis),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_liste_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::liste_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_liste_msg_transmis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_liste_msg_transmisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_notifie_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::notifie_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_ini_abo_msg_transmis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_ini_abo_msg_transmisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_abonne_msg_transmis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_abonne_msg_transmisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_signale_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::signale_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_connexion_msg_transmis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::connexion_msg_transmisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_connexion_msg_transmis(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_connexion_msg_transmisCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_cree_msg_preredige(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::cree_msg_preredigeCB,
        nResuSigma,
        GetSmartPtr(p_msg_preredige),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_modifie_msg_preredige(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::modifie_msg_preredigeCB,
        nResuSigma,
        GetSmartPtr(p_msg_preredige),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_supprime_msg_preredige(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::supprime_msg_preredigeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_consulte_msg_preredige(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::consulte_msg_preredigeCB,
        nResuSigma,
        GetSmartPtr(p_msg_preredige),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_liste_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::liste_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_liste_msg_preredige(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_liste_msg_preredigeCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_cree_cpladr(
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::cree_cpladrCB,
        nResuSigma,
        GetSmartPtr(p_cpladr),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_modifie_cpladr(
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::modifie_cpladrCB,
        nResuSigma,
        GetSmartPtr(p_cpladr),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_supprime_cpladr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::supprime_cpladrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_notifie_cpladr(
        EMcpladrData*  p_cpladr,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::notifie_cpladrCB,
        GetSmartPtr(p_cpladr),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_ini_abo_cpladr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_ini_abo_cpladrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_abonne_cpladr(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_abonne_cpladrCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_consulte_msg_bals(
        int  nResuSigma,
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::consulte_msg_balsCB,
        nResuSigma,
        GetSmartPtr(p_msg_bals),
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_notifie_msg_bals(
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::notifie_msg_balsCB,
        GetSmartPtr(p_msg_bals),
        nEvent,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_ini_abo_msg_bals(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_ini_abo_msg_balsCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_fin_abonne_msg_bals(
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::fin_abonne_msg_balsCB,
        nResuSigma,
        nIdOp);
}

inline IExecutable* creerEMrsftaCliCB_evenement_msg_bals(
        EMmsg_balsData*  p_msg_bals,
        int  nResuSigma,
        int  nIdOp)
{
	return creerFoncteurExecutable(
		EMrsftaCliCB::evenement_msg_balsCB,
        GetSmartPtr(p_msg_bals),
        nResuSigma,
        nIdOp);
}

#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaCliCBfoncteur.H
//------------------------------------------------------------------------------

