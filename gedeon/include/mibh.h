/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_mibh_h
#define CVS_id_mibh_h
static const char *CVS_mibh_h __attribute__ ((unused)) = "@(#) $Id: mibh.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

#define CMIBH_OK	0
#define CMIBH_KO	-1

#define CMIBH_ATTENTE	500

#define CMIBH_PREMIER	0
#define CMIBH_SUIVANT	CMIBH_PREMIER	+1

#define CMIBH_DEMARRER	0
#define CMIBH_ARRETER	CMIBH_DEMARRER	+1

                   /* types des attributs                                     */
#define CMIBH_CHAINE	0
#define CMIBH_CHHEXA	CMIBH_CHAINE	+1
#define CMIBH_OBID	CMIBH_CHHEXA	+1
#define CMIBH_ENTIER	CMIBH_OBID	+1
#define CMIBH_ENTIERNS	CMIBH_ENTIER	+1
#define CMIBH_TICK	CMIBH_ENTIERNS	+1
#define CMIBH_HEXA	CMIBH_TICK	+1

#define CMIBH_SRELNOM "Rel"
#define CMIBH_SACQNOM "Acq"

#define CMIBH_SINCONNU      "Inconnu"
#define CMIBH_SINDEX      "Index"
#define CMIBH_SNOM      "Nom"
#define CMIBH_SLIBELLE  "Libelle"
#define CMIBH_SETAT     "Etat"
#define CMIBH_STYPE  "Type"
#define CMIBH_SLIEU  "Lieu"
#define CMIBH_SADRESSE  "Adresse"
#define CMIBH_SDATE  "Date"
#define CMIBH_SSTATIN  "Statin"
#define CMIBH_SSTATOUT  "Statout"
#define CMIBH_SRELANCE  "Relance"
#define CMIBH_SETCALC     "Etcalc"
#define CMIBH_SETRES     "Etres"
#define CMIBH_SETTERM     "Etterm"
#define CMIBH_SETGEDEON     "Etgedeon"

#define CMIBH_MAXVAL	20
                   /* structure pour recuperation valeur attribut             */
typedef struct
   {
   int i_idatt ;              /* ident attribut                               */
   char *s_nom ;              /* nom de l'attribut                            */
   int i_type ;               /* son type                                     */
   int i_valeur ;             /* valeur ou longueur si non scalaire           */
   char *s_valeur ;           /* valeur si chaine ou obid                     */
   } MIBHt_val ;

/* inclusion declarations procedures */
/* dans un autre fichier car generees automatiquement */

#include "mibh_ext.h"
