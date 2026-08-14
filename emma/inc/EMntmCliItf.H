/*******************************************************************************
 * \file           EMntmCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmCliItf_H
#define __EMntmCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnotamData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMntmCliItf {

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
    static  EMstatut  consulte_notam(    // Avec nIdOp d'origine (EMMA1)
        EMnotamData*  p_notam,
        int&  nIdOp
        );
    static  EMstatut  liste_notam(    // Avec nIdOp d'origine (EMMA1)
        EMnotamData*  p_notam,
        int&  nIdOp
        );
    static  EMstatut  abonne_notam(    // Avec nIdOp d'origine (EMMA1)
        EMnotamData*  p_notam,
        int&  nIdOp
        );
    static  EMstatut  evenement_notam(    // Avec nIdOp d'origine (EMMA1)
        EMnotamData*  p_notam,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_notam(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_notam(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMntmCliItf();
    virtual ~EMntmCliItf();
    EMntmCliItf(const EMntmCliItf&);
    EMntmCliItf& operator = (const EMntmCliItf&);
    int operator == (const EMntmCliItf&);
    int operator != (const EMntmCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmCliItf.H
//------------------------------------------------------------------------------

