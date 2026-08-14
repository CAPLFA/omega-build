/*******************************************************************************
 * \file           EMrsftaClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaClientVersServeurImplementation_H
#define __EMrsftaClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMrsftaClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMrsfta_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMrsfta_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur rsfta.
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
    /// Opérations métiers. Cf. DDI du service rsfta pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void abonne_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void connexion_msg_exploite(
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void evenement_msg_exploite(
        const EMmsg_exploiteData_v3_0_0& p_msg_exploite,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void abonne_msg_transmis(
        const EMmsg_transmisData_v3_0_0& p_msg_transmis,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void connexion_msg_transmis(
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void modifie_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void liste_msg_preredige(
        const EMmsg_preredigeData_v3_0_0& p_msg_preredige,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void cree_cpladr(
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void modifie_cpladr(
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void supprime_cpladr(
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void abonne_cpladr(
        const EMcpladrData_v3_0_0& p_cpladr,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void consulte_msg_bals(
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void abonne_msg_bals(
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void evenement_msg_bals(
        const EMmsg_balsData_v3_0_0& p_msg_bals,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_exploite(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_connexion_msg_exploite(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_transmis(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_connexion_msg_transmis(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_cpladr(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service rsfta.
    virtual void fin_abonne_msg_bals(
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
//  Fin du fichier EMrsftaClientVersServeurImplementation.H
//------------------------------------------------------------------------------

