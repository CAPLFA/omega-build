/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGT_message_communs_h
#define CVS_id_XGT_message_communs_h
static const char *CVS_XGT_message_communs_h __attribute__ ((unused)) = "@(#) $Id: XGT_message_communs.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGT_message_communs	
**
** Description : Definition des structures des messages 
**               utilises par ls plupart des composant de GEDEON
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
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
*******************************************************************************/
/*  */
#ifndef XGT_message_communs
#define XGT_message_communs
#include "XCD_type_communs.h" /* types communs a GEDEON et SIGMA */
#include "XGD_type_communs.h" /* types communs dans GEDEON */
#include "XGD_type_tdb.h"

/****************************/
/*  Structures generiques    */
/****************************/

/* reponse a une consultation par liste */
typedef struct {
    int nb_objets;
    XD_nom_fichier nom_fichier;
} XM_rep_liste;


/* reponse a une demande d'abonnement */
/* XCM_rep_abon est un type commun a GEDEON et SIGMA */
typedef  XCM_rep_abon XM_rep_abon  ;

/* Message de fin d'abonnement */
typedef struct {
	int id_abon; /* identifiant d'abonnement */
	int objet;   /* numero d'objet           */
} XM_fin_abon;

typedef struct {
XD_libelle_erreur liberreur; /* compte rendu explicatif d'une erreur */
} XM_msg_err;

/*****************************/
/* Messages traites par SPVT */
/*****************************/

/* message de synchronisation des serveurs GEDEON */
typedef struct XM_spvt_proc_demon_pret
{
	int id_proc_demon;
	}XM_spvt_proc_demon_pret;


/* messages sans donnees 
SPVT_DEMON_GO
*/


/****************************/
/* Messages traites par STE */
/****************************/
/* ERREUR_SERVEUR et FATALE_SERVEUR                   */
/* pas de type : il s'agit d'une chaine de caracteres */

#endif
