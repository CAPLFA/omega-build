/*******************************************************************************
 * \file           EMdasServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasServeurVersClientImplementation_H
#define __EMdasServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMdasServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMdas_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMdas_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service das pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service das.
    virtual void notifie_das(
        const EMdasData_v3_0_0& pDas,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service das.
    virtual void signale_info(
        CORBA::Long nErreur,
        const char* gMessage,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service das.
    virtual void fin_ini_abo_das(
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasServeurVersClientImplementation.H
//------------------------------------------------------------------------------

