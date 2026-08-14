/*******************************************************************************
 * \file           EMpdvClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvClientVersServeurHandlerImplementation_H
#define __EMpdvClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMpdvClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMpdv_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMpdv_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMpdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMpdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_ddv()
      throw(CORBA::SystemException);

    virtual void cree_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_ddv()
      throw(CORBA::SystemException);

    virtual void modifie_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_ddv()
      throw(CORBA::SystemException);

    virtual void consulte_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_ddv()
      throw(CORBA::SystemException);

    virtual void liste_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_ddv()
      throw(CORBA::SystemException);

    virtual void abonne_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_ddv()
      throw(CORBA::SystemException);

    virtual void evenement_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_dvr()
      throw(CORBA::SystemException);

    virtual void liste_dvr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_ddvmsg()
      throw(CORBA::SystemException);

    virtual void cree_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_ddvmsg()
      throw(CORBA::SystemException);

    virtual void supprime_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_ddvmsg()
      throw(CORBA::SystemException);

    virtual void liste_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void abonne_ddvmsg()
      throw(CORBA::SystemException);

    virtual void abonne_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_ddvmsg()
      throw(CORBA::SystemException);

    virtual void evenement_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_ddv_infotact()
      throw(CORBA::SystemException);

    virtual void consulte_ddv_infotact_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_ddv()
      throw(CORBA::SystemException);

    virtual void fin_abonne_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_ddvmsg()
      throw(CORBA::SystemException);

    virtual void fin_abonne_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

