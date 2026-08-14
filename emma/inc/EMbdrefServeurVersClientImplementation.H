/*******************************************************************************
 * \file           EMbdrefServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefServeurVersClientImplementation_H
#define __EMbdrefServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMbdrefServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMbdref_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMbdref_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service bdref pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_aeronef(
        CORBA::Long nResuSigma,
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_aeronef(
        CORBA::Long nResuSigma,
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_aeronef(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_aeronef(
        CORBA::Long nResuSigma,
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_aeronef(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_dvm(
        CORBA::Long nResuSigma,
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_dvm(
        CORBA::Long nResuSigma,
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_dvm(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_dvm(
        CORBA::Long nResuSigma,
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_dvm(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_preroute(
        CORBA::Long nResuSigma,
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_preroute(
        CORBA::Long nResuSigma,
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_preroute(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_preroute(
        CORBA::Long nResuSigma,
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_preroute(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_typaero(
        CORBA::Long nResuSigma,
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_typaero(
        CORBA::Long nResuSigma,
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_typaero(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_typaero(
        CORBA::Long nResuSigma,
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_typaero(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_point(
        CORBA::Long nResuSigma,
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_point(
        CORBA::Long nResuSigma,
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_point(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_point(
        CORBA::Long nResuSigma,
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_point(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_rt_strip(
        CORBA::Long nResuSigma,
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_rt_strip(
        CORBA::Long nResuSigma,
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_rt_strip(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_rt_strip(
        CORBA::Long nResuSigma,
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_rt_strip(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_aerodrome(
        CORBA::Long nResuSigma,
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_aerodrome(
        CORBA::Long nResuSigma,
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_aerodrome(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_aerodrome(
        CORBA::Long nResuSigma,
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_aerodrome(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_point_trk(
        CORBA::Long nResuSigma,
        const EMpoint_trkData_v3_0_0& p_point_trk,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_point_trk(
        const EMpoint_trkData_v3_0_0& p_point_trk,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_point_trk(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_route_trk(
        CORBA::Long nResuSigma,
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_route_trk(
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_liste_route_trk(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void notifie_route_trk(
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nEvent,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_ini_abo_route_trk(
        CORBA::Long nResuSigma,
        CORBA::Long nIdOp
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_abonne_route_trk(
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
//  Fin du fichier EMbdrefServeurVersClientImplementation.H
//------------------------------------------------------------------------------

