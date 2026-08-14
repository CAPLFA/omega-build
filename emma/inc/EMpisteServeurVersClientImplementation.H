/*******************************************************************************
 * \file           EMpisteServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteServeurVersClientImplementation_H
#define __EMpisteServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMpisteServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMpiste_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMpiste_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service piste pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service piste.
    virtual void notifie_piste(
        const EMpisteData_v3_0_0& pPiste,
        CORBA::Long eNotif,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service piste.
    virtual void repond_piste(
        const EMpisteData_v3_0_0& pPiste,
        CORBA::Long nIdRequete
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service piste.
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
//  Fin du fichier EMpisteServeurVersClientImplementation.H
//------------------------------------------------------------------------------

