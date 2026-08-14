/*******************************************************************************
 * \file           EMpisteCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteCliCB_H
#define __EMpisteCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMpisteData.H"
#include "EMpisteTYPES.H"


//-------------------- Declaration de la classe ------------------------

class EMpisteCliCB {

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
    static  void  notifie_pisteCB(
        EMpisteData*  pPiste,
        EM_PISTE_TYPE_NOTIF  eNotif,
        int  nIdAbo
        );
    static  void  repond_pisteCB(
        EMpisteData*  pPiste,
        int  nIdRequete
        );
    static  void  signale_infoCB(
        int  nStatus,
        char*  gMessage,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMpisteCliCB();
    virtual ~EMpisteCliCB();
    EMpisteCliCB(const EMpisteCliCB&);
    EMpisteCliCB& operator = (const EMpisteCliCB&);
    int operator == (const EMpisteCliCB&);
    int operator != (const EMpisteCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteCliCB.H
//------------------------------------------------------------------------------

