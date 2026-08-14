/*******************************************************************************
 * \file           EMpisteSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpiste.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMpisteSerCB_H
#define __EMpisteSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"



//-------------------- Declaration de la classe ------------------------

class EMpisteSerCB {

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
    static  void  abonne_pisteCB(
        char*  gTerrain,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_pisteCB(
        char*  gTerrain,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_pisteCB(
        int  nIdAbo,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMpisteSerCB();
    virtual ~EMpisteSerCB();
    EMpisteSerCB(const EMpisteSerCB&);
    EMpisteSerCB& operator = (const EMpisteSerCB&);
    int operator == (const EMpisteSerCB&);
    int operator != (const EMpisteSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMpisteSerCB.H
//------------------------------------------------------------------------------

