/*******************************************************************************
 * \file           EMdasSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasSerCB_H
#define __EMdasSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"


//-------------------- Declaration de la classe ------------------------

class EMdasSerCB {

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
    static  void  abonne_dasCB(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_dasCB(
        int  nIdAbo,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMdasSerCB();
    virtual ~EMdasSerCB();
    EMdasSerCB(const EMdasSerCB&);
    EMdasSerCB& operator = (const EMdasSerCB&);
    int operator == (const EMdasSerCB&);
    int operator != (const EMdasSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasSerCB.H
//------------------------------------------------------------------------------

