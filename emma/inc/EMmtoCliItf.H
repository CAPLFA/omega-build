/*******************************************************************************
 * \file           EMmtoCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoCliItf_H
#define __EMmtoCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmtopubData.H"
#include "EMmtoqnhData.H"
#include "EMmtolocData.H"
#include "EMmtozoneData.H"
#include "EMqiraData.H"
#include "EMrepiraData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMmtoCliItf {

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
    static  EMstatut  consulte_mtopub(    // Avec nIdOp d'origine (EMMA1)
        EMmtopubData*  p_mtopub,
        int&  nIdOp
        );
    static  EMstatut  abonne_mtopub(    // Avec nIdOp d'origine (EMMA1)
        EMmtopubData*  p_mtopub,
        int&  nIdOp
        );
    static  EMstatut  evenement_mtopub(    // Avec nIdOp d'origine (EMMA1)
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  abonne_mtoqnh(    // Avec nIdOp d'origine (EMMA1)
        EMmtoqnhData*  p_mtoqnh,
        int&  nIdOp
        );
    static  EMstatut  cree_mtoloc(    // Avec nIdOp d'origine (EMMA1)
        EMmtolocData*  p_mtoloc,
        int&  nIdOp
        );
    static  EMstatut  consulte_mtoloc(    // Avec nIdOp d'origine (EMMA1)
        EMmtolocData*  p_mtoloc,
        int&  nIdOp
        );
    static  EMstatut  abonne_mtoloc(    // Avec nIdOp d'origine (EMMA1)
        EMmtolocData*  p_mtoloc,
        int&  nIdOp
        );
    static  EMstatut  evenement_mtoloc(    // Avec nIdOp d'origine (EMMA1)
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_mtozone(    // Avec nIdOp d'origine (EMMA1)
        EMmtozoneData*  p_mtozone,
        int&  nIdOp
        );
    static  EMstatut  liste_mtozone(    // Avec nIdOp d'origine (EMMA1)
        EMmtozoneData*  p_mtozone,
        int&  nIdOp
        );
    static  EMstatut  evenement_mtozone(    // Avec nIdOp d'origine (EMMA1)
        EMmtozoneData*  p_mtozone,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_qira(    // Avec nIdOp d'origine (EMMA1)
        EMqiraData*  p_qira,
        int&  nIdOp
        );
    static  EMstatut  supprime_repira(    // Avec nIdOp d'origine (EMMA1)
        EMrepiraData*  p_repira,
        int&  nIdOp
        );
    static  EMstatut  abonne_repira(    // Avec nIdOp d'origine (EMMA1)
        EMrepiraData*  p_repira,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_mtopub(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_mtopub(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_mtoqnh(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_mtoqnh(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_mtoloc(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_mtoloc(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_repira(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_repira(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMmtoCliItf();
    virtual ~EMmtoCliItf();
    EMmtoCliItf(const EMmtoCliItf&);
    EMmtoCliItf& operator = (const EMmtoCliItf&);
    int operator == (const EMmtoCliItf&);
    int operator != (const EMmtoCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoCliItf.H
//------------------------------------------------------------------------------

