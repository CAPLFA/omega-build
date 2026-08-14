/*******************************************************************************
 * \file           EMdasClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasClientVersServeurHandlerImplementation_H
#define __EMdasClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMdasClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMdas_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMdas_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMdas_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMdas_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void abonne_das()
      throw(CORBA::SystemException);

    virtual void abonne_das_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_das()
      throw(CORBA::SystemException);

    virtual void fin_abonne_das_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

