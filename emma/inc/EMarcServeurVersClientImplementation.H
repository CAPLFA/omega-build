/*******************************************************************************
 * \file           EMarcServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcServeurVersClientImplementation_H
#define __EMarcServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMarcServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMarc_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMarc_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service arc pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service arc.
    virtual void cree_archive(
        CORBA::Long nResuSigma,
        const EMarchiveData_v3_0_0& p_archive,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void supprime_archive(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void liste_archive(
        const EMarchiveData_v3_0_0& p_archive,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void fin_liste_archive(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void notifie_archive(
        const EMarchiveData_v3_0_0& p_archive,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void fin_ini_abo_archive(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void fin_abonne_archive(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service arc.
    virtual void evenement_archive(
        const EMarchiveData_v3_0_0& p_archive,
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
//  Fin du fichier EMarcServeurVersClientImplementation.H
//------------------------------------------------------------------------------

