/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGT_message_process_h
#define CVS_id_XGT_message_process_h
static const char *CVS_XGT_message_process_h __attribute__ ((unused)) = "@(#) $Id: XGT_message_process.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGT_message_process	
**
** Description : Definition des structures des messages traites par STP 
**	
** Utilisation :  
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :        Date :          Version :
**		LM			29/09/97			1.0
**    Origine : GEDEON
** MODIFICATIONS :
**    Auteur : PDG    Date : 06/01/00 Version : 3.0
**    Origine : 99DG02
**    Impact : Ajout de STP_PROCESS_MAJ_ETATACQ_OK
**
**    Auteur : EC    Date : 26/01/00 Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de XM_stp_adresse_process
**
*******************************************************************************/
/*  */
#ifndef XGT_message_process
#define XGT_message_process

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#include "XGD_type_communs.h"
#include "XGD_type_process.h"
#include "XGT_message_communs.h"
#include "XGT_message_se.h"

/********************** ATTENTION ****************************/
/* les messages ayant la meme structure qu'un objet          */
/* sont cites dans ce fichier sous forme de commentaires     */
/* ainsi que les messages ne transportant aucune donnee      */
/*************************************************************/

/****************************/
/* Messages traites par STP */
/****************************/

/* structure generique */
typedef struct {
XD_nom_process nom_process;
} XM_message_process;

/* Lancement d'un process */
typedef XM_message_process XM_stp_lance_process ;

/* Arret d'un process */
typedef XM_message_process XM_stp_arret_process ;


/* Lancement des process d'un sous-ensemble et acquittement de lancement */
typedef XM_message_se XM_stp_lance_proc_se  ;
typedef XM_message_se XM_stp_lance_proc_se_ok  ;

/* Arret des process d'un sous-ensemble  et acquittement d'arret */
typedef XM_message_se XM_stp_arret_proc_se     ;
typedef XM_message_se XM_stp_arret_proc_se_ok  ;


/* configuration d'un process */
typedef XM_message_process XM_stp_configure_process ;

/* deconfiguration d'un process */
typedef XM_message_process XM_stp_deconfigure_process ;


/* reconfiguration technique */
typedef XM_message_liste_se XM_stp_chg_conf_tech ;

/* mise a jour d'etat de process */
typedef struct {
XD_nom_process nom_process;
XD_etat        etat ;
XD_libelle_etat libelle;
} XM_stp_maj_etat;

typedef struct {
XD_nom_process nom_process;
XD_etat        etat ;
XD_libelle_etat libelle;
} XM_stp_maj_etat_mini;

/* mise a jour d'etat d'acquittement d'alarme de process */
typedef struct {
XD_nom_process nom_process;
XD_etatacq etatacq;
} XM_stp_maj_etatacq;

/* mise a jour d'etat d'acquittement d'alarme de process */
typedef struct {
    XD_nom_process nom_process;
    XD_adr_datagramme adresse_process;
} XM_stp_adresse_process;

/* demande de fin d'abonnement */
typedef XM_fin_abon XM_process_fin_abon;

/* reponse a une demande d'abonnement */
typedef XM_rep_abon XM_process_abon_ok ;

/* arret d'un processus indispensable signale a STAS */
typedef XM_message_se XM_stp_arret_ind_se ;


typedef XM_rep_liste XM_stp_histo_repi;
typedef XM_rep_liste XM_stp_consult;

/* messages utilisant la structure de l'objet process */
/* 
STP_PROCESS_ABON_CREAT
STP_PROCESS_AVIS_CREAT
STP_PROCESS_AVIS_MODIF
STP_PROCESS_AVIS_SUPPRES
STP_PROCESS_CONFIG_RQCL
STP_HISTO_DEM
STP_PROCESS_CONFIG_REPI
STP_HISTO_REPI
*/

/* messages sans donnees */
/*
STP_LANCE_PROCESS_OK
STP_ARRET_PROCESS_OK
STP_PROCESS_MAJ_ETAT_OK
STP_PROCESS_MAJ_ETATACQ_OK
STP_PROCESS_FIN_ABON_OK
STP_CHG_CONF_TECH

*/

#endif
