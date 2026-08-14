/*******************************************************************************
 * \file           EMbdrefCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMbdref.act
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMbdrefCliItf_H
#define __EMbdrefCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaeronefData.H"
#include "EMdvmData.H"
#include "EMprerouteData.H"
#include "EMtypaeroData.H"
#include "EMpointData.H"
#include "EMrt_stripData.H"
#include "EMaerodromeData.H"
#include "EMpoint_trkData.H"
#include "EMroute_trkData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMbdrefCliItf {

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
    static  EMstatut  cree_aeronef(    // Avec nIdOp d'origine (EMMA1)
        EMaeronefData*  p_aeronef,
        int&  nIdOp
        );
    static  EMstatut  modifie_aeronef(    // Avec nIdOp d'origine (EMMA1)
        EMaeronefData*  p_aeronef,
        int&  nIdOp
        );
    static  EMstatut  supprime_aeronef(    // Avec nIdOp d'origine (EMMA1)
        EMaeronefData*  p_aeronef,
        int&  nIdOp
        );
    static  EMstatut  consulte_aeronef(    // Avec nIdOp d'origine (EMMA1)
        EMaeronefData*  p_aeronef,
        int&  nIdOp
        );
    static  EMstatut  liste_aeronef(    // Avec nIdOp d'origine (EMMA1)
        EMaeronefData*  p_aeronef,
        int&  nIdOp
        );
    static  EMstatut  cree_dvm(    // Avec nIdOp d'origine (EMMA1)
        EMdvmData*  p_dvm,
        int&  nIdOp
        );
    static  EMstatut  modifie_dvm(    // Avec nIdOp d'origine (EMMA1)
        EMdvmData*  p_dvm,
        int&  nIdOp
        );
    static  EMstatut  supprime_dvm(    // Avec nIdOp d'origine (EMMA1)
        EMdvmData*  p_dvm,
        int&  nIdOp
        );
    static  EMstatut  consulte_dvm(    // Avec nIdOp d'origine (EMMA1)
        EMdvmData*  p_dvm,
        int&  nIdOp
        );
    static  EMstatut  liste_dvm(    // Avec nIdOp d'origine (EMMA1)
        EMdvmData*  p_dvm,
        int&  nIdOp
        );
    static  EMstatut  cree_preroute(    // Avec nIdOp d'origine (EMMA1)
        EMprerouteData*  p_preroute,
        int&  nIdOp
        );
    static  EMstatut  modifie_preroute(    // Avec nIdOp d'origine (EMMA1)
        EMprerouteData*  p_preroute,
        int&  nIdOp
        );
    static  EMstatut  supprime_preroute(    // Avec nIdOp d'origine (EMMA1)
        EMprerouteData*  p_preroute,
        int&  nIdOp
        );
    static  EMstatut  consulte_preroute(    // Avec nIdOp d'origine (EMMA1)
        EMprerouteData*  p_preroute,
        int&  nIdOp
        );
    static  EMstatut  liste_preroute(    // Avec nIdOp d'origine (EMMA1)
        EMprerouteData*  p_preroute,
        int&  nIdOp
        );
    static  EMstatut  cree_typaero(    // Avec nIdOp d'origine (EMMA1)
        EMtypaeroData*  p_typaero,
        int&  nIdOp
        );
    static  EMstatut  modifie_typaero(    // Avec nIdOp d'origine (EMMA1)
        EMtypaeroData*  p_typaero,
        int&  nIdOp
        );
    static  EMstatut  supprime_typaero(    // Avec nIdOp d'origine (EMMA1)
        EMtypaeroData*  p_typaero,
        int&  nIdOp
        );
    static  EMstatut  consulte_typaero(    // Avec nIdOp d'origine (EMMA1)
        EMtypaeroData*  p_typaero,
        int&  nIdOp
        );
    static  EMstatut  liste_typaero(    // Avec nIdOp d'origine (EMMA1)
        EMtypaeroData*  p_typaero,
        int&  nIdOp
        );
    static  EMstatut  cree_point(    // Avec nIdOp d'origine (EMMA1)
        EMpointData*  p_point,
        int&  nIdOp
        );
    static  EMstatut  modifie_point(    // Avec nIdOp d'origine (EMMA1)
        EMpointData*  p_point,
        int&  nIdOp
        );
    static  EMstatut  supprime_point(    // Avec nIdOp d'origine (EMMA1)
        EMpointData*  p_point,
        int&  nIdOp
        );
    static  EMstatut  consulte_point(    // Avec nIdOp d'origine (EMMA1)
        EMpointData*  p_point,
        int&  nIdOp
        );
    static  EMstatut  liste_point(    // Avec nIdOp d'origine (EMMA1)
        EMpointData*  p_point,
        int&  nIdOp
        );
    static  EMstatut  cree_rt_strip(    // Avec nIdOp d'origine (EMMA1)
        EMrt_stripData*  p_rt_strip,
        int&  nIdOp
        );
    static  EMstatut  modifie_rt_strip(    // Avec nIdOp d'origine (EMMA1)
        EMrt_stripData*  p_rt_strip,
        int&  nIdOp
        );
    static  EMstatut  supprime_rt_strip(    // Avec nIdOp d'origine (EMMA1)
        EMrt_stripData*  p_rt_strip,
        int&  nIdOp
        );
    static  EMstatut  consulte_rt_strip(    // Avec nIdOp d'origine (EMMA1)
        EMrt_stripData*  p_rt_strip,
        int&  nIdOp
        );
    static  EMstatut  liste_rt_strip(    // Avec nIdOp d'origine (EMMA1)
        EMrt_stripData*  p_rt_strip,
        int&  nIdOp
        );
    static  EMstatut  cree_aerodrome(    // Avec nIdOp d'origine (EMMA1)
        EMaerodromeData*  p_aerodrome,
        int&  nIdOp
        );
    static  EMstatut  modifie_aerodrome(    // Avec nIdOp d'origine (EMMA1)
        EMaerodromeData*  p_aerodrome,
        int&  nIdOp
        );
    static  EMstatut  supprime_aerodrome(    // Avec nIdOp d'origine (EMMA1)
        EMaerodromeData*  p_aerodrome,
        int&  nIdOp
        );
    static  EMstatut  consulte_aerodrome(    // Avec nIdOp d'origine (EMMA1)
        EMaerodromeData*  p_aerodrome,
        int&  nIdOp
        );
    static  EMstatut  liste_aerodrome(    // Avec nIdOp d'origine (EMMA1)
        EMaerodromeData*  p_aerodrome,
        int&  nIdOp
        );
    static  EMstatut  consulte_point_trk(    // Avec nIdOp d'origine (EMMA1)
        EMpoint_trkData*  p_point_trk,
        int&  nIdOp
        );
    static  EMstatut  liste_point_trk(    // Avec nIdOp d'origine (EMMA1)
        EMpoint_trkData*  p_point_trk,
        int&  nIdOp
        );
    static  EMstatut  consulte_route_trk(    // Avec nIdOp d'origine (EMMA1)
        EMroute_trkData*  p_route_trk,
        int&  nIdOp
        );
    static  EMstatut  liste_route_trk(    // Avec nIdOp d'origine (EMMA1)
        EMroute_trkData*  p_route_trk,
        int&  nIdOp
        );
    static  EMstatut  abonne_route_trk(    // Avec nIdOp d'origine (EMMA1)
        EMroute_trkData*  p_route_trk,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_route_trk(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_route_trk(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMbdrefCliItf();
    virtual ~EMbdrefCliItf();
    EMbdrefCliItf(const EMbdrefCliItf&);
    EMbdrefCliItf& operator = (const EMbdrefCliItf&);
    int operator == (const EMbdrefCliItf&);
    int operator != (const EMbdrefCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMbdrefCliItf.H
//------------------------------------------------------------------------------

