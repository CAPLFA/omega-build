/*******************************************************************************
 * \file           EMsvc_02CliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_02.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_02CliCB_H
#define __EMsvc_02CliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


//-------------------- Declaration de la classe ------------------------

class EMsvc_02CliCB {

public:

    // Methodes communes
    static  void  activeCB(
        EMstatut  statut,
        const char*  gServeur,
        const char*  gMachine
        );
    static  void  deconnexionCB(
        EMstatut  statut
        );


    // Methodes de reception des messages provenant du serveur
    static  void  envoi_objetChaineCB(
        EMobjetChaineData*  p_objetChaine
        );
    static  void  envoi_objetBaseCB(
        EMobjetBaseData*  p_objetBase
        );
    static  void  envoi_objetMultipleCB(
        EMobjetMultipleData*  p_objetMultiple
        );
    static  void  envoi_objetComposeCB(
        EMobjetComposeData*  p_objetCompose
        );
    static  void  reponse_objetChaineCB(
        EMobjetChaineData*  p_objetChaine,
        int  nIdOpe
        );
    static  void  reponse_objetBaseCB(
        EMobjetBaseData*  p_objetBase,
        int  nIdOpe
        );
    static  void  reponse_objetMultipleCB(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOpe
        );
    static  void  reponse_objetComposeCB(
        EMobjetComposeData*  p_objetCompose,
        int  nIdOpe
        );


    // Methodes de traitement des retours asynchrones










private:

    // Mesures de securite :
    EMsvc_02CliCB();
    virtual ~EMsvc_02CliCB();
    EMsvc_02CliCB(const EMsvc_02CliCB&);
    EMsvc_02CliCB& operator = (const EMsvc_02CliCB&);
    int operator == (const EMsvc_02CliCB&);
    int operator != (const EMsvc_02CliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_02CliCB.H
//------------------------------------------------------------------------------

