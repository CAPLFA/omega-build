/*******************************************************************************
 * \file           EMvolappData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMvolappData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMvolapp.data
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMvolappData_H
#define __EMvolappData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMmsf_aeronefData.H"
#include "EMmsf_eventData.H"
#include "EMmsf_regulationData.H"
#include "EMdiDEFINES.H"
#include "EMradionavData.H"
#include "EMrouteData.H"
#include "EMsecteurData.H"
#include "EMtranslistData.H"
#include "EMmassifDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMvolappData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   massif
 *  \class   EMvolappData
 *  \brief   Définition de la classe implémentant l'objet métier EMvolappData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMvolappData
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
class EMvolappData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMvolappData(
        char* gcleISA = (char*) 0,
        char* gADEP = (char*) 0,
        char* gADES = (char*) 0,
        char* gARCID = (char*) 0,
        EMmsf_aeronefData* paeronef = (EMmsf_aeronefData*) 0,
        char cATIS = (char) 0,
        char* gAUTOMSG = (char*) 0,
        char* gSENDT = (char*) 0,
        char* gPTCID = (char*) 0,
        int nFLB = (int) 0,
        char* gPFLT = (char*) 0,
        char* gAVAIL = (char*) 0,
        int nCFL = (int) 0,
        char* gCODETR = (char*) 0,
        int nCONFID = (int) 0,
        char* gCTMOD = (char*) 0,
        int nCTROW = (int) 0,
        char* gCTSRC = (char*) 0,
        char* gDCCAR = (char*) 0,
        char* gDCMOD = (char*) 0,
        char* gDCRMK = (char*) 0,
        char* gDCRMKPIL = (char*) 0,
        int nETRFL = (int) 0,
        char* gENTRYT = (char*) 0,
        char* gEOBDT = (char*) 0,
        EMmsf_eventData* pevent = (EMmsf_eventData*) 0,
        int nFLBK = (int) 0,
        char* gFPCTST = (char*) 0,
        char* gFPRMK = (char*) 0,
        char* gFPSRC = (char*) 0,
        char* gLASTRADT = (char*) 0,
        char* gMAINT = (char*) 0,
        char* gNFC = (char*) 0,
        int nOPRFL = (int) 0,
        char* gOPRMKCT = (char*) 0,
        char* gORIENTED = (char*) 0,
        int nPFL = (int) 0,
        char* gPKA = (char*) 0,
        char* gPKATT = (char*) 0,
        char* gPKDEP = (char*) 0,
        char* gPKDEPPIL = (char*) 0,
        char* gPLNID_IFPLID = (char*) 0,
        char* gPOSMVT = (char*) 0,
        char* gQFU = (char*) 0,
        char* gQFUATT = (char*) 0,
        char* gRADIOID = (char*) 0,
        EMmsf_regulationData* pregulation = (EMmsf_regulationData*) 0,
        int nREQID = (int) 0,
        int nRFL = (int) 0,
        char* gSECDEST = (char*) 0,
        char cSEQPT = (char) 0,
        char* gSID = (char*) 0,
        int nSPEED = (int) 0,
        char* gCODE1 = (char*) 0,
        char* gCODE2 = (char*) 0,
        char* gCODE = (char*) 0,
        char* gCODEP = (char*) 0,
        int nSTAMP = (int) 0,
        int nTRFL = (int) 0,
        char* gTITLE = (char*) 0,
        char* gTYPEVOL = (char*) 0,
        int nXFL = (int) 0,
        int nid_vol = (int) 0,
        char* gdate_mvt = (char*) 0,
        char* gdate_arr = (char*) 0,
        char cetat = (char) 0,
        char cetat_mvt = (char) 0,
        char cetat_cautra = (char) 0,
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
        char* gARCADDR = (char*) 0,
        char* gFLIGHTID = (char*) 0,
        int neqcst = 0,
        EMradionavData** teqcst = (EMradionavData**) 0,
        int nrtetr = 0,
        EMrouteData** trtetr = (EMrouteData**) 0,
        int nseclist = 0,
        EMsecteurData** tseclist = (EMsecteurData**) 0,
        int ntranslist = 0,
        EMtranslistData** ttranslist = (EMtranslistData**) 0,
        int ndestinataire = 0,
        char** tdestinataire = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMvolappData(const EMvolappData_v3_0_0&);



    // Destructeur
    ~EMvolappData();


    // Constructeur de copie
    EMvolappData(const EMvolappData&);



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
    EMvolappData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gcleISA(EMstatut& statut) const;
    const char* lire_gcleISA() const;
    void ecrire_gcleISA(char* valeur, EMstatut& statut);
    void ecrire_gcleISA(char* valeur);

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

    const char* lire_gAUTOMSG(EMstatut& statut) const;
    const char* lire_gAUTOMSG() const;
    void ecrire_gAUTOMSG(char* valeur, EMstatut& statut);
    void ecrire_gAUTOMSG(char* valeur);

    const char* lire_gSENDT(EMstatut& statut) const;
    const char* lire_gSENDT() const;
    void ecrire_gSENDT(char* valeur, EMstatut& statut);
    void ecrire_gSENDT(char* valeur);

    const char* lire_gPTCID(EMstatut& statut) const;
    const char* lire_gPTCID() const;
    void ecrire_gPTCID(char* valeur, EMstatut& statut);
    void ecrire_gPTCID(char* valeur);

    int lire_nFLB(EMstatut& statut) const;
    int lire_nFLB() const;
    void ecrire_nFLB(const int valeur, EMstatut& statut);
    void ecrire_nFLB(const int valeur);

    const char* lire_gPFLT(EMstatut& statut) const;
    const char* lire_gPFLT() const;
    void ecrire_gPFLT(char* valeur, EMstatut& statut);
    void ecrire_gPFLT(char* valeur);

    const char* lire_gAVAIL(EMstatut& statut) const;
    const char* lire_gAVAIL() const;
    void ecrire_gAVAIL(char* valeur, EMstatut& statut);
    void ecrire_gAVAIL(char* valeur);

    int lire_nCFL(EMstatut& statut) const;
    int lire_nCFL() const;
    void ecrire_nCFL(const int valeur, EMstatut& statut);
    void ecrire_nCFL(const int valeur);

    const char* lire_gCODETR(EMstatut& statut) const;
    const char* lire_gCODETR() const;
    void ecrire_gCODETR(char* valeur, EMstatut& statut);
    void ecrire_gCODETR(char* valeur);

    int lire_nCONFID(EMstatut& statut) const;
    int lire_nCONFID() const;
    void ecrire_nCONFID(const int valeur, EMstatut& statut);
    void ecrire_nCONFID(const int valeur);

    const char* lire_gCTMOD(EMstatut& statut) const;
    const char* lire_gCTMOD() const;
    void ecrire_gCTMOD(char* valeur, EMstatut& statut);
    void ecrire_gCTMOD(char* valeur);

    int lire_nCTROW(EMstatut& statut) const;
    int lire_nCTROW() const;
    void ecrire_nCTROW(const int valeur, EMstatut& statut);
    void ecrire_nCTROW(const int valeur);

    const char* lire_gCTSRC(EMstatut& statut) const;
    const char* lire_gCTSRC() const;
    void ecrire_gCTSRC(char* valeur, EMstatut& statut);
    void ecrire_gCTSRC(char* valeur);

    const char* lire_gDCCAR(EMstatut& statut) const;
    const char* lire_gDCCAR() const;
    void ecrire_gDCCAR(char* valeur, EMstatut& statut);
    void ecrire_gDCCAR(char* valeur);

    const char* lire_gDCMOD(EMstatut& statut) const;
    const char* lire_gDCMOD() const;
    void ecrire_gDCMOD(char* valeur, EMstatut& statut);
    void ecrire_gDCMOD(char* valeur);

    const char* lire_gDCRMK(EMstatut& statut) const;
    const char* lire_gDCRMK() const;
    void ecrire_gDCRMK(char* valeur, EMstatut& statut);
    void ecrire_gDCRMK(char* valeur);

    const char* lire_gDCRMKPIL(EMstatut& statut) const;
    const char* lire_gDCRMKPIL() const;
    void ecrire_gDCRMKPIL(char* valeur, EMstatut& statut);
    void ecrire_gDCRMKPIL(char* valeur);

    int lire_nETRFL(EMstatut& statut) const;
    int lire_nETRFL() const;
    void ecrire_nETRFL(const int valeur, EMstatut& statut);
    void ecrire_nETRFL(const int valeur);

    const char* lire_gENTRYT(EMstatut& statut) const;
    const char* lire_gENTRYT() const;
    void ecrire_gENTRYT(char* valeur, EMstatut& statut);
    void ecrire_gENTRYT(char* valeur);

    const char* lire_gEOBDT(EMstatut& statut) const;
    const char* lire_gEOBDT() const;
    void ecrire_gEOBDT(char* valeur, EMstatut& statut);
    void ecrire_gEOBDT(char* valeur);

    const EMmsf_eventData* lire_pevent(EMstatut& statut) const;
    const EMmsf_eventData* lire_pevent() const;
    void ecrire_pevent(EMmsf_eventData* valeur, EMstatut& statut);
    void ecrire_pevent(EMmsf_eventData* valeur);

    int lire_nFLBK(EMstatut& statut) const;
    int lire_nFLBK() const;
    void ecrire_nFLBK(const int valeur, EMstatut& statut);
    void ecrire_nFLBK(const int valeur);

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

    const char* lire_gLASTRADT(EMstatut& statut) const;
    const char* lire_gLASTRADT() const;
    void ecrire_gLASTRADT(char* valeur, EMstatut& statut);
    void ecrire_gLASTRADT(char* valeur);

    const char* lire_gMAINT(EMstatut& statut) const;
    const char* lire_gMAINT() const;
    void ecrire_gMAINT(char* valeur, EMstatut& statut);
    void ecrire_gMAINT(char* valeur);

    const char* lire_gNFC(EMstatut& statut) const;
    const char* lire_gNFC() const;
    void ecrire_gNFC(char* valeur, EMstatut& statut);
    void ecrire_gNFC(char* valeur);

    int lire_nOPRFL(EMstatut& statut) const;
    int lire_nOPRFL() const;
    void ecrire_nOPRFL(const int valeur, EMstatut& statut);
    void ecrire_nOPRFL(const int valeur);

    const char* lire_gOPRMKCT(EMstatut& statut) const;
    const char* lire_gOPRMKCT() const;
    void ecrire_gOPRMKCT(char* valeur, EMstatut& statut);
    void ecrire_gOPRMKCT(char* valeur);

    const char* lire_gORIENTED(EMstatut& statut) const;
    const char* lire_gORIENTED() const;
    void ecrire_gORIENTED(char* valeur, EMstatut& statut);
    void ecrire_gORIENTED(char* valeur);

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

    const char* lire_gPKDEPPIL(EMstatut& statut) const;
    const char* lire_gPKDEPPIL() const;
    void ecrire_gPKDEPPIL(char* valeur, EMstatut& statut);
    void ecrire_gPKDEPPIL(char* valeur);

    const char* lire_gPLNID_IFPLID(EMstatut& statut) const;
    const char* lire_gPLNID_IFPLID() const;
    void ecrire_gPLNID_IFPLID(char* valeur, EMstatut& statut);
    void ecrire_gPLNID_IFPLID(char* valeur);

    const char* lire_gPOSMVT(EMstatut& statut) const;
    const char* lire_gPOSMVT() const;
    void ecrire_gPOSMVT(char* valeur, EMstatut& statut);
    void ecrire_gPOSMVT(char* valeur);

    const char* lire_gQFU(EMstatut& statut) const;
    const char* lire_gQFU() const;
    void ecrire_gQFU(char* valeur, EMstatut& statut);
    void ecrire_gQFU(char* valeur);

    const char* lire_gQFUATT(EMstatut& statut) const;
    const char* lire_gQFUATT() const;
    void ecrire_gQFUATT(char* valeur, EMstatut& statut);
    void ecrire_gQFUATT(char* valeur);

    const char* lire_gRADIOID(EMstatut& statut) const;
    const char* lire_gRADIOID() const;
    void ecrire_gRADIOID(char* valeur, EMstatut& statut);
    void ecrire_gRADIOID(char* valeur);

    const EMmsf_regulationData* lire_pregulation(EMstatut& statut) const;
    const EMmsf_regulationData* lire_pregulation() const;
    void ecrire_pregulation(EMmsf_regulationData* valeur, EMstatut& statut);
    void ecrire_pregulation(EMmsf_regulationData* valeur);

    int lire_nREQID(EMstatut& statut) const;
    int lire_nREQID() const;
    void ecrire_nREQID(const int valeur, EMstatut& statut);
    void ecrire_nREQID(const int valeur);

    int lire_nRFL(EMstatut& statut) const;
    int lire_nRFL() const;
    void ecrire_nRFL(const int valeur, EMstatut& statut);
    void ecrire_nRFL(const int valeur);

    const char* lire_gSECDEST(EMstatut& statut) const;
    const char* lire_gSECDEST() const;
    void ecrire_gSECDEST(char* valeur, EMstatut& statut);
    void ecrire_gSECDEST(char* valeur);

    char lire_cSEQPT(EMstatut& statut) const;
    char lire_cSEQPT() const;
    void ecrire_cSEQPT(const char valeur, EMstatut& statut);
    void ecrire_cSEQPT(const char valeur);

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

    int lire_nSTAMP(EMstatut& statut) const;
    int lire_nSTAMP() const;
    void ecrire_nSTAMP(const int valeur, EMstatut& statut);
    void ecrire_nSTAMP(const int valeur);

    int lire_nTRFL(EMstatut& statut) const;
    int lire_nTRFL() const;
    void ecrire_nTRFL(const int valeur, EMstatut& statut);
    void ecrire_nTRFL(const int valeur);

    const char* lire_gTITLE(EMstatut& statut) const;
    const char* lire_gTITLE() const;
    void ecrire_gTITLE(char* valeur, EMstatut& statut);
    void ecrire_gTITLE(char* valeur);

    const char* lire_gTYPEVOL(EMstatut& statut) const;
    const char* lire_gTYPEVOL() const;
    void ecrire_gTYPEVOL(char* valeur, EMstatut& statut);
    void ecrire_gTYPEVOL(char* valeur);

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

    char lire_cetat_cautra(EMstatut& statut) const;
    char lire_cetat_cautra() const;
    void ecrire_cetat_cautra(const char valeur, EMstatut& statut);
    void ecrire_cetat_cautra(const char valeur);

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

    const char* lire_gARCADDR(EMstatut& statut) const;
    const char* lire_gARCADDR() const;
    void ecrire_gARCADDR(char* valeur, EMstatut& statut);
    void ecrire_gARCADDR(char* valeur);

    const char* lire_gFLIGHTID(EMstatut& statut) const;
    const char* lire_gFLIGHTID() const;
    void ecrire_gFLIGHTID(char* valeur, EMstatut& statut);
    void ecrire_gFLIGHTID(char* valeur);

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

    int nombre_translist(EMstatut& statut) const;
    int nombre_translist() const;
    const EMtranslistData* lire_translist(int nIndex, EMstatut& statut) const;
    const EMtranslistData* lire_translist(int nIndex) const;
    int ajouter_translist(EMtranslistData* elem, EMstatut& statut);
    int ajouter_translist(EMtranslistData* elem);

    int nombre_destinataire(EMstatut& statut) const;
    int nombre_destinataire() const;
    const char* lire_destinataire(int nIndex, EMstatut& statut) const;
    const char* lire_destinataire(int nIndex) const;
    int ajouter_destinataire(char* elem, EMstatut& statut);
    int ajouter_destinataire(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gcleISA;
    char*  m_gADEP;
    char*  m_gADES;
    char*  m_gARCID;
    EMmsf_aeronefData*  m_paeronef;
    char  m_cATIS;
    char*  m_gAUTOMSG;
    char*  m_gSENDT;
    char*  m_gPTCID;
    int  m_nFLB;
    char*  m_gPFLT;
    char*  m_gAVAIL;
    int  m_nCFL;
    char*  m_gCODETR;
    int  m_nCONFID;
    char*  m_gCTMOD;
    int  m_nCTROW;
    char*  m_gCTSRC;
    char*  m_gDCCAR;
    char*  m_gDCMOD;
    char*  m_gDCRMK;
    char*  m_gDCRMKPIL;
    int  m_nETRFL;
    char*  m_gENTRYT;
    char*  m_gEOBDT;
    EMmsf_eventData*  m_pevent;
    int  m_nFLBK;
    char*  m_gFPCTST;
    char*  m_gFPRMK;
    char*  m_gFPSRC;
    char*  m_gLASTRADT;
    char*  m_gMAINT;
    char*  m_gNFC;
    int  m_nOPRFL;
    char*  m_gOPRMKCT;
    char*  m_gORIENTED;
    int  m_nPFL;
    char*  m_gPKA;
    char*  m_gPKATT;
    char*  m_gPKDEP;
    char*  m_gPKDEPPIL;
    char*  m_gPLNID_IFPLID;
    char*  m_gPOSMVT;
    char*  m_gQFU;
    char*  m_gQFUATT;
    char*  m_gRADIOID;
    EMmsf_regulationData*  m_pregulation;
    int  m_nREQID;
    int  m_nRFL;
    char*  m_gSECDEST;
    char  m_cSEQPT;
    char*  m_gSID;
    int  m_nSPEED;
    char*  m_gCODE1;
    char*  m_gCODE2;
    char*  m_gCODE;
    char*  m_gCODEP;
    int  m_nSTAMP;
    int  m_nTRFL;
    char*  m_gTITLE;
    char*  m_gTYPEVOL;
    int  m_nXFL;
    int  m_nid_vol;
    char*  m_gdate_mvt;
    char*  m_gdate_arr;
    char  m_cetat;
    char  m_cetat_mvt;
    char  m_cetat_cautra;
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
    char*  m_gARCADDR;
    char*  m_gFLIGHTID;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMradionavData*  m_teqcst[C_EM_NB_EQCST];
    int m_neqcst;            // Taille courante de m_teqcst

    EMrouteData*  m_trtetr[C_EM_NB_RTETR];
    int m_nrtetr;            // Taille courante de m_trtetr

    EMsecteurData*  m_tseclist[C_EM_NB_SECLIST];
    int m_nseclist;            // Taille courante de m_tseclist

    EMtranslistData*  m_ttranslist[C_EM_NB_TRANSLIST];
    int m_ntranslist;            // Taille courante de m_ttranslist

    char*  m_tdestinataire[C_EM_MASSIF_NB_DEST];
    int m_ndestinataire;            // Taille courante de m_tdestinataire


    // Ajoute sur le flux les attributs d'un objet EMvolappData.
    friend ostream& operator << (ostream& ostr, const EMvolappData& obj);


private:

    // Mesures de securite :
    EMvolappData& operator = (const EMvolappData&);
    int operator == (const EMvolappData&);
    int operator != (const EMvolappData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMvolappData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMvolappData.H
//------------------------------------------------------------------------------

