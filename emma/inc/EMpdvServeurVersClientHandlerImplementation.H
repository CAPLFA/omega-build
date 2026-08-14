/*******************************************************************************
 * \file           EMpdvServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvServeurVersClientHandlerImplementation_H
#define __EMpdvServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMpdvServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMpdv_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMpdv_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMpdv_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMpdv_v3_0_0_ServeurVersClientHandlerImplementation(void){};


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


    virtual void fin_liste_ddv()
      throw(CORBA::SystemException);

    virtual void fin_liste_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_ddv()
      throw(CORBA::SystemException);

    virtual void notifie_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_ddv()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_ddv()
      throw(CORBA::SystemException);

    virtual void fin_abonne_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_ddv()
      throw(CORBA::SystemException);

    virtual void evenement_ddv_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_dvr()
      throw(CORBA::SystemException);

    virtual void liste_dvr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_dvr()
      throw(CORBA::SystemException);

    virtual void fin_liste_dvr_excep(::Messaging::ExceptionHolder* excep_holder)
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


    virtual void fin_liste_ddvmsg()
      throw(CORBA::SystemException);

    virtual void fin_liste_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_ddvmsg()
      throw(CORBA::SystemException);

    virtual void notifie_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_ddvmsg()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_ddvmsg()
      throw(CORBA::SystemException);

    virtual void fin_abonne_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_ddvmsg()
      throw(CORBA::SystemException);

    virtual void evenement_ddvmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_ddv_infotact()
      throw(CORBA::SystemException);

    virtual void consulte_ddv_infotact_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

