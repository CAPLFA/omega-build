/*******************************************************************************
 * \file           EMrsftaSerItf.H
 * Application  :  EMMA
 * Rôle         :  Declarations de l'interface cote serveur
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrsfta.act
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMrsftaSerItf_H
#define __EMrsftaSerItf_H


//-------------------- Includes ----------------------------------------

#include <vector>
#include "EMglobalsItf.H"
#include "EMversion.H"

#include "EMmsg_exploiteData.H"
#include "EMmsg_transmisData.H"
#include "EMmsg_preredigeData.H"
#include "EMcpladrData.H"
#include "EMmsg_balsData.H"


using namespace std;
using namespace emma;


//-------------------- Declaration de la classe ------------------------

class EMrsftaSerItf {

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
    static  EMstatut  cree_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_msg_exploite(   // Nouvelle methode avec nIdMsg
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_msg_exploite(   // Sans nIdMsg pour compatibilite
        EMmsg_exploiteData*  p_msg_exploite,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_exploite(   // Nouvelle methode avec nIdMsg
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_exploite(   // Sans nIdMsg pour compatibilite
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  signale_msg_exploite(   // Nouvelle methode avec nIdMsg
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_msg_exploite(   // Sans nIdMsg pour compatibilite
        EMmsg_exploiteData*  p_msg_exploite,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  connexion_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  connexion_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_msg_exploite(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_msg_exploite(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_msg_exploite(   // Nouvelle methode avec nIdMsg
        EMmsg_exploiteData*  p_msg_exploite,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_msg_exploite(   // Sans nIdMsg pour compatibilite
        EMmsg_exploiteData*  p_msg_exploite,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_msg_transmis(   // Nouvelle methode avec nIdMsg
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_msg_transmis(   // Sans nIdMsg pour compatibilite
        EMmsg_transmisData*  p_msg_transmis,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_transmis(   // Nouvelle methode avec nIdMsg
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_transmis(   // Sans nIdMsg pour compatibilite
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  signale_msg_transmis(   // Nouvelle methode avec nIdMsg
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  signale_msg_transmis(   // Sans nIdMsg pour compatibilite
        EMmsg_transmisData*  p_msg_transmis,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  connexion_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  connexion_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_msg_transmis(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_connexion_msg_transmis(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_msg_preredige(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_msg_preredige(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_msg_preredige(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_msg_preredige(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_msg_preredige(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_msg_preredige(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_preredige(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_preredige(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  liste_msg_preredige(   // Nouvelle methode avec nIdMsg
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  liste_msg_preredige(   // Sans nIdMsg pour compatibilite
        EMmsg_preredigeData*  p_msg_preredige,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_preredige(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_liste_msg_preredige(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  cree_cpladr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  cree_cpladr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  modifie_cpladr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  modifie_cpladr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMcpladrData*  p_cpladr,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  supprime_cpladr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  supprime_cpladr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_cpladr(   // Nouvelle methode avec nIdMsg
        EMcpladrData*  p_cpladr,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_cpladr(   // Sans nIdMsg pour compatibilite
        EMcpladrData*  p_cpladr,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_cpladr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_cpladr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_cpladr(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_cpladr(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_bals(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  consulte_msg_bals(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        EMmsg_balsData*  p_msg_bals,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_bals(   // Nouvelle methode avec nIdMsg
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  notifie_msg_bals(   // Sans nIdMsg pour compatibilite
        EMmsg_balsData*  p_msg_bals,
        int  nEvent,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_bals(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_ini_abo_msg_bals(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_bals(   // Nouvelle methode avec nIdMsg
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  fin_abonne_msg_bals(   // Sans nIdMsg pour compatibilite
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );
    static  EMstatut  evenement_msg_bals(   // Nouvelle methode avec nIdMsg
        EMmsg_balsData*  p_msg_bals,
        int  nResuSigma,
        int  nIdOp,
        int&  nIdMsg,
        int  nIdClient
        );
    static  EMstatut  evenement_msg_bals(   // Sans nIdMsg pour compatibilite
        EMmsg_balsData*  p_msg_bals,
        int  nResuSigma,
        int  nIdOp,
        int  nIdClient
        );

private:

    // Mesures de securite :
    EMrsftaSerItf();
    virtual ~EMrsftaSerItf();
    EMrsftaSerItf(const EMrsftaSerItf&);
    EMrsftaSerItf& operator = (const EMrsftaSerItf&);
    int operator == (const EMrsftaSerItf&);
    int operator != (const EMrsftaSerItf&);


};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrsftaSerItf.H
//------------------------------------------------------------------------------

