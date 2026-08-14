/*******************************************************************************
 * \file           EMgmsServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsServeurVersClientImplementation_H
#define __EMgmsServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMgmsServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMgms_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMgms_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service gms pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service gms.
    virtual void cree_message(
        CORBA::Long nResuSigma,
        const EMmessageData_v3_0_0& p_message,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service gms.
    virtual void modifie_message(
        CORBA::Long nResuSigma,
        const EMmessageData_v3_0_0& p_message,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service gms.
    virtual void notifie_message(
        const EMmessageData_v3_0_0& p_message,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service gms.
    virtual void fin_ini_abo_message(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service gms.
    virtual void fin_abonne_message(
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
//  Fin du fichier EMgmsServeurVersClientImplementation.H
//------------------------------------------------------------------------------

