/*******************************************************************************
 * \file           EMcfgCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgCliCB_H
#define __EMcfgCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


//-------------------- Declaration de la classe ------------------------

class EMcfgCliCB {

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
    static  void  cree_configCB(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp
        );
    static  void  modifie_configCB(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp
        );
    static  void  supprime_configCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_configCB(
        int  nResuSigma,
        EMconfigData*  p_config,
        int  nIdOp
        );
    static  void  liste_configCB(
        EMconfigData*  p_config,
        int  nIdOp
        );
    static  void  fin_liste_configCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_configCB(
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_configCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_configCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_configCB(
        EMconfigData*  p_config,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_poslogCB(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp
        );
    static  void  modifie_poslogCB(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp
        );
    static  void  consulte_poslogCB(
        int  nResuSigma,
        EMposlogData*  p_poslog,
        int  nIdOp
        );
    static  void  liste_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp
        );
    static  void  fin_liste_poslogCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_poslogCB(
        EMposlogData*  p_poslog,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_poslogCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_poslogCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones
















private:

    // Mesures de securite :
    EMcfgCliCB();
    virtual ~EMcfgCliCB();
    EMcfgCliCB(const EMcfgCliCB&);
    EMcfgCliCB& operator = (const EMcfgCliCB&);
    int operator == (const EMcfgCliCB&);
    int operator != (const EMcfgCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgCliCB.H
//------------------------------------------------------------------------------

