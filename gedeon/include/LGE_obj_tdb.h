/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_obj_tdb_h
#define CVS_id_LGE_obj_tdb_h
static const char *CVS_LGE_obj_tdb_h __attribute__ ((unused)) = "@(#) $Id: LGE_obj_tdb.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/
/*
*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_obj_tdb
**
** Description : Definitions liees a l'objet TDB 
**	
** Utilisation :  
**	
** Implementation : 
** definition de l'objet TDB
** definition des messages ayant la structure de l'objet TDB
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :        Date :          Version :
**		LM			30/09/97			1.0
**    Origine : GEDEON
** MODIFICATIONS :
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
*******************************************************************************/
/*  */
#ifndef LGE_obj_tdb
#define LGE_obj_tdb

#include "XGD_type_tdb.h"


/* structure de l'objet TdB */

typedef struct
{
XD_libelle_operation  operation;
XD_libelle_erreur  erreur;

} LGT_tdb;




#endif /* rien apres ce endif */
