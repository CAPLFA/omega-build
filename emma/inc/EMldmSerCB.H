/*******************************************************************************
 * \file           EMldmSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMldm.act
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMldmSerCB_H
#define __EMldmSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmvtData.H"
#include "EMmvtmsgData.H"
#include "EMmvtssrData.H"


//-------------------- Declaration de la classe ------------------------

class EMldmSerCB {

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
    static  void  cree_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_mvtCB(
        EMmvtData*  p_mvt,
        int  nIdOp,
        int  nIdClient
        );
    static  void  connexion_mvtCB(
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mvtCB(
        EMmvtData*  p_mvt,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mvtmsgCB(
        EMmvtmsgData*  p_mvtmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mvtssrCB(
        EMmvtssrData*  p_mvtssr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_mvtCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_connexion_mvtCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_mvtmsgCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones























private:

    // Mesures de securite :
    EMldmSerCB();
    virtual ~EMldmSerCB();
    EMldmSerCB(const EMldmSerCB&);
    EMldmSerCB& operator = (const EMldmSerCB&);
    int operator == (const EMldmSerCB&);
    int operator != (const EMldmSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMldmSerCB.H
//------------------------------------------------------------------------------

