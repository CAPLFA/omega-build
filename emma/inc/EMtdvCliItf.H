/*******************************************************************************
 * \file           EMtdvCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvCliItf_H
#define __EMtdvCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMtdvCliItf {

public:

    // Methodes communes
    static EMstatut active(char*  nomService);
    static EMstatut desactive();

    // Retourne la version utilisee pour la connexion,
    // ou VERSION_NULLE si la connexion n'est pas etablie.
    static  EMversion  lireVersion();

    // Retourne la ou les version(s) de service geree(s) par la librairie.
    static vector<EMversion>  lireVersionsConnues();


    // Methodes d'emission vers le serveur
    static  EMstatut  cree_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int&  nIdOp
        );
    static  EMstatut  modifie_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int&  nIdOp
        );
    static  EMstatut  consulte_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int&  nIdOp
        );
    static  EMstatut  liste_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int&  nIdOp
        );
    static  EMstatut  abonne_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int&  nIdOp
        );
    static  EMstatut  connexion_vol(    // Avec nIdOp d'origine (EMMA1)
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  evenement_vol(    // Avec nIdOp d'origine (EMMA1)
        EMvolData*  p_vol,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int&  nIdOp
        );
    static  EMstatut  modifie_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int&  nIdOp
        );
    static  EMstatut  consulte_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int&  nIdOp
        );
    static  EMstatut  liste_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int&  nIdOp
        );
    static  EMstatut  abonne_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int&  nIdOp
        );
    static  EMstatut  evenement_vlr(    // Avec nIdOp d'origine (EMMA1)
        EMvlrData*  p_vlr,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_volalarme(    // Avec nIdOp d'origine (EMMA1)
        EMvolalarmeData*  p_volalarme,
        int&  nIdOp
        );
    static  EMstatut  modifie_volalarme(    // Avec nIdOp d'origine (EMMA1)
        EMvolalarmeData*  p_volalarme,
        int&  nIdOp
        );
    static  EMstatut  consulte_volalarme(    // Avec nIdOp d'origine (EMMA1)
        EMvolalarmeData*  p_volalarme,
        int&  nIdOp
        );
    static  EMstatut  abonne_volalarme(    // Avec nIdOp d'origine (EMMA1)
        EMvolalarmeData*  p_volalarme,
        int&  nIdOp
        );
    static  EMstatut  evenement_volalarme(    // Avec nIdOp d'origine (EMMA1)
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_volmsg(    // Avec nIdOp d'origine (EMMA1)
        EMvolmsgData*  p_volmsg,
        int&  nIdOp
        );
    static  EMstatut  supprime_volmsg(    // Avec nIdOp d'origine (EMMA1)
        EMvolmsgData*  p_volmsg,
        int&  nIdOp
        );
    static  EMstatut  liste_volmsg(    // Avec nIdOp d'origine (EMMA1)
        EMvolmsgData*  p_volmsg,
        int&  nIdOp
        );
    static  EMstatut  abonne_volmsg(    // Avec nIdOp d'origine (EMMA1)
        EMvolmsgData*  p_volmsg,
        int&  nIdOp
        );
    static  EMstatut  connexion_strip_vol(    // Avec nIdOp d'origine (EMMA1)
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_vol(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_vol(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_connexion_vol(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_connexion_vol(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_vlr(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_vlr(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_volalarme(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_volalarme(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_volmsg(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_volmsg(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_connexion_strip_vol(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_connexion_strip_vol(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMtdvCliItf();
    virtual ~EMtdvCliItf();
    EMtdvCliItf(const EMtdvCliItf&);
    EMtdvCliItf& operator = (const EMtdvCliItf&);
    int operator == (const EMtdvCliItf&);
    int operator != (const EMtdvCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvCliItf.H
//------------------------------------------------------------------------------

