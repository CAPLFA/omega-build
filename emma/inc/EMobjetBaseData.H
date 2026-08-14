/*******************************************************************************
 * \file           EMobjetBaseData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMobjetBaseData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMobjetBase.data
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMobjetBaseData_H
#define __EMobjetBaseData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsvc_testTYPES.H"
#include "EMobjetChaineData.H"
#include "EMsvc_testDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMobjetBaseData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   svc_test
 *  \class   EMobjetBaseData
 *  \brief   Définition de la classe implémentant l'objet métier EMobjetBaseData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMobjetBaseData
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
class EMobjetBaseData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMobjetBaseData(
        char* gbase_chaine = (char*) 0,
        int nbase_int = (int) 0,
        double dbase_double = (double) 0,
        EM_TYPE_SVC_ENUM ebase_enum = (EM_TYPE_SVC_ENUM) 0,
        EMobjetChaineData* pbase_objetChaine = (EMobjetChaineData*) 0,
        int nbase_listechaine = 0,
        char** tbase_listechaine = (char**) 0,
        int nbase_listeint = 0,
        int* tbase_listeint = (int*) 0,
        int nbase_listedouble = 0,
        double* tbase_listedouble = (double*) 0,
        int nbase_listeobjetChaine = 0,
        EMobjetChaineData** tbase_listeobjetChaine = (EMobjetChaineData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMobjetBaseData(const EMobjetBaseData_v3_0_0&);



    // Destructeur
    ~EMobjetBaseData();


    // Constructeur de copie
    EMobjetBaseData(const EMobjetBaseData&);



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
    EMobjetBaseData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gbase_chaine(EMstatut& statut) const;
    const char* lire_gbase_chaine() const;
    void ecrire_gbase_chaine(char* valeur, EMstatut& statut);
    void ecrire_gbase_chaine(char* valeur);

    int lire_nbase_int(EMstatut& statut) const;
    int lire_nbase_int() const;
    void ecrire_nbase_int(const int valeur, EMstatut& statut);
    void ecrire_nbase_int(const int valeur);

    double lire_dbase_double(EMstatut& statut) const;
    double lire_dbase_double() const;
    void ecrire_dbase_double(const double valeur, EMstatut& statut);
    void ecrire_dbase_double(const double valeur);

    EM_TYPE_SVC_ENUM lire_ebase_enum(EMstatut& statut) const;
    EM_TYPE_SVC_ENUM lire_ebase_enum() const;
    void ecrire_ebase_enum(const EM_TYPE_SVC_ENUM valeur, EMstatut& statut);
    void ecrire_ebase_enum(const EM_TYPE_SVC_ENUM valeur);

    const EMobjetChaineData* lire_pbase_objetChaine(EMstatut& statut) const;
    const EMobjetChaineData* lire_pbase_objetChaine() const;
    void ecrire_pbase_objetChaine(EMobjetChaineData* valeur, EMstatut& statut);
    void ecrire_pbase_objetChaine(EMobjetChaineData* valeur);

    int nombre_base_listechaine(EMstatut& statut) const;
    int nombre_base_listechaine() const;
    const char* lire_base_listechaine(int nIndex, EMstatut& statut) const;
    const char* lire_base_listechaine(int nIndex) const;
    int ajouter_base_listechaine(char* elem, EMstatut& statut);
    int ajouter_base_listechaine(char* elem);

    int nombre_base_listeint(EMstatut& statut) const;
    int nombre_base_listeint() const;
    int lire_base_listeint(int nIndex, EMstatut& statut) const;
    int lire_base_listeint(int nIndex) const;
    int ajouter_base_listeint(int elem, EMstatut& statut);
    int ajouter_base_listeint(int elem);

    int nombre_base_listedouble(EMstatut& statut) const;
    int nombre_base_listedouble() const;
    double lire_base_listedouble(int nIndex, EMstatut& statut) const;
    double lire_base_listedouble(int nIndex) const;
    int ajouter_base_listedouble(double elem, EMstatut& statut);
    int ajouter_base_listedouble(double elem);

    int nombre_base_listeobjetChaine(EMstatut& statut) const;
    int nombre_base_listeobjetChaine() const;
    const EMobjetChaineData* lire_base_listeobjetChaine(int nIndex, EMstatut& statut) const;
    const EMobjetChaineData* lire_base_listeobjetChaine(int nIndex) const;
    int ajouter_base_listeobjetChaine(EMobjetChaineData* elem, EMstatut& statut);
    int ajouter_base_listeobjetChaine(EMobjetChaineData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gbase_chaine;
    int  m_nbase_int;
    double  m_dbase_double;
    EM_TYPE_SVC_ENUM  m_ebase_enum;
    EMobjetChaineData*  m_pbase_objetChaine;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tbase_listechaine[C_EM_MAX_SVC_CHAINE];
    int m_nbase_listechaine;            // Taille courante de m_tbase_listechaine

    int  m_tbase_listeint[C_EM_MAX_SVC_INT];
    int m_nbase_listeint;            // Taille courante de m_tbase_listeint

    double  m_tbase_listedouble[C_EM_MAX_SVC_DOUBLE];
    int m_nbase_listedouble;            // Taille courante de m_tbase_listedouble

    EMobjetChaineData*  m_tbase_listeobjetChaine[C_EM_MAX_SVC_OBJET_CHAINE];
    int m_nbase_listeobjetChaine;            // Taille courante de m_tbase_listeobjetChaine


    // Ajoute sur le flux les attributs d'un objet EMobjetBaseData.
    friend ostream& operator << (ostream& ostr, const EMobjetBaseData& obj);


private:

    // Mesures de securite :
    EMobjetBaseData& operator = (const EMobjetBaseData&);
    int operator == (const EMobjetBaseData&);
    int operator != (const EMobjetBaseData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMobjetBaseData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMobjetBaseData.H
//------------------------------------------------------------------------------

