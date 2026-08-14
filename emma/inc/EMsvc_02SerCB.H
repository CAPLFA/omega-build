/*******************************************************************************
 * \file           EMsvc_02SerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsvc_02.act
 * \date  Génération :  27/05/2025 a 12:52:55
 *******************************************************************************
 */


#ifndef __EMsvc_02SerCB_H
#define __EMsvc_02SerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetMultipleData.H"
#include "EMobjetComposeData.H"


//-------------------- Declaration de la classe ------------------------

class EMsvc_02SerCB {

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
    EMsvc_02SerCB();
    virtual ~EMsvc_02SerCB();
    EMsvc_02SerCB(const EMsvc_02SerCB&);
    EMsvc_02SerCB& operator = (const EMsvc_02SerCB&);
    int operator == (const EMsvc_02SerCB&);
    int operator != (const EMsvc_02SerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsvc_02SerCB.H
//------------------------------------------------------------------------------

