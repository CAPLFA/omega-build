/*******************************************************************************
 * \file           EMpisteCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteCliItf_H
#define __EMpisteCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"



using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMpisteCliItf {

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
    static  EMstatut  abonne_piste(    // Avec nIdOp d'origine (EMMA1)
        char*  gTerrain,
        int&  nIdOp
        );
    static  EMstatut  consulte_piste(    // Avec nIdOp d'origine (EMMA1)
        char*  gTerrain,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_piste(    // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_piste(   // Sans nIdMsg pour compatibilite
        int  nIdAbo
        );


private:

    // Mesures de securite :
    EMpisteCliItf();
    virtual ~EMpisteCliItf();
    EMpisteCliItf(const EMpisteCliItf&);
    EMpisteCliItf& operator = (const EMpisteCliItf&);
    int operator == (const EMpisteCliItf&);
    int operator != (const EMpisteCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteCliItf.H
//------------------------------------------------------------------------------

