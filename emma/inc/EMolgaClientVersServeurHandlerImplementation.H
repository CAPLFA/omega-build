/*******************************************************************************
 * \file           EMolgaClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaClientVersServeurHandlerImplementation_H
#define __EMolgaClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMolgaClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMolga_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMolga_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMolga_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMolga_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void abonne_confOpe()
      throw(CORBA::SystemException);

    virtual void abonne_confOpe_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_nivTrans()
      throw(CORBA::SystemException);

    virtual void abonne_nivTrans_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_confOpe()
      throw(CORBA::SystemException);

    virtual void modifie_confOpe_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_nivTrans()
      throw(CORBA::SystemException);

    virtual void modifie_nivTrans_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_confOpe()
      throw(CORBA::SystemException);

    virtual void fin_abonne_confOpe_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_nivTrans()
      throw(CORBA::SystemException);

    virtual void fin_abonne_nivTrans_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

