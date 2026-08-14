/*******************************************************************************
 * \file           EMmtoSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoSerCB_H
#define __EMmtoSerCB_H


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

class EMmtoSerCB {

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
    static  void  consulte_mtopubCB(
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_mtopubCB(
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mtopubCB(
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_mtoqnhCB(
        EMmtoqnhData*  p_mtoqnh,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mtolocCB(
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_mtozoneCB(
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_mtozoneCB(
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_mtozoneCB(
        EMmtozoneData*  p_mtozone,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_qiraCB(
        EMqiraData*  p_qira,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_repiraCB(
        EMrepiraData*  p_repira,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_repiraCB(
        EMrepiraData*  p_repira,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_mtopubCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_mtoqnhCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_mtolocCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_repiraCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones

























private:

    // Mesures de securite :
    EMmtoSerCB();
    virtual ~EMmtoSerCB();
    EMmtoSerCB(const EMmtoSerCB&);
    EMmtoSerCB& operator = (const EMmtoSerCB&);
    int operator == (const EMmtoSerCB&);
    int operator != (const EMmtoSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoSerCB.H
//------------------------------------------------------------------------------

