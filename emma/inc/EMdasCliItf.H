/*******************************************************************************
 * \file           EMdasCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasCliItf_H
#define __EMdasCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMdasCliItf {

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
    static  EMstatut  abonne_das(    // Avec nIdOp d'origine (EMMA1)
        EMaboData*  pAbo,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_das(    // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_das(   // Sans nIdMsg pour compatibilite
        int  nIdAbo
        );


private:

    // Mesures de securite :
    EMdasCliItf();
    virtual ~EMdasCliItf();
    EMdasCliItf(const EMdasCliItf&);
    EMdasCliItf& operator = (const EMdasCliItf&);
    int operator == (const EMdasCliItf&);
    int operator != (const EMdasCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasCliItf.H
//------------------------------------------------------------------------------

