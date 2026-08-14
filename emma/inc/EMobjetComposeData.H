/*******************************************************************************
 * \file           EMobjetComposeData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMobjetComposeData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMobjetCompose.data
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMobjetComposeData_H
#define __EMobjetComposeData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsvc_testTYPES.H"
#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMsvc_testDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMobjetComposeData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   svc_test
 *  \class   EMobjetComposeData
 *  \brief   Définition de la classe implémentant l'objet métier EMobjetComposeData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMobjetComposeData
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
class EMobjetComposeData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMobjetComposeData(
        char* gcompose_chaine = (char*) 0,
        int ncompose_int = (int) 0,
        double dcompose_double = (double) 0,
        EM_TYPE_SVC_ENUM ecompose_enum = (EM_TYPE_SVC_ENUM) 0,
        EMobjetChaineData* pcompose_objetChaine = (EMobjetChaineData*) 0,
        EMobjetBaseData* pcompose_objetBase = (EMobjetBaseData*) 0,
        int ncompose_listechaine = 0,
        char** tcompose_listechaine = (char**) 0,
        int ncompose_listeint = 0,
        int* tcompose_listeint = (int*) 0,
        int ncompose_listedouble = 0,
        double* tcompose_listedouble = (double*) 0,
        int ncompose_listeobjetChaine = 0,
        EMobjetChaineData** tcompose_listeobjetChaine = (EMobjetChaineData**) 0,
        int ncompose_listeobjetBase = 0,
        EMobjetBaseData** tcompose_listeobjetBase = (EMobjetBaseData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMobjetComposeData(const EMobjetComposeData_v3_0_0&);



    // Destructeur
    ~EMobjetComposeData();


    // Constructeur de copie
    EMobjetComposeData(const EMobjetComposeData&);



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
    EMobjetComposeData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gcompose_chaine(EMstatut& statut) const;
    const char* lire_gcompose_chaine() const;
    void ecrire_gcompose_chaine(char* valeur, EMstatut& statut);
    void ecrire_gcompose_chaine(char* valeur);

    int lire_ncompose_int(EMstatut& statut) const;
    int lire_ncompose_int() const;
    void ecrire_ncompose_int(const int valeur, EMstatut& statut);
    void ecrire_ncompose_int(const int valeur);

    double lire_dcompose_double(EMstatut& statut) const;
    double lire_dcompose_double() const;
    void ecrire_dcompose_double(const double valeur, EMstatut& statut);
    void ecrire_dcompose_double(const double valeur);

    EM_TYPE_SVC_ENUM lire_ecompose_enum(EMstatut& statut) const;
    EM_TYPE_SVC_ENUM lire_ecompose_enum() const;
    void ecrire_ecompose_enum(const EM_TYPE_SVC_ENUM valeur, EMstatut& statut);
    void ecrire_ecompose_enum(const EM_TYPE_SVC_ENUM valeur);

    const EMobjetChaineData* lire_pcompose_objetChaine(EMstatut& statut) const;
    const EMobjetChaineData* lire_pcompose_objetChaine() const;
    void ecrire_pcompose_objetChaine(EMobjetChaineData* valeur, EMstatut& statut);
    void ecrire_pcompose_objetChaine(EMobjetChaineData* valeur);

    const EMobjetBaseData* lire_pcompose_objetBase(EMstatut& statut) const;
    const EMobjetBaseData* lire_pcompose_objetBase() const;
    void ecrire_pcompose_objetBase(EMobjetBaseData* valeur, EMstatut& statut);
    void ecrire_pcompose_objetBase(EMobjetBaseData* valeur);

    int nombre_compose_listechaine(EMstatut& statut) const;
    int nombre_compose_listechaine() const;
    const char* lire_compose_listechaine(int nIndex, EMstatut& statut) const;
    const char* lire_compose_listechaine(int nIndex) const;
    int ajouter_compose_listechaine(char* elem, EMstatut& statut);
    int ajouter_compose_listechaine(char* elem);

    int nombre_compose_listeint(EMstatut& statut) const;
    int nombre_compose_listeint() const;
    int lire_compose_listeint(int nIndex, EMstatut& statut) const;
    int lire_compose_listeint(int nIndex) const;
    int ajouter_compose_listeint(int elem, EMstatut& statut);
    int ajouter_compose_listeint(int elem);

    int nombre_compose_listedouble(EMstatut& statut) const;
    int nombre_compose_listedouble() const;
    double lire_compose_listedouble(int nIndex, EMstatut& statut) const;
    double lire_compose_listedouble(int nIndex) const;
    int ajouter_compose_listedouble(double elem, EMstatut& statut);
    int ajouter_compose_listedouble(double elem);

    int nombre_compose_listeobjetChaine(EMstatut& statut) const;
    int nombre_compose_listeobjetChaine() const;
    const EMobjetChaineData* lire_compose_listeobjetChaine(int nIndex, EMstatut& statut) const;
    const EMobjetChaineData* lire_compose_listeobjetChaine(int nIndex) const;
    int ajouter_compose_listeobjetChaine(EMobjetChaineData* elem, EMstatut& statut);
    int ajouter_compose_listeobjetChaine(EMobjetChaineData* elem);

    int nombre_compose_listeobjetBase(EMstatut& statut) const;
    int nombre_compose_listeobjetBase() const;
    const EMobjetBaseData* lire_compose_listeobjetBase(int nIndex, EMstatut& statut) const;
    const EMobjetBaseData* lire_compose_listeobjetBase(int nIndex) const;
    int ajouter_compose_listeobjetBase(EMobjetBaseData* elem, EMstatut& statut);
    int ajouter_compose_listeobjetBase(EMobjetBaseData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gcompose_chaine;
    int  m_ncompose_int;
    double  m_dcompose_double;
    EM_TYPE_SVC_ENUM  m_ecompose_enum;
    EMobjetChaineData*  m_pcompose_objetChaine;
    EMobjetBaseData*  m_pcompose_objetBase;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tcompose_listechaine[C_EM_MAX_SVC_CHAINE];
    int m_ncompose_listechaine;            // Taille courante de m_tcompose_listechaine

    int  m_tcompose_listeint[C_EM_MAX_SVC_INT];
    int m_ncompose_listeint;            // Taille courante de m_tcompose_listeint

    double  m_tcompose_listedouble[C_EM_MAX_SVC_DOUBLE];
    int m_ncompose_listedouble;            // Taille courante de m_tcompose_listedouble

    EMobjetChaineData*  m_tcompose_listeobjetChaine[C_EM_MAX_SVC_OBJET_CHAINE];
    int m_ncompose_listeobjetChaine;            // Taille courante de m_tcompose_listeobjetChaine

    EMobjetBaseData*  m_tcompose_listeobjetBase[C_EM_MAX_SVC_OBJET_BASE];
    int m_ncompose_listeobjetBase;            // Taille courante de m_tcompose_listeobjetBase


    // Ajoute sur le flux les attributs d'un objet EMobjetComposeData.
    friend ostream& operator << (ostream& ostr, const EMobjetComposeData& obj);


private:

    // Mesures de securite :
    EMobjetComposeData& operator = (const EMobjetComposeData&);
    int operator == (const EMobjetComposeData&);
    int operator != (const EMobjetComposeData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMobjetComposeData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMobjetComposeData.H
//------------------------------------------------------------------------------

