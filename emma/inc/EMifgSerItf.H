/*******************************************************************************
 * \file           EMifgSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgSerItf_H
#define __EMifgSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMinfoadData.H"
#include "EMinfoatisData.H"
#include "EMregulationData.H"
#include "EMinfosynthData.H"
#include "EMinfotexteData.H"
#include "EMcode_infraData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMifgSerItf {

public:

    //! Méthodes communes
    //---------------------------------------------------------------------------
    /*! Active l'accès au service. Si l'activation réussie, les clients peuvent
     *  être enregistrés.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  active();

    //---------------------------------------------------------------------------
    /*! Désactive l'accès au service. EMMA tente de notifier tous les clients.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  desactive();

    //---------------------------------------------------------------------------
    // Retourne la version utilisée pour la connexion avec le client nIdClient,
    // ou VERSION_NULLE si la connexion n'est pas établie.
    //---------------------------------------------------------------------------
    static  EMversion  lireVersion(int  nIdClient);

    //---------------------------------------------------------------------------
    // Retourne la ou les version(s) de service gerée(s) par la librairie.
    //---------------------------------------------------------------------------
    static vector<EMversion> lireVersionsConnues();

    //---------------------------------------------------------------------------
    // Méthode vide conservée pour la compatibilité.
    //---------------------------------------------------------------------------
    static  void  detruitServeurParasite();


    //---------------------------------------------------------------------------
    // Méthodes d'émission vers le client.
    //---------------------------------------------------------------------------
    static  EMstatut  cree_infoad(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_infoad(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_infoad(   // Nouvelle methode avec nIdMsg
        EMinfoadData*  p_infoad,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_infoad(   // Sans nIdMsg pour compatibilite
        EMinfoadData*  p_infoad,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infoad(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infoad(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infoad(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infoad(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_infoatis(   // Nouvelle methode avec nIdMsg
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_infoatis(   // Sans nIdMsg pour compatibilite
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infoatis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infoatis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infoatis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infoatis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_infoatis(   // Nouvelle methode avec nIdMsg
        EMinfoatisData*  p_infoatis,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_infoatis(   // Sans nIdMsg pour compatibilite
        EMinfoatisData*  p_infoatis,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_regulation(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMregulationData*  p_regulation,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_regulation(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMregulationData*  p_regulation,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_regulation(   // Nouvelle methode avec nIdMsg
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_regulation(   // Sans nIdMsg pour compatibilite
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_regulation(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_regulation(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_regulation(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_regulation(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_regulation(   // Nouvelle methode avec nIdMsg
        EMregulationData*  p_regulation,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_regulation(   // Sans nIdMsg pour compatibilite
        EMregulationData*  p_regulation,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_infosynth(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_infosynth(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_infosynth(   // Nouvelle methode avec nIdMsg
        EMinfosynthData*  p_infosynth,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_infosynth(   // Sans nIdMsg pour compatibilite
        EMinfosynthData*  p_infosynth,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infosynth(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infosynth(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infosynth(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infosynth(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_infotexte(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_infotexte(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_infotexte(   // Nouvelle methode avec nIdMsg
        EMinfotexteData*  p_infotexte,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_infotexte(   // Sans nIdMsg pour compatibilite
        EMinfotexteData*  p_infotexte,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infotexte(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_infotexte(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infotexte(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_infotexte(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_code_infra(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_code_infra(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_code_infra(   // Nouvelle methode avec nIdMsg
        EMcode_infraData*  p_code_infra,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_code_infra(   // Sans nIdMsg pour compatibilite
        EMcode_infraData*  p_code_infra,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_code_infra(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_code_infra(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_code_infra(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_code_infra(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMifgSerItf();
    virtual ~EMifgSerItf();
    EMifgSerItf(const EMifgSerItf&);
    EMifgSerItf& operator = (const EMifgSerItf&);
    int operator == (const EMifgSerItf&);
    int operator != (const EMifgSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgSerItf.H
//------------------------------------------------------------------------------

