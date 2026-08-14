/*******************************************************************************
 * \file           EMplnSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnSerCB_H
#define __EMplnSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"
#include "EMtransactionData.H"
#include "EMrequeteData.H"


//-------------------- Declaration de la classe ------------------------

class EMplnSerCB {

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
    static  void  abonne_plnCB(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_transactionCB(
        EMtransactionData*  pTransac,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_requeteCB(
        EMrequeteData*  pRequete,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_stripCB(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_plnCB(
        int  nIdAbonn,
        int  nIdClient
        );
    static  void  modifie_abonne_plnCB(
        int  nIdAbonn,
        EMaboData*  pAbo,
        int  nIdClient
        );
    static  void  fin_abonne_stripCB(
        int  nIdAbonn,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones










private:

    // Mesures de securite :
    EMplnSerCB();
    virtual ~EMplnSerCB();
    EMplnSerCB(const EMplnSerCB&);
    EMplnSerCB& operator = (const EMplnSerCB&);
    int operator == (const EMplnSerCB&);
    int operator != (const EMplnSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnSerCB.H
//------------------------------------------------------------------------------

