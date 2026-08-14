/*******************************************************************************
 * \file           EMolgaSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaSerCB_H
#define __EMolgaSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


//-------------------- Declaration de la classe ------------------------

class EMolgaSerCB {

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
    static  void  abonne_confOpeCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_nivTransCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_confOpeCB(
        EMconfOpeData*  pConfOpe,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_nivTransCB(
        EMnivTransData*  pNivTrans,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_confOpeCB(
        int  nIdAbo,
        int  nIdClient
        );
    static  void  fin_abonne_nivTransCB(
        int  nIdAbo,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMolgaSerCB();
    virtual ~EMolgaSerCB();
    EMolgaSerCB(const EMolgaSerCB&);
    EMolgaSerCB& operator = (const EMolgaSerCB&);
    int operator == (const EMolgaSerCB&);
    int operator != (const EMolgaSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaSerCB.H
//------------------------------------------------------------------------------

