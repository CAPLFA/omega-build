/*******************************************************************************
 * \file           EMrsftaServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaServeurVersClientHandlerImplementation_H
#define __EMrsftaServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMrsftaServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMrsfta_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMrsfta_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMrsfta_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMrsfta_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_msg_exploite()
      throw(CORBA::SystemException);

    virtual void cree_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_msg_exploite()
      throw(CORBA::SystemException);

    virtual void supprime_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_exploite()
      throw(CORBA::SystemException);

    virtual void consulte_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_exploite()
      throw(CORBA::SystemException);

    virtual void liste_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_liste_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_msg_exploite()
      throw(CORBA::SystemException);

    virtual void notifie_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_msg_exploite()
      throw(CORBA::SystemException);

    virtual void signale_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_msg_exploite()
      throw(CORBA::SystemException);

    virtual void connexion_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_msg_exploite()
      throw(CORBA::SystemException);

    virtual void fin_connexion_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_msg_exploite()
      throw(CORBA::SystemException);

    virtual void evenement_msg_exploite_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_msg_transmis()
      throw(CORBA::SystemException);

    virtual void cree_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_transmis()
      throw(CORBA::SystemException);

    virtual void consulte_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_transmis()
      throw(CORBA::SystemException);

    virtual void liste_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_liste_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_msg_transmis()
      throw(CORBA::SystemException);

    virtual void notifie_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void signale_msg_transmis()
      throw(CORBA::SystemException);

    virtual void signale_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void connexion_msg_transmis()
      throw(CORBA::SystemException);

    virtual void connexion_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_connexion_msg_transmis()
      throw(CORBA::SystemException);

    virtual void fin_connexion_msg_transmis_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_msg_preredige()
      throw(CORBA::SystemException);

    virtual void cree_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_msg_preredige()
      throw(CORBA::SystemException);

    virtual void modifie_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_msg_preredige()
      throw(CORBA::SystemException);

    virtual void supprime_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_preredige()
      throw(CORBA::SystemException);

    virtual void consulte_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_msg_preredige()
      throw(CORBA::SystemException);

    virtual void liste_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_msg_preredige()
      throw(CORBA::SystemException);

    virtual void fin_liste_msg_preredige_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_cpladr()
      throw(CORBA::SystemException);

    virtual void cree_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_cpladr()
      throw(CORBA::SystemException);

    virtual void modifie_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_cpladr()
      throw(CORBA::SystemException);

    virtual void supprime_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_cpladr()
      throw(CORBA::SystemException);

    virtual void notifie_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_cpladr()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_cpladr()
      throw(CORBA::SystemException);

    virtual void fin_abonne_cpladr_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_msg_bals()
      throw(CORBA::SystemException);

    virtual void consulte_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_msg_bals()
      throw(CORBA::SystemException);

    virtual void notifie_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_msg_bals()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_msg_bals()
      throw(CORBA::SystemException);

    virtual void fin_abonne_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void evenement_msg_bals()
      throw(CORBA::SystemException);

    virtual void evenement_msg_bals_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

