/*******************************************************************************
 * \file           EMmassifSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifSerCB_H
#define __EMmassifSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMaboData.H"
#include "EMmassifactionData.H"
#include "EMrequeteData.H"


//-------------------- Declaration de la classe ------------------------

class EMmassifSerCB {

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
    static  void  abonne_volCB(
        EMaboData*  pAbo,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_transactionCB(
        EMmassifactionData*  pTransac,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_requeteCB(
        EMrequeteData*  pRequete,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_abonne_volCB(
        int  nIdAbonn,
        EMaboData*  pAbo,
        int  nIdClient
        );
    static  void  fin_abonne_volCB(
        int  nIdAbonn,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones








private:

    // Mesures de securite :
    EMmassifSerCB();
    virtual ~EMmassifSerCB();
    EMmassifSerCB(const EMmassifSerCB&);
    EMmassifSerCB& operator = (const EMmassifSerCB&);
    int operator == (const EMmassifSerCB&);
    int operator != (const EMmassifSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifSerCB.H
//------------------------------------------------------------------------------

