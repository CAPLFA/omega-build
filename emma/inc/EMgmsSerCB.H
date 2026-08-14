/*******************************************************************************
 * \file           EMgmsSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsSerCB_H
#define __EMgmsSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmessageData.H"


//-------------------- Declaration de la classe ------------------------

class EMgmsSerCB {

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
    static  void  cree_messageCB(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_messageCB(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_messageCB(
        EMmessageData*  p_message,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_messageCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones







private:

    // Mesures de securite :
    EMgmsSerCB();
    virtual ~EMgmsSerCB();
    EMgmsSerCB(const EMgmsSerCB&);
    EMgmsSerCB& operator = (const EMgmsSerCB&);
    int operator == (const EMgmsSerCB&);
    int operator != (const EMgmsSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMgmsSerCB.H
//------------------------------------------------------------------------------

