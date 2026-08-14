/*******************************************************************************
 * \file           EMetatSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatSerCB_H
#define __EMetatSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"



//-------------------- Declaration de la classe ------------------------

class EMetatSerCB {

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
    static  void  abonne_etatCB(
        char*  gSysteme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_etatCB(
        char*  gSysteme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_etatCB(
        int  nIdAbo,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMetatSerCB();
    virtual ~EMetatSerCB();
    EMetatSerCB(const EMetatSerCB&);
    EMetatSerCB& operator = (const EMetatSerCB&);
    int operator == (const EMetatSerCB&);
    int operator != (const EMetatSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatSerCB.H
//------------------------------------------------------------------------------

