/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGD_type_communs_h
#define CVS_id_XGD_type_communs_h
static const char *CVS_XGD_type_communs_h __attribute__ ((unused)) = "@(#) $Id: XGD_type_communs.h 210 2015-04-10 06:49:44Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGD_type_communs
**
** Description :  types elementaires communs a GEDEON
**	
** Utilisation : 
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :  LM    Date : 30/09/97 Version :1.0
**    Origine :
** MODIFICATIONS :
**    Auteur :  CBR   Date : 07/05/15 Version : 5.1.0.0
**    Origine : 14/MGED/0006-i2
**    Impact : Taille XD_user -> 10+1
*******************************************************************************/
/*  */



#ifndef  XGD_type_communs
#define XGD_type_communs
#include "BD_dat.h"


#define DIR_CONF "/config/config_tech"

/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/

typedef BD_dat_aammjjhhmm XD_dat_aammjjhhmm;    /* date  */
typedef BD_dat_aammjj     XD_dat_aammjj;        /* date  */
typedef char XD_nom_fichier[50];       /* mom complet d'un fichier */
typedef char XD_etat[2];               /* etat se process ou appli         */
typedef char XD_libelle_etat[41];      /* libelle etat se process ou appli        */
typedef char XD_nom_script[100];       /* chemin d'acces + nom script */
typedef char XD_code_appli[2+1];		/* code appli 					*/
typedef char XD_repertoire[30+1];
typedef char XD_uid_gid[3+1+3+1];	/* uid + ':' + gid + '\0' */
typedef char XD_user[10+1];			/* user d'un process */

#endif
