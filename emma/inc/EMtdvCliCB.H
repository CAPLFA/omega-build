/*******************************************************************************
 * \file           EMtdvCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvCliCB_H
#define __EMtdvCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"
#include "EMstrip_volData.H"


//-------------------- Declaration de la classe ------------------------

class EMtdvCliCB {

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
    static  void  cree_volCB(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp
        );
    static  void  modifie_volCB(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp
        );
    static  void  consulte_volCB(
        int  nResuSigma,
        EMvolData*  p_vol,
        int  nIdOp
        );
    static  void  liste_volCB(
        EMvolData*  p_vol,
        int  nIdOp
        );
    static  void  fin_liste_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_volCB(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  signale_volCB(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp
        );
    static  void  connexion_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_connexion_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_volCB(
        EMvolData*  p_vol,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_vlrCB(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp
        );
    static  void  modifie_vlrCB(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp
        );
    static  void  consulte_vlrCB(
        int  nResuSigma,
        EMvlrData*  p_vlr,
        int  nIdOp
        );
    static  void  liste_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp
        );
    static  void  fin_liste_vlrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_vlrCB(
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_vlrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_vlrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_vlrCB(
        EMvlrData*  p_vlr,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_volalarmeCB(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp
        );
    static  void  modifie_volalarmeCB(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp
        );
    static  void  consulte_volalarmeCB(
        int  nResuSigma,
        EMvolalarmeData*  p_volalarme,
        int  nIdOp
        );
    static  void  notifie_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_volalarmeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_volalarmeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_volmsgCB(
        int  nResuSigma,
        EMvolmsgData*  p_volmsg,
        int  nIdOp
        );
    static  void  supprime_volmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  liste_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nIdOp
        );
    static  void  fin_liste_volmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_volmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_volmsgCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  signale_strip_volCB(
        EMstrip_volData*  p_strip_vol,
        int  nEvent,
        int  nIdOp
        );
    static  void  connexion_strip_volCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_connexion_strip_volCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones































private:

    // Mesures de securite :
    EMtdvCliCB();
    virtual ~EMtdvCliCB();
    EMtdvCliCB(const EMtdvCliCB&);
    EMtdvCliCB& operator = (const EMtdvCliCB&);
    int operator == (const EMtdvCliCB&);
    int operator != (const EMtdvCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvCliCB.H
//------------------------------------------------------------------------------

