/*******************************************************************************
 * \file           EMsvc_02ClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_02.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_02ClientVersServeurImplementation_H
#define __EMsvc_02ClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMsvc_02ClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMsvc_02_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMsvc_02_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur svc_02.
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
    /// Opérations métiers. Cf. DDI du service svc_02 pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service svc_02.
    virtual void requete_objetChaine(
        const EMobjetChaineData_v3_0_0& p_objetChaine,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void requete_objetBase(
        const EMobjetBaseData_v3_0_0& p_objetBase,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void requete_objetMultiple(
        const EMobjetMultipleData_v3_0_0& p_objetMultiple,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void requete_objetCompose(
        const EMobjetComposeData_v3_0_0& p_objetCompose,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void envoi_objetChaine(
        const EMobjetChaineData_v3_0_0& p_objetChaine,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void envoi_objetBase(
        const EMobjetBaseData_v3_0_0& p_objetBase,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void envoi_objetMultiple(
        const EMobjetMultipleData_v3_0_0& p_objetMultiple,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service svc_02.
    virtual void envoi_objetCompose(
        const EMobjetComposeData_v3_0_0& p_objetCompose,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_02ClientVersServeurImplementation.H
//------------------------------------------------------------------------------

