/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGT_message_appli_h
#define CVS_id_XGT_message_appli_h
static const char *CVS_XGT_message_appli_h __attribute__ ((unused)) = "@(#) $Id: XGT_message_appli.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGT_message_appli	
**
** Description : Definition des structures des messages  traites par STAS
**               concernant les applications
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
#ifndef XGT_message_appli
#define XGT_message_appli
#include "XGD_type_communs.h"
#include "XGD_type_appli.h"
#include "XGT_message_communs.h"

/********************** ATTENTION ****************************/
/* les messages ayant la meme structure qu'un objet          */
/* sont cites dans ce fichier sous forme de commentaires     */
/* ainsi que les messages ne transportant aucune donnee      */
/*************************************************************/

/*****************************/
/* Messages traites par STAS */
/* concernant les APPLIS     */
/*****************************/

/* structure generique pour appli */
typedef struct {
XD_nom_appli nom_appli;
} XM_message_appli;

/* lancement et arret d'appli */
typedef XM_message_appli XM_stas_lance_appli;
typedef XM_message_appli XM_stas_arret_appli ;

/* demande de fin d'abonnement */
typedef XM_fin_abon XM_appli_fin_abon ;

/* reponse a une demande d'abonnement */
typedef XM_rep_abon XM_appli_abon_ok ;

/* messages utilisant la structure de l'objet APPLI */
/*
STAS_APPLI_AVIS_CREAT
STAS_APPLI_AVIS_MODIF
STAS_APPLI_AVIS_SUPPRES
STAS_APPLI_ABON_CREAT
STAS_APPLI_HISTO_REPI
STAS_APPLI_HISTO_DEM
*/

/* messages sans donnees */
/*
STAS_ARRET_APPLIS_OK
STAS_ARRET_APPLIS
STAS_LANCE_APPLI_OK
STAS_APPLI_FIN_ABON_OK
STAS_ARRET_APPLI_OK
STAS_LANCE_APPLI_REFUS
STAS_CHGT_CONF_TECH
*/

#endif
