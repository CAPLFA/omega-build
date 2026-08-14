/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_obj_appli_h
#define CVS_id_LGE_obj_appli_h
static const char *CVS_LGE_obj_appli_h __attribute__ ((unused)) = "@(#) $Id: LGE_obj_appli.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_obj_appli
**
** Description :  definition des structures liees a l'objet appli
**	
** Utilisation : 
**	
** Implementation : 
** definition de la structure de l'objet appli
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
#ifndef LGE_obj_appli
#define LGE_obj_appli
/*-------------------------  FICHIERS D'INCLUSION  ---------------------------*/
#include "XGD_type_communs.h"
#include "XGD_type_appli.h"



/*-------------------------  DECLARATIONS EXTERNES  --------------------------*/



/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/



/* definition de la structure de l'objet APPLI */

typedef struct {
XD_nom_appli  	nom_appli  ;     /* nom de l'application          */
XD_dat_aammjjhhmm	date;        /* date derniere mise a jour     */
XD_etat         etat;            /* etat                          */
XD_libelle_etat	libelle;         /* libelle associe a l'etat      */

} LGT_appli;



#endif
