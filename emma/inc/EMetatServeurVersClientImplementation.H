/*******************************************************************************
 * \file           EMetatServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatServeurVersClientImplementation_H
#define __EMetatServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMetatServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMetat_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMetat_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service etat pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service etat.
    virtual void notifie_etat(
        const EMetatData_v3_0_0& pEtat,
        CORBA::Long eNotif,
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service etat.
    virtual void repond_etat(
        const EMetatData_v3_0_0& pEtat,
        CORBA::Long nIdRequete
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service etat.
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
//  Fin du fichier EMetatServeurVersClientImplementation.H
//------------------------------------------------------------------------------

