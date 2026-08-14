/*******************************************************************************
 * \file           EMsvc_05SerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_05.act
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMsvc_05SerItf_H
#define __EMsvc_05SerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMsvc_05SerItf {

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
    static  EMstatut  envoi_objetChaine(   // Nouvelle methode avec nIdMsg
        EMobjetChaineData*  p_objetChaine,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  envoi_objetChaine(   // Sans nIdMsg pour compatibilite
        EMobjetChaineData*  p_objetChaine,
        int  nIdClient
        );
    static  EMstatut  envoi_objetBase(   // Nouvelle methode avec nIdMsg
        EMobjetBaseData*  p_objetBase,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  envoi_objetBase(   // Sans nIdMsg pour compatibilite
        EMobjetBaseData*  p_objetBase,
        int  nIdClient
        );
    static  EMstatut  envoi_objetMultiple(   // Nouvelle methode avec nIdMsg
        EMobjetMultipleData*  p_objetMultiple,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  envoi_objetMultiple(   // Sans nIdMsg pour compatibilite
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdClient
        );
    static  EMstatut  envoi_objetCompose(   // Nouvelle methode avec nIdMsg
        EMobjetComposeData*  p_objetCompose,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  envoi_objetCompose(   // Sans nIdMsg pour compatibilite
        EMobjetComposeData*  p_objetCompose,
        int  nIdClient
        );
    static  EMstatut  reponse_objetChaine(   // Nouvelle methode avec nIdMsg
        EMobjetChaineData*  p_objetChaine,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  reponse_objetChaine(   // Sans nIdMsg pour compatibilite
        EMobjetChaineData*  p_objetChaine,
        int  nIdOpe,
        int  nIdClient
        );
    static  EMstatut  reponse_objetBase(   // Nouvelle methode avec nIdMsg
        EMobjetBaseData*  p_objetBase,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  reponse_objetBase(   // Sans nIdMsg pour compatibilite
        EMobjetBaseData*  p_objetBase,
        int  nIdOpe,
        int  nIdClient
        );
    static  EMstatut  reponse_objetMultiple(   // Nouvelle methode avec nIdMsg
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  reponse_objetMultiple(   // Sans nIdMsg pour compatibilite
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOpe,
        int  nIdClient
        );
    static  EMstatut  reponse_objetCompose(   // Nouvelle methode avec nIdMsg
        EMobjetComposeData*  p_objetCompose,
        int  nIdOpe,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  reponse_objetCompose(   // Sans nIdMsg pour compatibilite
        EMobjetComposeData*  p_objetCompose,
        int  nIdOpe,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMsvc_05SerItf();
    virtual ~EMsvc_05SerItf();
    EMsvc_05SerItf(const EMsvc_05SerItf&);
    EMsvc_05SerItf& operator = (const EMsvc_05SerItf&);
    int operator == (const EMsvc_05SerItf&);
    int operator != (const EMsvc_05SerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_05SerItf.H
//------------------------------------------------------------------------------

