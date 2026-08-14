/*******************************************************************************
 * \file           EMarcServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcServeurVersClientHandlerImplementation_H
#define __EMarcServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMarcServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMarc_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMarc_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMarc_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMarc_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_archive()
      throw(CORBA::SystemException);

    virtual void cree_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_archive()
      throw(CORBA::SystemException);

    virtual void supprime_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_archive()
      throw(CORBA::SystemException);

    virtual void liste_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_archive()
      throw(CORBA::SystemException);

    virtual void fin_liste_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_archive()
      throw(CORBA::SystemException);

    virtual void notifie_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_archive()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_archive()
      throw(CORBA::SystemException);

    virtual void fin_abonne_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_archive()
      throw(CORBA::SystemException);

    virtual void evenement_archive_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMarcServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

