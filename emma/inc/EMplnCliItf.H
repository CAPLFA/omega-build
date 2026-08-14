/*******************************************************************************
 * \file           EMplnCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnCliItf_H
#define __EMplnCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"
#include "EMtransactionData.H"
#include "EMrequeteData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMplnCliItf {

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
    static  EMstatut  abonne_pln(    // Avec nIdOp d'origine (EMMA1)
        EMaboData*  pAbo,
        int&  nIdOp
        );
    static  EMstatut  consulte_transaction(    // Avec nIdOp d'origine (EMMA1)
        EMtransactionData*  pTransac,
        int&  nIdOp
        );
    static  EMstatut  consulte_requete(    // Avec nIdOp d'origine (EMMA1)
        EMrequeteData*  pRequete,
        int&  nIdOp
        );
    static  EMstatut  abonne_strip(    // Avec nIdOp d'origine (EMMA1)
        EMaboData*  pAbo,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_pln(    // Nouvelle methode avec nIdMsg
        int  nIdAbonn,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_pln(   // Sans nIdMsg pour compatibilite
        int  nIdAbonn
        );
    static  EMstatut  modifie_abonne_pln(    // Nouvelle methode avec nIdMsg
        int  nIdAbonn,
        EMaboData*  pAbo,
        int&  nIdMsg
        );
    static  EMstatut  modifie_abonne_pln(   // Sans nIdMsg pour compatibilite
        int  nIdAbonn,
        EMaboData*  pAbo
        );
    static  EMstatut  fin_abonne_strip(    // Nouvelle methode avec nIdMsg
        int  nIdAbonn,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_strip(   // Sans nIdMsg pour compatibilite
        int  nIdAbonn
        );


private:

    // Mesures de securite :
    EMplnCliItf();
    virtual ~EMplnCliItf();
    EMplnCliItf(const EMplnCliItf&);
    EMplnCliItf& operator = (const EMplnCliItf&);
    int operator == (const EMplnCliItf&);
    int operator != (const EMplnCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnCliItf.H
//------------------------------------------------------------------------------

