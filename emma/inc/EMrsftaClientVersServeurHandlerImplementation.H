/*******************************************************************************
 * \file           EMrsftaClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaClientVersServeurHandlerImplementation_H
#define __EMrsftaClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMrsftaClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMrsfta_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMrsfta_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMrsfta_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMrsfta_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_msg_exploite()
      throw(CORBA::SystemException);

    virtual void cree_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_msg_exploite()
      throw(CORBA::SystemException);

    virtual void supprime_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_exploite()
      throw(CORBA::SystemException);

    virtual void consulte_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_exploite()
      throw(CORBA::SystemException);

    virtual void liste_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_msg_exploite()
      throw(CORBA::SystemException);

    virtual void abonne_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_msg_exploite()
      throw(CORBA::SystemException);

    virtual void connexion_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_msg_exploite()
      throw(CORBA::SystemException);

    virtual void evenement_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_msg_transmis()
      throw(CORBA::SystemException);

    virtual void cree_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_transmis()
      throw(CORBA::SystemException);

    virtual void consulte_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_transmis()
      throw(CORBA::SystemException);

    virtual void liste_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_msg_transmis()
      throw(CORBA::SystemException);

    virtual void abonne_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_msg_transmis()
      throw(CORBA::SystemException);

    virtual void connexion_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_msg_preredige()
      throw(CORBA::SystemException);

    virtual void cree_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_msg_preredige()
      throw(CORBA::SystemException);

    virtual void modifie_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_msg_preredige()
      throw(CORBA::SystemException);

    virtual void supprime_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_preredige()
      throw(CORBA::SystemException);

    virtual void consulte_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_preredige()
      throw(CORBA::SystemException);

    virtual void liste_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_cpladr()
      throw(CORBA::SystemException);

    virtual void cree_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_cpladr()
      throw(CORBA::SystemException);

    virtual void modifie_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_cpladr()
      throw(CORBA::SystemException);

    virtual void supprime_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_cpladr()
      throw(CORBA::SystemException);

    virtual void abonne_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_bals()
      throw(CORBA::SystemException);

    virtual void consulte_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_msg_bals()
      throw(CORBA::SystemException);

    virtual void abonne_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_msg_bals()
      throw(CORBA::SystemException);

    virtual void evenement_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_connexion_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_connexion_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_cpladr()
      throw(CORBA::SystemException);

    virtual void fin_abonne_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_bals()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

