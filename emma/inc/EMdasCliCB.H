/*******************************************************************************
 * \file           EMdasCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasCliCB_H
#define __EMdasCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMdasData.H"


//-------------------- Declaration de la classe ------------------------

class EMdasCliCB {

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
    static  void  notifie_dasCB(
        EMdasData*  pDas,
        int  nIdAbo
        );
    static  void  signale_infoCB(
        int  nErreur,
        char*  gMessage,
        int  nIdAbo
        );
    static  void  fin_ini_abo_dasCB(
        int  nIdAbo
        );


    // Methodes de traitement des retours asynchrones




private:

    // Mesures de securite :
    EMdasCliCB();
    virtual ~EMdasCliCB();
    EMdasCliCB(const EMdasCliCB&);
    EMdasCliCB& operator = (const EMdasCliCB&);
    int operator == (const EMdasCliCB&);
    int operator != (const EMdasCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasCliCB.H
//------------------------------------------------------------------------------

