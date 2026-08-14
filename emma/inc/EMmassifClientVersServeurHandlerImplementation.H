/*******************************************************************************
 * \file           EMmassifClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifClientVersServeurHandlerImplementation_H
#define __EMmassifClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmassifClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMmassif_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMmassif_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMmassif_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMmassif_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void abonne_vol()
      throw(CORBA::SystemException);

    virtual void abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_transaction()
      throw(CORBA::SystemException);

    virtual void consulte_transaction_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_requete()
      throw(CORBA::SystemException);

    virtual void consulte_requete_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_abonne_vol()
      throw(CORBA::SystemException);

    virtual void modifie_abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_vol()
      throw(CORBA::SystemException);

    virtual void fin_abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

