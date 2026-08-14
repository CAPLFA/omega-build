/*******************************************************************************
 * \file           EMmassifSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifSerItf_H
#define __EMmassifSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolappData.H"
#include "EMmassifTYPES.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMmassifSerItf {

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
    static  EMstatut  notifie_vol(   // Nouvelle methode avec nIdMsg
        EMvolappData*  pVol,
        EM_MASSIF_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_vol(   // Sans nIdMsg pour compatibilite
        EMvolappData*  pVol,
        EM_MASSIF_TYPE_NOTIF  eNotif,
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
    static  EMstatut  fin_ini_abo_vol(   // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_vol(   // Sans nIdMsg pour compatibilite
        int  nIdAbo,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMmassifSerItf();
    virtual ~EMmassifSerItf();
    EMmassifSerItf(const EMmassifSerItf&);
    EMmassifSerItf& operator = (const EMmassifSerItf&);
    int operator == (const EMmassifSerItf&);
    int operator != (const EMmassifSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifSerItf.H
//------------------------------------------------------------------------------

