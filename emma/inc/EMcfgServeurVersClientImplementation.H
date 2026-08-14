/*******************************************************************************
 * \file           EMcfgServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgServeurVersClientImplementation_H
#define __EMcfgServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcfgServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMcfg_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMcfg_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service cfg pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service cfg.
    virtual void cree_config(
        CORBA::Long nResuSigma,
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void modifie_config(
        CORBA::Long nResuSigma,
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void supprime_config(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void consulte_config(
        CORBA::Long nResuSigma,
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void liste_config(
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_liste_config(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void notifie_config(
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_ini_abo_config(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_abonne_config(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void evenement_config(
        const EMconfigData_v3_0_0& p_config,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void cree_poslog(
        CORBA::Long nResuSigma,
        const EMposlogData_v3_0_0& p_poslog,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void modifie_poslog(
        CORBA::Long nResuSigma,
        const EMposlogData_v3_0_0& p_poslog,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void consulte_poslog(
        CORBA::Long nResuSigma,
        const EMposlogData_v3_0_0& p_poslog,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void liste_poslog(
        const EMposlogData_v3_0_0& p_poslog,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_liste_poslog(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void notifie_poslog(
        const EMposlogData_v3_0_0& p_poslog,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_ini_abo_poslog(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cfg.
    virtual void fin_abonne_poslog(
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
//  Fin du fichier EMcfgServeurVersClientImplementation.H
//------------------------------------------------------------------------------

