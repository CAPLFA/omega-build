/*******************************************************************************
 * \file           EMntmServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmServeurVersClientHandlerImplementation_H
#define __EMntmServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMntmServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMntm_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMntm_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMntm_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMntm_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void consulte_notam()
      throw(CORBA::SystemException);

    virtual void consulte_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_notam()
      throw(CORBA::SystemException);

    virtual void liste_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_notam()
      throw(CORBA::SystemException);

    virtual void fin_liste_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_notam()
      throw(CORBA::SystemException);

    virtual void notifie_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_notam()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_notam()
      throw(CORBA::SystemException);

    virtual void fin_abonne_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_notam()
      throw(CORBA::SystemException);

    virtual void evenement_notam_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

