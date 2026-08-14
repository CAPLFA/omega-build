/*******************************************************************************
 * \file           EMmassifactionData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmassifactionData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassifaction.data
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifactionData_H
#define __EMmassifactionData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMmassifTYPES.H"
#include "EMmsf_aeronefData.H"
#include "EMmsf_regulationData.H"
#include "EMdiDEFINES.H"
#include "EMradionavData.H"
#include "EMrouteData.H"
#include "EMsecteurData.H"
#include "EMmassifDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmassifactionData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   massif
 *  \class   EMmassifactionData
 *  \brief   Définition de la classe implémentant l'objet métier EMmassifactionData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmassifactionData
 *         et les méthodes permettant de le manipuler.
 *         Les champs "historiques" (existant en EMMA1) sont accessibles
 *         directement (publics), sauf en ce qui concerne les tableaux, qui
 *         étaient déjà privés en EMMA1.
 *         Les autres champs ne peuvent être manipulés que via leurs accesseurs.
 *
 *  \par   Dynamique
 *          - Si l'objet est créé par l'application, celle-ci est responsable
 *            de sa destruction.
 *          - Si l'objet est créé par EMMA (lors d'une réception de message),
 *            il est détruit par EMMA après traitement du message.
 *
 *  \par   Cas où l'objet existe dans deux versions différentes
 *          - Si l'objet est créé par l'application, tous les champs restent
 *            accessibles et modifiables durant toute la vie de l'objet.
 *            Les constructeurs spécifiques à une version permettent de ne
 *            renseigner que les champs définis dans cette version, mais ils
 *            n'interdisent pas l'accès ultérieur aux autres champs.
 *          - Si l'objet est créé par EMMA (lors d'une réception de message),
 *            il est restreint à la version utilisée pour la transmission, et
 *            seuls les champs de cette version peuvent être manipulés. Une
 *            tentative d'accès à un champ non défini entraînera le retour
 *            d'un statut d'erreur et l'émission d'une trace applicative
 *            de niveau "Erreur".
 *            ATTENTION : Si le champ est accédé directement (champ public),
 *            il ne peut y avoir aucun contrôle de validité.
 */
