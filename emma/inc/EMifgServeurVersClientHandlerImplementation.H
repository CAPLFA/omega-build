/*******************************************************************************
 * \file           EMifgServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgServeurVersClientHandlerImplementation_H
#define __EMifgServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMifgServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMifg_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMifg_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMifg_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMifg_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_infoad()
      throw(CORBA::SystemException);

    virtual void cree_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_infoad()
      throw(CORBA::SystemException);

    virtual void notifie_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_infoad()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infoad()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infoad_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_infoatis()
      throw(CORBA::SystemException);

    virtual void notifie_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_infoatis()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infoatis()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_infoatis()
      throw(CORBA::SystemException);

    virtual void evenement_infoatis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_regulation()
      throw(CORBA::SystemException);

    virtual void consulte_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_regulation()
      throw(CORBA::SystemException);

    virtual void notifie_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_regulation()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_regulation()
      throw(CORBA::SystemException);

    virtual void fin_abonne_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_regulation()
      throw(CORBA::SystemException);

    virtual void evenement_regulation_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_infosynth()
      throw(CORBA::SystemException);

    virtual void cree_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_infosynth()
      throw(CORBA::SystemException);

    virtual void notifie_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_infosynth()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infosynth()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infosynth_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_infotexte()
      throw(CORBA::SystemException);

    virtual void cree_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_infotexte()
      throw(CORBA::SystemException);

    virtual void notifie_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_infotexte()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_infotexte()
      throw(CORBA::SystemException);

    virtual void fin_abonne_infotexte_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_code_infra()
      throw(CORBA::SystemException);

    virtual void modifie_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_code_infra()
      throw(CORBA::SystemException);

    virtual void notifie_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_code_infra()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_code_infra()
      throw(CORBA::SystemException);

    virtual void fin_abonne_code_infra_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

