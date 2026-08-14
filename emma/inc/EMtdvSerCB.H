/*******************************************************************************
 * \file           EMtdvSerCB.H
 * Application  :  EMMA
 * Rôle         :  Declarations des callbacks cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtdv.act
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMtdvSerCB_H
#define __EMtdvSerCB_H


//-------------------- Includes ----------------------------------------

#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMvolData.H"
#include "EMvlrData.H"
#include "EMvolalarmeData.H"
#include "EMvolmsgData.H"


//-------------------- Declaration de la classe ------------------------

class EMtdvSerCB {

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
    static  void  cree_volCB(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_volCB(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_volCB(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_volCB(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_volCB(
        EMvolData*  p_vol,
        int  nIdOp,
        int  nIdClient
        );
    static  void  connexion_volCB(
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_volCB(
        EMvolData*  p_vol,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_vlrCB(
        EMvlrData*  p_vlr,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_vlrCB(
        EMvlrData*  p_vlr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  modifie_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  consulte_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nIdOp,
        int  nIdClient
        );
    static  void  evenement_volalarmeCB(
        EMvolalarmeData*  p_volalarme,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  cree_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  supprime_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  liste_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  abonne_volmsgCB(
        EMvolmsgData*  p_volmsg,
        int  nIdOp,
        int  nIdClient
        );
    static  void  connexion_strip_volCB(
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_volCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_connexion_volCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_vlrCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_volalarmeCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_abonne_volmsgCB(
        int  nIdOp,
        int  nIdClient
        );
    static  void  fin_connexion_strip_volCB(
        int  nIdOp,
        int  nIdClient
        );


    // Methodes de traitement des retours asynchrones








































private:

    // Mesures de securite :
    EMtdvSerCB();
    virtual ~EMtdvSerCB();
    EMtdvSerCB(const EMtdvSerCB&);
    EMtdvSerCB& operator = (const EMtdvSerCB&);
    int operator == (const EMtdvSerCB&);
    int operator != (const EMtdvSerCB&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtdvSerCB.H
//------------------------------------------------------------------------------

