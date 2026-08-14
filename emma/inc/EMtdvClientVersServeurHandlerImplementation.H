/*******************************************************************************
 * \file           EMtdvClientVersServeurHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvClientVersServeurHandlerImplementation_H
#define __EMtdvClientVersServeurHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMtdvClientVersServeurS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMtdv_v3_0_0_ClientVersServeurHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMtdv_v3_0_0_ClientVersServeurHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMtdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMtdv_v3_0_0_ClientVersServeurHandlerImplementation(void){};


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


    virtual void abonne_vol()
      throw(CORBA::SystemException);

    virtual void abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_vol()
      throw(CORBA::SystemException);

    virtual void connexion_vol_excep(::Messaging::ExceptionHolder* excep_holder)
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


    virtual void abonne_vlr()
      throw(CORBA::SystemException);

    virtual void abonne_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
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


    virtual void abonne_volalarme()
      throw(CORBA::SystemException);

    virtual void abonne_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
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


    virtual void abonne_volmsg()
      throw(CORBA::SystemException);

    virtual void abonne_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_strip_vol()
      throw(CORBA::SystemException);

    virtual void connexion_strip_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_vol()
      throw(CORBA::SystemException);

    virtual void fin_abonne_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_vol()
      throw(CORBA::SystemException);

    virtual void fin_connexion_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_vlr()
      throw(CORBA::SystemException);

    virtual void fin_abonne_vlr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_volalarme()
      throw(CORBA::SystemException);

    virtual void fin_abonne_volalarme_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_volmsg()
      throw(CORBA::SystemException);

    virtual void fin_abonne_volmsg_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_strip_vol()
      throw(CORBA::SystemException);

    virtual void fin_connexion_strip_vol_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvClientVersServeurHandlerImplementation.H
//------------------------------------------------------------------------------

