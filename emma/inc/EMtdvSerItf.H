/*******************************************************************************
 * \file           EMtdvSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvSerItf_H
#define __EMtdvSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"
#include "EMstrip_volData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMtdvSerItf {

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
    static  EMstatut  cree_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_vol(   // Nouvelle methode avec nIdMsg
        EMvolData*  p_vol,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_vol(   // Sans nIdMsg pour compatibilite
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_vol(   // Nouvelle methode avec nIdMsg
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_vol(   // Sans nIdMsg pour compatibilite
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  signale_vol(   // Nouvelle methode avec nIdMsg
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_vol(   // Sans nIdMsg pour compatibilite
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  connexion_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  connexion_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_vol(   // Nouvelle methode avec nIdMsg
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_vol(   // Sans nIdMsg pour compatibilite
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_vlr(   // Nouvelle methode avec nIdMsg
        EMvlrData*  p_vlr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_vlr(   // Sans nIdMsg pour compatibilite
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_vlr(   // Nouvelle methode avec nIdMsg
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_vlr(   // Sans nIdMsg pour compatibilite
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_vlr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_vlr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_vlr(   // Nouvelle methode avec nIdMsg
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_vlr(   // Sans nIdMsg pour compatibilite
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_volalarme(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_volalarme(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_volalarme(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_volalarme(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_volalarme(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_volalarme(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_volalarme(   // Nouvelle methode avec nIdMsg
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_volalarme(   // Sans nIdMsg pour compatibilite
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_volalarme(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_volalarme(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_volalarme(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_volalarme(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_volalarme(   // Nouvelle methode avec nIdMsg
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_volalarme(   // Sans nIdMsg pour compatibilite
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_volmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_volmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_volmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_volmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_volmsg(   // Nouvelle methode avec nIdMsg
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_volmsg(   // Sans nIdMsg pour compatibilite
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_volmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_volmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_volmsg(   // Nouvelle methode avec nIdMsg
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_volmsg(   // Sans nIdMsg pour compatibilite
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_volmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_volmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_volmsg(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_volmsg(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  signale_strip_vol(   // Nouvelle methode avec nIdMsg
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_strip_vol(   // Sans nIdMsg pour compatibilite
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  connexion_strip_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  connexion_strip_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_strip_vol(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_strip_vol(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMtdvSerItf();
    virtual ~EMtdvSerItf();
    EMtdvSerItf(const EMtdvSerItf&);
    EMtdvSerItf& operator = (const EMtdvSerItf&);
    int operator == (const EMtdvSerItf&);
    int operator != (const EMtdvSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvSerItf.H
//------------------------------------------------------------------------------

