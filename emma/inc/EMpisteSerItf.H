/*******************************************************************************
 * \file           EMpisteSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteSerItf_H
#define __EMpisteSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMpisteData.H"
#include "EMpisteTYPES.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMpisteSerItf {

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
    static  EMstatut  notifie_piste(   // Nouvelle methode avec nIdMsg
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_piste(   // Sans nIdMsg pour compatibilite
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  repond_piste(   // Nouvelle methode avec nIdMsg
        EMpisteData*  pPiste,
        int  nIdRequete,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  repond_piste(   // Sans nIdMsg pour compatibilite
        EMpisteData*  pPiste,
        int  nIdRequete,
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
    EMpisteSerItf();
    virtual ~EMpisteSerItf();
    EMpisteSerItf(const EMpisteSerItf&);
    EMpisteSerItf& operator = (const EMpisteSerItf&);
    int operator == (const EMpisteSerItf&);
    int operator != (const EMpisteSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteSerItf.H
//------------------------------------------------------------------------------

