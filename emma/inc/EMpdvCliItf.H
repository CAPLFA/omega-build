/*******************************************************************************
 * \file           EMpdvCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvCliItf_H
#define __EMpdvCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMddvData.H"
#include "EMdvrData.H"
#include "EMddvmsgData.H"
#include "EMddv_infotactData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMpdvCliItf {

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
    static  EMstatut  cree_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int&  nIdOp
        );
    static  EMstatut  modifie_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int&  nIdOp
        );
    static  EMstatut  consulte_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int&  nIdOp
        );
    static  EMstatut  liste_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int&  nIdOp
        );
    static  EMstatut  abonne_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int&  nIdOp
        );
    static  EMstatut  evenement_ddv(    // Avec nIdOp d'origine (EMMA1)
        EMddvData*  p_ddv,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  liste_dvr(    // Avec nIdOp d'origine (EMMA1)
        EMdvrData*  p_dvr,
        int&  nIdOp
        );
    static  EMstatut  cree_ddvmsg(    // Avec nIdOp d'origine (EMMA1)
        EMddvmsgData*  p_ddvmsg,
        int&  nIdOp
        );
    static  EMstatut  supprime_ddvmsg(    // Avec nIdOp d'origine (EMMA1)
        EMddvmsgData*  p_ddvmsg,
        int&  nIdOp
        );
    static  EMstatut  liste_ddvmsg(    // Avec nIdOp d'origine (EMMA1)
        EMddvmsgData*  p_ddvmsg,
        int&  nIdOp
        );
    static  EMstatut  abonne_ddvmsg(    // Avec nIdOp d'origine (EMMA1)
        EMddvmsgData*  p_ddvmsg,
        int&  nIdOp
        );
    static  EMstatut  evenement_ddvmsg(    // Avec nIdOp d'origine (EMMA1)
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  consulte_ddv_infotact(    // Avec nIdOp d'origine (EMMA1)
        EMddv_infotactData*  p_ddv_infotact,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_ddv(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_ddv(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_ddvmsg(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_ddvmsg(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMpdvCliItf();
    virtual ~EMpdvCliItf();
    EMpdvCliItf(const EMpdvCliItf&);
    EMpdvCliItf& operator = (const EMpdvCliItf&);
    int operator == (const EMpdvCliItf&);
    int operator != (const EMpdvCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvCliItf.H
//------------------------------------------------------------------------------

