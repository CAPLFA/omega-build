/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_ufonct_h
#define CVS_id_LGE_ufonct_h
static const char *CVS_LGE_ufonct_h __attribute__ ((unused)) = "@(#) $Id: LGE_ufonct.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_ufonct.h
**
** Description : interface du fichier LGE_ufonct.c
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



/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_ufonct
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Traitement des messages d'interpellation.
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**   expediteur         E       serveur effectuant l'interpellation
**  ident_serveur       E       identifiant pour le serveur
**     nomi             E       numero (type) du message interne
**    p_msgint          E       buffer contenant le message interne
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
void LGE_ufonct (int expediteur, int ident_serveur, int nomi, char *p_msgint);
