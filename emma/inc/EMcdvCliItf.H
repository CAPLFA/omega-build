/*******************************************************************************
 * \file           EMcdvCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvCliItf_H
#define __EMcdvCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvol_completData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMcdvCliItf {

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
    static  EMstatut  cree_vol_complet(    // Avec nIdOp d'origine (EMMA1)
        EMvol_completData*  p_vol_complet,
        int&  nIdOp
        );
    static  EMstatut  modifie_vol_complet(    // Avec nIdOp d'origine (EMMA1)
        EMvol_completData*  p_vol_complet,
        int&  nIdOp
        );
    static  EMstatut  supprime_vol_complet(    // Avec nIdOp d'origine (EMMA1)
        EMvol_completData*  p_vol_complet,
        int&  nIdOp
        );
    static  EMstatut  consulte_vol_complet(    // Avec nIdOp d'origine (EMMA1)
        EMvol_completData*  p_vol_complet,
        int&  nIdOp
        );
    static  EMstatut  liste_vol_complet(    // Avec nIdOp d'origine (EMMA1)
        EMvol_completData*  p_vol_complet,
        int&  nIdOp
        );


private:

    // Mesures de securite :
    EMcdvCliItf();
    virtual ~EMcdvCliItf();
    EMcdvCliItf(const EMcdvCliItf&);
    EMcdvCliItf& operator = (const EMcdvCliItf&);
    int operator == (const EMcdvCliItf&);
    int operator != (const EMcdvCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcdvCliItf.H
//------------------------------------------------------------------------------

