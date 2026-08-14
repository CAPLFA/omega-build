/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_trace_h
#define CVS_id_trace_h
static const char *CVS_trace_h __attribute__ ((unused)) = "@(#) $Id: trace.h 283 2017-01-24 10:43:49Z pfevre $"; 
#endif
/*--------------------------------------------------------------------------*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : trace.h
**
** Description :
**
**    Définitions de macros de trace pour STG
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
**
** MODIFICATIONS :
**
**  5.2.0.1  24/01/2017  PFE   FFT 16/MGED/0005 : modification macros ENTREE
**                             et SORTIE pour toutes les fonctions
*******************************************************************************/

/*
*/
#define TR_OP1     0x00000001
#define TR_OP2     0x00000002
#define TR_OP3     0x00000004
#define TR_OP4     0x00000008
#define TR_OP5     0x00000010
#define TR_OP6     0x00000020
#define TR_OP7     0x00000040
#define TR_OP8     0x00000080
#define TR_FB      0x00000100
#define TR_AL      0x00000200
#define TR_SY      0x00000400
#define TR_MC      0x00000800
#define TR_SMU     0x00001000
#define TR_SMS     0x00002000
#define TR_SMM     0x00004000
#define TR_PGP     0x00008000
#define TR_STG     0x00008000
#define TR_SITL    0x00010000
#define TR_MIBH    0x00020000

/*~~~~~~~~~~~~~~~~~~~~~   trace     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <stdio.h>
#ifndef TRACEBAD

#define VAL_TRACE "VAL_TRACE"
#define FIC_TRACE "FIC_TRACE"

#define MAX_BLANC 80
#ifdef EXT
EXT
#endif 
char TR_buf_blanc[MAX_BLANC]
#ifndef EXT
   = {"                                                                               "}
#endif 
;

#ifdef EXT
EXT
#endif 
char *TR_p_blanc
#ifndef EXT
 = &TR_buf_blanc[MAX_BLANC-1]
#endif 
;

#define MAX_TRACE 300
#ifdef EXT
EXT
#endif 
char TR_buf_trace[MAX_TRACE] ;

#ifdef EXT
EXT
#endif 
FILE **TR_sor_trace ;

#ifdef EXT
EXT
#endif 
int *TR_trace ;


#define DTRACE(niv) if ((*TR_trace & (niv)) == (niv))                   \
                {                                            \
                sprintf (TR_buf_trace,"%s",TR_p_blanc) ;              \
                sprintf (TR_buf_trace+(&TR_buf_blanc[MAX_BLANC-1]-TR_p_blanc),
#define FTRACE    ) ; TR_Sortie (TR_buf_trace,__FILE__, __LINE__) ;}
#define ENTREE(niv)           \
             if ((*TR_trace & (TR_OP1|niv)) == (TR_OP1|niv))      \
                {                                            \
                sprintf (TR_buf_trace,"%s> %s\n",TR_p_blanc,__FUNCTION__) ; \
                TR_Sortie (TR_buf_trace,__FILE__, __LINE__) ; }        \
                TR_p_blanc -= 3 ;
#define SORTIE(niv) {TR_p_blanc += 3 ;                             \
             if ((*TR_trace & (TR_OP1|niv)) == (TR_OP1|niv))      \
                {                                            \
                sprintf (TR_buf_trace,"%s< %s\n",TR_p_blanc,__FUNCTION__) ; \
                TR_Sortie (TR_buf_trace,__FILE__, __LINE__) ; }}


extern void TR_Sortie (char *s_tampon, char *file, int line);

#else

#define SLASH /
#define STAR *
#define DTRACE(niv) TR_Vide (
#define FTRACE    ) ;

/* CRO: mis en commentaire pour que les macro de trace aient une action
#define ENTREE(niv,nom)
#define SORTIE(niv)
#define init_trace(x) 
#define fin_trace()
*/

#endif 

