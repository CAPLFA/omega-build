/*******************************************************************************
 * \file           EMspyClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspyClientVersServeurHandlerImplementation_H
#define __EMspyClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMspyClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMspy_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMspy_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMspy_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMspy_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void setNiveauTrace()
      throw(CORBA::SystemException);

    virtual void setNiveauTrace_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void setEtatFonction()
      throw(CORBA::SystemException);

    virtual void setEtatFonction_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void setConfig()
      throw(CORBA::SystemException);

    virtual void setConfig_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void traceEtat()
      throw(CORBA::SystemException);

    virtual void traceEtat_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void traceConfig()
      throw(CORBA::SystemException);

    virtual void traceConfig_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void traceTimer()
      throw(CORBA::SystemException);

    virtual void traceTimer_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void traceFD()
      throw(CORBA::SystemException);

    virtual void traceFD_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void trace()
      throw(CORBA::SystemException);

    virtual void trace_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMspyClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

