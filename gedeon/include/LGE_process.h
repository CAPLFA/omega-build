/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_process_h
#define CVS_id_LGE_process_h
static const char *CVS_LGE_process_h __attribute__ ((unused)) = "@(#) $Id: LGE_process.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_process.h
**
** Description : interface du fichier LGE_process.c
**
** Utilisation : Utilisateurs de GEDLIB
**
** Implementation :
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : CBR     Date :  13/06/13 Version :
**    Origine : Portage CentOS 6.3
** MODIFICATIONS :
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
**
*******************************************************************************/


#include "LGE_gedlib.h"
#include "LGE_obj_process.h"


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_histo_process         Type : E
**
** Description  : Appelee par la fonction GEDLIB LGE_histo
**                Effectue l'interface entre la CU et le ND pour
**                la consultation par liste de l'historique d'un process
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_process    E     pointeur sur l'objet process
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_histo_process (LGT_process *p_process, UFONCT ufonct);

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_event_process         Type : E
**
** Description  : Appelee par la fonction GEDLIB LG_event
**                Effectue l'interface entre un client et un serveur
**                pour un evenement sur un process
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_process    E     pointeur sur l'objet process CU
**
** Valeurs de retour :
**                 LGR_ACCEPT : evenement reussi
**                 LGR_ERREUR : erreur
******************************************************************************/
int LGE_event_process (int event, LGT_process *p_process);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_trace_process
**
** Description : trace le contenu de l'objet process
**
** Implementation :
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**
**      fdsimul         E        descripteur fichier de sortie
**      process           E        pointeur sur objet
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
** sans signification
**
*******************************************************************************/
void LGE_trace_process(int fd,LGT_process * process);

