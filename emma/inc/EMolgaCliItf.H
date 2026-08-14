/*******************************************************************************
 * \file           EMolgaCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaCliItf_H
#define __EMolgaCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMolgaCliItf {

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
    static  EMstatut  abonne_confOpe(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  abonne_nivTrans(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  modifie_confOpe(    // Avec nIdOp d'origine (EMMA1)
        EMconfOpeData*  pConfOpe,
        int&  nIdOp
        );
    static  EMstatut  modifie_nivTrans(    // Avec nIdOp d'origine (EMMA1)
        EMnivTransData*  pNivTrans,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_confOpe(    // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_confOpe(   // Sans nIdMsg pour compatibilite
        int  nIdAbo
        );
    static  EMstatut  fin_abonne_nivTrans(    // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_nivTrans(   // Sans nIdMsg pour compatibilite
        int  nIdAbo
        );


private:

    // Mesures de securite :
    EMolgaCliItf();
    virtual ~EMolgaCliItf();
    EMolgaCliItf(const EMolgaCliItf&);
    EMolgaCliItf& operator = (const EMolgaCliItf&);
    int operator == (const EMolgaCliItf&);
    int operator != (const EMolgaCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaCliItf.H
//------------------------------------------------------------------------------

