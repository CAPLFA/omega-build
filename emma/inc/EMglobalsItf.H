//*****************************************************************************
/*! \file       EMglobalsItf.H
 *  Application EMMA
 *  \author     Erwan Demairy
 *
 *  Structures permettant d'obtenir le message et l'identificateur d'un 
 *  code d'erreur.
 */
//*****************************************************************************
#ifndef __EMGLOBALSITF_H
#define __EMGLOBALSITF_H

#include "EMstatus.H"

//! Traduction d'une valeur retournée par EMMA en un message explicatif.
extern const char* EMstatus_int2char[EMS_NB_ELEMENTS_STATUT];
/*! Traduction d'une valeur retournée en une chaîne représentant le
 *  code.
 */
extern const char* EMstatus_int2code[EMS_NB_ELEMENTS_STATUT];

#endif // __EMGLOBALSITF_H
