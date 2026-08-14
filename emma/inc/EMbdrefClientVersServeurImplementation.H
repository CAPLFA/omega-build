/*******************************************************************************
 * \file           EMbdrefClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefClientVersServeurImplementation_H
#define __EMbdrefClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMbdrefClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMbdref_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMbdref_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur bdref.
     * \param resultat Resultat de l'activation.
     * \param nomApplication Nom de l'application.
     * \param nomHote Nom de la machine d'exécution du serveur.
     * \param referenceServeur Version du service, ainsi que la
     *   référence CORBA permettant d'accéder au serveur.
     * \param numeroClient Numéro attribué au client par le serveur.
     *   Doit être utilisé par EMMA pour permettre l'identification de
     *   l'émetteur par CORBA.
     */
    //------------------------------------------------------------
    virtual void activeCB(int resultat,
                          const char* nomApplication,
                          const char* nomHote,
                          emma_corba::Serveur* referenceServeur,
                          int numeroClient)
      throw(CORBA::SystemException);

    //------------------------------------------------------------
    /*! Indique au client une déconnexion.
     *  \param statut Cause de la déconnexion.
     */
    //------------------------------------------------------------
    virtual void deconnexionCB(int statut)
       throw(CORBA::SystemException);

    virtual void desactiveCB(int)
       throw(CORBA::SystemException);

    virtual void testerConnexionClient( const char* nomService,  
      const char* nomApplication, const char* nomHote, const int idClient) 
        throw (CORBA::SystemException, emma_corba::ServeurDeconnecte);

    virtual void testerConnexionServeur(int numeroClient)
      throw (CORBA::SystemException, emma_corba::ClientDeconnecte);
    //------------------------------------------------------------
    /// Fin des méthodes héritées de l'interface "Client"
    //------------------------------------------------------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service bdref pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_aeronef(
        const EMaeronefData_v3_0_0& p_aeronef,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_dvm(
        const EMdvmData_v3_0_0& p_dvm,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_preroute(
        const EMprerouteData_v3_0_0& p_preroute,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_typaero(
        const EMtypaeroData_v3_0_0& p_typaero,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_point(
        const EMpointData_v3_0_0& p_point,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_rt_strip(
        const EMrt_stripData_v3_0_0& p_rt_strip,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void cree_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void modifie_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void supprime_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_aerodrome(
        const EMaerodromeData_v3_0_0& p_aerodrome,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_point_trk(
        const EMpoint_trkData_v3_0_0& p_point_trk,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_point_trk(
        const EMpoint_trkData_v3_0_0& p_point_trk,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void consulte_route_trk(
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void liste_route_trk(
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void abonne_route_trk(
        const EMroute_trkData_v3_0_0& p_route_trk,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service bdref.
    virtual void fin_abonne_route_trk(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefClientVersServeurImplementation.H
//------------------------------------------------------------------------------

