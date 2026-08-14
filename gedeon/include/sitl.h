/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_sitl_h
#define CVS_id_sitl_h
static const char *CVS_sitl_h __attribute__ ((unused)) = "@(#) $Id: sitl.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

#define CSITL_OK 0
#define CSITL_NIL -1


/* objet calc */
typedef struct
   {
   int i_index ;
   char *p_priv ;
   int i_ind ;
   char *s_nom ;
   int i_etat ;
   } SITLt_calc ;

/* objet term */
typedef struct
   {
   int i_index ;
   char *p_priv ;
   int i_ind ;
   char *s_nom ;
   int i_etat ;
   } SITLt_term ;

/* objet res */
typedef struct
   {
   int i_index ;
   char *p_priv ;
   int i_ind ;
   char *s_nom ;
   int i_etat ;
   } SITLt_res ;

/* objet site */
typedef struct
   {
   int i_index ;
   char *p_priv ;
   int i_ind ;
   char *s_nom ;
   int i_etat ;
   char *s_sycalcnom ;
   int i_sycalcetat ;
   int i_sycalcnb ;
   char *s_sytermnom ;
   int i_sytermetat ;
   int i_sytermnb ;
   char *s_syresnom ;
   int i_syresetat ;
   int i_syresnb ;
   char *s_sysignom ;
   int i_sysigetat ;
   int i_sysignb ;
   } SITLt_site ;

/* inclusion declarations procedures */
/* dans un autre fichier car generees automatiquement */

#include "sitl_ext.h"

