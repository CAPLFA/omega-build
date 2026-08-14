/*******************************************************************************
 * \file           EMobjetMultipleData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMobjetMultipleData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMobjetMultiple.data
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMobjetMultipleData_H
#define __EMobjetMultipleData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsvc_testTYPES.H"
#include "EMobjetChaineData.H"
#include "EMobjetBaseData.H"
#include "EMobjetComposeData.H"
#include "EMsvc_testDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMobjetMultipleData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   svc_test
 *  \class   EMobjetMultipleData
 *  \brief   Définition de la classe implémentant l'objet métier EMobjetMultipleData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMobjetMultipleData
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
class EMobjetMultipleData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMobjetMultipleData(
        char* gmultiple_chaine = (char*) 0,
        int nmultiple_int = (int) 0,
        double dmultiple_double = (double) 0,
        EM_TYPE_SVC_ENUM emultiple_enum = (EM_TYPE_SVC_ENUM) 0,
        EMobjetChaineData* pmultiple_objetChaine = (EMobjetChaineData*) 0,
        EMobjetBaseData* pmultiple_objetBase = (EMobjetBaseData*) 0,
        EMobjetComposeData* pmultiple_objetCompose = (EMobjetComposeData*) 0,
        int nmultiple_listechaine = 0,
        char** tmultiple_listechaine = (char**) 0,
        int nmultiple_listeint = 0,
        int* tmultiple_listeint = (int*) 0,
        int nmultiple_listedouble = 0,
        double* tmultiple_listedouble = (double*) 0,
        int nmultiple_listeobjetChaine = 0,
        EMobjetChaineData** tmultiple_listeobjetChaine = (EMobjetChaineData**) 0,
        int nmultiple_listeobjetBase = 0,
        EMobjetBaseData** tmultiple_listeobjetBase = (EMobjetBaseData**) 0,
        int nmultiple_listeobjetCompose = 0,
        EMobjetComposeData** tmultiple_listeobjetCompose = (EMobjetComposeData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMobjetMultipleData(const EMobjetMultipleData_v3_0_0&);



    // Destructeur
    ~EMobjetMultipleData();


    // Constructeur de copie
    EMobjetMultipleData(const EMobjetMultipleData&);



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
    EMobjetMultipleData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gmultiple_chaine(EMstatut& statut) const;
    const char* lire_gmultiple_chaine() const;
    void ecrire_gmultiple_chaine(char* valeur, EMstatut& statut);
    void ecrire_gmultiple_chaine(char* valeur);

    int lire_nmultiple_int(EMstatut& statut) const;
    int lire_nmultiple_int() const;
    void ecrire_nmultiple_int(const int valeur, EMstatut& statut);
    void ecrire_nmultiple_int(const int valeur);

    double lire_dmultiple_double(EMstatut& statut) const;
    double lire_dmultiple_double() const;
    void ecrire_dmultiple_double(const double valeur, EMstatut& statut);
    void ecrire_dmultiple_double(const double valeur);

    EM_TYPE_SVC_ENUM lire_emultiple_enum(EMstatut& statut) const;
    EM_TYPE_SVC_ENUM lire_emultiple_enum() const;
    void ecrire_emultiple_enum(const EM_TYPE_SVC_ENUM valeur, EMstatut& statut);
    void ecrire_emultiple_enum(const EM_TYPE_SVC_ENUM valeur);

    const EMobjetChaineData* lire_pmultiple_objetChaine(EMstatut& statut) const;
    const EMobjetChaineData* lire_pmultiple_objetChaine() const;
    void ecrire_pmultiple_objetChaine(EMobjetChaineData* valeur, EMstatut& statut);
    void ecrire_pmultiple_objetChaine(EMobjetChaineData* valeur);

    const EMobjetBaseData* lire_pmultiple_objetBase(EMstatut& statut) const;
    const EMobjetBaseData* lire_pmultiple_objetBase() const;
    void ecrire_pmultiple_objetBase(EMobjetBaseData* valeur, EMstatut& statut);
    void ecrire_pmultiple_objetBase(EMobjetBaseData* valeur);

    const EMobjetComposeData* lire_pmultiple_objetCompose(EMstatut& statut) const;
    const EMobjetComposeData* lire_pmultiple_objetCompose() const;
    void ecrire_pmultiple_objetCompose(EMobjetComposeData* valeur, EMstatut& statut);
    void ecrire_pmultiple_objetCompose(EMobjetComposeData* valeur);

    int nombre_multiple_listechaine(EMstatut& statut) const;
    int nombre_multiple_listechaine() const;
    const char* lire_multiple_listechaine(int nIndex, EMstatut& statut) const;
    const char* lire_multiple_listechaine(int nIndex) const;
    int ajouter_multiple_listechaine(char* elem, EMstatut& statut);
    int ajouter_multiple_listechaine(char* elem);

    int nombre_multiple_listeint(EMstatut& statut) const;
    int nombre_multiple_listeint() const;
    int lire_multiple_listeint(int nIndex, EMstatut& statut) const;
    int lire_multiple_listeint(int nIndex) const;
    int ajouter_multiple_listeint(int elem, EMstatut& statut);
    int ajouter_multiple_listeint(int elem);

    int nombre_multiple_listedouble(EMstatut& statut) const;
    int nombre_multiple_listedouble() const;
    double lire_multiple_listedouble(int nIndex, EMstatut& statut) const;
    double lire_multiple_listedouble(int nIndex) const;
    int ajouter_multiple_listedouble(double elem, EMstatut& statut);
    int ajouter_multiple_listedouble(double elem);

    int nombre_multiple_listeobjetChaine(EMstatut& statut) const;
    int nombre_multiple_listeobjetChaine() const;
    const EMobjetChaineData* lire_multiple_listeobjetChaine(int nIndex, EMstatut& statut) const;
    const EMobjetChaineData* lire_multiple_listeobjetChaine(int nIndex) const;
    int ajouter_multiple_listeobjetChaine(EMobjetChaineData* elem, EMstatut& statut);
    int ajouter_multiple_listeobjetChaine(EMobjetChaineData* elem);

    int nombre_multiple_listeobjetBase(EMstatut& statut) const;
    int nombre_multiple_listeobjetBase() const;
    const EMobjetBaseData* lire_multiple_listeobjetBase(int nIndex, EMstatut& statut) const;
    const EMobjetBaseData* lire_multiple_listeobjetBase(int nIndex) const;
    int ajouter_multiple_listeobjetBase(EMobjetBaseData* elem, EMstatut& statut);
    int ajouter_multiple_listeobjetBase(EMobjetBaseData* elem);

    int nombre_multiple_listeobjetCompose(EMstatut& statut) const;
    int nombre_multiple_listeobjetCompose() const;
    const EMobjetComposeData* lire_multiple_listeobjetCompose(int nIndex, EMstatut& statut) const;
    const EMobjetComposeData* lire_multiple_listeobjetCompose(int nIndex) const;
    int ajouter_multiple_listeobjetCompose(EMobjetComposeData* elem, EMstatut& statut);
    int ajouter_multiple_listeobjetCompose(EMobjetComposeData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gmultiple_chaine;
    int  m_nmultiple_int;
    double  m_dmultiple_double;
    EM_TYPE_SVC_ENUM  m_emultiple_enum;
    EMobjetChaineData*  m_pmultiple_objetChaine;
    EMobjetBaseData*  m_pmultiple_objetBase;
    EMobjetComposeData*  m_pmultiple_objetCompose;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tmultiple_listechaine[C_EM_MAX_SVC_CHAINE];
    int m_nmultiple_listechaine;            // Taille courante de m_tmultiple_listechaine

    int  m_tmultiple_listeint[C_EM_MAX_SVC_INT];
    int m_nmultiple_listeint;            // Taille courante de m_tmultiple_listeint

    double  m_tmultiple_listedouble[C_EM_MAX_SVC_DOUBLE];
    int m_nmultiple_listedouble;            // Taille courante de m_tmultiple_listedouble

    EMobjetChaineData*  m_tmultiple_listeobjetChaine[C_EM_MAX_SVC_OBJET_CHAINE];
    int m_nmultiple_listeobjetChaine;            // Taille courante de m_tmultiple_listeobjetChaine

    EMobjetBaseData*  m_tmultiple_listeobjetBase[C_EM_MAX_SVC_OBJET_BASE];
    int m_nmultiple_listeobjetBase;            // Taille courante de m_tmultiple_listeobjetBase

    EMobjetComposeData*  m_tmultiple_listeobjetCompose[C_EM_MAX_SVC_OBJET_COMPOSE];
    int m_nmultiple_listeobjetCompose;            // Taille courante de m_tmultiple_listeobjetCompose


    // Ajoute sur le flux les attributs d'un objet EMobjetMultipleData.
    friend ostream& operator << (ostream& ostr, const EMobjetMultipleData& obj);


private:

    // Mesures de securite :
    EMobjetMultipleData& operator = (const EMobjetMultipleData&);
    int operator == (const EMobjetMultipleData&);
    int operator != (const EMobjetMultipleData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMobjetMultipleData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMobjetMultipleData.H
//------------------------------------------------------------------------------

