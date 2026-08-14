/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_sms_h
#define CVS_id_sms_h
static const char *CVS_sms_h __attribute__ ((unused)) = "@(#) $Id: sms.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

#ifndef __SMS__
#define __SMS__

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : sms.h
**
** Description : structures pour SMS
**	
** Utilisation : 
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :        Date :          Version : 1.0
**    Origine : 
** MODIFICATIONS :
**    Auteur : PDG    Date : 11/01/00 Version : 3.0
**    Origine : 99DG02
**    Impact : Ajout de i_etatacq (etat d'acquittement d'alarme d'un process)
**    Auteur : PDG    Date : 20/01/00 Version : 3.0
**    Origine : 99DG03
**    Impact : Ajout de s_groupes (attribut de regroupement )
**
**    Auteur : SBA    Date : 02/02/00 Version : 3.0
**    Origine : 99DG05
**    Impact : Ajout de s_autres_param 
**
**    Auteur : EC    Date : 15/02/00 Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de s_priorite, s_niveau_trace, s_nom_sels 
**
**    Auteur : EC    Date : 23/02/00 Version : 3.0
**    Origine : 00DG01
**    Impact : Ajout des champs nomexe,user,repertoire,relanceauto,
**    scripinit, scriptnett.
**
*******************************************************************************/

/*-------------------------  FICHIERS D'INCLUSION  ---------------------------*/
#include "errorcode.h"
#define CSMS_OK 0
#define CSMS_KO -1

/* objet process */
typedef struct 
{
    char *s_nom  ;
    char *s_type  ;
    long l_date ;
    int i_etat ;
    int i_etatacq ;
    char *s_libelle  ;
    char *s_groupes ; 
    char *s_sousens ;
    char *s_etatse ;
    char *s_tty  ;
    char *s_display  ;

    char *s_relanceauto;
    char *s_repertoire;
    char *s_nomexe;
    char *s_user;
    char *s_scriptinit;
    char *s_scriptnet;

    char *s_etatconfig ;
    char *s_priorite;
    char *s_autres_param ;
    char *s_niveau_trace;
    char *s_com;
    int i_relance ;
} SMSt_process ;

/* objet se */
typedef struct 
{
    char *s_nom  ;
    char *s_type  ;
    int i_etat ;
    char *s_libelle  ;
    long l_date ;
    char *s_appli ;
    char *s_etatappli ;
    int i_relance ;
} SMSt_se ;

/* objet tdb */
typedef struct 
{
    char *s_operation  ;
    char *s_erreur  ;
} SMSt_tdb ;

/* objet appli */
typedef struct 
{
    char *s_nom  ;
    long l_date ;
    int i_etat ;
    char *s_libelle  ;
    int i_relance ;
} SMSt_appli ;

typedef struct
{
    int (*factprocess)() ;
    int (*factse)() ;
    int (*factappli)() ;
} SMSt_act ;


enum SNMP_appli 
{
    CSMS_APPLI_DATE, /* time (RO) */
    CSMS_APPLI_ETAT, /* integer (RO) */
    CSMS_APPLI_INDEX, /* integer (RO) */
    CSMS_APPLI_LIBELLE, /* string (RO) */
    CSMS_APPLI_NOM, /* string (RO) */
    CSMS_APPLI_RELANCE /* integer (RW) */
};
enum SNMP_gedeon
{
    CSMS_GEDEON_ETAT, /* integer (RO) */
    CSMS_GEDEON_NOM, /* string (RO) */
    CSMS_GEDEON_RELANCE, /* integer (RW) */
    CSMS_GEDEON_SYNTHAPPLIETAT, /* integer (RO) */
    CSMS_GEDEON_SYNTHAPPLINB, /* integer (RO) */
    CSMS_GEDEON_SYNTHAPPLINOM, /* string (RO) */
    CSMS_GEDEON_SYNTHPROCESSETAT, /* integer (RO) */
    CSMS_GEDEON_SYNTHPROCESSMODIF, /* integer (RO) */
    CSMS_GEDEON_SYNTHPROCESSMODREF, /* integer (RO) */
    CSMS_GEDEON_SYNTHPROCESSNB, /* integer (RO) */
    CSMS_GEDEON_SYNTHPROCESSNOM, /* string (RO) */
    CSMS_GEDEON_SYNTHSEETAT, /* integer (RO) */
    CSMS_GEDEON_SYNTHSENB, /* integer (RO) */
    CSMS_GEDEON_SYNTHSENOM /* string (RO) */
};
enum SNMP_process
{
    CSMS_PROCESS_AUTRESPARAM, /* string (RW) */
    CSMS_PROCESS_COM, /* string (RO) */
    CSMS_PROCESS_CONFIG, /* string (RW) */
    CSMS_PROCESS_DATE, /* time (RO) */
    CSMS_PROCESS_DISPLAY, /* string (RW) */
    CSMS_PROCESS_ETATACQ, /* integer (RO) */
    CSMS_PROCESS_ETAT, /* integer (RO) */
    CSMS_PROCESS_ETATSE, /* string (RO) */
    CSMS_PROCESS_GROUPES, /* string (RW) */
    CSMS_PROCESS_INDEX, /* integer (RO) */
    CSMS_PROCESS_LIBELLE, /* string (RO) */
    CSMS_PROCESS_NIVEAUTRACE, /* string (RW) */
    CSMS_PROCESS_NOMEXE, /* string (RO) */
    CSMS_PROCESS_NOM, /* string (RO) */
    CSMS_PROCESS_PRIORITE, /* string (RW) */
    CSMS_PROCESS_RELANCE, /* integer (RW) */
    CSMS_PROCESS_REPERTOIRE, /* string (RO) */
    CSMS_PROCESS_SCRIPTINIT, /* string (RW) */
    CSMS_PROCESS_SCRIPTNET, /* string (RW) */
    CSMS_PROCESS_SE, /* string (RW) */
    CSMS_PROCESS_TTY, /* string (RW) */
    CSMS_PROCESS_TYPE, /* string (RW) */
    CSMS_PROCESS_USER /* string (RW) */
};
enum SNMP_se
{
    CSMS_SE_APPLI, /* string (RO) */
    CSMS_SE_DATE, /* time (RO) */
    CSMS_SE_ETATAPPLI, /* string (RO) */
    CSMS_SE_ETAT, /* integer (RO) */
    CSMS_SE_INDEX, /* integer (RO) */
    CSMS_SE_LIBELLE, /* string (RO) */
    CSMS_SE_NOM, /* string (RO) */
    CSMS_SE_RELANCE, /* integer (RW) */
    CSMS_SE_TYPE /* string (RO) */
};
enum SNMP_tdb
{
    CSMS_GEDEON_TDBERREUR, /* string (RO) */
    CSMS_GEDEON_TDBOPER /* string (RO) */
};
enum SNMP_other
{
/* champs non accessibles */
    CSMS_SITE_TABLECALC, /* sequence of Uncalc (NA) */
    CSMS_SITE_TABLERES, /* sequence of Unres (NA) */
    CSMS_SITE_TABLETERM, /* sequence of Unterm (NA) */
    CSMS_TABLEAPPLI_ENTREEAPPLI, /* object (NA) */
    CSMS_TABLECALC_ENTREECALC, /* object (NA) */
    CSMS_TABLEPROCESS_ENTREEPROCESS, /* object (NA) */
    CSMS_TABLERES_ENTREERES, /* object (NA) */
    CSMS_TABLESE_ENTREESE, /* object (NA) */
    CSMS_TABLETERM_ENTREETERM, /* object (NA) */
    CSMS_GEDEON_TABLEAPPLI, /* sequence of Uneappli (NA) */
    CSMS_GEDEON_TABLEPROCESS, /* sequence of Unprocess (NA) */
    CSMS_GEDEON_TABLESE, /* sequence of Unse (NA) */
/* champs innutilisés gardés pour compatibilité */
    CSMS_SITE_ETAT, /* integer (RO) */
    CSMS_SITE_NOM, /* string (RO) */
    CSMS_SITE_SYNTHCALCETAT, /* integer (RO) */
    CSMS_SITE_SYNTHCALCNB, /* integer (RO) */
    CSMS_SITE_SYNTHCALCNOM, /* string (RO) */
    CSMS_SITE_SYNTHRESETAT, /* integer (RO) */
    CSMS_SITE_SYNTHRESNB, /* integer (RO) */
    CSMS_SITE_SYNTHRESNOM, /* string (RO) */
    CSMS_SITE_SYNTHTERMETAT, /* integer (RO) */
    CSMS_SITE_SYNTHTERMNB, /* integer (RO) */
    CSMS_SITE_SYNTHTERMNOM, /* string (RO) */
    CSMS_RES_ETAT, /* integer (RO) */
    CSMS_TERM_ETAT, /* integer (RO) */
    CSMS_CALC_ETAT /* integer (RO) */
};

/* inclusion declarations procedures */
/* dans un autre fichier car generees automatiquement */

#include "sms_ext.h"

#endif
