/*******************************************************************************
 * \file           EMrsftaServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaServeurVersClientImplementation_H
#define __EMrsftaServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMrsftaServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMrsfta_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMrsfta_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service rsfta pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_exploite(
        CORBA::Long nResuSigma,
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_exploite(
        CORBA::Long nResuSigma,
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_liste_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void notifie_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_ini_abo_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void signale_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void connexion_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_connexion_msg_exploite(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void evenement_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_transmis(
        CORBA::Long nResuSigma,
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_transmis(
        CORBA::Long nResuSigma,
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_liste_msg_transmis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void notifie_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_ini_abo_msg_transmis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_transmis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void signale_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void connexion_msg_transmis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_connexion_msg_transmis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_preredige(
        CORBA::Long nResuSigma,
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void modifie_msg_preredige(
        CORBA::Long nResuSigma,
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_msg_preredige(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_preredige(
        CORBA::Long nResuSigma,
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_liste_msg_preredige(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_cpladr(
        CORBA::Long nResuSigma,
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void modifie_cpladr(
        CORBA::Long nResuSigma,
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_cpladr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void notifie_cpladr(
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_ini_abo_cpladr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_cpladr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_bals(
        CORBA::Long nResuSigma,
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void notifie_msg_bals(
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_ini_abo_msg_bals(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_bals(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void evenement_msg_bals(
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaServeurVersClientImplementation.H
//------------------------------------------------------------------------------

