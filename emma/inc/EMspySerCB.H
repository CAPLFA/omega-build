/*******************************************************************************
 * \file           EMspySerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMspy.act
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMspySerCB_H
#define __EMspySerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnivTraceData.H"
#include "EMetatFctData.H"
#include "EMconfspyData.H"
#include "EMtraceData.H"


//-------------------- Declaration de la classe ------------------------

class EMspySerCB {

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
    static  void  setNiveauTraceCB(
        EMnivTraceData*  pNiveauTrace,
        int  nIdOp,
        int  nIdClient
        );
    static  void  setEtatFonctionCB(
        EMetatFctData*  pEtatfct,
        int  nIdOp,
        int  nIdClient
        );
    static  void  setConfigCB(
        EMconfspyData*  pConfig,
        int  nIdOp,
        int  nIdClient
        );
    static  void  traceEtatCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  traceConfigCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  traceTimerCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  traceFDCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  traceCB(
        EMtraceData*  pTrace,
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones


private:

    // Mesures de securite :
    EMspySerCB();
    virtual ~EMspySerCB();
    EMspySerCB(const EMspySerCB&);
    EMspySerCB& operator = (const EMspySerCB&);
    int operator == (const EMspySerCB&);
    int operator != (const EMspySerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMspySerCB.H
//------------------------------------------------------------------------------

