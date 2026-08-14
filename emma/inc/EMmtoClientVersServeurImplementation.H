/*******************************************************************************
 * \file           EMmtoClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoClientVersServeurImplementation_H
#define __EMmtoClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmtoClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMmto_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMmto_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur mto.
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
    /// Opérations métiers. Cf. DDI du service mto pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service mto.
    virtual void consulte_mtopub(
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void abonne_mtopub(
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtopub(
        const EMmtopubData_v3_0_0& p_mtopub,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void abonne_mtoqnh(
        const EMmtoqnhData_v3_0_0& p_mtoqnh,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void consulte_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void abonne_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtoloc(
        const EMmtolocData_v3_0_0& p_mtoloc,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_mtozone(
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void liste_mtozone(
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void evenement_mtozone(
        const EMmtozoneData_v3_0_0& p_mtozone,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void cree_qira(
        const EMqiraData_v3_0_0& p_qira,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void supprime_repira(
        const EMrepiraData_v3_0_0& p_repira,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void abonne_repira(
        const EMrepiraData_v3_0_0& p_repira,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtopub(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtoqnh(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_mtoloc(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service mto.
    virtual void fin_abonne_repira(
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
//  Fin du fichier EMmtoClientVersServeurImplementation.H
//------------------------------------------------------------------------------

