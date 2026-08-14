/*******************************************************************************
 * \file           EMifgCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgCliCB_H
#define __EMifgCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMinfoadData.H"
#include "EMinfoatisData.H"
#include "EMregulationData.H"
#include "EMinfosynthData.H"
#include "EMinfotexteData.H"
#include "EMcode_infraData.H"


//-------------------- Declaration de la classe ------------------------

class EMifgCliCB {

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
    static  void  cree_infoadCB(
        int  nResuSigma,
        EMinfoadData*  p_infoad,
        int  nIdOp
        );
    static  void  notifie_infoadCB(
        EMinfoadData*  p_infoad,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_infoadCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_infoadCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_infoatisCB(
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_infoatisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_infoatisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_infoatisCB(
        EMinfoatisData*  p_infoatis,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_regulationCB(
        int  nResuSigma,
        EMregulationData*  p_regulation,
        int  nIdOp
        );
    static  void  notifie_regulationCB(
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_regulationCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_regulationCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_regulationCB(
        EMregulationData*  p_regulation,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_infosynthCB(
        int  nResuSigma,
        EMinfosynthData*  p_infosynth,
        int  nIdOp
        );
    static  void  notifie_infosynthCB(
        EMinfosynthData*  p_infosynth,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_infosynthCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_infosynthCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_infotexteCB(
        int  nResuSigma,
        EMinfotexteData*  p_infotexte,
        int  nIdOp
        );
    static  void  notifie_infotexteCB(
        EMinfotexteData*  p_infotexte,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_infotexteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_infotexteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  modifie_code_infraCB(
        int  nResuSigma,
        EMcode_infraData*  p_code_infra,
        int  nIdOp
        );
    static  void  notifie_code_infraCB(
        EMcode_infraData*  p_code_infra,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_code_infraCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_code_infraCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones





















private:

    // Mesures de securite :
    EMifgCliCB();
    virtual ~EMifgCliCB();
    EMifgCliCB(const EMifgCliCB&);
    EMifgCliCB& operator = (const EMifgCliCB&);
    int operator == (const EMifgCliCB&);
    int operator != (const EMifgCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgCliCB.H
//------------------------------------------------------------------------------

