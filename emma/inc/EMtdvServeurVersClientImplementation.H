/*******************************************************************************
 * \file           EMtdvServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvServeurVersClientImplementation_H
#define __EMtdvServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMtdvServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMtdv_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMtdv_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service tdv pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service tdv.
    virtual void cree_vol(
        CORBA::Long nResuSigma,
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void modifie_vol(
        CORBA::Long nResuSigma,
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void consulte_vol(
        CORBA::Long nResuSigma,
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void liste_vol(
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_liste_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void notifie_vol(
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_ini_abo_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_abonne_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void signale_vol(
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void connexion_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_connexion_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void evenement_vol(
        const EMvolData_v3_0_0& p_vol,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void cree_vlr(
        CORBA::Long nResuSigma,
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void modifie_vlr(
        CORBA::Long nResuSigma,
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void consulte_vlr(
        CORBA::Long nResuSigma,
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void liste_vlr(
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_liste_vlr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void notifie_vlr(
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_ini_abo_vlr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_abonne_vlr(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void evenement_vlr(
        const EMvlrData_v3_0_0& p_vlr,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void cree_volalarme(
        CORBA::Long nResuSigma,
        const EMvolalarmeData_v3_0_0& p_volalarme,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void modifie_volalarme(
        CORBA::Long nResuSigma,
        const EMvolalarmeData_v3_0_0& p_volalarme,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void consulte_volalarme(
        CORBA::Long nResuSigma,
        const EMvolalarmeData_v3_0_0& p_volalarme,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void notifie_volalarme(
        const EMvolalarmeData_v3_0_0& p_volalarme,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_ini_abo_volalarme(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_abonne_volalarme(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void evenement_volalarme(
        const EMvolalarmeData_v3_0_0& p_volalarme,
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void cree_volmsg(
        CORBA::Long nResuSigma,
        const EMvolmsgData_v3_0_0& p_volmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void supprime_volmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void liste_volmsg(
        const EMvolmsgData_v3_0_0& p_volmsg,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_liste_volmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void notifie_volmsg(
        const EMvolmsgData_v3_0_0& p_volmsg,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_ini_abo_volmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_abonne_volmsg(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void signale_strip_vol(
        const EMstrip_volData_v3_0_0& p_strip_vol,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void connexion_strip_vol(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service tdv.
    virtual void fin_connexion_strip_vol(
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
//  Fin du fichier EMtdvServeurVersClientImplementation.H
//------------------------------------------------------------------------------

