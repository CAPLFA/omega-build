/*******************************************************************************
 * \file           EMmassifCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifCliCB_H
#define __EMmassifCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolappData.H"
#include "EMmassifTYPES.H"
#include "EMreponseData.H"
#include "EMrepStipData.H"
#include "EMrepMultData.H"


//-------------------- Declaration de la classe ------------------------

class EMmassifCliCB {

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
    static  void  notifie_volCB(
        EMvolappData*  pVol,
        EM_MASSIF_TYPE_NOTIF  eNotif,
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
    static  void  fin_ini_abo_volCB(
        int  nIdAbo
        );


    // Methodes de traitement des retours asynchrones







private:

    // Mesures de securite :
    EMmassifCliCB();
    virtual ~EMmassifCliCB();
    EMmassifCliCB(const EMmassifCliCB&);
    EMmassifCliCB& operator = (const EMmassifCliCB&);
    int operator == (const EMmassifCliCB&);
    int operator != (const EMmassifCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifCliCB.H
//------------------------------------------------------------------------------

