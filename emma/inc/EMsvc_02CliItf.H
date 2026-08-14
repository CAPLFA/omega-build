/*******************************************************************************
 * \file           EMsvc_02CliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_02.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_02CliItf_H
#define __EMsvc_02CliItf_H


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

class EMsvc_02CliItf {

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
    static  EMstatut  requete_objetChaine(    // Avec nIdOp d'origine (EMMA1)
        EMobjetChaineData*  p_objetChaine,
        int&  nIdOp
        );
    static  EMstatut  requete_objetBase(    // Avec nIdOp d'origine (EMMA1)
        EMobjetBaseData*  p_objetBase,
        int&  nIdOp
        );
    static  EMstatut  requete_objetMultiple(    // Avec nIdOp d'origine (EMMA1)
        EMobjetMultipleData*  p_objetMultiple,
        int&  nIdOp
        );
    static  EMstatut  requete_objetCompose(    // Avec nIdOp d'origine (EMMA1)
        EMobjetComposeData*  p_objetCompose,
        int&  nIdOp
        );
    static  EMstatut  envoi_objetChaine(    // Nouvelle methode avec nIdMsg
        EMobjetChaineData*  p_objetChaine,
        int&  nIdMsg
        );
    static  EMstatut  envoi_objetChaine(   // Sans nIdMsg pour compatibilite
        EMobjetChaineData*  p_objetChaine
        );
    static  EMstatut  envoi_objetBase(    // Nouvelle methode avec nIdMsg
        EMobjetBaseData*  p_objetBase,
        int&  nIdMsg
        );
    static  EMstatut  envoi_objetBase(   // Sans nIdMsg pour compatibilite
        EMobjetBaseData*  p_objetBase
        );
    static  EMstatut  envoi_objetMultiple(    // Nouvelle methode avec nIdMsg
        EMobjetMultipleData*  p_objetMultiple,
        int&  nIdMsg
        );
    static  EMstatut  envoi_objetMultiple(   // Sans nIdMsg pour compatibilite
        EMobjetMultipleData*  p_objetMultiple
        );
    static  EMstatut  envoi_objetCompose(    // Nouvelle methode avec nIdMsg
        EMobjetComposeData*  p_objetCompose,
        int&  nIdMsg
        );
    static  EMstatut  envoi_objetCompose(   // Sans nIdMsg pour compatibilite
        EMobjetComposeData*  p_objetCompose
        );


private:

    // Mesures de securite :
    EMsvc_02CliItf();
    virtual ~EMsvc_02CliItf();
    EMsvc_02CliItf(const EMsvc_02CliItf&);
    EMsvc_02CliItf& operator = (const EMsvc_02CliItf&);
    int operator == (const EMsvc_02CliItf&);
    int operator != (const EMsvc_02CliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_02CliItf.H
//------------------------------------------------------------------------------

