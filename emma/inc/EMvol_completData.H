/*******************************************************************************
 * \file           EMvol_completData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMvol_completData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMvol_complet.data
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMvol_completData_H
#define __EMvol_completData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMcode_statData.H"
#include "EMsigbaseDEFINES.H"
#include "EMcci_rub_chgtData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMvol_completData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   cdv
 *  \class   EMvol_completData
 *  \brief   Définition de la classe implémentant l'objet métier EMvol_completData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMvol_completData
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
class EMvol_completData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMvol_completData(
        char* gidentifiant = (char*) 0,
        char* grealisation = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gdate_prev_mvt = (char*) 0,
        char* gheure_prev_mvt = (char*) 0,
        char* gsens_mvt = (char*) 0,
        char* gindicatif = (char*) 0,
        char* gexploitant_1 = (char*) 0,
        char* gnumero_ligne_1 = (char*) 0,
        char* gbigramme_dgac = (char*) 0,
        char* gimmatriculation = (char*) 0,
        char* gnumero_ordre = (char*) 0,
        char* gexploitant_2 = (char*) 0,
        char* gnumero_ligne_2 = (char*) 0,
        char* gnature = (char*) 0,
        char* gtype_exploitant = (char*) 0,
        char* gheure_dep_reelle = (char*) 0,
        char* gheure_arr_reelle = (char*) 0,
        char* gaerod_arr_reel = (char*) 0,
        char* gtrtspec = (char*) 0,
        char* gtype_oaci = (char*) 0,
        char* gtype_fin = (char*) 0,
        char* gcat_aeronef = (char*) 0,
        char* gmasse_max = (char*) 0,
        char* gacoustique = (char*) 0,
        char* gcat_ssis = (char*) 0,
        char* gpiste = (char*) 0,
        char* gbalisage = (char*) 0,
        char* gvisibilite = (char*) 0,
        char* ghauteur_nuage = (char*) 0,
        char* gregle_vol = (char*) 0,
        char* gapproche = (char*) 0,
        char* gparking = (char*) 0,
        char* gnb_aeronef = (char*) 0,
        char* gsieges_offerts = (char*) 0,
        char* gcharge_offerte = (char*) 0,
        char* gpax_transit = (char*) 0,
        char* gfret_transit = (char*) 0,
        char* gnb_rub_chgt = (char*) 0,
        char* gpkdep = (char*) 0,
        char* gpkarr = (char*) 0,
        EMcode_statData* pcode_stat_depart = (EMcode_statData*) 0,
        EMcode_statData* pcode_stat_arrivee = (EMcode_statData*) 0,
        char* gindic_irregul_arr = (char*) 0,
        char* gindic_irregul_dep = (char*) 0,
        char* gnb_mvt_arr = (char*) 0,
        char* gnb_mvt_dep = (char*) 0,
        char* gaobdt = (char*) 0,
        char* gaabdt = (char*) 0,
        char* gcause_irregul_arr = (char*) 0,
        char* gcause_irregul_dep = (char*) 0,
        char* gheure_parking_arr = (char*) 0,
        char* gheure_parking_dep = (char*) 0,
        char* gdate_reelle_mvt_arr = (char*) 0,
        char* gdate_reelle_mvt_dep = (char*) 0,
        char* gadresse_mode_S = (char*) 0,
        int nrub_chgt = 0,
        EMcci_rub_chgtData** trub_chgt = (EMcci_rub_chgtData**) 0,
        int npoint = 0,
        char** tpoint = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMvol_completData(const EMvol_completData_v3_0_0&);



    // Destructeur
    ~EMvol_completData();


    // Constructeur de copie
    EMvol_completData(const EMvol_completData&);



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
    EMvol_completData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gidentifiant(EMstatut& statut) const;
    const char* lire_gidentifiant() const;
    void ecrire_gidentifiant(char* valeur, EMstatut& statut);
    void ecrire_gidentifiant(char* valeur);

    const char* lire_grealisation(EMstatut& statut) const;
    const char* lire_grealisation() const;
    void ecrire_grealisation(char* valeur, EMstatut& statut);
    void ecrire_grealisation(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gdate_prev_mvt(EMstatut& statut) const;
    const char* lire_gdate_prev_mvt() const;
    void ecrire_gdate_prev_mvt(char* valeur, EMstatut& statut);
    void ecrire_gdate_prev_mvt(char* valeur);

    const char* lire_gheure_prev_mvt(EMstatut& statut) const;
    const char* lire_gheure_prev_mvt() const;
    void ecrire_gheure_prev_mvt(char* valeur, EMstatut& statut);
    void ecrire_gheure_prev_mvt(char* valeur);

    const char* lire_gsens_mvt(EMstatut& statut) const;
    const char* lire_gsens_mvt() const;
    void ecrire_gsens_mvt(char* valeur, EMstatut& statut);
    void ecrire_gsens_mvt(char* valeur);

    const char* lire_gindicatif(EMstatut& statut) const;
    const char* lire_gindicatif() const;
    void ecrire_gindicatif(char* valeur, EMstatut& statut);
    void ecrire_gindicatif(char* valeur);

    const char* lire_gexploitant_1(EMstatut& statut) const;
    const char* lire_gexploitant_1() const;
    void ecrire_gexploitant_1(char* valeur, EMstatut& statut);
    void ecrire_gexploitant_1(char* valeur);

    const char* lire_gnumero_ligne_1(EMstatut& statut) const;
    const char* lire_gnumero_ligne_1() const;
    void ecrire_gnumero_ligne_1(char* valeur, EMstatut& statut);
    void ecrire_gnumero_ligne_1(char* valeur);

    const char* lire_gbigramme_dgac(EMstatut& statut) const;
    const char* lire_gbigramme_dgac() const;
    void ecrire_gbigramme_dgac(char* valeur, EMstatut& statut);
    void ecrire_gbigramme_dgac(char* valeur);

    const char* lire_gimmatriculation(EMstatut& statut) const;
    const char* lire_gimmatriculation() const;
    void ecrire_gimmatriculation(char* valeur, EMstatut& statut);
    void ecrire_gimmatriculation(char* valeur);

    const char* lire_gnumero_ordre(EMstatut& statut) const;
    const char* lire_gnumero_ordre() const;
    void ecrire_gnumero_ordre(char* valeur, EMstatut& statut);
    void ecrire_gnumero_ordre(char* valeur);

    const char* lire_gexploitant_2(EMstatut& statut) const;
    const char* lire_gexploitant_2() const;
    void ecrire_gexploitant_2(char* valeur, EMstatut& statut);
    void ecrire_gexploitant_2(char* valeur);

    const char* lire_gnumero_ligne_2(EMstatut& statut) const;
    const char* lire_gnumero_ligne_2() const;
    void ecrire_gnumero_ligne_2(char* valeur, EMstatut& statut);
    void ecrire_gnumero_ligne_2(char* valeur);

    const char* lire_gnature(EMstatut& statut) const;
    const char* lire_gnature() const;
    void ecrire_gnature(char* valeur, EMstatut& statut);
    void ecrire_gnature(char* valeur);

    const char* lire_gtype_exploitant(EMstatut& statut) const;
    const char* lire_gtype_exploitant() const;
    void ecrire_gtype_exploitant(char* valeur, EMstatut& statut);
    void ecrire_gtype_exploitant(char* valeur);

    const char* lire_gheure_dep_reelle(EMstatut& statut) const;
    const char* lire_gheure_dep_reelle() const;
    void ecrire_gheure_dep_reelle(char* valeur, EMstatut& statut);
    void ecrire_gheure_dep_reelle(char* valeur);

    const char* lire_gheure_arr_reelle(EMstatut& statut) const;
    const char* lire_gheure_arr_reelle() const;
    void ecrire_gheure_arr_reelle(char* valeur, EMstatut& statut);
    void ecrire_gheure_arr_reelle(char* valeur);

    const char* lire_gaerod_arr_reel(EMstatut& statut) const;
    const char* lire_gaerod_arr_reel() const;
    void ecrire_gaerod_arr_reel(char* valeur, EMstatut& statut);
    void ecrire_gaerod_arr_reel(char* valeur);

    const char* lire_gtrtspec(EMstatut& statut) const;
    const char* lire_gtrtspec() const;
    void ecrire_gtrtspec(char* valeur, EMstatut& statut);
    void ecrire_gtrtspec(char* valeur);

    const char* lire_gtype_oaci(EMstatut& statut) const;
    const char* lire_gtype_oaci() const;
    void ecrire_gtype_oaci(char* valeur, EMstatut& statut);
    void ecrire_gtype_oaci(char* valeur);

    const char* lire_gtype_fin(EMstatut& statut) const;
    const char* lire_gtype_fin() const;
    void ecrire_gtype_fin(char* valeur, EMstatut& statut);
    void ecrire_gtype_fin(char* valeur);

    const char* lire_gcat_aeronef(EMstatut& statut) const;
    const char* lire_gcat_aeronef() const;
    void ecrire_gcat_aeronef(char* valeur, EMstatut& statut);
    void ecrire_gcat_aeronef(char* valeur);

    const char* lire_gmasse_max(EMstatut& statut) const;
    const char* lire_gmasse_max() const;
    void ecrire_gmasse_max(char* valeur, EMstatut& statut);
    void ecrire_gmasse_max(char* valeur);

    const char* lire_gacoustique(EMstatut& statut) const;
    const char* lire_gacoustique() const;
    void ecrire_gacoustique(char* valeur, EMstatut& statut);
    void ecrire_gacoustique(char* valeur);

    const char* lire_gcat_ssis(EMstatut& statut) const;
    const char* lire_gcat_ssis() const;
    void ecrire_gcat_ssis(char* valeur, EMstatut& statut);
    void ecrire_gcat_ssis(char* valeur);

    const char* lire_gpiste(EMstatut& statut) const;
    const char* lire_gpiste() const;
    void ecrire_gpiste(char* valeur, EMstatut& statut);
    void ecrire_gpiste(char* valeur);

    const char* lire_gbalisage(EMstatut& statut) const;
    const char* lire_gbalisage() const;
    void ecrire_gbalisage(char* valeur, EMstatut& statut);
    void ecrire_gbalisage(char* valeur);

    const char* lire_gvisibilite(EMstatut& statut) const;
    const char* lire_gvisibilite() const;
    void ecrire_gvisibilite(char* valeur, EMstatut& statut);
    void ecrire_gvisibilite(char* valeur);

    const char* lire_ghauteur_nuage(EMstatut& statut) const;
    const char* lire_ghauteur_nuage() const;
    void ecrire_ghauteur_nuage(char* valeur, EMstatut& statut);
    void ecrire_ghauteur_nuage(char* valeur);

    const char* lire_gregle_vol(EMstatut& statut) const;
    const char* lire_gregle_vol() const;
    void ecrire_gregle_vol(char* valeur, EMstatut& statut);
    void ecrire_gregle_vol(char* valeur);

    const char* lire_gapproche(EMstatut& statut) const;
    const char* lire_gapproche() const;
    void ecrire_gapproche(char* valeur, EMstatut& statut);
    void ecrire_gapproche(char* valeur);

    const char* lire_gparking(EMstatut& statut) const;
    const char* lire_gparking() const;
    void ecrire_gparking(char* valeur, EMstatut& statut);
    void ecrire_gparking(char* valeur);

    const char* lire_gnb_aeronef(EMstatut& statut) const;
    const char* lire_gnb_aeronef() const;
    void ecrire_gnb_aeronef(char* valeur, EMstatut& statut);
    void ecrire_gnb_aeronef(char* valeur);

    const char* lire_gsieges_offerts(EMstatut& statut) const;
    const char* lire_gsieges_offerts() const;
    void ecrire_gsieges_offerts(char* valeur, EMstatut& statut);
    void ecrire_gsieges_offerts(char* valeur);

    const char* lire_gcharge_offerte(EMstatut& statut) const;
    const char* lire_gcharge_offerte() const;
    void ecrire_gcharge_offerte(char* valeur, EMstatut& statut);
    void ecrire_gcharge_offerte(char* valeur);

    const char* lire_gpax_transit(EMstatut& statut) const;
    const char* lire_gpax_transit() const;
    void ecrire_gpax_transit(char* valeur, EMstatut& statut);
    void ecrire_gpax_transit(char* valeur);

    const char* lire_gfret_transit(EMstatut& statut) const;
    const char* lire_gfret_transit() const;
    void ecrire_gfret_transit(char* valeur, EMstatut& statut);
    void ecrire_gfret_transit(char* valeur);

    const char* lire_gnb_rub_chgt(EMstatut& statut) const;
    const char* lire_gnb_rub_chgt() const;
    void ecrire_gnb_rub_chgt(char* valeur, EMstatut& statut);
    void ecrire_gnb_rub_chgt(char* valeur);

    const char* lire_gpkdep(EMstatut& statut) const;
    const char* lire_gpkdep() const;
    void ecrire_gpkdep(char* valeur, EMstatut& statut);
    void ecrire_gpkdep(char* valeur);

    const char* lire_gpkarr(EMstatut& statut) const;
    const char* lire_gpkarr() const;
    void ecrire_gpkarr(char* valeur, EMstatut& statut);
    void ecrire_gpkarr(char* valeur);

    const EMcode_statData* lire_pcode_stat_depart(EMstatut& statut) const;
    const EMcode_statData* lire_pcode_stat_depart() const;
    void ecrire_pcode_stat_depart(EMcode_statData* valeur, EMstatut& statut);
    void ecrire_pcode_stat_depart(EMcode_statData* valeur);

    const EMcode_statData* lire_pcode_stat_arrivee(EMstatut& statut) const;
    const EMcode_statData* lire_pcode_stat_arrivee() const;
    void ecrire_pcode_stat_arrivee(EMcode_statData* valeur, EMstatut& statut);
    void ecrire_pcode_stat_arrivee(EMcode_statData* valeur);

    const char* lire_gindic_irregul_arr(EMstatut& statut) const;
    const char* lire_gindic_irregul_arr() const;
    void ecrire_gindic_irregul_arr(char* valeur, EMstatut& statut);
    void ecrire_gindic_irregul_arr(char* valeur);

    const char* lire_gindic_irregul_dep(EMstatut& statut) const;
    const char* lire_gindic_irregul_dep() const;
    void ecrire_gindic_irregul_dep(char* valeur, EMstatut& statut);
    void ecrire_gindic_irregul_dep(char* valeur);

    const char* lire_gnb_mvt_arr(EMstatut& statut) const;
    const char* lire_gnb_mvt_arr() const;
    void ecrire_gnb_mvt_arr(char* valeur, EMstatut& statut);
    void ecrire_gnb_mvt_arr(char* valeur);

    const char* lire_gnb_mvt_dep(EMstatut& statut) const;
    const char* lire_gnb_mvt_dep() const;
    void ecrire_gnb_mvt_dep(char* valeur, EMstatut& statut);
    void ecrire_gnb_mvt_dep(char* valeur);

    const char* lire_gaobdt(EMstatut& statut) const;
    const char* lire_gaobdt() const;
    void ecrire_gaobdt(char* valeur, EMstatut& statut);
    void ecrire_gaobdt(char* valeur);

    const char* lire_gaabdt(EMstatut& statut) const;
    const char* lire_gaabdt() const;
    void ecrire_gaabdt(char* valeur, EMstatut& statut);
    void ecrire_gaabdt(char* valeur);

    const char* lire_gcause_irregul_arr(EMstatut& statut) const;
    const char* lire_gcause_irregul_arr() const;
    void ecrire_gcause_irregul_arr(char* valeur, EMstatut& statut);
    void ecrire_gcause_irregul_arr(char* valeur);

    const char* lire_gcause_irregul_dep(EMstatut& statut) const;
    const char* lire_gcause_irregul_dep() const;
    void ecrire_gcause_irregul_dep(char* valeur, EMstatut& statut);
    void ecrire_gcause_irregul_dep(char* valeur);

    const char* lire_gheure_parking_arr(EMstatut& statut) const;
    const char* lire_gheure_parking_arr() const;
    void ecrire_gheure_parking_arr(char* valeur, EMstatut& statut);
    void ecrire_gheure_parking_arr(char* valeur);

    const char* lire_gheure_parking_dep(EMstatut& statut) const;
    const char* lire_gheure_parking_dep() const;
    void ecrire_gheure_parking_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_parking_dep(char* valeur);

    const char* lire_gdate_reelle_mvt_arr(EMstatut& statut) const;
    const char* lire_gdate_reelle_mvt_arr() const;
    void ecrire_gdate_reelle_mvt_arr(char* valeur, EMstatut& statut);
    void ecrire_gdate_reelle_mvt_arr(char* valeur);

    const char* lire_gdate_reelle_mvt_dep(EMstatut& statut) const;
    const char* lire_gdate_reelle_mvt_dep() const;
    void ecrire_gdate_reelle_mvt_dep(char* valeur, EMstatut& statut);
    void ecrire_gdate_reelle_mvt_dep(char* valeur);

    const char* lire_gadresse_mode_S(EMstatut& statut) const;
    const char* lire_gadresse_mode_S() const;
    void ecrire_gadresse_mode_S(char* valeur, EMstatut& statut);
    void ecrire_gadresse_mode_S(char* valeur);

    int nombre_rub_chgt(EMstatut& statut) const;
    int nombre_rub_chgt() const;
    const EMcci_rub_chgtData* lire_rub_chgt(int nIndex, EMstatut& statut) const;
    const EMcci_rub_chgtData* lire_rub_chgt(int nIndex) const;
    int ajouter_rub_chgt(EMcci_rub_chgtData* elem, EMstatut& statut);
    int ajouter_rub_chgt(EMcci_rub_chgtData* elem);

    int nombre_point(EMstatut& statut) const;
    int nombre_point() const;
    const char* lire_point(int nIndex, EMstatut& statut) const;
    const char* lire_point(int nIndex) const;
    int ajouter_point(char* elem, EMstatut& statut);
    int ajouter_point(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gidentifiant;
    char*  m_grealisation;
    char*  m_gaerod_dep;
    char*  m_gaerod_dest;
    char*  m_gdate_prev_mvt;
    char*  m_gheure_prev_mvt;
    char*  m_gsens_mvt;
    char*  m_gindicatif;
    char*  m_gexploitant_1;
    char*  m_gnumero_ligne_1;
    char*  m_gbigramme_dgac;
    char*  m_gimmatriculation;
    char*  m_gnumero_ordre;
    char*  m_gexploitant_2;
    char*  m_gnumero_ligne_2;
    char*  m_gnature;
    char*  m_gtype_exploitant;
    char*  m_gheure_dep_reelle;
    char*  m_gheure_arr_reelle;
    char*  m_gaerod_arr_reel;
    char*  m_gtrtspec;
    char*  m_gtype_oaci;
    char*  m_gtype_fin;
    char*  m_gcat_aeronef;
    char*  m_gmasse_max;
    char*  m_gacoustique;
    char*  m_gcat_ssis;
    char*  m_gpiste;
    char*  m_gbalisage;
    char*  m_gvisibilite;
    char*  m_ghauteur_nuage;
    char*  m_gregle_vol;
    char*  m_gapproche;
    char*  m_gparking;
    char*  m_gnb_aeronef;
    char*  m_gsieges_offerts;
    char*  m_gcharge_offerte;
    char*  m_gpax_transit;
    char*  m_gfret_transit;
    char*  m_gnb_rub_chgt;
    char*  m_gpkdep;
    char*  m_gpkarr;
    EMcode_statData*  m_pcode_stat_depart;
    EMcode_statData*  m_pcode_stat_arrivee;
    char*  m_gindic_irregul_arr;
    char*  m_gindic_irregul_dep;
    char*  m_gnb_mvt_arr;
    char*  m_gnb_mvt_dep;
    char*  m_gaobdt;
    char*  m_gaabdt;
    char*  m_gcause_irregul_arr;
    char*  m_gcause_irregul_dep;
    char*  m_gheure_parking_arr;
    char*  m_gheure_parking_dep;
    char*  m_gdate_reelle_mvt_arr;
    char*  m_gdate_reelle_mvt_dep;
    char*  m_gadresse_mode_S;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMcci_rub_chgtData*  m_trub_chgt[EM_C_SIG_LISTE_RUB_CHGT];
    int m_nrub_chgt;            // Taille courante de m_trub_chgt

    char*  m_tpoint[EM_C_SIG_LISTE_POINT_ATS];
    int m_npoint;            // Taille courante de m_tpoint


    // Ajoute sur le flux les attributs d'un objet EMvol_completData.
    friend ostream& operator << (ostream& ostr, const EMvol_completData& obj);


private:

    // Mesures de securite :
    EMvol_completData& operator = (const EMvol_completData&);
    int operator == (const EMvol_completData&);
    int operator != (const EMvol_completData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMvol_completData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMvol_completData.H
//------------------------------------------------------------------------------

