/*******************************************************************************
 * \file           EMpisteClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteClientVersServeurHandlerImplementation_H
#define __EMpisteClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMpisteClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMpiste_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMpiste_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMpiste_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMpiste_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void abonne_piste()
      throw(CORBA::SystemException);

    virtual void abonne_piste_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_piste()
      throw(CORBA::SystemException);

    virtual void consulte_piste_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_piste()
      throw(CORBA::SystemException);

    virtual void fin_abonne_piste_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

