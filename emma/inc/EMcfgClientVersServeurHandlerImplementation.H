/*******************************************************************************
 * \file           EMcfgClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgClientVersServeurHandlerImplementation_H
#define __EMcfgClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcfgClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMcfg_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMcfg_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMcfg_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMcfg_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_config()
      throw(CORBA::SystemException);

    virtual void cree_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_config()
      throw(CORBA::SystemException);

    virtual void modifie_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_config()
      throw(CORBA::SystemException);

    virtual void supprime_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_config()
      throw(CORBA::SystemException);

    virtual void consulte_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_config()
      throw(CORBA::SystemException);

    virtual void liste_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_config()
      throw(CORBA::SystemException);

    virtual void abonne_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_config()
      throw(CORBA::SystemException);

    virtual void evenement_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_poslog()
      throw(CORBA::SystemException);

    virtual void cree_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_poslog()
      throw(CORBA::SystemException);

    virtual void modifie_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_poslog()
      throw(CORBA::SystemException);

    virtual void consulte_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_poslog()
      throw(CORBA::SystemException);

    virtual void liste_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_poslog()
      throw(CORBA::SystemException);

    virtual void abonne_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_config()
      throw(CORBA::SystemException);

    virtual void fin_abonne_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_poslog()
      throw(CORBA::SystemException);

    virtual void fin_abonne_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

