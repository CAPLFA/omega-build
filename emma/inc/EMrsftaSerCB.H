/*******************************************************************************
 * \file           EMrsftaSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaSerCB_H
#define __EMrsftaSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmsg_exploiteData.H"
#include "EMmsg_transmisData.H"
#include "EMmsg_preredigeData.H"
#include "EMcpladrData.H"
#include "EMmsg_balsData.H"


//-------------------- Declaration de la classe ------------------------

class EMrsftaSerCB {

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
    static  void  cree_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  void  connexion_msg_exploiteCB(
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_msg_exploiteCB(
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_msg_transmisCB(
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  void  connexion_msg_transmisCB(
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_msg_preredigeCB(
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_cpladrCB(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_cpladrCB(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_cpladrCB(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_cpladrCB(
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_msg_balsCB(
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_msg_balsCB(
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_msg_balsCB(
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_msg_exploiteCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_connexion_msg_exploiteCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_msg_transmisCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_connexion_msg_transmisCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_cpladrCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_msg_balsCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones









































private:

    // Mesures de securite :
    EMrsftaSerCB();
    virtual ~EMrsftaSerCB();
    EMrsftaSerCB(const EMrsftaSerCB&);
    EMrsftaSerCB& operator = (const EMrsftaSerCB&);
    int operator == (const EMrsftaSerCB&);
    int operator != (const EMrsftaSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaSerCB.H
//------------------------------------------------------------------------------

