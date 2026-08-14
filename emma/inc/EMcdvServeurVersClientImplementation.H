/*******************************************************************************
 * \file           EMcdvServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvServeurVersClientImplementation_H
#define __EMcdvServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcdvServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMcdv_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMcdv_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service cdv pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service cdv.
    virtual void cree_vol_complet(
        CORBA::Long nResuSigma,
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void modifie_vol_complet(
        CORBA::Long nResuSigma,
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void supprime_vol_complet(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void consulte_vol_complet(
        CORBA::Long nResuSigma,
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void liste_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void fin_liste_vol_complet(
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
//  Fin du fichier EMcdvServeurVersClientImplementation.H
//------------------------------------------------------------------------------

