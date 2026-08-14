/*******************************************************************************
 * \file           EMplnSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnSerItf_H
#define __EMplnSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMplnTYPES.H"
#include "EMplnData.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"
#include "EMstripData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMplnSerItf {

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
    static  EMstatut  notifie_contexte(   // Nouvelle methode avec nIdMsg
        EM_CTXT_ATM  eCtxt,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_contexte(   // Sans nIdMsg pour compatibilite
        EM_CTXT_ATM  eCtxt,
        int  nIdClient
        );
    static  EMstatut  notifie_pln(   // Nouvelle methode avec nIdMsg
        EMplnData*  pPln,
        EM_PLN_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_pln(   // Sans nIdMsg pour compatibilite
        EMplnData*  pPln,
        EM_PLN_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe,
        int  nIdClient
        );
    static  EMstatut  repond_reponse(   // Nouvelle methode avec nIdMsg
        EMreponseData*  pPln,
        int  nIdent,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  repond_reponse(   // Sans nIdMsg pour compatibilite
        EMreponseData*  pPln,
        int  nIdent,
        int  nIdClient
        );
    static  EMstatut  repond_repStip(   // Nouvelle methode avec nIdMsg
        EMrepStipData*  pRepSTIP,
        int  nIdent,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  repond_repStip(   // Sans nIdMsg pour compatibilite
        EMrepStipData*  pRepSTIP,
        int  nIdent,
        int  nIdClient
        );
    static  EMstatut  repond_repMult(   // Nouvelle methode avec nIdMsg
        EMrepMultData*  pRepListe,
        int  nIdent,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  repond_repMult(   // Sans nIdMsg pour compatibilite
        EMrepMultData*  pRepListe,
        int  nIdent,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Nouvelle methode avec nIdMsg
        int  nErreur,
        char*  gMessage,
        int  nIdent,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Sans nIdMsg pour compatibilite
        int  nErreur,
        char*  gMessage,
        int  nIdent,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_pln(   // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_pln(   // Sans nIdMsg pour compatibilite
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  notifie_strip(   // Nouvelle methode avec nIdMsg
        EMstripData*  pStrip,
        int  nIdent,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_strip(   // Sans nIdMsg pour compatibilite
        EMstripData*  pStrip,
        int  nIdent,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMplnSerItf();
    virtual ~EMplnSerItf();
    EMplnSerItf(const EMplnSerItf&);
    EMplnSerItf& operator = (const EMplnSerItf&);
    int operator == (const EMplnSerItf&);
    int operator != (const EMplnSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnSerItf.H
//------------------------------------------------------------------------------

