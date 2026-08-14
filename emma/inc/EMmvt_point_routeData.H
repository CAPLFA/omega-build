/*******************************************************************************
 * \file           EMmvt_point_routeData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmvt_point_routeData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmvt_point_route.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMmvt_point_routeData_H
#define __EMmvt_point_routeData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMmvt_point_routeData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMmvt_point_routeData
 *  \brief   Définition de la classe implémentant l'objet métier EMmvt_point_routeData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmvt_point_routeData
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
class EMmvt_point_routeData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmvt_point_routeData(
        char* gnom = (char*) 0,
        char* glatitude = (char*) 0,
        char* glongitude = (char*) 0,
        char* glieu = (char*) 0,
        char* gsecteur_strip = (char*) 0,
        char* gimprimable = (char*) 0,
        char* ganticip_est = (char*) 0,
        char* gheure_passage_prevue = (char*) 0,
        char* gheure_passage_prevue_sec = (char*) 0,
        char* gheure_passage_reelle = (char*) 0,
        char* gheure_passage_reelle_sec = (char*) 0,
        char* gniveau_passage = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmvt_point_routeData(const EMmvt_point_routeData_v3_0_0&);



    // Destructeur
    ~EMmvt_point_routeData();


    // Constructeur de copie
    EMmvt_point_routeData(const EMmvt_point_routeData&);



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
    EMmvt_point_routeData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gnom(EMstatut& statut) const;
    const char* lire_gnom() const;
    void ecrire_gnom(char* valeur, EMstatut& statut);
    void ecrire_gnom(char* valeur);

    const char* lire_glatitude(EMstatut& statut) const;
    const char* lire_glatitude() const;
    void ecrire_glatitude(char* valeur, EMstatut& statut);
    void ecrire_glatitude(char* valeur);

    const char* lire_glongitude(EMstatut& statut) const;
    const char* lire_glongitude() const;
    void ecrire_glongitude(char* valeur, EMstatut& statut);
    void ecrire_glongitude(char* valeur);

    const char* lire_glieu(EMstatut& statut) const;
    const char* lire_glieu() const;
    void ecrire_glieu(char* valeur, EMstatut& statut);
    void ecrire_glieu(char* valeur);

    const char* lire_gsecteur_strip(EMstatut& statut) const;
    const char* lire_gsecteur_strip() const;
    void ecrire_gsecteur_strip(char* valeur, EMstatut& statut);
    void ecrire_gsecteur_strip(char* valeur);

    const char* lire_gimprimable(EMstatut& statut) const;
    const char* lire_gimprimable() const;
    void ecrire_gimprimable(char* valeur, EMstatut& statut);
    void ecrire_gimprimable(char* valeur);

    const char* lire_ganticip_est(EMstatut& statut) const;
    const char* lire_ganticip_est() const;
    void ecrire_ganticip_est(char* valeur, EMstatut& statut);
    void ecrire_ganticip_est(char* valeur);

    const char* lire_gheure_passage_prevue(EMstatut& statut) const;
    const char* lire_gheure_passage_prevue() const;
    void ecrire_gheure_passage_prevue(char* valeur, EMstatut& statut);
    void ecrire_gheure_passage_prevue(char* valeur);

    const char* lire_gheure_passage_prevue_sec(EMstatut& statut) const;
    const char* lire_gheure_passage_prevue_sec() const;
    void ecrire_gheure_passage_prevue_sec(char* valeur, EMstatut& statut);
    void ecrire_gheure_passage_prevue_sec(char* valeur);

    const char* lire_gheure_passage_reelle(EMstatut& statut) const;
    const char* lire_gheure_passage_reelle() const;
    void ecrire_gheure_passage_reelle(char* valeur, EMstatut& statut);
    void ecrire_gheure_passage_reelle(char* valeur);

    const char* lire_gheure_passage_reelle_sec(EMstatut& statut) const;
    const char* lire_gheure_passage_reelle_sec() const;
    void ecrire_gheure_passage_reelle_sec(char* valeur, EMstatut& statut);
    void ecrire_gheure_passage_reelle_sec(char* valeur);

    const char* lire_gniveau_passage(EMstatut& statut) const;
    const char* lire_gniveau_passage() const;
    void ecrire_gniveau_passage(char* valeur, EMstatut& statut);
    void ecrire_gniveau_passage(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gnom;
    char*  m_glatitude;
    char*  m_glongitude;
    char*  m_glieu;
    char*  m_gsecteur_strip;
    char*  m_gimprimable;
    char*  m_ganticip_est;
    char*  m_gheure_passage_prevue;
    char*  m_gheure_passage_prevue_sec;
    char*  m_gheure_passage_reelle;
    char*  m_gheure_passage_reelle_sec;
    char*  m_gniveau_passage;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMmvt_point_routeData.
    friend ostream& operator << (ostream& ostr, const EMmvt_point_routeData& obj);


private:

    // Mesures de securite :
    EMmvt_point_routeData& operator = (const EMmvt_point_routeData&);
    int operator == (const EMmvt_point_routeData&);
    int operator != (const EMmvt_point_routeData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmvt_point_routeData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmvt_point_routeData.H
//------------------------------------------------------------------------------

