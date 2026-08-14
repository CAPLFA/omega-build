/*******************************************************************************
 * \file           EMetatSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatSerItf_H
#define __EMetatSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMetatData.H"
#include "EMetatTYPES.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMetatSerItf {

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
    static  EMstatut  notifie_etat(   // Nouvelle methode avec nIdMsg
        EMetatData*  pEtat,
        EM_ETAT_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_etat(   // Sans nIdMsg pour compatibilite
        EMetatData*  pEtat,
        EM_ETAT_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdClient
        );
    static  EMstatut  repond_etat(   // Nouvelle methode avec nIdMsg
        EMetatData*  pEtat,
        int  nIdRequete,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  repond_etat(   // Sans nIdMsg pour compatibilite
        EMetatData*  pEtat,
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
    EMetatSerItf();
    virtual ~EMetatSerItf();
    EMetatSerItf(const EMetatSerItf&);
    EMetatSerItf& operator = (const EMetatSerItf&);
    int operator == (const EMetatSerItf&);
    int operator != (const EMetatSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatSerItf.H
//------------------------------------------------------------------------------

