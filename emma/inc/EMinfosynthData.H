/*******************************************************************************
 * \file           EMinfosynthData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMinfosynthData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMinfosynth.data
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMinfosynthData_H
#define __EMinfosynthData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMinfosynthData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ifg
 *  \class   EMinfosynthData
 *  \brief   Définition de la classe implémentant l'objet métier EMinfosynthData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMinfosynthData
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
class EMinfosynthData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMinfosynthData(
        char* gnum_automate = (char*) 0,
        char* grang = (char*) 0,
        char* getat = (char*) 0,
        char* gcategorie = (char*) 0,
        char* gtype = (char*) 0,
        char* gnom = (char*) 0,
        char* gpiste = (char*) 0,
        char* gqfu = (char*) 0,
        char* gest_generique = (char*) 0,
        char* gcomplement_du_nom = (char*) 0,
        char* gest_present_dans_atis = (char*) 0,
        char* gest_une_donnee_automate = (char*) 0,
        char* gest_une_occurrence_valide = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMinfosynthData(const EMinfosynthData_v3_0_0&);



    // Destructeur
    ~EMinfosynthData();


    // Constructeur de copie
    EMinfosynthData(const EMinfosynthData&);



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
    EMinfosynthData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gnum_automate(EMstatut& statut) const;
    const char* lire_gnum_automate() const;
    void ecrire_gnum_automate(char* valeur, EMstatut& statut);
    void ecrire_gnum_automate(char* valeur);

    const char* lire_grang(EMstatut& statut) const;
    const char* lire_grang() const;
    void ecrire_grang(char* valeur, EMstatut& statut);
    void ecrire_grang(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gcategorie(EMstatut& statut) const;
    const char* lire_gcategorie() const;
    void ecrire_gcategorie(char* valeur, EMstatut& statut);
    void ecrire_gcategorie(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gnom(EMstatut& statut) const;
    const char* lire_gnom() const;
    void ecrire_gnom(char* valeur, EMstatut& statut);
    void ecrire_gnom(char* valeur);

    const char* lire_gpiste(EMstatut& statut) const;
    const char* lire_gpiste() const;
    void ecrire_gpiste(char* valeur, EMstatut& statut);
    void ecrire_gpiste(char* valeur);

    const char* lire_gqfu(EMstatut& statut) const;
    const char* lire_gqfu() const;
    void ecrire_gqfu(char* valeur, EMstatut& statut);
    void ecrire_gqfu(char* valeur);

    const char* lire_gest_generique(EMstatut& statut) const;
    const char* lire_gest_generique() const;
    void ecrire_gest_generique(char* valeur, EMstatut& statut);
    void ecrire_gest_generique(char* valeur);

    const char* lire_gcomplement_du_nom(EMstatut& statut) const;
    const char* lire_gcomplement_du_nom() const;
    void ecrire_gcomplement_du_nom(char* valeur, EMstatut& statut);
    void ecrire_gcomplement_du_nom(char* valeur);

    const char* lire_gest_present_dans_atis(EMstatut& statut) const;
    const char* lire_gest_present_dans_atis() const;
    void ecrire_gest_present_dans_atis(char* valeur, EMstatut& statut);
    void ecrire_gest_present_dans_atis(char* valeur);

    const char* lire_gest_une_donnee_automate(EMstatut& statut) const;
    const char* lire_gest_une_donnee_automate() const;
    void ecrire_gest_une_donnee_automate(char* valeur, EMstatut& statut);
    void ecrire_gest_une_donnee_automate(char* valeur);

    const char* lire_gest_une_occurrence_valide(EMstatut& statut) const;
    const char* lire_gest_une_occurrence_valide() const;
    void ecrire_gest_une_occurrence_valide(char* valeur, EMstatut& statut);
    void ecrire_gest_une_occurrence_valide(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gnum_automate;
    char*  m_grang;
    char*  m_getat;
    char*  m_gcategorie;
    char*  m_gtype;
    char*  m_gnom;
    char*  m_gpiste;
    char*  m_gqfu;
    char*  m_gest_generique;
    char*  m_gcomplement_du_nom;
    char*  m_gest_present_dans_atis;
    char*  m_gest_une_donnee_automate;
    char*  m_gest_une_occurrence_valide;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMinfosynthData.
    friend ostream& operator << (ostream& ostr, const EMinfosynthData& obj);


private:

    // Mesures de securite :
    EMinfosynthData& operator = (const EMinfosynthData&);
    int operator == (const EMinfosynthData&);
    int operator != (const EMinfosynthData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMinfosynthData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMinfosynthData.H
//------------------------------------------------------------------------------

