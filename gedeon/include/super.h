/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_super_h
#define CVS_id_super_h
static const char *CVS_super_h __attribute__ ((unused)) = "@(#) $Id: super.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : super.h
**
** Description :  Definitions de la supervision
**	
** Utilisation : 
**	
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :        Date :           Version : 
**    Origine :
** MODIFICATIONS :
**    Auteur : PDG    Date : 03/02/00  Version : g3.0
**    Origine : 99DG02
**    Impact : Ajout des valeurs de l'etat d'acquittement d'alarme du process
**             pour STG
**
**    Auteur : EC    Date : 01/02/00  Version : g3.0
**    Origine : 99DG06
**    Impact : Ajout de la valeur C_MODIF
**             pour STG et de C_MAJ_ETATACQ
**
**    Auteur : PDG    Date : 25/09/00  Version : g3.0
**    Origine : 99DS94 et 99DS95
**    Impact : Ajout des constantes C_ENCOURS, C_TERMINE, C_ECHEC,
**             C_IGNORE, C_ACTIF, C_ERREUR
**             Modification de la valeur de la constante C_MODIF 
**             et C_MAJ_ETATACQ 
**
*******************************************************************************/


#ifdef MGM
#define allouer(s) (char *) MGM_malloc(s)
#define liberer(a) MGM_free(a)
#define reallouer(a,s)  (char *) MGM_realloc(a,s)
#define callouer(n,s) (char *) MGM_calloc(n,s)
#else
#define allouer(s) (char *) malloc(s)
#define liberer(a) free(a)
#define reallouer(a,s)  (char *) realloc(a,s)
#define callouer(n,s) (char *) calloc(n,s)
#endif


#define C_NACQUIT           6

#define C_BON           1
#define C_PANNE         2
#define C_DEGRADE       3
#define C_INHIBE        4
#define C_ARRET         5
#define C_INCONNU       6
#define C_ACTIF         7 /* ne pas modifier sans accord STI */
#define C_ERREUR        8 /* ne pas modifier sans accord STI */
#define C_MAJ_ETATACQ   9 /* ce code est reserve pour la mise a jour de */
                          /* l'etat d'acquittement d'alarme d'un process. */
                          /* l'etat du process ne doit jamais prendre */
                          /* cette valeur */
#define C_MODIF        10 /* modification dyn. des parametres */

/* code retour pour l'attribut relance dans snmp  */
/* ne pas modifier ces valeurs sans accord de STI */
#define C_ENCOURS       7 /* commande en cours de traitement (STG) */
#define C_TERMINE       8 /* commande terminee (STG) */
#define C_ECHEC         9 /* commande echouee (STG) */
#define C_IGNORE       10 /* commande ignoree (STG) */



#define C_SBON           "Marche"
#define C_SPANNE         "Panne"
#define C_SDEGRADE       "Degrade"
#define C_SINHIBE        "Inhibe"
#define C_SARRET         "Arret"
#define C_SINCONNU       "Inconnu"

/* valeurs de l'etat d'acquittement d'alarme d'un process pour STG */
#define C_ETATACQ_NEUTRE      0
#define C_ETATACQ_NON_ACQ     1
#define C_ETATACQ_INCONNU     2
