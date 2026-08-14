/*******************************************************************************
 * \file           EMcfgServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgServeurVersClientHandlerImplementation_H
#define __EMcfgServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMcfgServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMcfg_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMcfg_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMcfg_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMcfg_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_config()
      throw(CORBA::SystemException);

    virtual void cree_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_config()
      throw(CORBA::SystemException);

    virtual void modifie_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_config()
      throw(CORBA::SystemException);

    virtual void supprime_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_config()
      throw(CORBA::SystemException);

    virtual void consulte_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_config()
      throw(CORBA::SystemException);

    virtual void liste_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_config()
      throw(CORBA::SystemException);

    virtual void fin_liste_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_config()
      throw(CORBA::SystemException);

    virtual void notifie_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_config()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_config()
      throw(CORBA::SystemException);

    virtual void fin_abonne_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_config()
      throw(CORBA::SystemException);

    virtual void evenement_config_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_poslog()
      throw(CORBA::SystemException);

    virtual void cree_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_poslog()
      throw(CORBA::SystemException);

    virtual void modifie_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_poslog()
      throw(CORBA::SystemException);

    virtual void consulte_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_poslog()
      throw(CORBA::SystemException);

    virtual void liste_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_poslog()
      throw(CORBA::SystemException);

    virtual void fin_liste_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_poslog()
      throw(CORBA::SystemException);

    virtual void notifie_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_poslog()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_poslog()
      throw(CORBA::SystemException);

    virtual void fin_abonne_poslog_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

