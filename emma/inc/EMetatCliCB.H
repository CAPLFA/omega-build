/*******************************************************************************
 * \file           EMetatCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.act
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatCliCB_H
#define __EMetatCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMetatData.H"
#include "EMetatTYPES.H"


//-------------------- Declaration de la classe ------------------------

class EMetatCliCB {

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
    static  void  notifie_etatCB(
        EMetatData*  pEtat,
        EM_ETAT_TYPE_NOTIF  eNotif,
        int  nIdAbo
        );
    static  void  repond_etatCB(
        EMetatData*  pEtat,
        int  nIdRequete
        );
    static  void  signale_infoCB(
        int  nStatus,
        char*  gMessage,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones





private:

    // Mesures de securite :
    EMetatCliCB();
    virtual ~EMetatCliCB();
    EMetatCliCB(const EMetatCliCB&);
    EMetatCliCB& operator = (const EMetatCliCB&);
    int operator == (const EMetatCliCB&);
    int operator != (const EMetatCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatCliCB.H
//------------------------------------------------------------------------------

