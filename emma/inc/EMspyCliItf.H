/*******************************************************************************
 * \file           EMspyCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspyCliItf_H
#define __EMspyCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnivTraceData.H"
#include "EMetatFctData.H"
#include "EMconfspyData.H"
#include "EMtraceData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMspyCliItf {

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
    static  EMstatut  setNiveauTrace(    // Avec nIdOp d'origine (EMMA1)
        EMnivTraceData*  pNiveauTrace,
        int&  nIdOp
        );
    static  EMstatut  setEtatFonction(    // Avec nIdOp d'origine (EMMA1)
        EMetatFctData*  pEtatfct,
        int&  nIdOp
        );
    static  EMstatut  setConfig(    // Avec nIdOp d'origine (EMMA1)
        EMconfspyData*  pConfig,
        int&  nIdOp
        );
    static  EMstatut  traceEtat(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  traceConfig(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  traceTimer(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  traceFD(    // Avec nIdOp d'origine (EMMA1)
        int&  nIdOp
        );
    static  EMstatut  trace(    // Avec nIdOp d'origine (EMMA1)
        EMtraceData*  pTrace,
        int&  nIdOp
        );


private:

    // Mesures de securite :
    EMspyCliItf();
    virtual ~EMspyCliItf();
    EMspyCliItf(const EMspyCliItf&);
    EMspyCliItf& operator = (const EMspyCliItf&);
    int operator == (const EMspyCliItf&);
    int operator != (const EMspyCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMspyCliItf.H
//------------------------------------------------------------------------------

