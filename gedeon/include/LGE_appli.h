/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_appli_h
#define CVS_id_LGE_appli_h
static const char *CVS_LGE_appli_h __attribute__ ((unused)) = "@(#) $Id: LGE_appli.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_appli.h
**
** Description : interface du fichier LGE_appli.c
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
#include "LGE_obj_appli.h"


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_histo_appli         Type : E
**
** Description  : Appelee par la fonction GEDLIB LGE_histo
**                Effectue l'interface entre la CU et le ND pour
**                la consultation par liste de l'historique d'une appli
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_appli    E     pointeur sur l'objet appli
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_histo_appli (LGT_appli *p_appli, UFONCT ufonct);

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_event_appli         Type : E
**
** Description  : Appelee par la fonction GEDLIB LG_event
**                Effectue l'interface entre un client et un serveur
**                pour un evenement sur une appli
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_appli    E     pointeur sur l'objet appli CU
**
** Valeurs de retour :
**                 LGR_ACCEPT : evenement reussi
**                 LGR_ERREUR : erreur
******************************************************************************/
int LGE_event_appli (int event, LGT_appli *p_appli);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_trace_appli
**
** Description : trace le contenu de l'objet appli
**
** Implementation :
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**
**      fdsimul         E        descripteur fichier de sortie
**      appli           E        pointeur sur objet
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
** sans signification
**
*******************************************************************************/
void LGE_trace_appli(int fd, LGT_appli * appli);

