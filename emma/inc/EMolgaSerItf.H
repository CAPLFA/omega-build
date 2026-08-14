/*******************************************************************************
 * \file           EMolgaSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaSerItf_H
#define __EMolgaSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMolgaSerItf {

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
    static  EMstatut  notifie_confOpe(   // Nouvelle methode avec nIdMsg
        EMconfOpeData*  pConfOpe,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_confOpe(   // Sans nIdMsg pour compatibilite
        EMconfOpeData*  pConfOpe,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  notifie_nivTrans(   // Nouvelle methode avec nIdMsg
        EMnivTransData*  pNivTrans,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_nivTrans(   // Sans nIdMsg pour compatibilite
        EMnivTransData*  pNivTrans,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Nouvelle methode avec nIdMsg
        int  nStatus,
        char*  gMessage,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Sans nIdMsg pour compatibilite
        int  nStatus,
        char*  gMessage,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMolgaSerItf();
    virtual ~EMolgaSerItf();
    EMolgaSerItf(const EMolgaSerItf&);
    EMolgaSerItf& operator = (const EMolgaSerItf&);
    int operator == (const EMolgaSerItf&);
    int operator != (const EMolgaSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaSerItf.H
//------------------------------------------------------------------------------

