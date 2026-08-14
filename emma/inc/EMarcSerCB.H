/*******************************************************************************
 * \file           EMarcSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcSerCB_H
#define __EMarcSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMarchiveData.H"


//-------------------- Declaration de la classe ------------------------

class EMarcSerCB {

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
    static  void  cree_archiveCB(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_archiveCB(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_archiveCB(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_archiveCB(
        EMarchiveData*  p_archive,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_archiveCB(
        EMarchiveData*  p_archive,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_archiveCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones










private:

    // Mesures de securite :
    EMarcSerCB();
    virtual ~EMarcSerCB();
    EMarcSerCB(const EMarcSerCB&);
    EMarcSerCB& operator = (const EMarcSerCB&);
    int operator == (const EMarcSerCB&);
    int operator != (const EMarcSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMarcSerCB.H
//------------------------------------------------------------------------------

