/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGD_gedeon_h
#define CVS_id_XGD_gedeon_h
static const char *CVS_XGD_gedeon_h __attribute__ ((unused)) = "@(#) $Id: XGD_gedeon.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGD_gedeon
**
** Description : Donnees communes a Gedeon
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
**    Auteur : PDG    Date : 02/12/99 Version : G3.0
**    Origine : FFT 99TO20
**    Impact : Passage de 10 à 15 du parametre NB_MAX_APPLI_CALC
**    Auteur : PDG    Date : 06/01/00 Version : G3.0
**    Origine : 99DG02
**    Impact : Ajout de STP_ETATACQ_NEUTRE et de STP_ETATACQ_NON_ACQ
**
**    Auteur : EC    Date : 26/01/00 Version : G3.0
**    Origine : 99DG06
**    Impact : Ajout des parametres datagramme.
**
**    Auteur : CBR   Date : 08/07/13 Version :
**    Origine : Portage Centos 6.3 : Merge evolution 3.4.0.0
**    Impact : DELAI_NETTOYAGE_MAX.
**
*******************************************************************************/
/*  */
/*-----------------  DECLARATIONS OU DEFINITIONS PUBLIQUES  ------------------*/
#ifndef XGD_gedeon
#define XGD_gedeon

/* compte rendu */
#define SPVT_NO_OK 0
#define SPVT_OK    1

/* etats de supervision  */
#define ARRET  'S'
#define INIT   'I'
#define ACTIF  'A'
#define ERROR 'E'


/* etats applicatifs pour les process */
#define PANNE   'P'
#define WARNING 'W'
#define MARCHE  'M'

/*--------------------------*/
/* Types d'un sous-ensemble */
/*--------------------------*/
#define XGD_SERVICE 'S'
#define XGD_COMMUN 'C'



/* types de process */
#define PERMAMENT   'P'
#define REACTIVABLE 'R'
#define INDISPENSABLE 'I'
#define CONFIGURABLE 'C'
#define NONCONFIGURABLE 'N'



/* etat de configuration */
#define CONFIGURE    'C'
#define NONCONFIGURE 'N'
#define RECONFIGURE 'R' 

/* variables d'environnement */
#define LONGUEUR_FICHIER_TRACE "LONGUEUR_FICHIER_TRACE"

/* nom du fichier des erreurs */
#define FICHIER_ERREUR "gedeonerreur"

/* nom du repertoire utilise pour les abonnements */
#define XGD_REPABT "/gedeon/abt"


/* variables dimensionnantes */
#define NB_MAX_APPLI_CALC 15
#define NB_MAX_SE_APPLI 30
#define NB_MAX_SE_CALC 50
#define NB_MAX_PROC_SE 20
#define NB_MAX_PROC_CALC 500
#define NB_MAX_ABON_OBJ_SPVT 5

/** Délai maximal, en secondes, pour l'exécution du script de nettoyage. */
#define DELAI_NETTOYAGE_MAX 5


/* etat d'acquittement d'alarme de process */
#define STP_ETATACQ_NEUTRE  'N'
#define STP_ETATACQ_NON_ACQ 'A'

/* parametre mode datagramme */

#define STP_MODE_DATAGRAMME "datagramme"
#define MAXMESG 2048
#define START_CAR '@'
#define MODE_DTGRAM 'D'
#define DTGRAM_ARRET 0
#define DTGRAM_RECONFIGURATION 1

#endif /* rien apres ce endif */
