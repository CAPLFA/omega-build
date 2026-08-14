/*******************************************************************************
 * \file           EMgmsCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMgms.act
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMgmsCliCB_H
#define __EMgmsCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmessageData.H"


//-------------------- Declaration de la classe ------------------------

class EMgmsCliCB {

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
    static  void  cree_messageCB(
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp
        );
    static  void  modifie_messageCB(
        int  nResuSigma,
        EMmessageData*  p_message,
        int  nIdOp
        );
    static  void  notifie_messageCB(
        EMmessageData*  p_message,
        int  nEvent,
        int  nIdOp
        );
    static  void  fin_ini_abo_messageCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  fin_abonne_messageCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones






private:

    // Mesures de securite :
    EMgmsCliCB();
    virtual ~EMgmsCliCB();
    EMgmsCliCB(const EMgmsCliCB&);
    EMgmsCliCB& operator = (const EMgmsCliCB&);
    int operator == (const EMgmsCliCB&);
    int operator != (const EMgmsCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMgmsCliCB.H
//------------------------------------------------------------------------------

