/*******************************************************************************
 * \file           EMntmCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmCliCB_H
#define __EMntmCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnotamData.H"


//-------------------- Declaration de la classe ------------------------

class EMntmCliCB {

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
    static  void  consulte_notamCB(
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp
        );
    static  void  liste_notamCB(
        EMnotamData*  p_notam,
        int  nIdOp
        );
    static  void  fin_liste_notamCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_notamCB(
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_notamCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_notamCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_notamCB(
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones







private:

    // Mesures de securite :
    EMntmCliCB();
    virtual ~EMntmCliCB();
    EMntmCliCB(const EMntmCliCB&);
    EMntmCliCB& operator = (const EMntmCliCB&);
    int operator == (const EMntmCliCB&);
    int operator != (const EMntmCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmCliCB.H
//------------------------------------------------------------------------------

