/*******************************************************************************
 * \file           EMpdvSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvSerCB_H
#define __EMpdvSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMddvData.H"
#include "EMdvrData.H"
#include "EMddvmsgData.H"
#include "EMddv_infotactData.H"


//-------------------- Declaration de la classe ------------------------

class EMpdvSerCB {

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
    static  void  cree_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_ddvCB(
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_dvrCB(
        EMdvrData*  p_dvr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_ddv_infotactCB(
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_ddvCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_ddvmsgCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones






















private:

    // Mesures de securite :
    EMpdvSerCB();
    virtual ~EMpdvSerCB();
    EMpdvSerCB(const EMpdvSerCB&);
    EMpdvSerCB& operator = (const EMpdvSerCB&);
    int operator == (const EMpdvSerCB&);
    int operator != (const EMpdvSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvSerCB.H
//------------------------------------------------------------------------------

