/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_tdb_h
#define CVS_id_LGE_tdb_h
static const char *CVS_LGE_tdb_h __attribute__ ((unused)) = "@(#) $Id: LGE_tdb.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_tdb.h
**
** Description : interface du fichier LGE_tdb.c
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
#include "LGE_obj_tdb.h"


/* CARTOUCHE FONCTION **********************************************************
 **
 ** Nom fonction : LGE_trace_tdb
 **
 ** Description : trace le contenu de l'objet tdb
 **
 ** Implementation :
 **
 ** Parametres :
 **
 **    Libelle         E/S           Description
 ** -----------------------------------------------------------------------------
 **
 **      fdsimul       E        descripteur fichier de sortie
 **      tdb           E        pointeur sur objet
 **
 **
 ** -----------------------------------------------------------------------------
 ** Codes de retour :
 **
 ** sans signification
 **
 *******************************************************************************/
void LGE_trace_tdb(int fd,LGT_tdb * tdb);
