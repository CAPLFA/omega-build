/*******************************************************************************
 * \file           EMdasSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasSerItf_H
#define __EMdasSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMdasData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMdasSerItf {

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
    static  EMstatut  notifie_das(   // Nouvelle methode avec nIdMsg
        EMdasData*  pDas,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_das(   // Sans nIdMsg pour compatibilite
        EMdasData*  pDas,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Nouvelle methode avec nIdMsg
        int  nErreur,
        char*  gMessage,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_info(   // Sans nIdMsg pour compatibilite
        int  nErreur,
        char*  gMessage,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_das(   // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_das(   // Sans nIdMsg pour compatibilite
        int  nIdAbo,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMdasSerItf();
    virtual ~EMdasSerItf();
    EMdasSerItf(const EMdasSerItf&);
    EMdasSerItf& operator = (const EMdasSerItf&);
    int operator == (const EMdasSerItf&);
    int operator != (const EMdasSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasSerItf.H
//------------------------------------------------------------------------------

