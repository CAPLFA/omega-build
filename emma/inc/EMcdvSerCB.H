/*******************************************************************************
 * \file           EMcdvSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvSerCB_H
#define __EMcdvSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvol_completData.H"


//-------------------- Declaration de la classe ------------------------

class EMcdvSerCB {

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
    static  void  cree_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones








private:

    // Mesures de securite :
    EMcdvSerCB();
    virtual ~EMcdvSerCB();
    EMcdvSerCB(const EMcdvSerCB&);
    EMcdvSerCB& operator = (const EMcdvSerCB&);
    int operator == (const EMcdvSerCB&);
    int operator != (const EMcdvSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcdvSerCB.H
//------------------------------------------------------------------------------

