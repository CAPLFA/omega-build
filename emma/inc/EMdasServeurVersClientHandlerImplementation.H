/*******************************************************************************
 * \file           EMdasServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasServeurVersClientHandlerImplementation_H
#define __EMdasServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMdasServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMdas_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMdas_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMdas_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMdas_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void notifie_das()
      throw(CORBA::SystemException);

    virtual void notifie_das_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_info()
      throw(CORBA::SystemException);

    virtual void signale_info_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_das()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_das_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

