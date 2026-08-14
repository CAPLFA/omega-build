/*******************************************************************************
 * \file           EMifgSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMifg.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMifgSerCB_H
#define __EMifgSerCB_H


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

class EMifgSerCB {

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
    static  void  cree_infoadCB(
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_infoadCB(
        EMinfoadData*  p_infoad,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_infoatisCB(
        EMinfoatisData*  p_infoatis,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_infoatisCB(
        EMinfoatisData*  p_infoatis,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_regulationCB(
        EMregulationData*  p_regulation,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_regulationCB(
        EMregulationData*  p_regulation,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_regulationCB(
        EMregulationData*  p_regulation,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_infosynthCB(
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_infosynthCB(
        EMinfosynthData*  p_infosynth,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_infotexteCB(
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_infotexteCB(
        EMinfotexteData*  p_infotexte,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_code_infraCB(
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_code_infraCB(
        EMcode_infraData*  p_code_infra,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_infoadCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_infoatisCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_regulationCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_infosynthCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_infotexteCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_code_infraCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones



























private:

    // Mesures de securite :
    EMifgSerCB();
    virtual ~EMifgSerCB();
    EMifgSerCB(const EMifgSerCB&);
    EMifgSerCB& operator = (const EMifgSerCB&);
    int operator == (const EMifgSerCB&);
    int operator != (const EMifgSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMifgSerCB.H
//------------------------------------------------------------------------------