class EMmassifactionData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmassifactionData(
        EM_MASSIF_TYPE_ACTION eTYPE = (EM_MASSIF_TYPE_ACTION) 0,
        char* gADEP = (char*) 0,
        char* gADES = (char*) 0,
        char* gARCID = (char*) 0,
        EMmsf_aeronefData* paeronef = (EMmsf_aeronefData*) 0,
        char cATIS = (char) 0,
        int nBKROW = (int) 0,
        char* gBKT = (char*) 0,
        int nCFL = (int) 0,
        char* gCTRIPE = (char*) 0,
        int nCTROW = (int) 0,
        char* gDCRMK = (char*) 0,
        char* gEOBDT = (char*) 0,
        char* gFPCTST = (char*) 0,
        char* gFPRMK = (char*) 0,
        char* gFPSRC = (char*) 0,
        char* gNFC = (char*) 0,
        char* gOPRMKCT = (char*) 0,
        int nPFL = (int) 0,
        char* gPKA = (char*) 0,
        char* gPKATT = (char*) 0,
        char* gPKDEP = (char*) 0,
        char* gPLNID_IFPLID = (char*) 0,
        char* gQFU = (char*) 0,
        char* gQFUATT = (char*) 0,
        EMmsf_regulationData* pregulation = (EMmsf_regulationData*) 0,
        int nRFL = (int) 0,
        char* gSECDEST = (char*) 0,
        char* gSID = (char*) 0,
        int nSPEED = (int) 0,
        char* gCODE1 = (char*) 0,
        char* gCODE2 = (char*) 0,
        char* gCODE = (char*) 0,
        char* gCODEP = (char*) 0,
        int nTRFL = (int) 0,
        char* gTYPVOL = (char*) 0,
        int nXFL = (int) 0,
        int nid_vol = (int) 0,
        char* gdate_mvt = (char*) 0,
        char* gdate_arr = (char*) 0,
        char cetat = (char) 0,
        char cetat_mvt = (char) 0,
        char cindic_irregul = (char) 0,
        char ccause_irregul = (char) 0,
        char* gheure_irregul = (char*) 0,
        char* gid_ddv = (char*) 0,
        char ctypddv = (char) 0,
        char cregime = (char) 0,
        char ctyp_vol = (char) 0,
        char cregle_vol = (char) 0,
        char* gnature = (char*) 0,
        char* gheure_reel_dep = (char*) 0,
        char* gaero_dest = (char*) 0,
        char* gheure_eta = (char*) 0,
        char* gheure_arr = (char*) 0,
        char* gheure_rmg = (char*) 0,
        char* gtrtspec = (char*) 0,
        char* gselcal = (char*) 0,
        int nnbpers = (int) 0,
        char* gniveau_et_unite = (char*) 0,
        char* groute = (char*) 0,
        char cbalisage = (char) 0,
        char csens = (char) 0,
        char csvfr = (char) 0,
        char ccreman = (char) 0,
        int ncircuit = (int) 0,
        int nremisegaz = (int) 0,
        int neqcst = 0,
        EMradionavData** teqcst = (EMradionavData**) 0,
        int nrtetr = 0,
        EMrouteData** trtetr = (EMrouteData**) 0,
        int nseclist = 0,
        EMsecteurData** tseclist = (EMsecteurData**) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmassifactionData(const EMmassifactionData_v3_0_0&);



    // Destructeur
    ~EMmassifactionData();


    // Constructeur de copie
    EMmassifactionData(const EMmassifactionData&);



    //---------- Constantes --------------------------------------------

    // Constantes permettant de distinguer les constructeurs
    static const T_v3_0_0 v3_0_0;




    //---------- Methodes particulieres --------------------------------

    const char* lireNomService() const;

    // Retourne 1 ou 2 versions de service selon que l'objet est generique ou non
    vector<EMversion> lireVersion() const;

    // Retourne la ou les version(s) de service geree(s) pour l'objet
    // (independamment du fait que celui-ci soit generique ou pas).
    vector<EMversion> lireVersionsConnues() const;

    // Trace l'objet sur la sortie standard
    void trace() const;

    // Definit un objet CORBA specifique a transmettre (usage interne EMMA)
    EMmassifactionData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    EM_MASSIF_TYPE_ACTION lire_eTYPE(EMstatut& statut) const;
    EM_MASSIF_TYPE_ACTION lire_eTYPE() const;
    void ecrire_eTYPE(const EM_MASSIF_TYPE_ACTION valeur, EMstatut& statut);
    void ecrire_eTYPE(const EM_MASSIF_TYPE_ACTION valeur);

    const char* lire_gADEP(EMstatut& statut) const;
    const char* lire_gADEP() const;
    void ecrire_gADEP(char* valeur, EMstatut& statut);
    void ecrire_gADEP(char* valeur);

    const char* lire_gADES(EMstatut& statut) const;
    const char* lire_gADES() const;
    void ecrire_gADES(char* valeur, EMstatut& statut);
    void ecrire_gADES(char* valeur);

    const char* lire_gARCID(EMstatut& statut) const;
    const char* lire_gARCID() const;
    void ecrire_gARCID(char* valeur, EMstatut& statut);
    void ecrire_gARCID(char* valeur);

    const EMmsf_aeronefData* lire_paeronef(EMstatut& statut) const;
    const EMmsf_aeronefData* lire_paeronef() const;
    void ecrire_paeronef(EMmsf_aeronefData* valeur, EMstatut& statut);
    void ecrire_paeronef(EMmsf_aeronefData* valeur);

    char lire_cATIS(EMstatut& statut) const;
    char lire_cATIS() const;
    void ecrire_cATIS(const char valeur, EMstatut& statut);
    void ecrire_cATIS(const char valeur);

    int lire_nBKROW(EMstatut& statut) const;
    int lire_nBKROW() const;
    void ecrire_nBKROW(const int valeur, EMstatut& statut);
    void ecrire_nBKROW(const int valeur);

    const char* lire_gBKT(EMstatut& statut) const;
    const char* lire_gBKT() const;
    void ecrire_gBKT(char* valeur, EMstatut& statut);
    void ecrire_gBKT(char* valeur);

    int lire_nCFL(EMstatut& statut) const;
    int lire_nCFL() const;
    void ecrire_nCFL(const int valeur, EMstatut& statut);
    void ecrire_nCFL(const int valeur);

    const char* lire_gCTRIPE(EMstatut& statut) const;
    const char* lire_gCTRIPE() const;
    void ecrire_gCTRIPE(char* valeur, EMstatut& statut);
    void ecrire_gCTRIPE(char* valeur);

    int lire_nCTROW(EMstatut& statut) const;
    int lire_nCTROW() const;
    void ecrire_nCTROW(const int valeur, EMstatut& statut);
    void ecrire_nCTROW(const int valeur);

    const char* lire_gDCRMK(EMstatut& statut) const;
    const char* lire_gDCRMK() const;
    void ecrire_gDCRMK(char* valeur, EMstatut& statut);
    void ecrire_gDCRMK(char* valeur);

    const char* lire_gEOBDT(EMstatut& statut) const;
    const char* lire_gEOBDT() const;
    void ecrire_gEOBDT(char* valeur, EMstatut& statut);
    void ecrire_gEOBDT(char* valeur);

    const char* lire_gFPCTST(EMstatut& statut) const;
    const char* lire_gFPCTST() const;
    void ecrire_gFPCTST(char* valeur, EMstatut& statut);
    void ecrire_gFPCTST(char* valeur);

    const char* lire_gFPRMK(EMstatut& statut) const;
    const char* lire_gFPRMK() const;
    void ecrire_gFPRMK(char* valeur, EMstatut& statut);
    void ecrire_gFPRMK(char* valeur);

    const char* lire_gFPSRC(EMstatut& statut) const;
    const char* lire_gFPSRC() const;
    void ecrire_gFPSRC(char* valeur, EMstatut& statut);
    void ecrire_gFPSRC(char* valeur);

    const char* lire_gNFC(EMstatut& statut) const;
    const char* lire_gNFC() const;
    void ecrire_gNFC(char* valeur, EMstatut& statut);
    void ecrire_gNFC(char* valeur);

    const char* lire_gOPRMKCT(EMstatut& statut) const;
    const char* lire_gOPRMKCT() const;
    void ecrire_gOPRMKCT(char* valeur, EMstatut& statut);
    void ecrire_gOPRMKCT(char* valeur);

    int lire_nPFL(EMstatut& statut) const;
    int lire_nPFL() const;
    void ecrire_nPFL(const int valeur, EMstatut& statut);
    void ecrire_nPFL(const int valeur);

    const char* lire_gPKA(EMstatut& statut) const;
    const char* lire_gPKA() const;
    void ecrire_gPKA(char* valeur, EMstatut& statut);
    void ecrire_gPKA(char* valeur);

    const char* lire_gPKATT(EMstatut& statut) const;
    const char* lire_gPKATT() const;
    void ecrire_gPKATT(char* valeur, EMstatut& statut);
    void ecrire_gPKATT(char* valeur);

    const char* lire_gPKDEP(EMstatut& statut) const;
    const char* lire_gPKDEP() const;
    void ecrire_gPKDEP(char* valeur, EMstatut& statut);
    void ecrire_gPKDEP(char* valeur);

    const char* lire_gPLNID_IFPLID(EMstatut& statut) const;
    const char* lire_gPLNID_IFPLID() const;
    void ecrire_gPLNID_IFPLID(char* valeur, EMstatut& statut);
    void ecrire_gPLNID_IFPLID(char* valeur);

    const char* lire_gQFU(EMstatut& statut) const;
    const char* lire_gQFU() const;
    void ecrire_gQFU(char* valeur, EMstatut& statut);
    void ecrire_gQFU(char* valeur);

    const char* lire_gQFUATT(EMstatut& statut) const;
    const char* lire_gQFUATT() const;
    void ecrire_gQFUATT(char* valeur, EMstatut& statut);
    void ecrire_gQFUATT(char* valeur);

    const EMmsf_regulationData* lire_pregulation(EMstatut& statut) const;
    const EMmsf_regulationData* lire_pregulation() const;
    void ecrire_pregulation(EMmsf_regulationData* valeur, EMstatut& statut);
    void ecrire_pregulation(EMmsf_regulationData* valeur);

    int lire_nRFL(EMstatut& statut) const;
    int lire_nRFL() const;
    void ecrire_nRFL(const int valeur, EMstatut& statut);
    void ecrire_nRFL(const int valeur);

    const char* lire_gSECDEST(EMstatut& statut) const;
    const char* lire_gSECDEST() const;
    void ecrire_gSECDEST(char* valeur, EMstatut& statut);
    void ecrire_gSECDEST(char* valeur);

    const char* lire_gSID(EMstatut& statut) const;
    const char* lire_gSID() const;
    void ecrire_gSID(char* valeur, EMstatut& statut);
    void ecrire_gSID(char* valeur);

    int lire_nSPEED(EMstatut& statut) const;
    int lire_nSPEED() const;
    void ecrire_nSPEED(const int valeur, EMstatut& statut);
    void ecrire_nSPEED(const int valeur);

    const char* lire_gCODE1(EMstatut& statut) const;
    const char* lire_gCODE1() const;
    void ecrire_gCODE1(char* valeur, EMstatut& statut);
    void ecrire_gCODE1(char* valeur);

    const char* lire_gCODE2(EMstatut& statut) const;
    const char* lire_gCODE2() const;
    void ecrire_gCODE2(char* valeur, EMstatut& statut);
    void ecrire_gCODE2(char* valeur);

    const char* lire_gCODE(EMstatut& statut) const;
    const char* lire_gCODE() const;
    void ecrire_gCODE(char* valeur, EMstatut& statut);
    void ecrire_gCODE(char* valeur);

    const char* lire_gCODEP(EMstatut& statut) const;
    const char* lire_gCODEP() const;
    void ecrire_gCODEP(char* valeur, EMstatut& statut);
    void ecrire_gCODEP(char* valeur);

    int lire_nTRFL(EMstatut& statut) const;
    int lire_nTRFL() const;
    void ecrire_nTRFL(const int valeur, EMstatut& statut);
    void ecrire_nTRFL(const int valeur);

    const char* lire_gTYPVOL(EMstatut& statut) const;
    const char* lire_gTYPVOL() const;
    void ecrire_gTYPVOL(char* valeur, EMstatut& statut);
    void ecrire_gTYPVOL(char* valeur);

    int lire_nXFL(EMstatut& statut) const;
    int lire_nXFL() const;
    void ecrire_nXFL(const int valeur, EMstatut& statut);
    void ecrire_nXFL(const int valeur);

    int lire_nid_vol(EMstatut& statut) const;
    int lire_nid_vol() const;
    void ecrire_nid_vol(const int valeur, EMstatut& statut);
    void ecrire_nid_vol(const int valeur);

    const char* lire_gdate_mvt(EMstatut& statut) const;
    const char* lire_gdate_mvt() const;
    void ecrire_gdate_mvt(char* valeur, EMstatut& statut);
    void ecrire_gdate_mvt(char* valeur);

    const char* lire_gdate_arr(EMstatut& statut) const;
    const char* lire_gdate_arr() const;
    void ecrire_gdate_arr(char* valeur, EMstatut& statut);
    void ecrire_gdate_arr(char* valeur);

    char lire_cetat(EMstatut& statut) const;
    char lire_cetat() const;
    void ecrire_cetat(const char valeur, EMstatut& statut);
    void ecrire_cetat(const char valeur);

    char lire_cetat_mvt(EMstatut& statut) const;
    char lire_cetat_mvt() const;
    void ecrire_cetat_mvt(const char valeur, EMstatut& statut);
    void ecrire_cetat_mvt(const char valeur);

    char lire_cindic_irregul(EMstatut& statut) const;
    char lire_cindic_irregul() const;
    void ecrire_cindic_irregul(const char valeur, EMstatut& statut);
    void ecrire_cindic_irregul(const char valeur);

    char lire_ccause_irregul(EMstatut& statut) const;
    char lire_ccause_irregul() const;
    void ecrire_ccause_irregul(const char valeur, EMstatut& statut);
    void ecrire_ccause_irregul(const char valeur);

    const char* lire_gheure_irregul(EMstatut& statut) const;
    const char* lire_gheure_irregul() const;
    void ecrire_gheure_irregul(char* valeur, EMstatut& statut);
    void ecrire_gheure_irregul(char* valeur);

    const char* lire_gid_ddv(EMstatut& statut) const;
    const char* lire_gid_ddv() const;
    void ecrire_gid_ddv(char* valeur, EMstatut& statut);
    void ecrire_gid_ddv(char* valeur);

    char lire_ctypddv(EMstatut& statut) const;
    char lire_ctypddv() const;
    void ecrire_ctypddv(const char valeur, EMstatut& statut);
    void ecrire_ctypddv(const char valeur);

    char lire_cregime(EMstatut& statut) const;
    char lire_cregime() const;
    void ecrire_cregime(const char valeur, EMstatut& statut);
    void ecrire_cregime(const char valeur);

    char lire_ctyp_vol(EMstatut& statut) const;
    char lire_ctyp_vol() const;
    void ecrire_ctyp_vol(const char valeur, EMstatut& statut);
    void ecrire_ctyp_vol(const char valeur);

    char lire_cregle_vol(EMstatut& statut) const;
    char lire_cregle_vol() const;
    void ecrire_cregle_vol(const char valeur, EMstatut& statut);
    void ecrire_cregle_vol(const char valeur);

    const char* lire_gnature(EMstatut& statut) const;
    const char* lire_gnature() const;
    void ecrire_gnature(char* valeur, EMstatut& statut);
    void ecrire_gnature(char* valeur);

    const char* lire_gheure_reel_dep(EMstatut& statut) const;
    const char* lire_gheure_reel_dep() const;
    void ecrire_gheure_reel_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_reel_dep(char* valeur);

    const char* lire_gaero_dest(EMstatut& statut) const;
    const char* lire_gaero_dest() const;
    void ecrire_gaero_dest(char* valeur, EMstatut& statut);
    void ecrire_gaero_dest(char* valeur);

    const char* lire_gheure_eta(EMstatut& statut) const;
    const char* lire_gheure_eta() const;
    void ecrire_gheure_eta(char* valeur, EMstatut& statut);
    void ecrire_gheure_eta(char* valeur);

    const char* lire_gheure_arr(EMstatut& statut) const;
    const char* lire_gheure_arr() const;
    void ecrire_gheure_arr(char* valeur, EMstatut& statut);
    void ecrire_gheure_arr(char* valeur);

    const char* lire_gheure_rmg(EMstatut& statut) const;
    const char* lire_gheure_rmg() const;
    void ecrire_gheure_rmg(char* valeur, EMstatut& statut);
    void ecrire_gheure_rmg(char* valeur);

    const char* lire_gtrtspec(EMstatut& statut) const;
    const char* lire_gtrtspec() const;
    void ecrire_gtrtspec(char* valeur, EMstatut& statut);
    void ecrire_gtrtspec(char* valeur);

    const char* lire_gselcal(EMstatut& statut) const;
    const char* lire_gselcal() const;
    void ecrire_gselcal(char* valeur, EMstatut& statut);
    void ecrire_gselcal(char* valeur);

    int lire_nnbpers(EMstatut& statut) const;
    int lire_nnbpers() const;
    void ecrire_nnbpers(const int valeur, EMstatut& statut);
    void ecrire_nnbpers(const int valeur);

    const char* lire_gniveau_et_unite(EMstatut& statut) const;
    const char* lire_gniveau_et_unite() const;
    void ecrire_gniveau_et_unite(char* valeur, EMstatut& statut);
    void ecrire_gniveau_et_unite(char* valeur);

    const char* lire_groute(EMstatut& statut) const;
    const char* lire_groute() const;
    void ecrire_groute(char* valeur, EMstatut& statut);
    void ecrire_groute(char* valeur);

    char lire_cbalisage(EMstatut& statut) const;
    char lire_cbalisage() const;
    void ecrire_cbalisage(const char valeur, EMstatut& statut);
    void ecrire_cbalisage(const char valeur);

    char lire_csens(EMstatut& statut) const;
    char lire_csens() const;
    void ecrire_csens(const char valeur, EMstatut& statut);
    void ecrire_csens(const char valeur);

    char lire_csvfr(EMstatut& statut) const;
    char lire_csvfr() const;
    void ecrire_csvfr(const char valeur, EMstatut& statut);
    void ecrire_csvfr(const char valeur);

    char lire_ccreman(EMstatut& statut) const;
    char lire_ccreman() const;
    void ecrire_ccreman(const char valeur, EMstatut& statut);
    void ecrire_ccreman(const char valeur);

    int lire_ncircuit(EMstatut& statut) const;
    int lire_ncircuit() const;
    void ecrire_ncircuit(const int valeur, EMstatut& statut);
    void ecrire_ncircuit(const int valeur);

    int lire_nremisegaz(EMstatut& statut) const;
    int lire_nremisegaz() const;
    void ecrire_nremisegaz(const int valeur, EMstatut& statut);
    void ecrire_nremisegaz(const int valeur);

    int nombre_eqcst(EMstatut& statut) const;
    int nombre_eqcst() const;
    const EMradionavData* lire_eqcst(int nIndex, EMstatut& statut) const;
    const EMradionavData* lire_eqcst(int nIndex) const;
    int ajouter_eqcst(EMradionavData* elem, EMstatut& statut);
    int ajouter_eqcst(EMradionavData* elem);

    int nombre_rtetr(EMstatut& statut) const;
    int nombre_rtetr() const;
    const EMrouteData* lire_rtetr(int nIndex, EMstatut& statut) const;
    const EMrouteData* lire_rtetr(int nIndex) const;
    int ajouter_rtetr(EMrouteData* elem, EMstatut& statut);
    int ajouter_rtetr(EMrouteData* elem);

    int nombre_seclist(EMstatut& statut) const;
    int nombre_seclist() const;
    const EMsecteurData* lire_seclist(int nIndex, EMstatut& statut) const;
    const EMsecteurData* lire_seclist(int nIndex) const;
    int ajouter_seclist(EMsecteurData* elem, EMstatut& statut);
    int ajouter_seclist(EMsecteurData* elem);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    EM_MASSIF_TYPE_ACTION  m_eTYPE;
    char*  m_gADEP;
    char*  m_gADES;
    char*  m_gARCID;
    EMmsf_aeronefData*  m_paeronef;
    char  m_cATIS;
    int  m_nBKROW;
    char*  m_gBKT;
    int  m_nCFL;
    char*  m_gCTRIPE;
    int  m_nCTROW;
    char*  m_gDCRMK;
    char*  m_gEOBDT;
    char*  m_gFPCTST;
    char*  m_gFPRMK;
    char*  m_gFPSRC;
    char*  m_gNFC;
    char*  m_gOPRMKCT;
    int  m_nPFL;
    char*  m_gPKA;
    char*  m_gPKATT;
    char*  m_gPKDEP;
    char*  m_gPLNID_IFPLID;
    char*  m_gQFU;
    char*  m_gQFUATT;
    EMmsf_regulationData*  m_pregulation;
    int  m_nRFL;
    char*  m_gSECDEST;
    char*  m_gSID;
    int  m_nSPEED;
    char*  m_gCODE1;
    char*  m_gCODE2;
    char*  m_gCODE;
    char*  m_gCODEP;
    int  m_nTRFL;
    char*  m_gTYPVOL;
    int  m_nXFL;
    int  m_nid_vol;
    char*  m_gdate_mvt;
    char*  m_gdate_arr;
    char  m_cetat;
    char  m_cetat_mvt;
    char  m_cindic_irregul;
    char  m_ccause_irregul;
    char*  m_gheure_irregul;
    char*  m_gid_ddv;
    char  m_ctypddv;
    char  m_cregime;
    char  m_ctyp_vol;
    char  m_cregle_vol;
    char*  m_gnature;
    char*  m_gheure_reel_dep;
    char*  m_gaero_dest;
    char*  m_gheure_eta;
    char*  m_gheure_arr;
    char*  m_gheure_rmg;
    char*  m_gtrtspec;
    char*  m_gselcal;
    int  m_nnbpers;
    char*  m_gniveau_et_unite;
    char*  m_groute;
    char  m_cbalisage;
    char  m_csens;
    char  m_csvfr;
    char  m_ccreman;
    int  m_ncircuit;
    int  m_nremisegaz;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMradionavData*  m_teqcst[C_EM_NB_EQCST];
    int m_neqcst;            // Taille courante de m_teqcst

    EMrouteData*  m_trtetr[C_EM_NB_RTETR];
    int m_nrtetr;            // Taille courante de m_trtetr

    EMsecteurData*  m_tseclist[C_EM_NB_SECLIST];
    int m_nseclist;            // Taille courante de m_tseclist

    char*  m_tdestinataires[C_EM_MASSIF_NB_DEST];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMmassifactionData.
    friend ostream& operator << (ostream& ostr, const EMmassifactionData& obj);


private:

    // Mesures de securite :
    EMmassifactionData& operator = (const EMmassifactionData&);
    int operator == (const EMmassifactionData&);
    int operator != (const EMmassifactionData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmassifactionData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifactionData.H
//------------------------------------------------------------------------------

