/*******************************************************************************
 * \file           EMifgClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgClientVersServeurHandlerImplementation_H
#define __EMifgClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMifgClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMifg_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMifg_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMifg_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMifg_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_infoad()
      throw(CORBA::SystemException);

    virtual void cree_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_infoad()
      throw(CORBA::SystemException);

    virtual void abonne_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_infoatis()
      throw(CORBA::SystemException);

    virtual void abonne_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_infoatis()
      throw(CORBA::SystemException);

    virtual void evenement_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_regulation()
      throw(CORBA::SystemException);

    virtual void consulte_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_regulation()
      throw(CORBA::SystemException);

    virtual void abonne_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_regulation()
      throw(CORBA::SystemException);

    virtual void evenement_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_infosynth()
      throw(CORBA::SystemException);

    virtual void cree_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_infosynth()
      throw(CORBA::SystemException);

    virtual void abonne_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_infotexte()
      throw(CORBA::SystemException);

    virtual void cree_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_infotexte()
      throw(CORBA::SystemException);

    virtual void abonne_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_code_infra()
      throw(CORBA::SystemException);

    virtual void modifie_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_code_infra()
      throw(CORBA::SystemException);

    virtual void abonne_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infoad()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infoatis()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_regulation()
      throw(CORBA::SystemException);

    virtual void fin_abonne_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infosynth()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infotexte()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_code_infra()
      throw(CORBA::SystemException);

    virtual void fin_abonne_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

