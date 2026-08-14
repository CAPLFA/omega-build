/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_XGD_type_process_h
#define CVS_id_XGD_type_process_h
static const char *CVS_XGD_type_process_h __attribute__ ((unused)) = "@(#) $Id: XGD_type_process.h 146 2014-01-20 08:07:28Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : XGD_type_process
**
** Description :  types elementaires de l'objet process 
**	
** Utilisation : 
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :  LM    Date : 30/09/97 Version :1.0
**    Origine :
** MODIFICATIONS :
**    Auteur :   EC     Date : 14/05/98         Version : 1.0
**    Origine : 98VG54
**    Impact : XD_path (40 a 200+40)
**    Auteur :   PDG    Date : 03/01/00         Version : 3.0
**    Origine : 99DG02
**    Impact : Ajout de XD_etatacq
**    Auteur :   PDG    Date : 20/01/00         Version : 3.0
**    Origine : 99DG03
**    Impact : Ajout de XD_groupes
**
**    Auteur :   SBA    Date : 03/02/00         Version : 3.0
**    Origine : 99DG05
**    Impact : Ajout de XD_autres_param
**
**    Auteur :   EC    Date : 26/01/00         Version : 3.0
**    Origine : 99DG06
**    Impact : Ajout de XD_adr_datagrammer XD_priorite XD_mode_com.
**
**    Auteur :   CBR   Date : 08/07/13         Version : 5.0.0.0
**    Origine : Portage centos 6.3 : Merge 3.4.0.0
**    Impact : Ajout du type XD_temps (04/LFRS/0005).
**
**    Auteur :   CBR   Date : 20/01/14         Version : 5.0.0.1
**    Origine : FFT interne 137
**    Impact : Remplacement 15 -> 20 caractères pour le DISPLAY.
**
*******************************************************************************/
/*  */

#ifndef  XGD_type_process
#define XGD_type_process

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>                                                          

typedef char XD_nom_exec[50+1];		/* nom correspondant a l'executable */
typedef char XD_nom_process[19+1];     /* nom du process                */
typedef char XD_etat_config[1+1];      /* conf operationelle            */
typedef char XD_type_process[1+1];     /* type de process               */
typedef char XD_ligne[15+1];
typedef char XD_display[20+1];
typedef char XD_relance_auto[1+1];
typedef char XD_niveau_trace[1+1];
typedef char XD_path[200+40+1];
typedef char XD_param[200+40+1];
typedef char XD_pid[6+1];
typedef char XD_marquage[1+1];
typedef char XD_etatacq[1+1];        /* etat d'acquittement d'alarme  */
typedef char XD_groupes[35+1];       /* attribut de regroupement */
typedef char XD_autres_param[256+1];  /* autres paramètres du process */
typedef struct sockaddr_in XD_adr_datagramme;
typedef char XD_priorite[16+1];
typedef char XD_mode_com[11+1];

typedef time_t XD_temps; /**< Utilisé pour mesurer le temps écoulé à l'arrêt d'un process. */

#endif
