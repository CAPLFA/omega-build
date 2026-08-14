/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGT_message_se_h
#define CVS_id_XGT_message_se_h
static const char *CVS_XGT_message_se_h __attribute__ ((unused)) = "@(#) $Id: XGT_message_se.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGT_message_se	
**
** Description : Definition des structures des messages traites par STAS
**               concernant les sous-ensembles
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
#ifndef XGT_message_se
#define XGT_message_se
#include "XGD_type_communs.h"
#include "XGD_type_se.h"
#include "XGT_message_communs.h"
/********************** ATTENTION ****************************/
/* les messages ayant la meme structure qu'un objet          */
/* sont cites dans ce fichier sous forme de commentaires     */
/* ainsi que les messages ne transportant aucune donnee      */
/*************************************************************/

/*****************************/
/* Messages traites par STAS */
/*    SOUS-ENSEMBLE          */
/*****************************/

/*******************************************/
/*    SOUS-ENSEMBLE                        */
/*******************************************/

/* structure generique pour sous-ensemble */
typedef struct {
XD_nom_se nom_se;
} XM_message_se;

typedef struct {
XD_nom_se nom_se[NB_MAX_SE_CALC];
} XM_message_liste_se;


/* lancement et arret de sous-ensemble*/
typedef XM_message_se XM_stas_lance_se ;
typedef XM_message_se XM_stas_arret_se ;


/* demande de fin d'abonnement */
typedef XM_fin_abon XM_se_fin_abon ;

/* reponse a une demande d'abonnement */
typedef XM_rep_abon XM_se_abon_ok ;

/* reponse a une demande liste se */
typedef XM_rep_liste XM_stas_consult ;


/* messages utilisant la structure de l'objet SE */
/*
STAS_SE_ABON_CREAT
STAS_SE_AVIS_CREAT
STAS_SE_AVIS_MODIF
STAS_SE_AVIS_SUPPRES
STAS_SE_HISTO_REPI
STAS_SE_HISTO_DEM
STAS_SE_CONFIG_RQCL
STAS_SE_CONFIG_REPI
*/

/* messages sans donnees */
/*
STAS_SE_FIN_ABON_OK
STAS_LANCE_SE_OK
STAS_ARRET_SE_OK
*/


#endif
