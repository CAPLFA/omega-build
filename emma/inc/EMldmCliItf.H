/*******************************************************************************
 * \file           EMldmCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmCliItf_H
#define __EMldmCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmvtData.H"
#include "EMmvtmsgData.H"
#include "EMmvtssrData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMldmCliItf {

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
    static  EMstatut  cree_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int&  nIdOp
        );
    static  EMstatut  modifie_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int&  nIdOp
        );
    static  EMstatut  consulte_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int&  nIdOp
        );
    static  EMstatut  liste_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int&  nIdOp
        );
    static  EMstatut  abonne_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int&  nIdOp
        );
    static  EMstatut  connexion_mvt(    // Avec nIdOp d'origine (EMMA1)
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  evenement_mvt(    // Avec nIdOp d'origine (EMMA1)
        EMmvtData*  p_mvt,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  modifie_mvtmsg(    // Avec nIdOp d'origine (EMMA1)
        EMmvtmsgData*  p_mvtmsg,
        int&  nIdOp
        );
    static  EMstatut  supprime_mvtmsg(    // Avec nIdOp d'origine (EMMA1)
        EMmvtmsgData*  p_mvtmsg,
        int&  nIdOp
        );
    static  EMstatut  liste_mvtmsg(    // Avec nIdOp d'origine (EMMA1)
        EMmvtmsgData*  p_mvtmsg,
        int&  nIdOp
        );
    static  EMstatut  abonne_mvtmsg(    // Avec nIdOp d'origine (EMMA1)
        EMmvtmsgData*  p_mvtmsg,
        int&  nIdOp
        );
    static  EMstatut  evenement_mvtmsg(    // Avec nIdOp d'origine (EMMA1)
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  evenement_mvtssr(    // Avec nIdOp d'origine (EMMA1)
        EMmvtssrData*  p_mvtssr,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_mvt(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_mvt(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_connexion_mvt(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_connexion_mvt(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_mvtmsg(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_mvtmsg(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMldmCliItf();
    virtual ~EMldmCliItf();
    EMldmCliItf(const EMldmCliItf&);
    EMldmCliItf& operator = (const EMldmCliItf&);
    int operator == (const EMldmCliItf&);
    int operator != (const EMldmCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMldmCliItf.H
//------------------------------------------------------------------------------

