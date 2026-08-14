/*******************************************************************************
 * \file           EMcdvClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvClientVersServeurHandlerImplementation_H
#define __EMcdvClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcdvClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMcdv_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMcdv_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMcdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMcdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_vol_complet()
      throw(CORBA::SystemException);

    virtual void cree_vol_complet_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_vol_complet()
      throw(CORBA::SystemException);

    virtual void modifie_vol_complet_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_vol_complet()
      throw(CORBA::SystemException);

    virtual void supprime_vol_complet_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_vol_complet()
      throw(CORBA::SystemException);

    virtual void consulte_vol_complet_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_vol_complet()
      throw(CORBA::SystemException);

    virtual void liste_vol_complet_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcdvClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

