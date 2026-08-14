/*******************************************************************************
 * \file           EMntmSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmSerCB_H
#define __EMntmSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnotamData.H"


//-------------------- Declaration de la classe ------------------------

class EMntmSerCB {

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
    static  void  consulte_notamCB(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_notamCB(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_notamCB(
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_notamCB(
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_notamCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones









private:

    // Mesures de securite :
    EMntmSerCB();
    virtual ~EMntmSerCB();
    EMntmSerCB(const EMntmSerCB&);
    EMntmSerCB& operator = (const EMntmSerCB&);
    int operator == (const EMntmSerCB&);
    int operator != (const EMntmSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmSerCB.H
//------------------------------------------------------------------------------

