/*******************************************************************************
 * \file           EMpisteTYPES.H
 * Application  :  EMMA
 * Rôle         :  Définition des types énumérés du service piste
 *
 * \author  Fichier généré automatiquement à partir de EMpisteENUMERES.decl
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMPISTETYPES_H
#define __EMPISTETYPES_H


// ------------------ Definition des types enumeres du projet ---------------


// Type de NOTIFICATION
enum EM_PISTE_TYPE_NOTIF {
  C_EM_PISTE_NOTIF_INCONNUE = -1,
  C_EM_PISTE_CREATION = 0,
  C_EM_PISTE_MODIFICATION,
  C_EM_PISTE_SUPPRESSION,
  C_EM_PISTE_REPONSE,
  C_EM_PISTE_NB_NOTIF
};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteTYPES.H
//------------------------------------------------------------------------------

