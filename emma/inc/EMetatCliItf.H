/*******************************************************************************
 * \file           EMetatCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatCliItf_H
#define __EMetatCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"



using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMetatCliItf {

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
    static  EMstatut  abonne_etat(    // Avec nIdOp d'origine (EMMA1)
        char*  gSysteme,
        int&  nIdOp
        );
    static  EMstatut  consulte_etat(    // Avec nIdOp d'origine (EMMA1)
        char*  gSysteme,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_etat(    // Nouvelle methode avec nIdMsg
        int  nIdAbo,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_etat(   // Sans nIdMsg pour compatibilite
        int  nIdAbo
        );


private:

    // Mesures de securite :
    EMetatCliItf();
    virtual ~EMetatCliItf();
    EMetatCliItf(const EMetatCliItf&);
    EMetatCliItf& operator = (const EMetatCliItf&);
    int operator == (const EMetatCliItf&);
    int operator != (const EMetatCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatCliItf.H
//------------------------------------------------------------------------------

