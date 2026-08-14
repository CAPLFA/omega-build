/*******************************************************************************
 * \file           EMldmServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmServeurVersClientHandlerImplementation_H
#define __EMldmServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMldmServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMldm_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMldm_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMldm_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMldm_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_mvt()
      throw(CORBA::SystemException);

    virtual void cree_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_mvt()
      throw(CORBA::SystemException);

    virtual void modifie_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_mvt()
      throw(CORBA::SystemException);

    virtual void consulte_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_mvt()
      throw(CORBA::SystemException);

    virtual void liste_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_mvt()
      throw(CORBA::SystemException);

    virtual void fin_liste_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_mvt()
      throw(CORBA::SystemException);

    virtual void notifie_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_mvt()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mvt()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_mvt()
      throw(CORBA::SystemException);

    virtual void signale_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_mvt()
      throw(CORBA::SystemException);

    virtual void connexion_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_mvt()
      throw(CORBA::SystemException);

    virtual void fin_connexion_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mvt()
      throw(CORBA::SystemException);

    virtual void evenement_mvt_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_mvtmsg()
      throw(CORBA::SystemException);

    virtual void modifie_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_mvtmsg()
      throw(CORBA::SystemException);

    virtual void supprime_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_mvtmsg()
      throw(CORBA::SystemException);

    virtual void liste_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_mvtmsg()
      throw(CORBA::SystemException);

    virtual void fin_liste_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_mvtmsg()
      throw(CORBA::SystemException);

    virtual void notifie_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_mvtmsg()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_mvtmsg()
      throw(CORBA::SystemException);

    virtual void fin_abonne_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mvtmsg()
      throw(CORBA::SystemException);

    virtual void evenement_mvtmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_mvtssr()
      throw(CORBA::SystemException);

    virtual void evenement_mvtssr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMldmServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

