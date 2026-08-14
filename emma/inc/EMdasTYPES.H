/*******************************************************************************
 * \file           EMdasTYPES.H
 * Application  :  EMMA
 * Rôle         :  Définition des types énumérés du service das
 *
 * \author  Fichier généré automatiquement à partir de EMdasENUMERES.decl
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMDASTYPES_H
#define __EMDASTYPES_H


// ------------------ Definition des types enumeres du projet ---------------


// Type de NOTIFICATION
enum EM_DAS_TYPE_NOTIF {
  C_EM_DAS_NOTIF_INCONNUE = -1,
  C_EM_DAS_CREATION = 0,
  C_EM_DAS_MODIFICATION,
  C_EM_DAS_SUPPRESSION,
  C_EM_DAS_REPONSE,
  C_EM_DAS_NB_NOTIF
};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasTYPES.H
//------------------------------------------------------------------------------

