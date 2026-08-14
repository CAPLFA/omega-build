/*******************************************************************************
 * \file           EMifgServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgServeurVersClientImplementation_H
#define __EMifgServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMifgServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMifg_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMifg_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service ifg pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infoad(
        CORBA::Long nResuSigma,
        const EMinfoadData_v3_0_0& p_infoad,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_infoad(
        const EMinfoadData_v3_0_0& p_infoad,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_infoad(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infoad(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_infoatis(
        const EMinfoatisData_v3_0_0& p_infoatis,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_infoatis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infoatis(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void evenement_infoatis(
        const EMinfoatisData_v3_0_0& p_infoatis,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void consulte_regulation(
        CORBA::Long nResuSigma,
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_regulation(
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_regulation(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_regulation(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void evenement_regulation(
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infosynth(
        CORBA::Long nResuSigma,
        const EMinfosynthData_v3_0_0& p_infosynth,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_infosynth(
        const EMinfosynthData_v3_0_0& p_infosynth,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_infosynth(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infosynth(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infotexte(
        CORBA::Long nResuSigma,
        const EMinfotexteData_v3_0_0& p_infotexte,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_infotexte(
        const EMinfotexteData_v3_0_0& p_infotexte,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_infotexte(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infotexte(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void modifie_code_infra(
        CORBA::Long nResuSigma,
        const EMcode_infraData_v3_0_0& p_code_infra,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void notifie_code_infra(
        const EMcode_infraData_v3_0_0& p_code_infra,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_ini_abo_code_infra(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_code_infra(
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
//  Fin du fichier EMifgServeurVersClientImplementation.H
//------------------------------------------------------------------------------

