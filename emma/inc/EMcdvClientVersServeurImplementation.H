/*******************************************************************************
 * \file           EMcdvClientVersServeurImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvClientVersServeurImplementation_H
#define __EMcdvClientVersServeurImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcdvClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMcdv_v3_0_0_ClientVersServeurImplementation :
    public POA_emma_corba::EMcdv_v3_0_0_ClientVersServeur {


public:

    //---------- Operations declarees dans le fichier IDL --------------

    //------------------------------------------------------------
    /// Méthodes héritées de l'interface "Client"
    //------------------------------------------------------------

    //------------------------------------------------------------
    /*! Retourne le résultat de la demande d'activation passée au
     *  serveur cdv.
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
    /// Opérations métiers. Cf. DDI du service cdv pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service cdv.
    virtual void cree_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void modifie_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void supprime_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void consulte_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
        CORBA::Long nIdOp,
        CORBA::Long nIdClient
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service cdv.
    virtual void liste_vol_complet(
        const EMvol_completData_v3_0_0& p_vol_complet,
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
//  Fin du fichier EMcdvClientVersServeurImplementation.H
//------------------------------------------------------------------------------

