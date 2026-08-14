/*******************************************************************************
 * \file           EMetatTYPES.H
 * Application  :  EMMA
 * Rôle         :  Définition des types énumérés du service etat
 *
 * \author  Fichier généré automatiquement à partir de EMetatENUMERES.decl
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMETATTYPES_H
#define __EMETATTYPES_H


// ------------------ Definition des types enumeres du projet ---------------


// Type de NOTIFICATION
enum EM_ETAT_TYPE_NOTIF {
  C_EM_ETAT_NOTIF_INCONNUE = -1,
  C_EM_ETAT_CREATION = 0,
  C_EM_ETAT_MODIFICATION,
  C_EM_ETAT_SUPPRESSION,
  C_EM_ETAT_REPONSE,
  C_EM_ETAT_NB_NOTIF
};

// Etat d un Systeme externe
enum EM_ETAT_SYSTEME {
  C_EM_ETAT_INCONNU = 0,
  C_EM_ETAT_OK,
  C_EM_ETAT_NOK,
  C_EM_ETAT_REPRISE,
  C_EM_NB_ETAT_SYSTEME
};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatTYPES.H
//------------------------------------------------------------------------------

