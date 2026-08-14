/*******************************************************************************
 * \file           EMarcCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarc.act
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarcCliCB_H
#define __EMarcCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMarchiveData.H"


//-------------------- Declaration de la classe ------------------------

class EMarcCliCB {

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
    static  void  cree_archiveCB(
        int  nResuSigma,
        EMarchiveData*  p_archive,
        int  nIdOp
        );
    static  void  supprime_archiveCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  liste_archiveCB(
        EMarchiveData*  p_archive,
        int  nIdOp
        );
    static  void  fin_liste_archiveCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  notifie_archiveCB(
        EMarchiveData*  p_archive,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_archiveCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_archiveCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  evenement_archiveCB(
        EMarchiveData*  p_archive,
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones








private:

    // Mesures de securite :
    EMarcCliCB();
    virtual ~EMarcCliCB();
    EMarcCliCB(const EMarcCliCB&);
    EMarcCliCB& operator = (const EMarcCliCB&);
    int operator == (const EMarcCliCB&);
    int operator != (const EMarcCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMarcCliCB.H
//------------------------------------------------------------------------------

