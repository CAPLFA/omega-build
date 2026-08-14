/*******************************************************************************
 * \file           EMolgaServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaServeurVersClientImplementation_H
#define __EMolgaServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMolgaServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMolga_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMolga_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service olga pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service olga.
    virtual void notifie_confOpe(
        const EMconfOpeData_v3_0_0& pConfOpe,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service olga.
    virtual void notifie_nivTrans(
        const EMnivTransData_v3_0_0& pNivTrans,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service olga.
    virtual void signale_info(
        CORBA::Long nStatus,
        const char* gMessage,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaServeurVersClientImplementation.H
//------------------------------------------------------------------------------

