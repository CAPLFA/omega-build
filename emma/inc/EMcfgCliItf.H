/*******************************************************************************
 * \file           EMcfgCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgCliItf_H
#define __EMcfgCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMcfgCliItf {

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
    static  EMstatut  cree_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  modifie_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  supprime_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  consulte_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  liste_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  abonne_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int&  nIdOp
        );
    static  EMstatut  evenement_config(    // Avec nIdOp d'origine (EMMA1)
        EMconfigData*  p_config,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_poslog(    // Avec nIdOp d'origine (EMMA1)
        EMposlogData*  p_poslog,
        int&  nIdOp
        );
    static  EMstatut  modifie_poslog(    // Avec nIdOp d'origine (EMMA1)
        EMposlogData*  p_poslog,
        int&  nIdOp
        );
    static  EMstatut  consulte_poslog(    // Avec nIdOp d'origine (EMMA1)
        EMposlogData*  p_poslog,
        int&  nIdOp
        );
    static  EMstatut  liste_poslog(    // Avec nIdOp d'origine (EMMA1)
        EMposlogData*  p_poslog,
        int&  nIdOp
        );
    static  EMstatut  abonne_poslog(    // Avec nIdOp d'origine (EMMA1)
        EMposlogData*  p_poslog,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_config(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_config(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_poslog(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_poslog(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMcfgCliItf();
    virtual ~EMcfgCliItf();
    EMcfgCliItf(const EMcfgCliItf&);
    EMcfgCliItf& operator = (const EMcfgCliItf&);
    int operator == (const EMcfgCliItf&);
    int operator != (const EMcfgCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgCliItf.H
//------------------------------------------------------------------------------

