/*******************************************************************************
 * \file           EMarcCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcCliItf_H
#define __EMarcCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMarchiveData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMarcCliItf {

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
    static  EMstatut  cree_archive(    // Avec nIdOp d'origine (EMMA1)
        EMarchiveData*  p_archive,
        int&  nIdOp
        );
    static  EMstatut  supprime_archive(    // Avec nIdOp d'origine (EMMA1)
        EMarchiveData*  p_archive,
        int&  nIdOp
        );
    static  EMstatut  liste_archive(    // Avec nIdOp d'origine (EMMA1)
        EMarchiveData*  p_archive,
        int&  nIdOp
        );
    static  EMstatut  abonne_archive(    // Avec nIdOp d'origine (EMMA1)
        EMarchiveData*  p_archive,
        int&  nIdOp
        );
    static  EMstatut  evenement_archive(    // Avec nIdOp d'origine (EMMA1)
        EMarchiveData*  p_archive,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_archive(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_archive(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMarcCliItf();
    virtual ~EMarcCliItf();
    EMarcCliItf(const EMarcCliItf&);
    EMarcCliItf& operator = (const EMarcCliItf&);
    int operator == (const EMarcCliItf&);
    int operator != (const EMarcCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMarcCliItf.H
//------------------------------------------------------------------------------

