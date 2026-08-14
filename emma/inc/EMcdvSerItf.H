/*******************************************************************************
 * \file           EMcdvSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvSerItf_H
#define __EMcdvSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvol_completData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMcdvSerItf {

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
    static  EMstatut  cree_vol_complet(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_vol_complet(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_vol_complet(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_vol_complet(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_vol_complet(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_vol_complet(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_vol_complet(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_vol_complet(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_vol_complet(   // Nouvelle methode avec nIdMsg
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_vol_complet(   // Sans nIdMsg pour compatibilite
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vol_complet(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vol_complet(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMcdvSerItf();
    virtual ~EMcdvSerItf();
    EMcdvSerItf(const EMcdvSerItf&);
    EMcdvSerItf& operator = (const EMcdvSerItf&);
    int operator == (const EMcdvSerItf&);
    int operator != (const EMcdvSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcdvSerItf.H
//------------------------------------------------------------------------------

