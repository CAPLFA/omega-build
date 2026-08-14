/*******************************************************************************
 * \file           EMgmsCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsCliItf_H
#define __EMgmsCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmessageData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMgmsCliItf {

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
    static  EMstatut  cree_message(    // Avec nIdOp d'origine (EMMA1)
        EMmessageData*  p_message,
        int&  nIdOp
        );
    static  EMstatut  modifie_message(    // Avec nIdOp d'origine (EMMA1)
        EMmessageData*  p_message,
        int&  nIdOp
        );
    static  EMstatut  abonne_message(    // Avec nIdOp d'origine (EMMA1)
        EMmessageData*  p_message,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_message(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_message(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMgmsCliItf();
    virtual ~EMgmsCliItf();
    EMgmsCliItf(const EMgmsCliItf&);
    EMgmsCliItf& operator = (const EMgmsCliItf&);
    int operator == (const EMgmsCliItf&);
    int operator != (const EMgmsCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMgmsCliItf.H
//------------------------------------------------------------------------------

