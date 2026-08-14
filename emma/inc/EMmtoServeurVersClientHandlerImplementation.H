/*******************************************************************************
 * \file           EMmtoServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoServeurVersClientHandlerImplementation_H
#define __EMmtoServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmtoServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMmto_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMmto_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMmto_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMmto_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void consulte_mtopub()
      throw(CORBA::SystemException);

    virtual void consulte_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_mtopub()
      throw(CORBA::SystemException);

    virtual void notifie_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_mtopub()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtopub()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtopub()
      throw(CORBA::SystemException);

    virtual void evenement_mtopub_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_mtoqnh()
      throw(CORBA::SystemException);

    virtual void notifie_mtoqnh_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_mtoqnh()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_mtoqnh_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtoqnh()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtoqnh_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_mtoloc()
      throw(CORBA::SystemException);

    virtual void cree_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_mtoloc()
      throw(CORBA::SystemException);

    virtual void consulte_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_mtoloc()
      throw(CORBA::SystemException);

    virtual void notifie_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_mtoloc()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mtoloc()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtoloc()
      throw(CORBA::SystemException);

    virtual void evenement_mtoloc_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_mtozone()
      throw(CORBA::SystemException);

    virtual void cree_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_mtozone()
      throw(CORBA::SystemException);

    virtual void liste_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_mtozone()
      throw(CORBA::SystemException);

    virtual void fin_liste_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mtozone()
      throw(CORBA::SystemException);

    virtual void evenement_mtozone_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_qira()
      throw(CORBA::SystemException);

    virtual void cree_qira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_repira()
      throw(CORBA::SystemException);

    virtual void supprime_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_repira()
      throw(CORBA::SystemException);

    virtual void notifie_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_repira()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_repira()
      throw(CORBA::SystemException);

    virtual void fin_abonne_repira_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

