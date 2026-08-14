/*******************************************************************************
 * \file           EMbdrefServeurVersClientHandlerImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception des reponses AMI cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefServeurVersClientHandlerImplementation_H
#define __EMbdrefServeurVersClientHandlerImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMbdrefServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_AMI_EMbdref_v3_0_0_ServeurVersClientHandlerImplementation :
    public virtual POA_emma_corba::AMI_EMbdref_v3_0_0_ServeurVersClientHandler {

public:

    //---------- Constructeur ------------------------------------------
    POA_AMI_EMbdref_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Destructeur -------------------------------------------
    ~POA_AMI_EMbdref_v3_0_0_ServeurVersClientHandlerImplementation(void){};


    //---------- Operations declarees dans le fichier IDL --------------

    virtual void cree_aeronef()
      throw(CORBA::SystemException);

    virtual void cree_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_aeronef()
      throw(CORBA::SystemException);

    virtual void modifie_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_aeronef()
      throw(CORBA::SystemException);

    virtual void supprime_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_aeronef()
      throw(CORBA::SystemException);

    virtual void consulte_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_aeronef()
      throw(CORBA::SystemException);

    virtual void liste_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_aeronef()
      throw(CORBA::SystemException);

    virtual void fin_liste_aeronef_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_dvm()
      throw(CORBA::SystemException);

    virtual void cree_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_dvm()
      throw(CORBA::SystemException);

    virtual void modifie_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_dvm()
      throw(CORBA::SystemException);

    virtual void supprime_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_dvm()
      throw(CORBA::SystemException);

    virtual void consulte_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_dvm()
      throw(CORBA::SystemException);

    virtual void liste_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_dvm()
      throw(CORBA::SystemException);

    virtual void fin_liste_dvm_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_preroute()
      throw(CORBA::SystemException);

    virtual void cree_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_preroute()
      throw(CORBA::SystemException);

    virtual void modifie_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_preroute()
      throw(CORBA::SystemException);

    virtual void supprime_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_preroute()
      throw(CORBA::SystemException);

    virtual void consulte_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_preroute()
      throw(CORBA::SystemException);

    virtual void liste_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_preroute()
      throw(CORBA::SystemException);

    virtual void fin_liste_preroute_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_typaero()
      throw(CORBA::SystemException);

    virtual void cree_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_typaero()
      throw(CORBA::SystemException);

    virtual void modifie_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_typaero()
      throw(CORBA::SystemException);

    virtual void supprime_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_typaero()
      throw(CORBA::SystemException);

    virtual void consulte_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_typaero()
      throw(CORBA::SystemException);

    virtual void liste_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_typaero()
      throw(CORBA::SystemException);

    virtual void fin_liste_typaero_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_point()
      throw(CORBA::SystemException);

    virtual void cree_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_point()
      throw(CORBA::SystemException);

    virtual void modifie_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_point()
      throw(CORBA::SystemException);

    virtual void supprime_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_point()
      throw(CORBA::SystemException);

    virtual void consulte_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_point()
      throw(CORBA::SystemException);

    virtual void liste_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_point()
      throw(CORBA::SystemException);

    virtual void fin_liste_point_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_rt_strip()
      throw(CORBA::SystemException);

    virtual void cree_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_rt_strip()
      throw(CORBA::SystemException);

    virtual void modifie_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_rt_strip()
      throw(CORBA::SystemException);

    virtual void supprime_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_rt_strip()
      throw(CORBA::SystemException);

    virtual void consulte_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_rt_strip()
      throw(CORBA::SystemException);

    virtual void liste_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_rt_strip()
      throw(CORBA::SystemException);

    virtual void fin_liste_rt_strip_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void cree_aerodrome()
      throw(CORBA::SystemException);

    virtual void cree_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void modifie_aerodrome()
      throw(CORBA::SystemException);

    virtual void modifie_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void supprime_aerodrome()
      throw(CORBA::SystemException);

    virtual void supprime_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_aerodrome()
      throw(CORBA::SystemException);

    virtual void consulte_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_aerodrome()
      throw(CORBA::SystemException);

    virtual void liste_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_aerodrome()
      throw(CORBA::SystemException);

    virtual void fin_liste_aerodrome_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_point_trk()
      throw(CORBA::SystemException);

    virtual void consulte_point_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_point_trk()
      throw(CORBA::SystemException);

    virtual void liste_point_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_point_trk()
      throw(CORBA::SystemException);

    virtual void fin_liste_point_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void consulte_route_trk()
      throw(CORBA::SystemException);

    virtual void consulte_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void liste_route_trk()
      throw(CORBA::SystemException);

    virtual void liste_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_liste_route_trk()
      throw(CORBA::SystemException);

    virtual void fin_liste_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void notifie_route_trk()
      throw(CORBA::SystemException);

    virtual void notifie_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_ini_abo_route_trk()
      throw(CORBA::SystemException);

    virtual void fin_ini_abo_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);


    virtual void fin_abonne_route_trk()
      throw(CORBA::SystemException);

    virtual void fin_abonne_route_trk_excep(::Messaging::ExceptionHolder* excep_holder)
      throw(CORBA::SystemException);

};


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefServeurVersClientHandlerImplementation.H
//------------------------------------------------------------------------------

