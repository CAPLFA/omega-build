/*******************************************************************************
 * \file           EMtdvServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvServeurVersClientHandlerImplementation_H
#define __EMtdvServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMtdvServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMtdv_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMtdv_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMtdv_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMtdv_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_vol()
      throw(CORBA::SystemException);

    virtual void cree_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_vol()
      throw(CORBA::SystemException);

    virtual void modifie_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_vol()
      throw(CORBA::SystemException);

    virtual void consulte_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_vol()
      throw(CORBA::SystemException);

    virtual void liste_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_vol()
      throw(CORBA::SystemException);

    virtual void fin_liste_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_vol()
      throw(CORBA::SystemException);

    virtual void notifie_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_vol()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_vol()
      throw(CORBA::SystemException);

    virtual void fin_abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_vol()
      throw(CORBA::SystemException);

    virtual void signale_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_vol()
      throw(CORBA::SystemException);

    virtual void connexion_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_vol()
      throw(CORBA::SystemException);

    virtual void fin_connexion_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_vol()
      throw(CORBA::SystemException);

    virtual void evenement_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_vlr()
      throw(CORBA::SystemException);

    virtual void cree_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_vlr()
      throw(CORBA::SystemException);

    virtual void modifie_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_vlr()
      throw(CORBA::SystemException);

    virtual void consulte_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_vlr()
      throw(CORBA::SystemException);

    virtual void liste_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_vlr()
      throw(CORBA::SystemException);

    virtual void fin_liste_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_vlr()
      throw(CORBA::SystemException);

    virtual void notifie_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_vlr()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_vlr()
      throw(CORBA::SystemException);

    virtual void fin_abonne_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_vlr()
      throw(CORBA::SystemException);

    virtual void evenement_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_volalarme()
      throw(CORBA::SystemException);

    virtual void cree_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_volalarme()
      throw(CORBA::SystemException);

    virtual void modifie_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_volalarme()
      throw(CORBA::SystemException);

    virtual void consulte_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_volalarme()
      throw(CORBA::SystemException);

    virtual void notifie_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_volalarme()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_volalarme()
      throw(CORBA::SystemException);

    virtual void fin_abonne_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_volalarme()
      throw(CORBA::SystemException);

    virtual void evenement_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_volmsg()
      throw(CORBA::SystemException);

    virtual void cree_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_volmsg()
      throw(CORBA::SystemException);

    virtual void supprime_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_volmsg()
      throw(CORBA::SystemException);

    virtual void liste_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_volmsg()
      throw(CORBA::SystemException);

    virtual void fin_liste_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_volmsg()
      throw(CORBA::SystemException);

    virtual void notifie_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_volmsg()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_volmsg()
      throw(CORBA::SystemException);

    virtual void fin_abonne_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_strip_vol()
      throw(CORBA::SystemException);

    virtual void signale_strip_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_strip_vol()
      throw(CORBA::SystemException);

    virtual void connexion_strip_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_strip_vol()
      throw(CORBA::SystemException);

    virtual void fin_connexion_strip_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

