/*******************************************************************************
 * \file           EMplnClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnClientVersServeurHandlerImplementation_H
#define __EMplnClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMplnClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMpln_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMpln_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMpln_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMpln_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void abonne_pln()
      throw(CORBA::SystemException);

    virtual void abonne_pln_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_transaction()
      throw(CORBA::SystemException);

    virtual void consulte_transaction_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_requete()
      throw(CORBA::SystemException);

    virtual void consulte_requete_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_strip()
      throw(CORBA::SystemException);

    virtual void abonne_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_pln()
      throw(CORBA::SystemException);

    virtual void fin_abonne_pln_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_abonne_pln()
      throw(CORBA::SystemException);

    virtual void modifie_abonne_pln_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_strip()
      throw(CORBA::SystemException);

    virtual void fin_abonne_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

