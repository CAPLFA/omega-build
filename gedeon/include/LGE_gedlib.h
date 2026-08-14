/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_gedlib_h
#define CVS_id_LGE_gedlib_h
static const char *CVS_LGE_gedlib_h __attribute__ ((unused)) = "@(#) $Id: LGE_gedlib.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_gedlib.h
**
** Description : constantes de la GEDLIB 
**	
** Utilisation : 
**	
** Implementation : 
** constantes definissant les objets, les evenements, les codes retour
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : LM     Date : 30/09/97 Version : 1.0
**    Origine : GEDEON
** MODIFICATIONS :
**    Auteur : PDG    Date : 06/01/00 Version : 3.0
**    Origine : 99DG02
**    Impact : Ajout de LGE_ACQUIT_PROCESS
**
**    Auteur : EC    Date : 26/01/00 Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de _PROCESS_RECONFIGURE 
**                       LGE_PROCESS_MODIF
**                       LGE_APPLI_CHG_CONF_TECH
**
**    Auteur : LM    Date : 22/02/00 Version : 3.0
**    Origine : 00DG01
**    Impact : Ajout LGE_CREER_PROCESS LGE_SUPPRIMER_PROCESS
**                     LGE_DEBUT_CONF_OPER
**                     LGE_FIN_CONF_OPER 
**
*******************************************************************************/
/*  */
/*-------------------------  FICHIERS D'INCLUSION  ---------------------------*/
#ifndef LGE_gedlib
#define LGE_gedlib



/*-------------------------  DECLARATIONS EXTERNES  --------------------------*/



/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/

/********************************************/
/*                   Objets                 */
/********************************************/
#define LGO_APPLI     1  /* application     */
#define LGO_SE        2  /* sous-ensemble   */
#define LGO_PROCESS   3  /* process         */
#define LGO_TDB       4  /* tableau de bord */
/********************************************/

/********************************************************/
/*                Evenements GEDLIB                     */
/********************************************************/
#define LGE_MAJ_ETAT       1 /* mise a jour etat process   */
#define LGE_LANCE_PROCESS  2 /* lancement process          */
#define LGE_ARRET_PROCESS  3 /* arret process              */
#define LGE_LANCE_SE       4 /* lancement sous-ensemble    */
#define LGE_ARRET_SE       5 /* arret sous-ensemble        */
#define LGE_LANCE_APPLI    6 /* lancement application      */
#define LGE_ARRET_APPLI    7 /* arret application          */
#define LGE_AVIS_CREAT     8 /* avis de creation           */
#define LGE_AVIS_SUPPR     9 /* avis de suppression        */
#define LGE_AVIS_MODIF    10 /* avis de modification       */
#define LGE_LISTE         11 /* occurence d'objet ds liste */
#define LGE_ACQUIT_PROCESS  12 /* mise a jour etat d'acquittement d'alarme process */
#define LGE_PROCESS_RECONFIGURE 13 /* reconfiguration process */
#define LGE_PROCESS_MODIF       14 /* reconfiguration process */
#define LGE_APPLI_CHG_CONF_TECH 15 /* chgt de conf tech */
#define LGE_CREER_PROCESS  16 /* creation de process */
#define LGE_SUPPRIMER_PROCESS 17 /* suppression de process */
#define LGE_DEBUT_CONF_OPER 18 /* debut de chgt de conf oper. */
#define LGE_FIN_CONF_OPER 19 /* fin de chgt de conf oper. */

/******************************************************/
/*                codes retour des fonctions GEDLIB   */
/******************************************************/
#define LGR_REFUS  0
#define LGR_ERDATA -1
#define LGR_ERREUR -2
#define LGR_ACCEPT 1 

#define LIBRE       0
#define ABONNEMENT  1
#define AUTRE       2   /* pour compatibilite */
#define ABONNEMENT_CRITERES 3

typedef int (*UFONCT) ();        /* type fonction utilisateur */

#endif /* rien apres ce endif */
