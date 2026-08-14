/*******************************************************************************
 * \file           EMplnTYPES.H
 * Application  :  EMMA
 * Rôle         :  Définition des types énumérés du service pln
 *
 * \author  Fichier généré automatiquement à partir de EMplnENUMERES.decl
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMPLNTYPES_H
#define __EMPLNTYPES_H


// ------------------ Definition des types enumeres du projet ---------------


// Type de NOTIFICATION
enum EM_PLN_TYPE_NOTIF {
  C_EM_PLN_NOTIF_INCONNUE = -1,
  C_EM_PLN_CREATION = 0,
  C_EM_PLN_MODIFICATION,
  C_EM_PLN_SUPPRESSION,
  C_EM_PLN_REPONSE,
  C_EM_PLN_NB_NOTIF
};

// Type de TRANSACTION
enum EM_TRANS_TYPE {
  C_EM_INCONNU = -1,
  C_EM_ACT = 0,
  C_EM_MOD,
  C_EM_MODT,
  C_EM_MVT,
  C_EM_RET,
  C_EM_CNL,
  C_EM_RIP,
  C_EM_FIC,
  C_EM_ALLOC,
  C_EM_LIB,
  C_EM_CLD,
  C_EM_NB_TRANS_TYPE
};

// Contexte ATM
enum EM_CTXT_ATM {
  C_EM_CTXT_INCONNU = -1,
  C_EM_CTXT_CAUTRA = 0,
  C_EM_CTXT_4FLIGHT
};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnTYPES.H
//------------------------------------------------------------------------------

