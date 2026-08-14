/*******************************************************************************
 * \file           EMmtoClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoClientVersServeurHandlerImplementation_H
#define __EMmtoClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmtoClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMmto_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMmto_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMmto_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMmto_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void consulte_mtopub()
      throw(CORBA::SystemException);

    virtual void consulte_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_mtopub()
      throw(CORBA::SystemException);

    virtual void abonne_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtopub()
      throw(CORBA::SystemException);

    virtual void evenement_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_mtoqnh()
      throw(CORBA::SystemException);

    virtual void abonne_mtoqnh_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_mtoloc()
      throw(CORBA::SystemException);

    virtual void cree_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_mtoloc()
      throw(CORBA::SystemException);

    virtual void consulte_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_mtoloc()
      throw(CORBA::SystemException);

    virtual void abonne_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtoloc()
      throw(CORBA::SystemException);

    virtual void evenement_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_mtozone()
      throw(CORBA::SystemException);

    virtual void cree_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_mtozone()
      throw(CORBA::SystemException);

    virtual void liste_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtozone()
      throw(CORBA::SystemException);

    virtual void evenement_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_qira()
      throw(CORBA::SystemException);

    virtual void cree_qira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_repira()
      throw(CORBA::SystemException);

    virtual void supprime_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_repira()
      throw(CORBA::SystemException);

    virtual void abonne_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtopub()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtoqnh()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtoqnh_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtoloc()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_repira()
      throw(CORBA::SystemException);

    virtual void fin_abonne_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

