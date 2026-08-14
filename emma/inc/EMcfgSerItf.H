/*******************************************************************************
 * \file           EMcfgSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgSerItf_H
#define __EMcfgSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMcfgSerItf {

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
    static  EMstatut  cree_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_config(   // Nouvelle methode avec nIdMsg
        EMconfigData*  p_config,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_config(   // Sans nIdMsg pour compatibilite
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_config(   // Nouvelle methode avec nIdMsg
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_config(   // Sans nIdMsg pour compatibilite
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_config(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_config(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_config(   // Nouvelle methode avec nIdMsg
        EMconfigData*  p_config,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_config(   // Sans nIdMsg pour compatibilite
        EMconfigData*  p_config,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_poslog(   // Nouvelle methode avec nIdMsg
        EMposlogData*  p_poslog,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_poslog(   // Sans nIdMsg pour compatibilite
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_poslog(   // Nouvelle methode avec nIdMsg
        EMposlogData*  p_poslog,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_poslog(   // Sans nIdMsg pour compatibilite
        EMposlogData*  p_poslog,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_poslog(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_poslog(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMcfgSerItf();
    virtual ~EMcfgSerItf();
    EMcfgSerItf(const EMcfgSerItf&);
    EMcfgSerItf& operator = (const EMcfgSerItf&);
    int operator == (const EMcfgSerItf&);
    int operator != (const EMcfgSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgSerItf.H
//------------------------------------------------------------------------------

