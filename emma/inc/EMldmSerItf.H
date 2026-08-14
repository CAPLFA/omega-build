/*******************************************************************************
 * \file           EMldmSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmSerItf_H
#define __EMldmSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmvtData.H"
#include "EMmvtmsgData.H"
#include "EMmvtssrData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMldmSerItf {

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
    static  EMstatut  cree_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_mvt(   // Nouvelle methode avec nIdMsg
        EMmvtData*  p_mvt,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_mvt(   // Sans nIdMsg pour compatibilite
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_mvt(   // Nouvelle methode avec nIdMsg
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_mvt(   // Sans nIdMsg pour compatibilite
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  signale_mvt(   // Nouvelle methode avec nIdMsg
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_mvt(   // Sans nIdMsg pour compatibilite
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  connexion_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  connexion_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_mvt(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_mvt(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mvt(   // Nouvelle methode avec nIdMsg
        EMmvtData*  p_mvt,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mvt(   // Sans nIdMsg pour compatibilite
        EMmvtData*  p_mvt,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_mvtmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_mvtmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_mvtmsg(   // Nouvelle methode avec nIdMsg
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_mvtmsg(   // Sans nIdMsg pour compatibilite
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mvtmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_mvtmsg(   // Nouvelle methode avec nIdMsg
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_mvtmsg(   // Sans nIdMsg pour compatibilite
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mvtmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mvtmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mvtmsg(   // Nouvelle methode avec nIdMsg
        EMmvtmsgData*  p_mvtmsg,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mvtmsg(   // Sans nIdMsg pour compatibilite
        EMmvtmsgData*  p_mvtmsg,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mvtssr(   // Nouvelle methode avec nIdMsg
        EMmvtssrData*  p_mvtssr,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mvtssr(   // Sans nIdMsg pour compatibilite
        EMmvtssrData*  p_mvtssr,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMldmSerItf();
    virtual ~EMldmSerItf();
    EMldmSerItf(const EMldmSerItf&);
    EMldmSerItf& operator = (const EMldmSerItf&);
    int operator == (const EMldmSerItf&);
    int operator != (const EMldmSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMldmSerItf.H
//------------------------------------------------------------------------------

