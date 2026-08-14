/*******************************************************************************
 * \file           EMrequeteData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMrequeteData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrequete.data
 * \date  Génération :  27/05/2025 a 12:52:50
 *******************************************************************************
 */


#ifndef __EMrequeteData_H
#define __EMrequeteData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMrequeteData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   di
 *  \class   EMrequeteData
 *  \brief   Définition de la classe implémentant l'objet métier EMrequeteData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMrequeteData
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
class EMrequeteData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMrequeteData(
        char* gADEP = (char*) 0,
        char* gADES = (char*) 0,
        char* gARCID = (char*) 0,
        int nCTROW = (int) 0,
        char* gEOBDT = (char*) 0,
        char* gINDSTIP = (char*) 0,
        char* gPLNID_IFPLID = (char*) 0,
        int nREQID = (int) 0,
        int nRSTID = (int) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMrequeteData(const EMrequeteData_v3_0_0&);



    // Destructeur
    ~EMrequeteData();


    // Constructeur de copie
    EMrequeteData(const EMrequeteData&);



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
    EMrequeteData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

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

    int lire_nCTROW(EMstatut& statut) const;
    int lire_nCTROW() const;
    void ecrire_nCTROW(const int valeur, EMstatut& statut);
    void ecrire_nCTROW(const int valeur);

    const char* lire_gEOBDT(EMstatut& statut) const;
    const char* lire_gEOBDT() const;
    void ecrire_gEOBDT(char* valeur, EMstatut& statut);
    void ecrire_gEOBDT(char* valeur);

    const char* lire_gINDSTIP(EMstatut& statut) const;
    const char* lire_gINDSTIP() const;
    void ecrire_gINDSTIP(char* valeur, EMstatut& statut);
    void ecrire_gINDSTIP(char* valeur);

    const char* lire_gPLNID_IFPLID(EMstatut& statut) const;
    const char* lire_gPLNID_IFPLID() const;
    void ecrire_gPLNID_IFPLID(char* valeur, EMstatut& statut);
    void ecrire_gPLNID_IFPLID(char* valeur);

    int lire_nREQID(EMstatut& statut) const;
    int lire_nREQID() const;
    void ecrire_nREQID(const int valeur, EMstatut& statut);
    void ecrire_nREQID(const int valeur);

    int lire_nRSTID(EMstatut& statut) const;
    int lire_nRSTID() const;
    void ecrire_nRSTID(const int valeur, EMstatut& statut);
    void ecrire_nRSTID(const int valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gADEP;
    char*  m_gADES;
    char*  m_gARCID;
    int  m_nCTROW;
    char*  m_gEOBDT;
    char*  m_gINDSTIP;
    char*  m_gPLNID_IFPLID;
    int  m_nREQID;
    int  m_nRSTID;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMrequeteData.
    friend ostream& operator << (ostream& ostr, const EMrequeteData& obj);


private:

    // Mesures de securite :
    EMrequeteData& operator = (const EMrequeteData&);
    int operator == (const EMrequeteData&);
    int operator != (const EMrequeteData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMrequeteData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrequeteData.H
//------------------------------------------------------------------------------

