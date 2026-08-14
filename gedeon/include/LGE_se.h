/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_se_h
#define CVS_id_LGE_se_h
static const char *CVS_LGE_se_h __attribute__ ((unused)) = "@(#) $Id: LGE_se.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_se.h
**
** Description : interface du fichier LGE_se.c
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
#include "LGE_obj_se.h"


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_histo_se         Type : E
**
** Description  : Appelee par la fonction GEDLIB LGE_histo
**                Effectue l'interface entre la CU et le ND pour
**                la consultation par liste de l'historique d'un se
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_se    E     pointeur sur l'objet se
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_histo_se (LGT_se *p_se, UFONCT ufonct);


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_event_se         Type : E
**
** Description  : Appelee par la fonction GEDLIB LG_event
**                Effectue l'interface entre un client et un serveur
**                pour un evenement sur une se
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_se    E     pointeur sur l'objet se CU
**
** Valeurs de retour :
**                 LGR_ACCEPT : evenement reussi
**                 LGR_ERREUR : erreur
******************************************************************************/
int LGE_event_se (int event, LGT_se *p_se);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_trace_se
**
** Description : trace le contenu de l'objet se
**
** Implementation :
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**
**      fdsimul         E        descripteur fichier de sortie
**      se           E        pointeur sur objet
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
** sans signification
**
*******************************************************************************/
void LGE_trace_se(int fd,LGT_se * se);


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_liste_se         Type : E
**
** Description  : Appelee par la fonction GEDLIB LGE_liste
**                Effectue l'interface entre la CU et le ND pour
**                la consultation par liste des se
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_se         E     pointeur sur l'objet se
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_liste_se (LGT_se *p_se, UFONCT ufonct);
