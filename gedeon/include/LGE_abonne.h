/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_abonne_h
#define CVS_id_LGE_abonne_h
static const char *CVS_LGE_abonne_h __attribute__ ((unused)) = "@(#) $Id: LGE_abonne.h 307 2017-02-09 16:38:09Z yberthie $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_abonne.h
**
** Description : interface du fichier LGE_abonne.c
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
**    Auteur : YBE    Date : 09/02/17 Version : 5.2.0.1
**    Origine : Correction FFT 16/MGED/0001
**    Impact : Demande de fin d'abonnement obsolete
**             Ajout fonctions LGE_fin_abonnement_obsolete(), LGE_is_abn_obsol()
**             et LGE_add_abn_obsol
**
*******************************************************************************/


#include "LGE_gedlib.h"


void LGE_tab_init ();
int LGE_tab_mem (int zzz, int type, int serveur, int objet, UFONCT ufonct, int msg_fin, UFONCT filtre);
int LGE_tracer_table (int type);
int LGE_abonne_criteres (int nom_objet, char *p_objet, UFONCT fct_interpel);
int LGE_fin_abonne (int id_abon);
int LGE_recherche_fct_interpel (int srv, int ident_srv, int *p_id_abon, UFONCT *p_fct_interpel);
int LGE_recherche_identifiant (int ident_serveur);
void LGE_interpel_abonne (int nobjet, int event, int id_abon, char *p_msgint);
int LGE_fin_abonnement_obsolete(int id_serveur, int no_msg_interne, int id_abonn_serv);
int LGE_is_abn_obsol( int id_abon_serv);
void LGE_add_abn_obsol( int id_abon_serv);
