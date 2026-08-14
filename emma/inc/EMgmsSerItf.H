/*******************************************************************************
 * \file           EMgmsSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsSerItf_H
#define __EMgmsSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmessageData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMgmsSerItf {

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
    static  EMstatut  cree_message(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_message(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_message(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_message(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_message(   // Nouvelle methode avec nIdMsg
        EMmessageData*  p_message,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_message(   // Sans nIdMsg pour compatibilite
        EMmessageData*  p_message,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_message(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_message(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_message(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_message(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMgmsSerItf();
    virtual ~EMgmsSerItf();
    EMgmsSerItf(const EMgmsSerItf&);
    EMgmsSerItf& operator = (const EMgmsSerItf&);
    int operator == (const EMgmsSerItf&);
    int operator != (const EMgmsSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMgmsSerItf.H
//------------------------------------------------------------------------------

