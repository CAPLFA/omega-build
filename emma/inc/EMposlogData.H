/*******************************************************************************
 * \file           EMposlogData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMposlogData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMposlog.data
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMposlogData_H
#define __EMposlogData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMposlogData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   cfg
 *  \class   EMposlogData
 *  \brief   Définition de la classe implémentant l'objet métier EMposlogData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMposlogData
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
class EMposlogData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMposlogData(
        char* gzzz = (char*) 0,
        char* gident_config = (char*) 0,
        char* gnom_peri = (char*) 0,
        char* glangue = (char*) 0,
        char* gadr_exp = (char*) 0,
        char* gnom_poslog = (char*) 0,
        char* glibelle_poslog = (char*) 0,
        char* gtype_peri = (char*) 0,
        char* getat_poslog = (char*) 0,
        char* gnom_imp = (char*) 0,
        char cbourrage = (char) 0,
        int nadr_dest = 0,
        char** tadr_dest = (char**) 0,
        int nid_fonc = 0,
        char** tid_fonc = (char**) 0,
        int nnom_fe = 0,
        char** tnom_fe = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMposlogData(const EMposlogData_v3_0_0&);



    // Destructeur
    ~EMposlogData();


    // Constructeur de copie
    EMposlogData(const EMposlogData&);



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
    EMposlogData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gzzz(EMstatut& statut) const;
    const char* lire_gzzz() const;
    void ecrire_gzzz(char* valeur, EMstatut& statut);
    void ecrire_gzzz(char* valeur);

    const char* lire_gident_config(EMstatut& statut) const;
    const char* lire_gident_config() const;
    void ecrire_gident_config(char* valeur, EMstatut& statut);
    void ecrire_gident_config(char* valeur);

    const char* lire_gnom_peri(EMstatut& statut) const;
    const char* lire_gnom_peri() const;
    void ecrire_gnom_peri(char* valeur, EMstatut& statut);
    void ecrire_gnom_peri(char* valeur);

    const char* lire_glangue(EMstatut& statut) const;
    const char* lire_glangue() const;
    void ecrire_glangue(char* valeur, EMstatut& statut);
    void ecrire_glangue(char* valeur);

    const char* lire_gadr_exp(EMstatut& statut) const;
    const char* lire_gadr_exp() const;
    void ecrire_gadr_exp(char* valeur, EMstatut& statut);
    void ecrire_gadr_exp(char* valeur);

    const char* lire_gnom_poslog(EMstatut& statut) const;
    const char* lire_gnom_poslog() const;
    void ecrire_gnom_poslog(char* valeur, EMstatut& statut);
    void ecrire_gnom_poslog(char* valeur);

    const char* lire_glibelle_poslog(EMstatut& statut) const;
    const char* lire_glibelle_poslog() const;
    void ecrire_glibelle_poslog(char* valeur, EMstatut& statut);
    void ecrire_glibelle_poslog(char* valeur);

    const char* lire_gtype_peri(EMstatut& statut) const;
    const char* lire_gtype_peri() const;
    void ecrire_gtype_peri(char* valeur, EMstatut& statut);
    void ecrire_gtype_peri(char* valeur);

    const char* lire_getat_poslog(EMstatut& statut) const;
    const char* lire_getat_poslog() const;
    void ecrire_getat_poslog(char* valeur, EMstatut& statut);
    void ecrire_getat_poslog(char* valeur);

    const char* lire_gnom_imp(EMstatut& statut) const;
    const char* lire_gnom_imp() const;
    void ecrire_gnom_imp(char* valeur, EMstatut& statut);
    void ecrire_gnom_imp(char* valeur);

    char lire_cbourrage(EMstatut& statut) const;
    char lire_cbourrage() const;
    void ecrire_cbourrage(const char valeur, EMstatut& statut);
    void ecrire_cbourrage(const char valeur);

    int nombre_adr_dest(EMstatut& statut) const;
    int nombre_adr_dest() const;
    const char* lire_adr_dest(int nIndex, EMstatut& statut) const;
    const char* lire_adr_dest(int nIndex) const;
    int ajouter_adr_dest(char* elem, EMstatut& statut);
    int ajouter_adr_dest(char* elem);

    int nombre_id_fonc(EMstatut& statut) const;
    int nombre_id_fonc() const;
    const char* lire_id_fonc(int nIndex, EMstatut& statut) const;
    const char* lire_id_fonc(int nIndex) const;
    int ajouter_id_fonc(char* elem, EMstatut& statut);
    int ajouter_id_fonc(char* elem);

    int nombre_nom_fe(EMstatut& statut) const;
    int nombre_nom_fe() const;
    const char* lire_nom_fe(int nIndex, EMstatut& statut) const;
    const char* lire_nom_fe(int nIndex) const;
    int ajouter_nom_fe(char* elem, EMstatut& statut);
    int ajouter_nom_fe(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gzzz;
    char*  m_gident_config;
    char*  m_gnom_peri;
    char*  m_glangue;
    char*  m_gadr_exp;
    char*  m_gnom_poslog;
    char*  m_glibelle_poslog;
    char*  m_gtype_peri;
    char*  m_getat_poslog;
    char*  m_gnom_imp;
    char  m_cbourrage;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tadr_dest[EM_NB_MAX_ADR_DEST];
    int m_nadr_dest;            // Taille courante de m_tadr_dest

    char*  m_tid_fonc[EM_NB_MAX_ID_FONC];
    int m_nid_fonc;            // Taille courante de m_tid_fonc

    char*  m_tnom_fe[EM_NB_MAX_FE];
    int m_nnom_fe;            // Taille courante de m_tnom_fe


    // Ajoute sur le flux les attributs d'un objet EMposlogData.
    friend ostream& operator << (ostream& ostr, const EMposlogData& obj);


private:

    // Mesures de securite :
    EMposlogData& operator = (const EMposlogData&);
    int operator == (const EMposlogData&);
    int operator != (const EMposlogData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMposlogData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMposlogData.H
//------------------------------------------------------------------------------

