/*******************************************************************************
 * \file           EMrsftaSerCBfoncteur.H
 * Application  :  EMMA
 * Rôle         :  Declarations des objets callbacks (foncteur) cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaSerCBfoncteur_H
#define __EMrsftaSerCBfoncteur_H


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
inline IExecutable* creerEMrsftaSerCB_active(
        int  nIdClient,
        const char* gClient,
        const char* gMachine)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::activeCB,
        nIdClient,
        GetSmartTab(gClient),
        GetSmartTab(gMachine));
}

inline IExecutable* creerEMrsftaSerCB_deconnexion(
        EMstatut  statut,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::deconnexionCB,
        statut,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_desactive(
        int nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::desactiveCB,
        nIdClient);
}

// Methodes spécifique de reception

inline IExecutable* creerEMrsftaSerCB_cree_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::cree_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_supprime_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::supprime_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_consulte_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::consulte_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_liste_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::liste_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_abonne_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::abonne_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_connexion_msg_exploite(
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::connexion_msg_exploiteCB,
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_evenement_msg_exploite(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::evenement_msg_exploiteCB,
        GetSmartPtr(p_msg_exploite),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_cree_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::cree_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_consulte_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::consulte_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_liste_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::liste_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_abonne_msg_transmis(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::abonne_msg_transmisCB,
        GetSmartPtr(p_msg_transmis),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_connexion_msg_transmis(
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::connexion_msg_transmisCB,
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_cree_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::cree_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_modifie_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::modifie_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_supprime_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::supprime_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_consulte_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::consulte_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_liste_msg_preredige(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::liste_msg_preredigeCB,
        GetSmartPtr(p_msg_preredige),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_cree_cpladr(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::cree_cpladrCB,
        GetSmartPtr(p_cpladr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_modifie_cpladr(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::modifie_cpladrCB,
        GetSmartPtr(p_cpladr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_supprime_cpladr(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::supprime_cpladrCB,
        GetSmartPtr(p_cpladr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_abonne_cpladr(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::abonne_cpladrCB,
        GetSmartPtr(p_cpladr),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_consulte_msg_bals(
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::consulte_msg_balsCB,
        GetSmartPtr(p_msg_bals),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_abonne_msg_bals(
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::abonne_msg_balsCB,
        GetSmartPtr(p_msg_bals),
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_evenement_msg_bals(
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::evenement_msg_balsCB,
        GetSmartPtr(p_msg_bals),
        nEvent,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_abonne_msg_exploite(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_abonne_msg_exploiteCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_connexion_msg_exploite(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_connexion_msg_exploiteCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_abonne_msg_transmis(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_abonne_msg_transmisCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_connexion_msg_transmis(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_connexion_msg_transmisCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_abonne_cpladr(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_abonne_cpladrCB,
        nIdOp,
        nIdClient);
}

inline IExecutable* creerEMrsftaSerCB_fin_abonne_msg_bals(
        int  nIdOp,
        int  nIdClient)
{
	return creerFoncteurExecutable(
		EMrsftaSerCB::fin_abonne_msg_balsCB,
        nIdOp,
        nIdClient);
}

// Methodes spécifique de retour asynchrone
#endif

//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaSerCBfoncteur.H
//------------------------------------------------------------------------------

