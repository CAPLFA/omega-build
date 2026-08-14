/*******************************************************************************
 * \file           EMmassifServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifServeurVersClientHandlerImplementation_H
#define __EMmassifServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmassifServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMmassif_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMmassif_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMmassif_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMmassif_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void notifie_vol()
      throw(CORBA::SystemException);

    virtual void notifie_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void repond_reponse()
      throw(CORBA::SystemException);

    virtual void repond_reponse_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void repond_repStip()
      throw(CORBA::SystemException);

    virtual void repond_repStip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void repond_repMult()
      throw(CORBA::SystemException);

    virtual void repond_repMult_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_info()
      throw(CORBA::SystemException);

    virtual void signale_info_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_vol()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

