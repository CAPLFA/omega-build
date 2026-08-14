/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_getliste_h
#define CVS_id_LGE_getliste_h
static const char *CVS_LGE_getliste_h __attribute__ ((unused)) = "@(#) $Id: LGE_getliste.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_getliste.h
**
** Description : interface du fichier LGE_getliste.c
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


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_lectureliste         Type : E
**
** Description  : Appelee par la fonction LGE_lecture_liste
**                Effectue effectue la lecture d'une liste avec filtre
**
**
** Parametres   :  Libelle     E/S            Description
**   objet           E           numero objet
**   taille          E           taille de l'objet
**   nom_fichier     E           nom du fichier
**   nb_objets       E           nombre d'objet
**   ufonct          E           fonction d'interpelation
**   filtre          E           fonction filtre
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_lecture_liste (int objet, int taille, char *nom_fichier, int nb_objets,
            UFONCT ufonct, UFONCT filtre);

