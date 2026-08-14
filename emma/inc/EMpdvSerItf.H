/*******************************************************************************
 * \file           EMpdvSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvSerItf_H
#define __EMpdvSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMddvData.H"
#include "EMdvrData.H"
#include "EMddvmsgData.H"
#include "EMddv_infotactData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMpdvSerItf {

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
    static  EMstatut  cree_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_ddv(   // Nouvelle methode avec nIdMsg
        EMddvData*  p_ddv,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_ddv(   // Sans nIdMsg pour compatibilite
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_ddv(   // Nouvelle methode avec nIdMsg
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_ddv(   // Sans nIdMsg pour compatibilite
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_ddv(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_ddv(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_ddv(   // Nouvelle methode avec nIdMsg
        EMddvData*  p_ddv,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_ddv(   // Sans nIdMsg pour compatibilite
        EMddvData*  p_ddv,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_dvr(   // Nouvelle methode avec nIdMsg
        EMdvrData*  p_dvr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_dvr(   // Sans nIdMsg pour compatibilite
        EMdvrData*  p_dvr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_dvr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_dvr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_ddvmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_ddvmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_ddvmsg(   // Nouvelle methode avec nIdMsg
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_ddvmsg(   // Sans nIdMsg pour compatibilite
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_ddvmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_ddvmsg(   // Nouvelle methode avec nIdMsg
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_ddvmsg(   // Sans nIdMsg pour compatibilite
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_ddvmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_ddvmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_ddvmsg(   // Nouvelle methode avec nIdMsg
        EMddvmsgData*  p_ddvmsg,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_ddvmsg(   // Sans nIdMsg pour compatibilite
        EMddvmsgData*  p_ddvmsg,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_ddv_infotact(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_ddv_infotact(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMpdvSerItf();
    virtual ~EMpdvSerItf();
    EMpdvSerItf(const EMpdvSerItf&);
    EMpdvSerItf& operator = (const EMpdvSerItf&);
    int operator == (const EMpdvSerItf&);
    int operator != (const EMpdvSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvSerItf.H
//------------------------------------------------------------------------------

