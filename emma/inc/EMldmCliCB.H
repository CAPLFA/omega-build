/*******************************************************************************
 * \file           EMldmCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmCliCB_H
#define __EMldmCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmvtData.H"
#include "EMmvtmsgData.H"
#include "EMmvtssrData.H"


//-------------------- Declaration de la classe ------------------------

class EMldmCliCB {

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
    static  void  cree_mvtCB(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp
        );
    static  void  modifie_mvtCB(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp
        );
    static  void  consulte_mvtCB(
        int  nResuSigma,
        EMmvtData*  p_mvt,
        int  nIdOp
        );
    static  void  liste_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp
        );
    static  void  fin_liste_mvtCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_mvtCB(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_mvtCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_mvtCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  signale_mvtCB(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp
        );
    static  void  connexion_mvtCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_connexion_mvtCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mvtCB(
        EMmvtData*  p_mvt,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  modifie_mvtmsgCB(
        int  nResuSigma,
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp
        );
    static  void  supprime_mvtmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  liste_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp
        );
    static  void  fin_liste_mvtmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_mvtmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_mvtmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mvtssrCB(
        EMmvtssrData*  p_mvtssr,
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones


















private:

    // Mesures de securite :
    EMldmCliCB();
    virtual ~EMldmCliCB();
    EMldmCliCB(const EMldmCliCB&);
    EMldmCliCB& operator = (const EMldmCliCB&);
    int operator == (const EMldmCliCB&);
    int operator != (const EMldmCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMldmCliCB.H
//------------------------------------------------------------------------------

