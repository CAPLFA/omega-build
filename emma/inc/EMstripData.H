/*******************************************************************************
 * \file           EMstripData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMstripData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMstrip.data
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMstripData_H
#define __EMstripData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMdiDEFINES.H"
#include "EMrouteData.H"
#include "EMsecteurData.H"
#include "EMtranslistData.H"
#include "EMradionavData.H"
#include "EMplnDEFINES.H"
#include "EMfreetxtData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMstripData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   pln
 *  \class   EMstripData
 *  \brief   Définition de la classe implémentant l'objet métier EMstripData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMstripData
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
class EMstripData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMstripData(
        char* gTITLE = (char*) 0,
        char* gADEP = (char*) 0,
        char* gADES = (char*) 0,
        char* gARCID = (char*) 0,
        char* gARCTYP = (char*) 0,
        char* gARCTYPPIL = (char*) 0,
        char cATIS = (char) 0,
        char* gAUTOMSG = (char*) 0,
        char* gSENDT = (char*) 0,
        char* gPTCID = (char*) 0,
        int nFLB = (int) 0,
        char* gPFLT = (char*) 0,
        char* gAVAIL = (char*) 0,
        int nBKROW = (int) 0,
        char* gBKT = (char*) 0,
        char* gCEQPTC = (char*) 0,
        int nCFL = (int) 0,
        char* gCODETR = (char*) 0,
        int nCONFID = (int) 0,
        char* gCTDEST = (char*) 0,
        char* gCTMOD = (char*) 0,
        char* gCTRIPE = (char*) 0,
        int nCTROW = (int) 0,
        char* gCTSRC = (char*) 0,
        char* gDCCAR = (char*) 0,
        char* gDCMOD = (char*) 0,
        char* gDCRMK = (char*) 0,
        char* gDCRMKPIL = (char*) 0,
        char* gDOUBID = (char*) 0,
        int nETRFL = (int) 0,
        char* gEOBDT = (char*) 0,
        char* gEOSRC = (char*) 0,
        char* gENTRYT = (char*) 0,
        int nERRORCODE = (int) 0,
        char* gTEXTE = (char*) 0,
        char* gEVENT = (char*) 0,
        int nFLBK = (int) 0,
        char* gFPCTST = (char*) 0,
        char* gFPRMK = (char*) 0,
        char* gFPSRC = (char*) 0,
        char* gGEOID = (char*) 0,
        char* gLATTD = (char*) 0,
        char* gLONGTD = (char*) 0,
        char* gLASTRADT = (char*) 0,
        char* gMAINT = (char*) 0,
        int nNBARC = (int) 0,
        char* gNFC = (char*) 0,
        int nOPRFL = (int) 0,
        char* gOPRMKCT = (char*) 0,
        char* gORIENTED = (char*) 0,
        int nPFL = (int) 0,
        char* gPKA = (char*) 0,
        char* gPKC = (char*) 0,
        char* gPKATT = (char*) 0,
        char* gPKDEP = (char*) 0,
        char* gPKDEPPIL = (char*) 0,
        char* gPLNID_IFPLID = (char*) 0,
        char* gPOSST = (char*) 0,
        char* gQFU = (char*) 0,
        char* gQFUATT = (char*) 0,
        char* gQFUST = (char*) 0,
        char* gRADIOID = (char*) 0,
        char* gREGULT = (char*) 0,
        char* gREGULID1 = (char*) 0,
        char* gREGULID2 = (char*) 0,
        int nREQID = (int) 0,
        int nRFL = (int) 0,
        char* gSECDEST = (char*) 0,
        char* gSECSRC = (char*) 0,
        char* gSECSUIV = (char*) 0,
        char cSEQPT = (char) 0,
        char* gSID = (char*) 0,
        int nSPEED = (int) 0,
        char* gCODE1 = (char*) 0,
        char* gCODE2 = (char*) 0,
        char* gCODE = (char*) 0,
        char* gCODEP = (char*) 0,
        int nSTAMP = (int) 0,
        char* gSTRIPTYP = (char*) 0,
        int nTRFL = (int) 0,
        char* gTYPVOL = (char*) 0,
        char cWKTRC = (char) 0,
        int nXFL = (int) 0,
        char* gARCADDR = (char*) 0,
        char* gFLIGHTID = (char*) 0,
        int nrtetr = 0,
        EMrouteData** trtetr = (EMrouteData**) 0,
        int nseclist = 0,
        EMsecteurData** tseclist = (EMsecteurData**) 0,
        int ntranslist = 0,
        EMtranslistData** ttranslist = (EMtranslistData**) 0,
        int neqcst = 0,
        EMradionavData** teqcst = (EMradionavData**) 0,
        int nfreetxt = 0,
        EMfreetxtData** tfreetxt = (EMfreetxtData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMstripData(const EMstripData_v3_0_0&);



    // Destructeur
    ~EMstripData();


    // Constructeur de copie
    EMstripData(const EMstripData&);



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
    EMstripData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gTITLE(EMstatut& statut) const;
    const char* lire_gTITLE() const;
    void ecrire_gTITLE(char* valeur, EMstatut& statut);
    void ecrire_gTITLE(char* valeur);

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

    const char* lire_gARCTYP(EMstatut& statut) const;
    const char* lire_gARCTYP() const;
    void ecrire_gARCTYP(char* valeur, EMstatut& statut);
    void ecrire_gARCTYP(char* valeur);

    const char* lire_gARCTYPPIL(EMstatut& statut) const;
    const char* lire_gARCTYPPIL() const;
    void ecrire_gARCTYPPIL(char* valeur, EMstatut& statut);
    void ecrire_gARCTYPPIL(char* valeur);

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

    int lire_nBKROW(EMstatut& statut) const;
    int lire_nBKROW() const;
    void ecrire_nBKROW(const int valeur, EMstatut& statut);
    void ecrire_nBKROW(const int valeur);

    const char* lire_gBKT(EMstatut& statut) const;
    const char* lire_gBKT() const;
    void ecrire_gBKT(char* valeur, EMstatut& statut);
    void ecrire_gBKT(char* valeur);

    const char* lire_gCEQPTC(EMstatut& statut) const;
    const char* lire_gCEQPTC() const;
    void ecrire_gCEQPTC(char* valeur, EMstatut& statut);
    void ecrire_gCEQPTC(char* valeur);

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

    const char* lire_gCTDEST(EMstatut& statut) const;
    const char* lire_gCTDEST() const;
    void ecrire_gCTDEST(char* valeur, EMstatut& statut);
    void ecrire_gCTDEST(char* valeur);

    const char* lire_gCTMOD(EMstatut& statut) const;
    const char* lire_gCTMOD() const;
    void ecrire_gCTMOD(char* valeur, EMstatut& statut);
    void ecrire_gCTMOD(char* valeur);

    const char* lire_gCTRIPE(EMstatut& statut) const;
    const char* lire_gCTRIPE() const;
    void ecrire_gCTRIPE(char* valeur, EMstatut& statut);
    void ecrire_gCTRIPE(char* valeur);

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

    const char* lire_gDOUBID(EMstatut& statut) const;
    const char* lire_gDOUBID() const;
    void ecrire_gDOUBID(char* valeur, EMstatut& statut);
    void ecrire_gDOUBID(char* valeur);

    int lire_nETRFL(EMstatut& statut) const;
    int lire_nETRFL() const;
    void ecrire_nETRFL(const int valeur, EMstatut& statut);
    void ecrire_nETRFL(const int valeur);

    const char* lire_gEOBDT(EMstatut& statut) const;
    const char* lire_gEOBDT() const;
    void ecrire_gEOBDT(char* valeur, EMstatut& statut);
    void ecrire_gEOBDT(char* valeur);

    const char* lire_gEOSRC(EMstatut& statut) const;
    const char* lire_gEOSRC() const;
    void ecrire_gEOSRC(char* valeur, EMstatut& statut);
    void ecrire_gEOSRC(char* valeur);

    const char* lire_gENTRYT(EMstatut& statut) const;
    const char* lire_gENTRYT() const;
    void ecrire_gENTRYT(char* valeur, EMstatut& statut);
    void ecrire_gENTRYT(char* valeur);

    int lire_nERRORCODE(EMstatut& statut) const;
    int lire_nERRORCODE() const;
    void ecrire_nERRORCODE(const int valeur, EMstatut& statut);
    void ecrire_nERRORCODE(const int valeur);

    const char* lire_gTEXTE(EMstatut& statut) const;
    const char* lire_gTEXTE() const;
    void ecrire_gTEXTE(char* valeur, EMstatut& statut);
    void ecrire_gTEXTE(char* valeur);

    const char* lire_gEVENT(EMstatut& statut) const;
    const char* lire_gEVENT() const;
    void ecrire_gEVENT(char* valeur, EMstatut& statut);
    void ecrire_gEVENT(char* valeur);

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

    const char* lire_gGEOID(EMstatut& statut) const;
    const char* lire_gGEOID() const;
    void ecrire_gGEOID(char* valeur, EMstatut& statut);
    void ecrire_gGEOID(char* valeur);

    const char* lire_gLATTD(EMstatut& statut) const;
    const char* lire_gLATTD() const;
    void ecrire_gLATTD(char* valeur, EMstatut& statut);
    void ecrire_gLATTD(char* valeur);

    const char* lire_gLONGTD(EMstatut& statut) const;
    const char* lire_gLONGTD() const;
    void ecrire_gLONGTD(char* valeur, EMstatut& statut);
    void ecrire_gLONGTD(char* valeur);

    const char* lire_gLASTRADT(EMstatut& statut) const;
    const char* lire_gLASTRADT() const;
    void ecrire_gLASTRADT(char* valeur, EMstatut& statut);
    void ecrire_gLASTRADT(char* valeur);

    const char* lire_gMAINT(EMstatut& statut) const;
    const char* lire_gMAINT() const;
    void ecrire_gMAINT(char* valeur, EMstatut& statut);
    void ecrire_gMAINT(char* valeur);

    int lire_nNBARC(EMstatut& statut) const;
    int lire_nNBARC() const;
    void ecrire_nNBARC(const int valeur, EMstatut& statut);
    void ecrire_nNBARC(const int valeur);

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

    const char* lire_gPKC(EMstatut& statut) const;
    const char* lire_gPKC() const;
    void ecrire_gPKC(char* valeur, EMstatut& statut);
    void ecrire_gPKC(char* valeur);

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

    const char* lire_gPOSST(EMstatut& statut) const;
    const char* lire_gPOSST() const;
    void ecrire_gPOSST(char* valeur, EMstatut& statut);
    void ecrire_gPOSST(char* valeur);

    const char* lire_gQFU(EMstatut& statut) const;
    const char* lire_gQFU() const;
    void ecrire_gQFU(char* valeur, EMstatut& statut);
    void ecrire_gQFU(char* valeur);

    const char* lire_gQFUATT(EMstatut& statut) const;
    const char* lire_gQFUATT() const;
    void ecrire_gQFUATT(char* valeur, EMstatut& statut);
    void ecrire_gQFUATT(char* valeur);

    const char* lire_gQFUST(EMstatut& statut) const;
    const char* lire_gQFUST() const;
    void ecrire_gQFUST(char* valeur, EMstatut& statut);
    void ecrire_gQFUST(char* valeur);

    const char* lire_gRADIOID(EMstatut& statut) const;
    const char* lire_gRADIOID() const;
    void ecrire_gRADIOID(char* valeur, EMstatut& statut);
    void ecrire_gRADIOID(char* valeur);

    const char* lire_gREGULT(EMstatut& statut) const;
    const char* lire_gREGULT() const;
    void ecrire_gREGULT(char* valeur, EMstatut& statut);
    void ecrire_gREGULT(char* valeur);

    const char* lire_gREGULID1(EMstatut& statut) const;
    const char* lire_gREGULID1() const;
    void ecrire_gREGULID1(char* valeur, EMstatut& statut);
    void ecrire_gREGULID1(char* valeur);

    const char* lire_gREGULID2(EMstatut& statut) const;
    const char* lire_gREGULID2() const;
    void ecrire_gREGULID2(char* valeur, EMstatut& statut);
    void ecrire_gREGULID2(char* valeur);

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

    const char* lire_gSECSRC(EMstatut& statut) const;
    const char* lire_gSECSRC() const;
    void ecrire_gSECSRC(char* valeur, EMstatut& statut);
    void ecrire_gSECSRC(char* valeur);

    const char* lire_gSECSUIV(EMstatut& statut) const;
    const char* lire_gSECSUIV() const;
    void ecrire_gSECSUIV(char* valeur, EMstatut& statut);
    void ecrire_gSECSUIV(char* valeur);

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

    const char* lire_gSTRIPTYP(EMstatut& statut) const;
    const char* lire_gSTRIPTYP() const;
    void ecrire_gSTRIPTYP(char* valeur, EMstatut& statut);
    void ecrire_gSTRIPTYP(char* valeur);

    int lire_nTRFL(EMstatut& statut) const;
    int lire_nTRFL() const;
    void ecrire_nTRFL(const int valeur, EMstatut& statut);
    void ecrire_nTRFL(const int valeur);

    const char* lire_gTYPVOL(EMstatut& statut) const;
    const char* lire_gTYPVOL() const;
    void ecrire_gTYPVOL(char* valeur, EMstatut& statut);
    void ecrire_gTYPVOL(char* valeur);

    char lire_cWKTRC(EMstatut& statut) const;
    char lire_cWKTRC() const;
    void ecrire_cWKTRC(const char valeur, EMstatut& statut);
    void ecrire_cWKTRC(const char valeur);

    int lire_nXFL(EMstatut& statut) const;
    int lire_nXFL() const;
    void ecrire_nXFL(const int valeur, EMstatut& statut);
    void ecrire_nXFL(const int valeur);

    const char* lire_gARCADDR(EMstatut& statut) const;
    const char* lire_gARCADDR() const;
    void ecrire_gARCADDR(char* valeur, EMstatut& statut);
    void ecrire_gARCADDR(char* valeur);

    const char* lire_gFLIGHTID(EMstatut& statut) const;
    const char* lire_gFLIGHTID() const;
    void ecrire_gFLIGHTID(char* valeur, EMstatut& statut);
    void ecrire_gFLIGHTID(char* valeur);

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

    int nombre_eqcst(EMstatut& statut) const;
    int nombre_eqcst() const;
    const EMradionavData* lire_eqcst(int nIndex, EMstatut& statut) const;
    const EMradionavData* lire_eqcst(int nIndex) const;
    int ajouter_eqcst(EMradionavData* elem, EMstatut& statut);
    int ajouter_eqcst(EMradionavData* elem);

    int nombre_freetxt(EMstatut& statut) const;
    int nombre_freetxt() const;
    const EMfreetxtData* lire_freetxt(int nIndex, EMstatut& statut) const;
    const EMfreetxtData* lire_freetxt(int nIndex) const;
    int ajouter_freetxt(EMfreetxtData* elem, EMstatut& statut);
    int ajouter_freetxt(EMfreetxtData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gTITLE;
    char*  m_gADEP;
    char*  m_gADES;
    char*  m_gARCID;
    char*  m_gARCTYP;
    char*  m_gARCTYPPIL;
    char  m_cATIS;
    char*  m_gAUTOMSG;
    char*  m_gSENDT;
    char*  m_gPTCID;
    int  m_nFLB;
    char*  m_gPFLT;
    char*  m_gAVAIL;
    int  m_nBKROW;
    char*  m_gBKT;
    char*  m_gCEQPTC;
    int  m_nCFL;
    char*  m_gCODETR;
    int  m_nCONFID;
    char*  m_gCTDEST;
    char*  m_gCTMOD;
    char*  m_gCTRIPE;
    int  m_nCTROW;
    char*  m_gCTSRC;
    char*  m_gDCCAR;
    char*  m_gDCMOD;
    char*  m_gDCRMK;
    char*  m_gDCRMKPIL;
    char*  m_gDOUBID;
    int  m_nETRFL;
    char*  m_gEOBDT;
    char*  m_gEOSRC;
    char*  m_gENTRYT;
    int  m_nERRORCODE;
    char*  m_gTEXTE;
    char*  m_gEVENT;
    int  m_nFLBK;
    char*  m_gFPCTST;
    char*  m_gFPRMK;
    char*  m_gFPSRC;
    char*  m_gGEOID;
    char*  m_gLATTD;
    char*  m_gLONGTD;
    char*  m_gLASTRADT;
    char*  m_gMAINT;
    int  m_nNBARC;
    char*  m_gNFC;
    int  m_nOPRFL;
    char*  m_gOPRMKCT;
    char*  m_gORIENTED;
    int  m_nPFL;
    char*  m_gPKA;
    char*  m_gPKC;
    char*  m_gPKATT;
    char*  m_gPKDEP;
    char*  m_gPKDEPPIL;
    char*  m_gPLNID_IFPLID;
    char*  m_gPOSST;
    char*  m_gQFU;
    char*  m_gQFUATT;
    char*  m_gQFUST;
    char*  m_gRADIOID;
    char*  m_gREGULT;
    char*  m_gREGULID1;
    char*  m_gREGULID2;
    int  m_nREQID;
    int  m_nRFL;
    char*  m_gSECDEST;
    char*  m_gSECSRC;
    char*  m_gSECSUIV;
    char  m_cSEQPT;
    char*  m_gSID;
    int  m_nSPEED;
    char*  m_gCODE1;
    char*  m_gCODE2;
    char*  m_gCODE;
    char*  m_gCODEP;
    int  m_nSTAMP;
    char*  m_gSTRIPTYP;
    int  m_nTRFL;
    char*  m_gTYPVOL;
    char  m_cWKTRC;
    int  m_nXFL;
    char*  m_gARCADDR;
    char*  m_gFLIGHTID;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMrouteData*  m_trtetr[C_EM_NB_RTETR];
    int m_nrtetr;            // Taille courante de m_trtetr

    EMsecteurData*  m_tseclist[C_EM_NB_SECLIST];
    int m_nseclist;            // Taille courante de m_tseclist

    EMtranslistData*  m_ttranslist[C_EM_NB_TRANSLIST];
    int m_ntranslist;            // Taille courante de m_ttranslist

    EMradionavData*  m_teqcst[C_EM_NB_EQCST];
    int m_neqcst;            // Taille courante de m_teqcst

    EMfreetxtData*  m_tfreetxt[C_EM_NB_LIGNE_TXT];
    int m_nfreetxt;            // Taille courante de m_tfreetxt


    // Ajoute sur le flux les attributs d'un objet EMstripData.
    friend ostream& operator << (ostream& ostr, const EMstripData& obj);


private:

    // Mesures de securite :
    EMstripData& operator = (const EMstripData&);
    int operator == (const EMstripData&);
    int operator != (const EMstripData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMstripData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMstripData.H
//------------------------------------------------------------------------------

