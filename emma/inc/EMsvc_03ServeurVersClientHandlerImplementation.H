/*******************************************************************************
 * \file           EMsvc_03ServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_03.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_03ServeurVersClientHandlerImplementation_H
#define __EMsvc_03ServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMsvc_03ServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMsvc_03_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMsvc_03_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMsvc_03_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMsvc_03_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void envoi_objetChaine()
      throw(CORBA::SystemException);

    virtual void envoi_objetChaine_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void envoi_objetBase()
      throw(CORBA::SystemException);

    virtual void envoi_objetBase_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void envoi_objetMultiple()
      throw(CORBA::SystemException);

    virtual void envoi_objetMultiple_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void envoi_objetCompose()
      throw(CORBA::SystemException);

    virtual void envoi_objetCompose_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void reponse_objetChaine()
      throw(CORBA::SystemException);

    virtual void reponse_objetChaine_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void reponse_objetBase()
      throw(CORBA::SystemException);

    virtual void reponse_objetBase_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void reponse_objetMultiple()
      throw(CORBA::SystemException);

    virtual void reponse_objetMultiple_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void reponse_objetCompose()
      throw(CORBA::SystemException);

    virtual void reponse_objetCompose_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_03ServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

