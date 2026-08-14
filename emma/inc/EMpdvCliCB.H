/*******************************************************************************
 * \file           EMpdvCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpdv.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMpdvCliCB_H
#define __EMpdvCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMddvData.H"
#include "EMdvrData.H"
#include "EMddvmsgData.H"
#include "EMddv_infotactData.H"


//-------------------- Declaration de la classe ------------------------

class EMpdvCliCB {

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
    static  void  cree_ddvCB(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp
        );
    static  void  modifie_ddvCB(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp
        );
    static  void  consulte_ddvCB(
        int  nResuSigma,
        EMddvData*  p_ddv,
        int  nIdOp
        );
    static  void  liste_ddvCB(
        EMddvData*  p_ddv,
        int  nIdOp
        );
    static  void  fin_liste_ddvCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_ddvCB(
        EMddvData*  p_ddv,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_ddvCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_ddvCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_ddvCB(
        EMddvData*  p_ddv,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  liste_dvrCB(
        EMdvrData*  p_dvr,
        int  nIdOp
        );
    static  void  fin_liste_dvrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_ddvmsgCB(
        int  nResuSigma,
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp
        );
    static  void  supprime_ddvmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  liste_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nIdOp
        );
    static  void  fin_liste_ddvmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_ddvmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_ddvmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_ddvmsgCB(
        EMddvmsgData*  p_ddvmsg,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_ddv_infotactCB(
        int  nResuSigma,
        EMddv_infotactData*  p_ddv_infotact,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones

















private:

    // Mesures de securite :
    EMpdvCliCB();
    virtual ~EMpdvCliCB();
    EMpdvCliCB(const EMpdvCliCB&);
    EMpdvCliCB& operator = (const EMpdvCliCB&);
    int operator == (const EMpdvCliCB&);
    int operator != (const EMpdvCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpdvCliCB.H
//------------------------------------------------------------------------------

