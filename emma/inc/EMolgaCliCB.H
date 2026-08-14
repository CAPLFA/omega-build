/*******************************************************************************
 * \file           EMolgaCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMolga.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMolgaCliCB_H
#define __EMolgaCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfOpeData.H"
#include "EMnivTransData.H"


//-------------------- Declaration de la classe ------------------------

class EMolgaCliCB {

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
    static  void  notifie_confOpeCB(
        EMconfOpeData*  pConfOpe,
        int  nIdAbo
        );
    static  void  notifie_nivTransCB(
        EMnivTransData*  pNivTrans,
        int  nIdAbo
        );
    static  void  signale_infoCB(
        int  nStatus,
        char*  gMessage,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones








private:

    // Mesures de securite :
    EMolgaCliCB();
    virtual ~EMolgaCliCB();
    EMolgaCliCB(const EMolgaCliCB&);
    EMolgaCliCB& operator = (const EMolgaCliCB&);
    int operator == (const EMolgaCliCB&);
    int operator != (const EMolgaCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMolgaCliCB.H
//------------------------------------------------------------------------------

