/*******************************************************************************
 * \file           EMrouteData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMrouteData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMroute.data
 * \date  Génération :  27/05/2025 a 12:52:50
 *******************************************************************************
 */


#ifndef __EMrouteData_H
#define __EMrouteData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMdiDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMrouteData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   di
 *  \class   EMrouteData
 *  \brief   Définition de la classe implémentant l'objet métier EMrouteData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMrouteData
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
class EMrouteData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMrouteData(
        char* gPTCID = (char*) 0,
        char* gEDTO = (char*) 0,
        int nFL = (int) 0,
        char* gTRAJ = (char*) 0,
        char* gVIEW = (char*) 0,
        char* gUDPT = (char*) 0,
        char* gCOORPT = (char*) 0,
        char* gREFID = (char*) 0,
        char* gREF1ID = (char*) 0,
        int nrefIdct = 0,
        char** trefIdct = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMrouteData(const EMrouteData_v3_0_0&);



    // Destructeur
    ~EMrouteData();


    // Constructeur de copie
    EMrouteData(const EMrouteData&);



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
    EMrouteData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gPTCID(EMstatut& statut) const;
    const char* lire_gPTCID() const;
    void ecrire_gPTCID(char* valeur, EMstatut& statut);
    void ecrire_gPTCID(char* valeur);

    const char* lire_gEDTO(EMstatut& statut) const;
    const char* lire_gEDTO() const;
    void ecrire_gEDTO(char* valeur, EMstatut& statut);
    void ecrire_gEDTO(char* valeur);

    int lire_nFL(EMstatut& statut) const;
    int lire_nFL() const;
    void ecrire_nFL(const int valeur, EMstatut& statut);
    void ecrire_nFL(const int valeur);

    const char* lire_gTRAJ(EMstatut& statut) const;
    const char* lire_gTRAJ() const;
    void ecrire_gTRAJ(char* valeur, EMstatut& statut);
    void ecrire_gTRAJ(char* valeur);

    const char* lire_gVIEW(EMstatut& statut) const;
    const char* lire_gVIEW() const;
    void ecrire_gVIEW(char* valeur, EMstatut& statut);
    void ecrire_gVIEW(char* valeur);

    const char* lire_gUDPT(EMstatut& statut) const;
    const char* lire_gUDPT() const;
    void ecrire_gUDPT(char* valeur, EMstatut& statut);
    void ecrire_gUDPT(char* valeur);

    const char* lire_gCOORPT(EMstatut& statut) const;
    const char* lire_gCOORPT() const;
    void ecrire_gCOORPT(char* valeur, EMstatut& statut);
    void ecrire_gCOORPT(char* valeur);

    const char* lire_gREFID(EMstatut& statut) const;
    const char* lire_gREFID() const;
    void ecrire_gREFID(char* valeur, EMstatut& statut);
    void ecrire_gREFID(char* valeur);

    const char* lire_gREF1ID(EMstatut& statut) const;
    const char* lire_gREF1ID() const;
    void ecrire_gREF1ID(char* valeur, EMstatut& statut);
    void ecrire_gREF1ID(char* valeur);

    int nombre_refIdct(EMstatut& statut) const;
    int nombre_refIdct() const;
    const char* lire_refIdct(int nIndex, EMstatut& statut) const;
    const char* lire_refIdct(int nIndex) const;
    int ajouter_refIdct(char* elem, EMstatut& statut);
    int ajouter_refIdct(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gPTCID;
    char*  m_gEDTO;
    int  m_nFL;
    char*  m_gTRAJ;
    char*  m_gVIEW;
    char*  m_gUDPT;
    char*  m_gCOORPT;
    char*  m_gREFID;
    char*  m_gREF1ID;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_trefIdct[C_EM_NB_REFIDCT];
    int m_nrefIdct;            // Taille courante de m_trefIdct


    // Ajoute sur le flux les attributs d'un objet EMrouteData.
    friend ostream& operator << (ostream& ostr, const EMrouteData& obj);


private:

    // Mesures de securite :
    EMrouteData& operator = (const EMrouteData&);
    int operator == (const EMrouteData&);
    int operator != (const EMrouteData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMrouteData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrouteData.H
//------------------------------------------------------------------------------

