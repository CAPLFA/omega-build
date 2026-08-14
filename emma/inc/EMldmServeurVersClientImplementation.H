/*******************************************************************************
 * \file           EMldmServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmServeurVersClientImplementation_H
#define __EMldmServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMldmServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMldm_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMldm_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service ldm pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service ldm.
    virtual void cree_mvt(
        CORBA::Long nResuSigma,
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void modifie_mvt(
        CORBA::Long nResuSigma,
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void consulte_mvt(
        CORBA::Long nResuSigma,
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void liste_mvt(
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_liste_mvt(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void notifie_mvt(
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_ini_abo_mvt(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_abonne_mvt(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void signale_mvt(
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void connexion_mvt(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_connexion_mvt(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void evenement_mvt(
        const EMmvtData_v3_0_0& p_mvt,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void modifie_mvtmsg(
        CORBA::Long nResuSigma,
        const EMmvtmsgData_v3_0_0& p_mvtmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void supprime_mvtmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void liste_mvtmsg(
        const EMmvtmsgData_v3_0_0& p_mvtmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_liste_mvtmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void notifie_mvtmsg(
        const EMmvtmsgData_v3_0_0& p_mvtmsg,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_ini_abo_mvtmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void fin_abonne_mvtmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void evenement_mvtmsg(
        const EMmvtmsgData_v3_0_0& p_mvtmsg,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ldm.
    virtual void evenement_mvtssr(
        const EMmvtssrData_v3_0_0& p_mvtssr,
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
//  Fin du fichier EMldmServeurVersClientImplementation.H
//------------------------------------------------------------------------------

