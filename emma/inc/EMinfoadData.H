/*******************************************************************************
 * \file           EMinfoadData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMinfoadData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMinfoad.data
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMinfoadData_H
#define __EMinfoadData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"
#include "EMifg_qfu_en_serviceData.H"
#include "EMifg_couleur_terrainData.H"
#include "EMifg_terrain_satelliteData.H"
#include "EMifg_est_present_esData.H"
#include "EMifg_moyenData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMinfoadData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ifg
 *  \class   EMinfoadData
 *  \brief   Définition de la classe implémentant l'objet métier EMinfoadData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMinfoadData
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
class EMinfoadData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMinfoadData(
        char* gident_ad = (char*) 0,
        char* gdate = (char*) 0,
        char* gmoyen_percee = (char*) 0,
        char* gqfu_moyen_percee = (char*) 0,
        char* gqfu1 = (char*) 0,
        char* gqfu2 = (char*) 0,
        char* gniv_transition = (char*) 0,
        char* glever_soleil = (char*) 0,
        char* gcoucher_soleil = (char*) 0,
        char* gindic_itineraire = (char*) 0,
        char* getat_piste = (char*) 0,
        char* getat_piste2 = (char*) 0,
        char* getat_piste3 = (char*) 0,
        char* getat_piste4 = (char*) 0,
        char* getat_piste_code1 = (char*) 0,
        char* getat_piste_code2 = (char*) 0,
        char* getat_piste_code3 = (char*) 0,
        char* getat_piste_angl4 = (char*) 0,
        char* gmoyen_rad_normal = (char*) 0,
        char* gexploitation1 = (char*) 0,
        char* gexploitation2 = (char*) 0,
        char* gexploitation3 = (char*) 0,
        char* gexploitation4 = (char*) 0,
        char* gexploitation_code1 = (char*) 0,
        char* gexploitation_code2 = (char*) 0,
        char* gexploitation_code3 = (char*) 0,
        char* gexploitation_angl4 = (char*) 0,
        char* gtexte_chef_de_quart = (char*) 0,
        char* gconsigne1 = (char*) 0,
        char* gconsigne2 = (char*) 0,
        char* gconsigne3 = (char*) 0,
        char* gconsigne4 = (char*) 0,
        char* gconsigne5 = (char*) 0,
        char* gconsigne6 = (char*) 0,
        char* gconsigne7 = (char*) 0,
        char* gconsigne8 = (char*) 0,
        char* gconsigne9 = (char*) 0,
        char* gconsigne10 = (char*) 0,
        char* getat_piste_datalink4 = (char*) 0,
        char* gexploitation_datalink4 = (char*) 0,
        int nqfu_en_service = 0,
        EMifg_qfu_en_serviceData** tqfu_en_service = (EMifg_qfu_en_serviceData**) 0,
        int ncouleur_terrain = 0,
        EMifg_couleur_terrainData** tcouleur_terrain = (EMifg_couleur_terrainData**) 0,
        int nterrain_satellite = 0,
        EMifg_terrain_satelliteData** tterrain_satellite = (EMifg_terrain_satelliteData**) 0,
        int nest_present_es = 0,
        EMifg_est_present_esData** test_present_es = (EMifg_est_present_esData**) 0,
        int nmoyen_rad = 0,
        EMifg_moyenData** tmoyen_rad = (EMifg_moyenData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMinfoadData(const EMinfoadData_v3_0_0&);



    // Destructeur
    ~EMinfoadData();


    // Constructeur de copie
    EMinfoadData(const EMinfoadData&);



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
    EMinfoadData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gident_ad(EMstatut& statut) const;
    const char* lire_gident_ad() const;
    void ecrire_gident_ad(char* valeur, EMstatut& statut);
    void ecrire_gident_ad(char* valeur);

    const char* lire_gdate(EMstatut& statut) const;
    const char* lire_gdate() const;
    void ecrire_gdate(char* valeur, EMstatut& statut);
    void ecrire_gdate(char* valeur);

    const char* lire_gmoyen_percee(EMstatut& statut) const;
    const char* lire_gmoyen_percee() const;
    void ecrire_gmoyen_percee(char* valeur, EMstatut& statut);
    void ecrire_gmoyen_percee(char* valeur);

    const char* lire_gqfu_moyen_percee(EMstatut& statut) const;
    const char* lire_gqfu_moyen_percee() const;
    void ecrire_gqfu_moyen_percee(char* valeur, EMstatut& statut);
    void ecrire_gqfu_moyen_percee(char* valeur);

    const char* lire_gqfu1(EMstatut& statut) const;
    const char* lire_gqfu1() const;
    void ecrire_gqfu1(char* valeur, EMstatut& statut);
    void ecrire_gqfu1(char* valeur);

    const char* lire_gqfu2(EMstatut& statut) const;
    const char* lire_gqfu2() const;
    void ecrire_gqfu2(char* valeur, EMstatut& statut);
    void ecrire_gqfu2(char* valeur);

    const char* lire_gniv_transition(EMstatut& statut) const;
    const char* lire_gniv_transition() const;
    void ecrire_gniv_transition(char* valeur, EMstatut& statut);
    void ecrire_gniv_transition(char* valeur);

    const char* lire_glever_soleil(EMstatut& statut) const;
    const char* lire_glever_soleil() const;
    void ecrire_glever_soleil(char* valeur, EMstatut& statut);
    void ecrire_glever_soleil(char* valeur);

    const char* lire_gcoucher_soleil(EMstatut& statut) const;
    const char* lire_gcoucher_soleil() const;
    void ecrire_gcoucher_soleil(char* valeur, EMstatut& statut);
    void ecrire_gcoucher_soleil(char* valeur);

    const char* lire_gindic_itineraire(EMstatut& statut) const;
    const char* lire_gindic_itineraire() const;
    void ecrire_gindic_itineraire(char* valeur, EMstatut& statut);
    void ecrire_gindic_itineraire(char* valeur);

    const char* lire_getat_piste(EMstatut& statut) const;
    const char* lire_getat_piste() const;
    void ecrire_getat_piste(char* valeur, EMstatut& statut);
    void ecrire_getat_piste(char* valeur);

    const char* lire_getat_piste2(EMstatut& statut) const;
    const char* lire_getat_piste2() const;
    void ecrire_getat_piste2(char* valeur, EMstatut& statut);
    void ecrire_getat_piste2(char* valeur);

    const char* lire_getat_piste3(EMstatut& statut) const;
    const char* lire_getat_piste3() const;
    void ecrire_getat_piste3(char* valeur, EMstatut& statut);
    void ecrire_getat_piste3(char* valeur);

    const char* lire_getat_piste4(EMstatut& statut) const;
    const char* lire_getat_piste4() const;
    void ecrire_getat_piste4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste4(char* valeur);

    const char* lire_getat_piste_code1(EMstatut& statut) const;
    const char* lire_getat_piste_code1() const;
    void ecrire_getat_piste_code1(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code1(char* valeur);

    const char* lire_getat_piste_code2(EMstatut& statut) const;
    const char* lire_getat_piste_code2() const;
    void ecrire_getat_piste_code2(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code2(char* valeur);

    const char* lire_getat_piste_code3(EMstatut& statut) const;
    const char* lire_getat_piste_code3() const;
    void ecrire_getat_piste_code3(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code3(char* valeur);

    const char* lire_getat_piste_angl4(EMstatut& statut) const;
    const char* lire_getat_piste_angl4() const;
    void ecrire_getat_piste_angl4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_angl4(char* valeur);

    const char* lire_gmoyen_rad_normal(EMstatut& statut) const;
    const char* lire_gmoyen_rad_normal() const;
    void ecrire_gmoyen_rad_normal(char* valeur, EMstatut& statut);
    void ecrire_gmoyen_rad_normal(char* valeur);

    const char* lire_gexploitation1(EMstatut& statut) const;
    const char* lire_gexploitation1() const;
    void ecrire_gexploitation1(char* valeur, EMstatut& statut);
    void ecrire_gexploitation1(char* valeur);

    const char* lire_gexploitation2(EMstatut& statut) const;
    const char* lire_gexploitation2() const;
    void ecrire_gexploitation2(char* valeur, EMstatut& statut);
    void ecrire_gexploitation2(char* valeur);

    const char* lire_gexploitation3(EMstatut& statut) const;
    const char* lire_gexploitation3() const;
    void ecrire_gexploitation3(char* valeur, EMstatut& statut);
    void ecrire_gexploitation3(char* valeur);

    const char* lire_gexploitation4(EMstatut& statut) const;
    const char* lire_gexploitation4() const;
    void ecrire_gexploitation4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation4(char* valeur);

    const char* lire_gexploitation_code1(EMstatut& statut) const;
    const char* lire_gexploitation_code1() const;
    void ecrire_gexploitation_code1(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code1(char* valeur);

    const char* lire_gexploitation_code2(EMstatut& statut) const;
    const char* lire_gexploitation_code2() const;
    void ecrire_gexploitation_code2(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code2(char* valeur);

    const char* lire_gexploitation_code3(EMstatut& statut) const;
    const char* lire_gexploitation_code3() const;
    void ecrire_gexploitation_code3(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code3(char* valeur);

    const char* lire_gexploitation_angl4(EMstatut& statut) const;
    const char* lire_gexploitation_angl4() const;
    void ecrire_gexploitation_angl4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_angl4(char* valeur);

    const char* lire_gtexte_chef_de_quart(EMstatut& statut) const;
    const char* lire_gtexte_chef_de_quart() const;
    void ecrire_gtexte_chef_de_quart(char* valeur, EMstatut& statut);
    void ecrire_gtexte_chef_de_quart(char* valeur);

    const char* lire_gconsigne1(EMstatut& statut) const;
    const char* lire_gconsigne1() const;
    void ecrire_gconsigne1(char* valeur, EMstatut& statut);
    void ecrire_gconsigne1(char* valeur);

    const char* lire_gconsigne2(EMstatut& statut) const;
    const char* lire_gconsigne2() const;
    void ecrire_gconsigne2(char* valeur, EMstatut& statut);
    void ecrire_gconsigne2(char* valeur);

    const char* lire_gconsigne3(EMstatut& statut) const;
    const char* lire_gconsigne3() const;
    void ecrire_gconsigne3(char* valeur, EMstatut& statut);
    void ecrire_gconsigne3(char* valeur);

    const char* lire_gconsigne4(EMstatut& statut) const;
    const char* lire_gconsigne4() const;
    void ecrire_gconsigne4(char* valeur, EMstatut& statut);
    void ecrire_gconsigne4(char* valeur);

    const char* lire_gconsigne5(EMstatut& statut) const;
    const char* lire_gconsigne5() const;
    void ecrire_gconsigne5(char* valeur, EMstatut& statut);
    void ecrire_gconsigne5(char* valeur);

    const char* lire_gconsigne6(EMstatut& statut) const;
    const char* lire_gconsigne6() const;
    void ecrire_gconsigne6(char* valeur, EMstatut& statut);
    void ecrire_gconsigne6(char* valeur);

    const char* lire_gconsigne7(EMstatut& statut) const;
    const char* lire_gconsigne7() const;
    void ecrire_gconsigne7(char* valeur, EMstatut& statut);
    void ecrire_gconsigne7(char* valeur);

    const char* lire_gconsigne8(EMstatut& statut) const;
    const char* lire_gconsigne8() const;
    void ecrire_gconsigne8(char* valeur, EMstatut& statut);
    void ecrire_gconsigne8(char* valeur);

    const char* lire_gconsigne9(EMstatut& statut) const;
    const char* lire_gconsigne9() const;
    void ecrire_gconsigne9(char* valeur, EMstatut& statut);
    void ecrire_gconsigne9(char* valeur);

    const char* lire_gconsigne10(EMstatut& statut) const;
    const char* lire_gconsigne10() const;
    void ecrire_gconsigne10(char* valeur, EMstatut& statut);
    void ecrire_gconsigne10(char* valeur);

    const char* lire_getat_piste_datalink4(EMstatut& statut) const;
    const char* lire_getat_piste_datalink4() const;
    void ecrire_getat_piste_datalink4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink4(char* valeur);

    const char* lire_gexploitation_datalink4(EMstatut& statut) const;
    const char* lire_gexploitation_datalink4() const;
    void ecrire_gexploitation_datalink4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink4(char* valeur);

    int nombre_qfu_en_service(EMstatut& statut) const;
    int nombre_qfu_en_service() const;
    const EMifg_qfu_en_serviceData* lire_qfu_en_service(int nIndex, EMstatut& statut) const;
    const EMifg_qfu_en_serviceData* lire_qfu_en_service(int nIndex) const;
    int ajouter_qfu_en_service(EMifg_qfu_en_serviceData* elem, EMstatut& statut);
    int ajouter_qfu_en_service(EMifg_qfu_en_serviceData* elem);

    int nombre_couleur_terrain(EMstatut& statut) const;
    int nombre_couleur_terrain() const;
    const EMifg_couleur_terrainData* lire_couleur_terrain(int nIndex, EMstatut& statut) const;
    const EMifg_couleur_terrainData* lire_couleur_terrain(int nIndex) const;
    int ajouter_couleur_terrain(EMifg_couleur_terrainData* elem, EMstatut& statut);
    int ajouter_couleur_terrain(EMifg_couleur_terrainData* elem);

    int nombre_terrain_satellite(EMstatut& statut) const;
    int nombre_terrain_satellite() const;
    const EMifg_terrain_satelliteData* lire_terrain_satellite(int nIndex, EMstatut& statut) const;
    const EMifg_terrain_satelliteData* lire_terrain_satellite(int nIndex) const;
    int ajouter_terrain_satellite(EMifg_terrain_satelliteData* elem, EMstatut& statut);
    int ajouter_terrain_satellite(EMifg_terrain_satelliteData* elem);

    int nombre_est_present_es(EMstatut& statut) const;
    int nombre_est_present_es() const;
    const EMifg_est_present_esData* lire_est_present_es(int nIndex, EMstatut& statut) const;
    const EMifg_est_present_esData* lire_est_present_es(int nIndex) const;
    int ajouter_est_present_es(EMifg_est_present_esData* elem, EMstatut& statut);
    int ajouter_est_present_es(EMifg_est_present_esData* elem);

    int nombre_moyen_rad(EMstatut& statut) const;
    int nombre_moyen_rad() const;
    const EMifg_moyenData* lire_moyen_rad(int nIndex, EMstatut& statut) const;
    const EMifg_moyenData* lire_moyen_rad(int nIndex) const;
    int ajouter_moyen_rad(EMifg_moyenData* elem, EMstatut& statut);
    int ajouter_moyen_rad(EMifg_moyenData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gident_ad;
    char*  m_gdate;
    char*  m_gmoyen_percee;
    char*  m_gqfu_moyen_percee;
    char*  m_gqfu1;
    char*  m_gqfu2;
    char*  m_gniv_transition;
    char*  m_glever_soleil;
    char*  m_gcoucher_soleil;
    char*  m_gindic_itineraire;
    char*  m_getat_piste;
    char*  m_getat_piste2;
    char*  m_getat_piste3;
    char*  m_getat_piste4;
    char*  m_getat_piste_code1;
    char*  m_getat_piste_code2;
    char*  m_getat_piste_code3;
    char*  m_getat_piste_angl4;
    char*  m_gmoyen_rad_normal;
    char*  m_gexploitation1;
    char*  m_gexploitation2;
    char*  m_gexploitation3;
    char*  m_gexploitation4;
    char*  m_gexploitation_code1;
    char*  m_gexploitation_code2;
    char*  m_gexploitation_code3;
    char*  m_gexploitation_angl4;
    char*  m_gtexte_chef_de_quart;
    char*  m_gconsigne1;
    char*  m_gconsigne2;
    char*  m_gconsigne3;
    char*  m_gconsigne4;
    char*  m_gconsigne5;
    char*  m_gconsigne6;
    char*  m_gconsigne7;
    char*  m_gconsigne8;
    char*  m_gconsigne9;
    char*  m_gconsigne10;
    char*  m_getat_piste_datalink4;
    char*  m_gexploitation_datalink4;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMifg_qfu_en_serviceData*  m_tqfu_en_service[EM_C_SIG_LISTE_QFU];
    int m_nqfu_en_service;            // Taille courante de m_tqfu_en_service

    EMifg_couleur_terrainData*  m_tcouleur_terrain[EM_C_SIG_LISTE_COULEUR];
    int m_ncouleur_terrain;            // Taille courante de m_tcouleur_terrain

    EMifg_terrain_satelliteData*  m_tterrain_satellite[EM_C_SIG_LISTE_TERRAIN_SATELLITE];
    int m_nterrain_satellite;            // Taille courante de m_tterrain_satellite

    EMifg_est_present_esData*  m_test_present_es[EM_C_SIG_LISTE_QFU];
    int m_nest_present_es;            // Taille courante de m_test_present_es

    EMifg_moyenData*  m_tmoyen_rad[EM_IFG_NB_MOYENS];
    int m_nmoyen_rad;            // Taille courante de m_tmoyen_rad


    // Ajoute sur le flux les attributs d'un objet EMinfoadData.
    friend ostream& operator << (ostream& ostr, const EMinfoadData& obj);


private:

    // Mesures de securite :
    EMinfoadData& operator = (const EMinfoadData&);
    int operator == (const EMinfoadData&);
    int operator != (const EMinfoadData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMinfoadData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMinfoadData.H
//------------------------------------------------------------------------------

