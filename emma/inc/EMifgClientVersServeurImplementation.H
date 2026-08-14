/*******************************************************************************
 * \file           EMifgClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgClientVersServeurImplementation_H
#define __EMifgClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMifgClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMifg_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMifg_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur ifg.
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
    /// Opérations métiers. Cf. DDI du service ifg pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infoad(
        const EMinfoadData_v3_0_0& p_infoad,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_infoad(
        const EMinfoadData_v3_0_0& p_infoad,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_infoatis(
        const EMinfoatisData_v3_0_0& p_infoatis,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void evenement_infoatis(
        const EMinfoatisData_v3_0_0& p_infoatis,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void consulte_regulation(
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_regulation(
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void evenement_regulation(
        const EMregulationData_v3_0_0& p_regulation,
        CORBA::Long nEvent,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infosynth(
        const EMinfosynthData_v3_0_0& p_infosynth,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_infosynth(
        const EMinfosynthData_v3_0_0& p_infosynth,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void cree_infotexte(
        const EMinfotexteData_v3_0_0& p_infotexte,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_infotexte(
        const EMinfotexteData_v3_0_0& p_infotexte,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void modifie_code_infra(
        const EMcode_infraData_v3_0_0& p_code_infra,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void abonne_code_infra(
        const EMcode_infraData_v3_0_0& p_code_infra,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infoad(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infoatis(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_regulation(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infosynth(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_infotexte(
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service ifg.
    virtual void fin_abonne_code_infra(
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
//  Fin du fichier EMifgClientVersServeurImplementation.H
//------------------------------------------------------------------------------

