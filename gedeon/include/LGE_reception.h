/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_reception_h
#define CVS_id_LGE_reception_h
static const char *CVS_LGE_reception_h __attribute__ ((unused)) = "@(#) $Id: LGE_reception.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_reception.h
**
** Description : interface du fichier LGE_reception.c
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
** Nom fonction : LGE_reception      Type : E
**
** Description  : Fonction de reception des messages synchrones
**                traitant les cas d'erreurs standards.
**
**
** Parametres   :  Libelle     E/S            Description
**               nomi_attendu   E     numero du message interne attendu
**                                    dans le cas d'un acquitement
**                 pp_msgint    S     (par adresse) pointeur sur le message
**                                    interne recu.
**
** Valeurs de retour :
**                 LGR_ACCEPT : le message recu est un acquittement.
**                 LGR_ERDATA : le message recu est une erreur sur les donnees
**                               utilisateur.
**                 LGR_ERREUR : le message recu est une erreur de traitement.
*******************************************************************************
**                             HISTORIQUE
**
**    Version      Date     Auteur          Description
**      V1.3     15/11/91     AB             Creation de la fonction
******************************************************************************/
int LGE_reception (int nomi_attendu, char **pp_msgint);

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_reception_avec_erreur      Type : E
**
** Description  : Fonction de reception des messages synchrones
**                traitant les cas d'erreurs standards et les
**                erreurs specifiques.
**                CETTE FONCTION EST TEMPORAIRE : LORSQUE TOUS LES
**                MESSAGES D'ERREUR SERONT STANDARDS, ELLE POURRA ETRE
**                SUPPRIMEE.
**
**
** Parametres   :  Libelle     E/S            Description
**               nomi_attendu   E     numero du message interne attendu
**                                    dans le cas d'un acquitement
**                 pp_msgint    S     (par adresse) pointeur sur le message
**                                    interne recu.
**
** Valeurs de retour :
**                 LGR_ACCEPT : le message recu est un acquitement.
**                 LGR_ERDATA : le message recu est une erreur sur les donnees
**                               utilisateur.
**                 LGR_ERREUR : le message recu est une erreur de traitement.
*******************************************************************************
**                             HISTORIQUE
**
**    Version      Date     Auteur          Description
**      V1.3     02/04/92     AB             Creation de la fonction
******************************************************************************/
int LGE_reception_avec_erreur (int nomi_attendu, int nomi_erreur_attendu, char **pp_msgint);

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_reception_liste      Type : E
**
** Description  : Fonction de reception des messages synchrones
**                en retour d'une requete de consultation par liste.
**
**
** Parametres   :  Libelle     E/S            Description
**               nomi_attendu   E     numero du message interne attendu
**                                    dans le cas d'un acquitement
**                 no_obj       E     le nom (numero) de l'objet : LSO_...
**                 taille_obj   E     la taille de l'objet : sizeof(LST_...)
**                 ufonct       E     la fonction d'interpellation de liste
**
** Valeurs de retour :
**                 LGR_ACCEPT : le message recu est un acquitement.
**                 LGR_ERREUR : le message recu est une erreur de traitement.
*******************************************************************************
**                             HISTORIQUE
**
**    Version      Date     Auteur          Description
**      V1.3     15/11/91     AB             Creation de la fonction
******************************************************************************/
int LGE_reception_liste (int nomi_attendu, int no_obj, int taille_obj, UFONCT ufonct);
