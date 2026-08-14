/*******************************************************************************
 * \file           EMifgCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgCliItf_H
#define __EMifgCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMinfoadData.H"
#include "EMinfoatisData.H"
#include "EMregulationData.H"
#include "EMinfosynthData.H"
#include "EMinfotexteData.H"
#include "EMcode_infraData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMifgCliItf {

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
    static  EMstatut  cree_infoad(    // Avec nIdOp d'origine (EMMA1)
        EMinfoadData*  p_infoad,
        int&  nIdOp
        );
    static  EMstatut  abonne_infoad(    // Avec nIdOp d'origine (EMMA1)
        EMinfoadData*  p_infoad,
        int&  nIdOp
        );
    static  EMstatut  abonne_infoatis(    // Avec nIdOp d'origine (EMMA1)
        EMinfoatisData*  p_infoatis,
        int&  nIdOp
        );
    static  EMstatut  evenement_infoatis(    // Avec nIdOp d'origine (EMMA1)
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  consulte_regulation(    // Avec nIdOp d'origine (EMMA1)
        EMregulationData*  p_regulation,
        int&  nIdOp
        );
    static  EMstatut  abonne_regulation(    // Avec nIdOp d'origine (EMMA1)
        EMregulationData*  p_regulation,
        int&  nIdOp
        );
    static  EMstatut  evenement_regulation(    // Avec nIdOp d'origine (EMMA1)
        EMregulationData*  p_regulation,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_infosynth(    // Avec nIdOp d'origine (EMMA1)
        EMinfosynthData*  p_infosynth,
        int&  nIdOp
        );
    static  EMstatut  abonne_infosynth(    // Avec nIdOp d'origine (EMMA1)
        EMinfosynthData*  p_infosynth,
        int&  nIdOp
        );
    static  EMstatut  cree_infotexte(    // Avec nIdOp d'origine (EMMA1)
        EMinfotexteData*  p_infotexte,
        int&  nIdOp
        );
    static  EMstatut  abonne_infotexte(    // Avec nIdOp d'origine (EMMA1)
        EMinfotexteData*  p_infotexte,
        int&  nIdOp
        );
    static  EMstatut  modifie_code_infra(    // Avec nIdOp d'origine (EMMA1)
        EMcode_infraData*  p_code_infra,
        int&  nIdOp
        );
    static  EMstatut  abonne_code_infra(    // Avec nIdOp d'origine (EMMA1)
        EMcode_infraData*  p_code_infra,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_infoad(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_infoad(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_infoatis(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_infoatis(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_regulation(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_regulation(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_infosynth(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_infosynth(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_infotexte(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_infotexte(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_code_infra(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_code_infra(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMifgCliItf();
    virtual ~EMifgCliItf();
    EMifgCliItf(const EMifgCliItf&);
    EMifgCliItf& operator = (const EMifgCliItf&);
    int operator == (const EMifgCliItf&);
    int operator != (const EMifgCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgCliItf.H
//------------------------------------------------------------------------------

