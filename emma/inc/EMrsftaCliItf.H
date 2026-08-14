/*******************************************************************************
 * \file           EMrsftaCliItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaCliItf_H
#define __EMrsftaCliItf_H


//-------------------- Includes ----------------------------------------

#include <vector>

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmsg_exploiteData.H"
#include "EMmsg_transmisData.H"
#include "EMmsg_preredigeData.H"
#include "EMcpladrData.H"
#include "EMmsg_balsData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMrsftaCliItf {

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
    static  EMstatut  cree_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int&  nIdOp
        );
    static  EMstatut  supprime_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int&  nIdOp
        );
    static  EMstatut  consulte_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int&  nIdOp
        );
    static  EMstatut  liste_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int&  nIdOp
        );
    static  EMstatut  abonne_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int&  nIdOp
        );
    static  EMstatut  connexion_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  evenement_msg_exploite(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_msg_transmis(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_transmisData*  p_msg_transmis,
        int&  nIdOp
        );
    static  EMstatut  consulte_msg_transmis(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_transmisData*  p_msg_transmis,
        int&  nIdOp
        );
    static  EMstatut  liste_msg_transmis(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_transmisData*  p_msg_transmis,
        int&  nIdOp
        );
    static  EMstatut  abonne_msg_transmis(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_transmisData*  p_msg_transmis,
        int&  nIdOp
        );
    static  EMstatut  connexion_msg_transmis(    // Avec nIdOp d'origine (EMMA1)
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  cree_msg_preredige(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_preredigeData*  p_msg_preredige,
        int&  nIdOp
        );
    static  EMstatut  modifie_msg_preredige(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_preredigeData*  p_msg_preredige,
        int&  nIdOp
        );
    static  EMstatut  supprime_msg_preredige(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_preredigeData*  p_msg_preredige,
        int&  nIdOp
        );
    static  EMstatut  consulte_msg_preredige(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_preredigeData*  p_msg_preredige,
        int&  nIdOp
        );
    static  EMstatut  liste_msg_preredige(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_preredigeData*  p_msg_preredige,
        int&  nIdOp
        );
    static  EMstatut  cree_cpladr(    // Avec nIdOp d'origine (EMMA1)
        EMcpladrData*  p_cpladr,
        int&  nIdOp
        );
    static  EMstatut  modifie_cpladr(    // Avec nIdOp d'origine (EMMA1)
        EMcpladrData*  p_cpladr,
        int&  nIdOp
        );
    static  EMstatut  supprime_cpladr(    // Avec nIdOp d'origine (EMMA1)
        EMcpladrData*  p_cpladr,
        int&  nIdOp
        );
    static  EMstatut  abonne_cpladr(    // Avec nIdOp d'origine (EMMA1)
        EMcpladrData*  p_cpladr,
        int&  nIdOp
        );
    static  EMstatut  consulte_msg_bals(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_balsData*  p_msg_bals,
        int&  nIdOp
        );
    static  EMstatut  abonne_msg_bals(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_balsData*  p_msg_bals,
        int&  nIdOp
        );
    static  EMstatut  evenement_msg_bals(    // Avec nIdOp d'origine (EMMA1)
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int&  nIdOp
        );
    static  EMstatut  fin_abonne_msg_exploite(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_connexion_msg_exploite(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_connexion_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_msg_transmis(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_connexion_msg_transmis(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_connexion_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_cpladr(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_cpladr(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );
    static  EMstatut  fin_abonne_msg_bals(    // Nouvelle methode avec nIdMsg
        int  nIdOp,
        int&  nIdMsg
        );
    static  EMstatut  fin_abonne_msg_bals(   // Sans nIdMsg pour compatibilite
        int  nIdOp
        );


private:

    // Mesures de securite :
    EMrsftaCliItf();
    virtual ~EMrsftaCliItf();
    EMrsftaCliItf(const EMrsftaCliItf&);
    EMrsftaCliItf& operator = (const EMrsftaCliItf&);
    int operator == (const EMrsftaCliItf&);
    int operator != (const EMrsftaCliItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaCliItf.H
//------------------------------------------------------------------------------

