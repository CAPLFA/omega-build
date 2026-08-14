/*******************************************************************************
 * \file           EMpdvServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvServeurVersClientImplementation_H
#define __EMpdvServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMpdvServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMpdv_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMpdv_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service pdv pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service pdv.
    virtual void cree_ddv(
        CORBA::Long nResuSigma,
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void modifie_ddv(
        CORBA::Long nResuSigma,
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void consulte_ddv(
        CORBA::Long nResuSigma,
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void liste_ddv(
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_liste_ddv(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void notifie_ddv(
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_ini_abo_ddv(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_abonne_ddv(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void evenement_ddv(
        const EMddvData_v3_0_0& p_ddv,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void liste_dvr(
        const EMdvrData_v3_0_0& p_dvr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_liste_dvr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void cree_ddvmsg(
        CORBA::Long nResuSigma,
        const EMddvmsgData_v3_0_0& p_ddvmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void supprime_ddvmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void liste_ddvmsg(
        const EMddvmsgData_v3_0_0& p_ddvmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_liste_ddvmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void notifie_ddvmsg(
        const EMddvmsgData_v3_0_0& p_ddvmsg,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_ini_abo_ddvmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void fin_abonne_ddvmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void evenement_ddvmsg(
        const EMddvmsgData_v3_0_0& p_ddvmsg,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pdv.
    virtual void consulte_ddv_infotact(
        CORBA::Long nResuSigma,
        const EMddv_infotactData_v3_0_0& p_ddv_infotact,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvServeurVersClientImplementation.H
//------------------------------------------------------------------------------

