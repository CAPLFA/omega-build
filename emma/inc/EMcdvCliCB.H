/*******************************************************************************
 * \file           EMcdvCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcdv.act
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMcdvCliCB_H
#define __EMcdvCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvol_completData.H"


//-------------------- Declaration de la classe ------------------------

class EMcdvCliCB {

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
    static  void  cree_vol_completCB(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp
        );
    static  void  modifie_vol_completCB(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp
        );
    static  void  supprime_vol_completCB(
        int  nResuSigma,
        int  nIdOp
        );
    static  void  consulte_vol_completCB(
        int  nResuSigma,
        EMvol_completData*  p_vol_complet,
        int  nIdOp
        );
    static  void  liste_vol_completCB(
        EMvol_completData*  p_vol_complet,
        int  nIdOp
        );
    static  void  fin_liste_vol_completCB(
        int  nResuSigma,
        int  nIdOp
        );


    // Methodes de traitement des retours asynchrones







private:

    // Mesures de securite :
    EMcdvCliCB();
    virtual ~EMcdvCliCB();
    EMcdvCliCB(const EMcdvCliCB&);
    EMcdvCliCB& operator = (const EMcdvCliCB&);
    int operator == (const EMcdvCliCB&);
    int operator != (const EMcdvCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcdvCliCB.H
//------------------------------------------------------------------------------

