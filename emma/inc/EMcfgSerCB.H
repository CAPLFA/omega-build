/*******************************************************************************
 * \file           EMcfgSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcfg.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcfgSerCB_H
#define __EMcfgSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMconfigData.H"
#include "EMposlogData.H"


//-------------------- Declaration de la classe ------------------------

class EMcfgSerCB {

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
    static  void  cree_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_configCB(
        EMconfigData*  p_config,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_configCB(
        EMconfigData*  p_config,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_poslogCB(
        EMposlogData*  p_poslog,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_configCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_poslogCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones




















private:

    // Mesures de securite :
    EMcfgSerCB();
    virtual ~EMcfgSerCB();
    EMcfgSerCB(const EMcfgSerCB&);
    EMcfgSerCB& operator = (const EMcfgSerCB&);
    int operator == (const EMcfgSerCB&);
    int operator != (const EMcfgSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcfgSerCB.H
//------------------------------------------------------------------------------

