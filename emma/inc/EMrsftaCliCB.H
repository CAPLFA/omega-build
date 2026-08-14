/*******************************************************************************
 * \file           EMrsftaCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaCliCB_H
#define __EMrsftaCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmsg_exploiteData.H"
#include "EMmsg_transmisData.H"
#include "EMmsg_preredigeData.H"
#include "EMcpladrData.H"
#include "EMmsg_balsData.H"


//-------------------- Declaration de la classe ------------------------

class EMrsftaCliCB {

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
    static  void  cree_msg_exploiteCB(
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp
        );
    static  void  supprime_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_msg_exploiteCB(
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp
        );
    static  void  liste_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp
        );
    static  void  fin_liste_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  signale_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp
        );
    static  void  connexion_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_connexion_msg_exploiteCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_msg_transmisCB(
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp
        );
    static  void  consulte_msg_transmisCB(
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp
        );
    static  void  liste_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp
        );
    static  void  fin_liste_msg_transmisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_msg_transmisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_msg_transmisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  signale_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp
        );
    static  void  connexion_msg_transmisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_connexion_msg_transmisCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_msg_preredigeCB(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp
        );
    static  void  modifie_msg_preredigeCB(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp
        );
    static  void  supprime_msg_preredigeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_msg_preredigeCB(
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp
        );
    static  void  liste_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp
        );
    static  void  fin_liste_msg_preredigeCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  cree_cpladrCB(
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp
        );
    static  void  modifie_cpladrCB(
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp
        );
    static  void  supprime_cpladrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_cpladrCB(
        EMcpladrData*  p_cpladr,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_cpladrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_cpladrCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_msg_balsCB(
        int  nResuSigma,
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp
        );
    static  void  notifie_msg_balsCB(
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_msg_balsCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_msg_balsCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_msg_balsCB(
        EMmsg_balsData*  p_msg_bals,
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones
































private:

    // Mesures de securite :
    EMrsftaCliCB();
    virtual ~EMrsftaCliCB();
    EMrsftaCliCB(const EMrsftaCliCB&);
    EMrsftaCliCB& operator = (const EMrsftaCliCB&);
    int operator == (const EMrsftaCliCB&);
    int operator != (const EMrsftaCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaCliCB.H
//------------------------------------------------------------------------------

