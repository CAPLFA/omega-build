/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_obj_se_h
#define CVS_id_LGE_obj_se_h
static const char *CVS_LGE_obj_se_h __attribute__ ((unused)) = "@(#) $Id: LGE_obj_se.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_obj_se
**
** Description :  definition des structures liees a l'objet se
**	
** Utilisation : 
**	
** Implementation : 
** definition de la structure de l'objet se
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : LM     Date : 30/09/97 Version : 1.0
**    Origine :
** MODIFICATIONS :
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
*******************************************************************************/
/*  */
#ifndef LGE_obj_se
#define LGE_obj_se
/*-------------------------  FICHIERS D'INCLUSION  ---------------------------*/
#include "XGD_type_communs.h"
#include "XGD_type_appli.h"
#include "XGD_type_se.h"



/*-------------------------  DECLARATIONS EXTERNES  --------------------------*/



/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/



/* definition de la structure de l'objet SE */

typedef struct {
XD_nom_se	      nom_se;     /* nom du sous-ensemble */
XD_type_se        type;       /* type : service ou quelconque */
XD_etat   	      etat;       /* etat */
XD_libelle_etat	  libelle;    /* libelle de l'etat */
XD_dat_aammjjhhmm date;       /* date derniere modif */
XD_nom_appli	  nom_appli;  /* nom de l'application */
XD_etat           etat_appli; /* etat de l'application */
} LGT_se;


#endif
