/*******************************************************************************
 * \file           EMsvc_01ServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_01.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMsvc_01ServeurVersClientImplementation_H
#define __EMsvc_01ServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMsvc_01ServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMsvc_01_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMsvc_01_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service svc_01 pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service svc_01.
    virtual void envoi_objetChaine(
        const EMobjetChaineData_v3_0_0& p_objetChaine
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void envoi_objetBase(
        const EMobjetBaseData_v3_0_0& p_objetBase
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void envoi_objetMultiple(
        const EMobjetMultipleData_v3_0_0& p_objetMultiple
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void envoi_objetCompose(
        const EMobjetComposeData_v3_0_0& p_objetCompose
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void reponse_objetChaine(
        const EMobjetChaineData_v3_0_0& p_objetChaine,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void reponse_objetBase(
        const EMobjetBaseData_v3_0_0& p_objetBase,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void reponse_objetMultiple(
        const EMobjetMultipleData_v3_0_0& p_objetMultiple,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_01.
    virtual void reponse_objetCompose(
        const EMobjetComposeData_v3_0_0& p_objetCompose,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_01ServeurVersClientImplementation.H
//------------------------------------------------------------------------------

