/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_obj_process_h
#define CVS_id_LGE_obj_process_h
static const char *CVS_LGE_obj_process_h __attribute__ ((unused)) = "@(#) $Id: LGE_obj_process.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_obj_process
**
** Description :  definition des structures liees a l'objet process
**	
** Utilisation : 
**	
** Implementation : 
** definition de la structure de l'objet process
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : LM     Date : 30/09/97 Version : 1.0
**    Origine :
** MODIFICATIONS :
**    Auteur : PDG    Date : 03/01/00 Version : 3.0
**    Origine : 99DG02
**    Impact : Ajout de XD_etatacq
**    Auteur : PDG    Date : 19/01/00 Version : 3.0
**    Origine : 99DG03
**    Impact : Ajout de XD_groupes
**
**    Auteur : SBA    Date : 02/02/01/00 Version : 3.0
**    Origine : 99DG05
**    Impact : Ajout de XD_autres_param
**
**    Auteur : EC    Date : 26/01/00 Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de XD_priorite    
**                      XD_niveau_trace
**                      XD_param       
**
**    Auteur : EC    Date : 26/01/00 Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de champs : nom_exe, user_process, relance_auto, 
**             script_init , script_nett.
**
**
*******************************************************************************/

#ifndef LGE_obj_process
#define LGE_obj_process
/*-------------------------  FICHIERS D'INCLUSION  ---------------------------*/
#include "XGD_type_communs.h"
#include "XGD_type_se.h"
#include "XGD_type_process.h"



/*-------------------------  DECLARATIONS EXTERNES  --------------------------*/



/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/



/* definition de la structure de l'objet PROCESS */

typedef struct {
    XD_nom_process		nom_process;   /* nom du process                */
    XD_type_process		type;          /* type : permanent, reactivable */
    XD_dat_aammjjhhmm	date;          /* date derniere mise a jour     */
    XD_etat         	etat;          /* etat                          */
    XD_libelle_etat		libelle;       /* libelle associe a l'etat      */
    XD_nom_se           nom_se;            /* nom du sous-ensemble          */
    XD_etat             etat_se;           /* etat du sous-ensemble         */
    XD_etat_config		etat_config ;  /* configuration operationnelle  */
    XD_display          display;	       /* display			  */
    XD_ligne            tty;
    XD_path             repertoire;     /* repertoire d'execution du proc */
    XD_etatacq          etatacq;        /* etat d'acquittement d'alarme  */
    XD_groupes          groupes;	    /* attribut de regroupement      */
    XD_priorite         priorite;
    XD_niveau_trace     niveau_trace;
	XD_autres_param     autres_param;   /* autres paramètres du process  */
    XD_nom_exec         nom_exe;
    XD_user             user_process;
    XD_relance_auto     relance_auto;
    XD_nom_script       script_init;
    XD_nom_script       script_nett;
    XD_mode_com         com;


} LGT_process;

#endif
