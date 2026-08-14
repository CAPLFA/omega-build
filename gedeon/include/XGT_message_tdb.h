/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGT_message_tdb_h
#define CVS_id_XGT_message_tdb_h
static const char *CVS_XGT_message_tdb_h __attribute__ ((unused)) = "@(#) $Id: XGT_message_tdb.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGT_message_tdb	
**
** Description : Definition des structures des messages traites par STU 
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
#ifndef XGT_message_tdb
#define XGT_message_tdb
#include "XGD_type_communs.h"
#include "XGD_type_tdb.h"
#include "XGT_message_communs.h"

/********************** ATTENTION ****************************/
/* les messages ayant la meme structure qu'un objet          */
/* sont cites dans ce fichier sous forme de commentaires     */
/* ainsi que les messages ne transportant aucune donnee      */
/*************************************************************/

/****************************/
/* Messages traites par STU */
/****************************/

/* message STU_MAJ_OP : mise a jour de l'operation en cours */
typedef struct { 
XD_libelle_operation operation;
} XM_stu_maj_op;


/* message STU_ERREUR_TDB : mise a jour de la derniere erreur */
typedef struct {
XD_libelle_erreur erreur;
} XM_stu_erreur_tdb;

/* messages STU_TDB_ABON_OK et STU_TDB_FIN_ABON */
/* reponse a une demande d'abonnement et demande de fin d'abonnement */
typedef XM_rep_abon XM_tdb_abon_ok;
typedef XM_fin_abon XM_tdb_fin_abon;

/* message ayant la meme structure que l'objet TDB */
/*
STU_TDB_ABON_CREAT
STU_TDB_AVIS_MODIF
STU_TDB_AVIS_CREAT
*/
/* message sans donnees */
/* message STU_TDB_FIN_ABON_OK */

#endif
