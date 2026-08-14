/*******************************************************************************
 * \file           EMmtoCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoCliCB_H
#define __EMmtoCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmtopubData.H"
#include "EMmtoqnhData.H"
#include "EMmtolocData.H"
#include "EMmtozoneData.H"
#include "EMqiraData.H"
#include "EMrepiraData.H"


//-------------------- Declaration de la classe ------------------------

class EMmtoCliCB {

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
    static  void  consulte_mtopubCB(
        int  nResuSigma,
        EMmtopubData*  p_mtopub,
        int  nIdOp
        );
    static  void  notifie_mtopubCB(
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_mtopubCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_mtopubCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mtopubCB(
        EMmtopubData*  p_mtopub,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_mtoqnhCB(
        EMmtoqnhData*  p_mtoqnh,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_mtoqnhCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_mtoqnhCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_mtolocCB(
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp
        );
    static  void  consulte_mtolocCB(
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp
        );
    static  void  notifie_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_mtolocCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_mtolocCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_mtozoneCB(
        int  nResuSigma,
        EMmtozoneData*  p_mtozone,
        int  nIdOp
        );
    static  void  liste_mtozoneCB(
        EMmtozoneData*  p_mtozone,
        int  nIdOp
        );
    static  void  fin_liste_mtozoneCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_mtozoneCB(
        EMmtozoneData*  p_mtozone,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_qiraCB(
        int  nResuSigma,
        EMqiraData*  p_qira,
        int  nIdOp
        );
    static  void  supprime_repiraCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_repiraCB(
        EMrepiraData*  p_repira,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_repiraCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_repiraCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones




















private:

    // Mesures de securite :
    EMmtoCliCB();
    virtual ~EMmtoCliCB();
    EMmtoCliCB(const EMmtoCliCB&);
    EMmtoCliCB& operator = (const EMmtoCliCB&);
    int operator == (const EMmtoCliCB&);
    int operator != (const EMmtoCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoCliCB.H
//------------------------------------------------------------------------------

