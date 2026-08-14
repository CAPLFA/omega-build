/*******************************************************************************
 * \file           EMmtoServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoServeurVersClientImplementation_H
#define __EMmtoServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmtoServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMmto_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMmto_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service mto pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service mto.
    virtual void consulte_mtopub(
        CORBA::Long nResuSigma,
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void notifie_mtopub(
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_ini_abo_mtopub(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtopub(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtopub(
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void notifie_mtoqnh(
        const EMmtoqnhData_v3_0_0& p_mtoqnh,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_ini_abo_mtoqnh(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtoqnh(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_mtoloc(
        CORBA::Long nResuSigma,
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void consulte_mtoloc(
        CORBA::Long nResuSigma,
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void notifie_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_ini_abo_mtoloc(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtoloc(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_mtozone(
        CORBA::Long nResuSigma,
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void liste_mtozone(
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_liste_mtozone(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtozone(
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_qira(
        CORBA::Long nResuSigma,
        const EMqiraData_v3_0_0& p_qira,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void supprime_repira(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void notifie_repira(
        const EMrepiraData_v3_0_0& p_repira,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_ini_abo_repira(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_repira(
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
//  Fin du fichier EMmtoServeurVersClientImplementation.H
//------------------------------------------------------------------------------

