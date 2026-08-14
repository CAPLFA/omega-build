/*******************************************************************************
 * \file           EMmassifTYPES.H
 * Application  :  EMMA
 * Rôle         :  Définition des types énumérés du service massif
 *
 * \author  Fichier généré automatiquement à partir de EMmassifENUMERES.decl
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMMASSIFTYPES_H
#define __EMMASSIFTYPES_H


// ------------------ Definition des types enumeres du projet ---------------


// Type de NOTIFICATION
enum EM_MASSIF_TYPE_NOTIF {
  C_EM_MASSIF_NOTIF_INCONNUE = -1,
  C_EM_MASSIF_CREATION = 0,
  C_EM_MASSIF_MODIFICATION,
  C_EM_MASSIF_SUPPRESSION,
  C_EM_MASSIF_REPONSE,
  C_EM_MASSIF_NB_NOTIF
};

// Type d'ACTION
enum EM_MASSIF_TYPE_ACTION {
  C_EM_TRANS_INCONNU = -1,
  C_EM_STPV_ACT,
  C_EM_STPV_MOD,
  C_EM_STPV_MODT,
  C_EM_STPV_MVT,
  C_EM_STPV_RET,
  C_EM_STPV_CNL,
  C_EM_STPV_RIP,
  C_EM_STPV_FIC,
  C_EM_STPV_ALLOC,
  C_EM_STPV_LIB,
  C_EM_STPV_CLD,
  C_EM_SIG_CRE,
  C_EM_SIG_MOD,
  C_EM_SIG_LSE_DEPART,
  C_EM_SIG_LSE_DEPART_AVEC_DEP,
  C_EM_SIG_LSE_ARRIVE,
  C_EM_SIG_LSE_ARRIVE_AVEC_ARR,
  C_EM_SIG_LSE_STRIP,
  C_EM_SIG_LSE_ANNUL_TOUR,
  C_EM_SIG_LSE_RMG,
  C_EM_SIG_LSE_REVARR,
  C_EM_SIG_LSE_EATARR,
  C_EM_SIG_LSE_TRANSFERT,
  C_EM_SIG_LSE_ACT_JSY,
  C_EM_SIG_LSE_PKG,
  C_EM_SIG_LISTE,
  C_EM_SIG_CONSULTATION,
  C_EM_NB_MASSIF_ACTION
};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifTYPES.H
//------------------------------------------------------------------------------

