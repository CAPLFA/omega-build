/*******************************************************************************
 * \file           EMspyCliCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspyCliCB_H
#define __EMspyCliCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"



//-------------------- Declaration de la classe ------------------------

class EMspyCliCB {

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


    // Methodes de traitement des retours asynchrones










private:

    // Mesures de securite :
    EMspyCliCB();
    virtual ~EMspyCliCB();
    EMspyCliCB(const EMspyCliCB&);
    EMspyCliCB& operator = (const EMspyCliCB&);
    int operator == (const EMspyCliCB&);
    int operator != (const EMspyCliCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMspyCliCB.H
//------------------------------------------------------------------------------

