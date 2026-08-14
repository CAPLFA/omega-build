/*******************************************************************************
 * \file           EMplnCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnCliCB_H
#define __EMplnCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMplnTYPES.H"
#include "EMplnData.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"
#include "EMstripData.H"


//-------------------- Declaration de la classe ------------------------

class EMplnCliCB {

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
    static  void  notifie_contexteCB(
        EM_CTXT_ATM  eCtxt
        );
    static  void  notifie_plnCB(
        EMplnData*  pPln,
        EM_PLN_TYPE_NOTIF  eNotif,
        int  nIdAbo,
        int  nIdOpe
        );
    static  void  repond_reponseCB(
        EMreponseData*  pPln,
        int  nIdent
        );
    static  void  repond_repStipCB(
        EMrepStipData*  pRepSTIP,
        int  nIdent
        );
    static  void  repond_repMultCB(
        EMrepMultData*  pRepListe,
        int  nIdent
        );
    static  void  signale_infoCB(
        int  nErreur,
        char*  gMessage,
        int  nIdent
        );
    static  void  fin_ini_abo_plnCB(
        int  nIdAbo
        );
    static  void  notifie_stripCB(
        EMstripData*  pStrip,
        int  nIdent
        );


    // Methodes de traitement des retours asynchrones









private:

    // Mesures de securite :
    EMplnCliCB();
    virtual ~EMplnCliCB();
    EMplnCliCB(const EMplnCliCB&);
    EMplnCliCB& operator = (const EMplnCliCB&);
    int operator == (const EMplnCliCB&);
    int operator != (const EMplnCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnCliCB.H
//------------------------------------------------------------------------------

