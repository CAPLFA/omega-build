/*******************************************************************************
 * \file           EMntmServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmServeurVersClientImplementation_H
#define __EMntmServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMntmServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMntm_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMntm_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service ntm pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service ntm.
    virtual void consulte_notam(
        CORBA::Long nResuSigma,
        const EMnotamData_v3_0_0& p_notam,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void liste_notam(
        const EMnotamData_v3_0_0& p_notam,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void fin_liste_notam(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void notifie_notam(
        const EMnotamData_v3_0_0& p_notam,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void fin_ini_abo_notam(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void fin_abonne_notam(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ntm.
    virtual void evenement_notam(
        const EMnotamData_v3_0_0& p_notam,
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
//  Fin du fichier EMntmServeurVersClientImplementation.H
//------------------------------------------------------------------------------

