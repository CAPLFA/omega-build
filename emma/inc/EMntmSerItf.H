/*******************************************************************************
 * \file           EMntmSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMntm.act
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMntmSerItf_H
#define __EMntmSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMnotamData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMntmSerItf {

public:

    //! Méthodes communes
    //---------------------------------------------------------------------------
    /*! Active l'accès au service. Si l'activation réussie, les clients peuvent
     *  être enregistrés.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  active();

    //---------------------------------------------------------------------------
    /*! Désactive l'accès au service. EMMA tente de notifier tous les clients.
     */
    //---------------------------------------------------------------------------
    static  EMstatut  desactive();

    //---------------------------------------------------------------------------
    // Retourne la version utilisée pour la connexion avec le client nIdClient,
    // ou VERSION_NULLE si la connexion n'est pas établie.
    //---------------------------------------------------------------------------
    static  EMversion  lireVersion(int  nIdClient);

    //---------------------------------------------------------------------------
    // Retourne la ou les version(s) de service gerée(s) par la librairie.
    //---------------------------------------------------------------------------
    static vector<EMversion> lireVersionsConnues();

    //---------------------------------------------------------------------------
    // Méthode vide conservée pour la compatibilité.
    //---------------------------------------------------------------------------
    static  void  detruitServeurParasite();


    //---------------------------------------------------------------------------
    // Méthodes d'émission vers le client.
    //---------------------------------------------------------------------------
    static  EMstatut  consulte_notam(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_notam(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_notam(   // Nouvelle methode avec nIdMsg
        EMnotamData*  p_notam,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_notam(   // Sans nIdMsg pour compatibilite
        EMnotamData*  p_notam,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_notam(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_notam(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_notam(   // Nouvelle methode avec nIdMsg
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_notam(   // Sans nIdMsg pour compatibilite
        EMnotamData*  p_notam,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_notam(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_notam(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_notam(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_notam(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_notam(   // Nouvelle methode avec nIdMsg
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_notam(   // Sans nIdMsg pour compatibilite
        EMnotamData*  p_notam,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMntmSerItf();
    virtual ~EMntmSerItf();
    EMntmSerItf(const EMntmSerItf&);
    EMntmSerItf& operator = (const EMntmSerItf&);
    int operator == (const EMntmSerItf&);
    int operator != (const EMntmSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMntmSerItf.H
//------------------------------------------------------------------------------

