/*******************************************************************************
 * \file           EMsvc_05SerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_05.act
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMsvc_05SerCB_H
#define __EMsvc_05SerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


//-------------------- Declaration de la classe ------------------------

class EMsvc_05SerCB {

public:

    // Methodes communes
    static void activeCB(
        int  nIdClient,
        const char*  gClient,
        const char*  gMachine
        );
    static void deconnexionCB(
        EMstatut  nStatut,
        int  nIdClient
        );
    static void desactiveCB(
        int  nIdClient
        );


    // Methodes de reception des messages provenant du client
    static  void  requete_objetChaineCB(
        EMobjetChaineData*  p_objetChaine,
        int  nIdOp,
        int  nIdClient
        );
    static  void  requete_objetBaseCB(
        EMobjetBaseData*  p_objetBase,
        int  nIdOp,
        int  nIdClient
        );
    static  void  requete_objetMultipleCB(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdOp,
        int  nIdClient
        );
    static  void  requete_objetComposeCB(
        EMobjetComposeData*  p_objetCompose,
        int  nIdOp,
        int  nIdClient
        );
    static  void  envoi_objetChaineCB(
        EMobjetChaineData*  p_objetChaine,
        int  nIdClient
        );
    static  void  envoi_objetBaseCB(
        EMobjetBaseData*  p_objetBase,
        int  nIdClient
        );
    static  void  envoi_objetMultipleCB(
        EMobjetMultipleData*  p_objetMultiple,
        int  nIdClient
        );
    static  void  envoi_objetComposeCB(
        EMobjetComposeData*  p_objetCompose,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones










private:

    // Mesures de securite :
    EMsvc_05SerCB();
    virtual ~EMsvc_05SerCB();
    EMsvc_05SerCB(const EMsvc_05SerCB&);
    EMsvc_05SerCB& operator = (const EMsvc_05SerCB&);
    int operator == (const EMsvc_05SerCB&);
    int operator != (const EMsvc_05SerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_05SerCB.H
//------------------------------------------------------------------------------

