/*******************************************************************************
 * \file           EMmassifCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifCliItf_H
#define __EMmassifCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"
#include "EMmassifactionData.H"
#include "EMrequeteData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMmassifCliItf {

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
    static  EMstatut  abonne_vol(    // Avec nIdOp d'origine (EMMA1)
        EMaboData*  pAbo,
        int&  nIdOp
        );
    static  EMstatut  consulte_transaction(    // Avec nIdOp d'origine (EMMA1)
        EMmassifactionData*  pTransac,
        int&  nIdOp
        );
    static  EMstatut  consulte_requete(    // Avec nIdOp d'origine (EMMA1)
        EMrequeteData*  pRequete,
        int&  nIdOp
        );
    static  EMstatut  modifie_abonne_vol(    // Nouvelle methode avec nIdMsg
        int  nIdAbonn,
        EMaboData*  pAbo,
        int&  nIdMsg
        );
    static  EMstatut  modifie_abonne_vol(   // Sans nIdMsg pour compatibilite
        int  nIdAbonn,
        EMaboData*  pAbo
        );
    static  EMstatut  fin_abonne_vol(    // Nouvelle methode avec nIdMsg
        int  nIdAbonn,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_vol(   // Sans nIdMsg pour compatibilite
        int  nIdAbonn
        );


private:

    // Mesures de securite :
    EMmassifCliItf();
    virtual ~EMmassifCliItf();
    EMmassifCliItf(const EMmassifCliItf&);
    EMmassifCliItf& operator = (const EMmassifCliItf&);
    int operator == (const EMmassifCliItf&);
    int operator != (const EMmassifCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifCliItf.H
//------------------------------------------------------------------------------

