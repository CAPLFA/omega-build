/*******************************************************************************
 * \file           EMmtoSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmto.act
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtoSerItf_H
#define __EMmtoSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmtopubData.H"
#include "EMmtoqnhData.H"
#include "EMmtolocData.H"
#include "EMmtozoneData.H"
#include "EMqiraData.H"
#include "EMrepiraData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMmtoSerItf {

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
    static  EMstatut  consulte_mtopub(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_mtopub(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmtopubData*  p_mtopub,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_mtopub(   // Nouvelle methode avec nIdMsg
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_mtopub(   // Sans nIdMsg pour compatibilite
        EMmtopubData*  p_mtopub,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtopub(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtopub(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtopub(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtopub(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mtopub(   // Nouvelle methode avec nIdMsg
        EMmtopubData*  p_mtopub,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mtopub(   // Sans nIdMsg pour compatibilite
        EMmtopubData*  p_mtopub,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_mtoqnh(   // Nouvelle methode avec nIdMsg
        EMmtoqnhData*  p_mtoqnh,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_mtoqnh(   // Sans nIdMsg pour compatibilite
        EMmtoqnhData*  p_mtoqnh,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtoqnh(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtoqnh(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtoqnh(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtoqnh(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_mtoloc(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_mtoloc(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_mtoloc(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_mtoloc(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmtolocData*  p_mtoloc,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_mtoloc(   // Nouvelle methode avec nIdMsg
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_mtoloc(   // Sans nIdMsg pour compatibilite
        EMmtolocData*  p_mtoloc,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtoloc(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_mtoloc(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtoloc(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_mtoloc(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mtoloc(   // Nouvelle methode avec nIdMsg
        EMmtolocData*  p_mtoloc,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mtoloc(   // Sans nIdMsg pour compatibilite
        EMmtolocData*  p_mtoloc,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_mtozone(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_mtozone(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_mtozone(   // Nouvelle methode avec nIdMsg
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_mtozone(   // Sans nIdMsg pour compatibilite
        EMmtozoneData*  p_mtozone,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mtozone(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_mtozone(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_mtozone(   // Nouvelle methode avec nIdMsg
        EMmtozoneData*  p_mtozone,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_mtozone(   // Sans nIdMsg pour compatibilite
        EMmtozoneData*  p_mtozone,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_qira(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMqiraData*  p_qira,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_qira(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMqiraData*  p_qira,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_repira(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_repira(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_repira(   // Nouvelle methode avec nIdMsg
        EMrepiraData*  p_repira,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_repira(   // Sans nIdMsg pour compatibilite
        EMrepiraData*  p_repira,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_repira(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_repira(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_repira(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_repira(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMmtoSerItf();
    virtual ~EMmtoSerItf();
    EMmtoSerItf(const EMmtoSerItf&);
    EMmtoSerItf& operator = (const EMmtoSerItf&);
    int operator == (const EMmtoSerItf&);
    int operator != (const EMmtoSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtoSerItf.H
//------------------------------------------------------------------------------

