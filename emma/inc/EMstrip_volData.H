/*******************************************************************************
 * \file           EMstrip_volData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMstrip_volData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMstrip_vol.data
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMstrip_volData_H
#define __EMstrip_volData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"
#include "EMvol_pointData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMstrip_volData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   tdv
 *  \class   EMstrip_volData
 *  \brief   Définition de la classe implémentant l'objet métier EMstrip_volData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMstrip_volData
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
class EMstrip_volData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMstrip_volData(
        char* gtype_strip = (char*) 0,
        char* gtypddv = (char*) 0,
        char* gsens = (char*) 0,
        char* gregime = (char*) 0,
        char* gident_aero = (char*) 0,
        char* gcode_ssr = (char*) 0,
        char* gnb_aeronef = (char*) 0,
        char* gtype_aeronef = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gfrontiere = (char*) 0,
        char* gheure_dep = (char*) 0,
        char* gheure_arr = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gniveau = (char*) 0,
        char* getat_cautra = (char*) 0,
        char* gno_cautra = (char*) 0,
        char* gdate_vol = (char*) 0,
        char* gnature = (char*) 0,
        char* gremarques = (char*) 0,
        char* gpoint_regul = (char*) 0,
        char* gheure_allouee = (char*) 0,
        char* gfin_creneau = (char*) 0,
        char* gtexte_corta = (char*) 0,
        char* groute = (char*) 0,
        char* gparking = (char*) 0,
        char* gimmatric = (char*) 0,
        char* gclasse = (char*) 0,
        char* glieu_dep = (char*) 0,
        char* glieu_arr = (char*) 0,
        char* gimprimante = (char*) 0,
        char* gcatturb = (char*) 0,
        char* gniveau_et_unite = (char*) 0,
        char* gair_speed = (char*) 0,
        char* gregle = (char*) 0,
        char* gsvfr = (char*) 0,
        char* gact_level = (char*) 0,
        char* gpkdep = (char*) 0,
        char* gpkarr = (char*) 0,
        int npoint = 0,
        EMvol_pointData** tpoint = (EMvol_pointData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMstrip_volData(const EMstrip_volData_v3_0_0&);



    // Destructeur
    ~EMstrip_volData();


    // Constructeur de copie
    EMstrip_volData(const EMstrip_volData&);



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
    EMstrip_volData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gtype_strip(EMstatut& statut) const;
    const char* lire_gtype_strip() const;
    void ecrire_gtype_strip(char* valeur, EMstatut& statut);
    void ecrire_gtype_strip(char* valeur);

    const char* lire_gtypddv(EMstatut& statut) const;
    const char* lire_gtypddv() const;
    void ecrire_gtypddv(char* valeur, EMstatut& statut);
    void ecrire_gtypddv(char* valeur);

    const char* lire_gsens(EMstatut& statut) const;
    const char* lire_gsens() const;
    void ecrire_gsens(char* valeur, EMstatut& statut);
    void ecrire_gsens(char* valeur);

    const char* lire_gregime(EMstatut& statut) const;
    const char* lire_gregime() const;
    void ecrire_gregime(char* valeur, EMstatut& statut);
    void ecrire_gregime(char* valeur);

    const char* lire_gident_aero(EMstatut& statut) const;
    const char* lire_gident_aero() const;
    void ecrire_gident_aero(char* valeur, EMstatut& statut);
    void ecrire_gident_aero(char* valeur);

    const char* lire_gcode_ssr(EMstatut& statut) const;
    const char* lire_gcode_ssr() const;
    void ecrire_gcode_ssr(char* valeur, EMstatut& statut);
    void ecrire_gcode_ssr(char* valeur);

    const char* lire_gnb_aeronef(EMstatut& statut) const;
    const char* lire_gnb_aeronef() const;
    void ecrire_gnb_aeronef(char* valeur, EMstatut& statut);
    void ecrire_gnb_aeronef(char* valeur);

    const char* lire_gtype_aeronef(EMstatut& statut) const;
    const char* lire_gtype_aeronef() const;
    void ecrire_gtype_aeronef(char* valeur, EMstatut& statut);
    void ecrire_gtype_aeronef(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gfrontiere(EMstatut& statut) const;
    const char* lire_gfrontiere() const;
    void ecrire_gfrontiere(char* valeur, EMstatut& statut);
    void ecrire_gfrontiere(char* valeur);

    const char* lire_gheure_dep(EMstatut& statut) const;
    const char* lire_gheure_dep() const;
    void ecrire_gheure_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_dep(char* valeur);

    const char* lire_gheure_arr(EMstatut& statut) const;
    const char* lire_gheure_arr() const;
    void ecrire_gheure_arr(char* valeur, EMstatut& statut);
    void ecrire_gheure_arr(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gniveau(EMstatut& statut) const;
    const char* lire_gniveau() const;
    void ecrire_gniveau(char* valeur, EMstatut& statut);
    void ecrire_gniveau(char* valeur);

    const char* lire_getat_cautra(EMstatut& statut) const;
    const char* lire_getat_cautra() const;
    void ecrire_getat_cautra(char* valeur, EMstatut& statut);
    void ecrire_getat_cautra(char* valeur);

    const char* lire_gno_cautra(EMstatut& statut) const;
    const char* lire_gno_cautra() const;
    void ecrire_gno_cautra(char* valeur, EMstatut& statut);
    void ecrire_gno_cautra(char* valeur);

    const char* lire_gdate_vol(EMstatut& statut) const;
    const char* lire_gdate_vol() const;
    void ecrire_gdate_vol(char* valeur, EMstatut& statut);
    void ecrire_gdate_vol(char* valeur);

    const char* lire_gnature(EMstatut& statut) const;
    const char* lire_gnature() const;
    void ecrire_gnature(char* valeur, EMstatut& statut);
    void ecrire_gnature(char* valeur);

    const char* lire_gremarques(EMstatut& statut) const;
    const char* lire_gremarques() const;
    void ecrire_gremarques(char* valeur, EMstatut& statut);
    void ecrire_gremarques(char* valeur);

    const char* lire_gpoint_regul(EMstatut& statut) const;
    const char* lire_gpoint_regul() const;
    void ecrire_gpoint_regul(char* valeur, EMstatut& statut);
    void ecrire_gpoint_regul(char* valeur);

    const char* lire_gheure_allouee(EMstatut& statut) const;
    const char* lire_gheure_allouee() const;
    void ecrire_gheure_allouee(char* valeur, EMstatut& statut);
    void ecrire_gheure_allouee(char* valeur);

    const char* lire_gfin_creneau(EMstatut& statut) const;
    const char* lire_gfin_creneau() const;
    void ecrire_gfin_creneau(char* valeur, EMstatut& statut);
    void ecrire_gfin_creneau(char* valeur);

    const char* lire_gtexte_corta(EMstatut& statut) const;
    const char* lire_gtexte_corta() const;
    void ecrire_gtexte_corta(char* valeur, EMstatut& statut);
    void ecrire_gtexte_corta(char* valeur);

    const char* lire_groute(EMstatut& statut) const;
    const char* lire_groute() const;
    void ecrire_groute(char* valeur, EMstatut& statut);
    void ecrire_groute(char* valeur);

    const char* lire_gparking(EMstatut& statut) const;
    const char* lire_gparking() const;
    void ecrire_gparking(char* valeur, EMstatut& statut);
    void ecrire_gparking(char* valeur);

    const char* lire_gimmatric(EMstatut& statut) const;
    const char* lire_gimmatric() const;
    void ecrire_gimmatric(char* valeur, EMstatut& statut);
    void ecrire_gimmatric(char* valeur);

    const char* lire_gclasse(EMstatut& statut) const;
    const char* lire_gclasse() const;
    void ecrire_gclasse(char* valeur, EMstatut& statut);
    void ecrire_gclasse(char* valeur);

    const char* lire_glieu_dep(EMstatut& statut) const;
    const char* lire_glieu_dep() const;
    void ecrire_glieu_dep(char* valeur, EMstatut& statut);
    void ecrire_glieu_dep(char* valeur);

    const char* lire_glieu_arr(EMstatut& statut) const;
    const char* lire_glieu_arr() const;
    void ecrire_glieu_arr(char* valeur, EMstatut& statut);
    void ecrire_glieu_arr(char* valeur);

    const char* lire_gimprimante(EMstatut& statut) const;
    const char* lire_gimprimante() const;
    void ecrire_gimprimante(char* valeur, EMstatut& statut);
    void ecrire_gimprimante(char* valeur);

    const char* lire_gcatturb(EMstatut& statut) const;
    const char* lire_gcatturb() const;
    void ecrire_gcatturb(char* valeur, EMstatut& statut);
    void ecrire_gcatturb(char* valeur);

    const char* lire_gniveau_et_unite(EMstatut& statut) const;
    const char* lire_gniveau_et_unite() const;
    void ecrire_gniveau_et_unite(char* valeur, EMstatut& statut);
    void ecrire_gniveau_et_unite(char* valeur);

    const char* lire_gair_speed(EMstatut& statut) const;
    const char* lire_gair_speed() const;
    void ecrire_gair_speed(char* valeur, EMstatut& statut);
    void ecrire_gair_speed(char* valeur);

    const char* lire_gregle(EMstatut& statut) const;
    const char* lire_gregle() const;
    void ecrire_gregle(char* valeur, EMstatut& statut);
    void ecrire_gregle(char* valeur);

    const char* lire_gsvfr(EMstatut& statut) const;
    const char* lire_gsvfr() const;
    void ecrire_gsvfr(char* valeur, EMstatut& statut);
    void ecrire_gsvfr(char* valeur);

    const char* lire_gact_level(EMstatut& statut) const;
    const char* lire_gact_level() const;
    void ecrire_gact_level(char* valeur, EMstatut& statut);
    void ecrire_gact_level(char* valeur);

    const char* lire_gpkdep(EMstatut& statut) const;
    const char* lire_gpkdep() const;
    void ecrire_gpkdep(char* valeur, EMstatut& statut);
    void ecrire_gpkdep(char* valeur);

    const char* lire_gpkarr(EMstatut& statut) const;
    const char* lire_gpkarr() const;
    void ecrire_gpkarr(char* valeur, EMstatut& statut);
    void ecrire_gpkarr(char* valeur);

    int nombre_point(EMstatut& statut) const;
    int nombre_point() const;
    const EMvol_pointData* lire_point(int nIndex, EMstatut& statut) const;
    const EMvol_pointData* lire_point(int nIndex) const;
    int ajouter_point(EMvol_pointData* elem, EMstatut& statut);
    int ajouter_point(EMvol_pointData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gtype_strip;
    char*  m_gtypddv;
    char*  m_gsens;
    char*  m_gregime;
    char*  m_gident_aero;
    char*  m_gcode_ssr;
    char*  m_gnb_aeronef;
    char*  m_gtype_aeronef;
    char*  m_gaerod_dep;
    char*  m_gfrontiere;
    char*  m_gheure_dep;
    char*  m_gheure_arr;
    char*  m_gaerod_dest;
    char*  m_gniveau;
    char*  m_getat_cautra;
    char*  m_gno_cautra;
    char*  m_gdate_vol;
    char*  m_gnature;
    char*  m_gremarques;
    char*  m_gpoint_regul;
    char*  m_gheure_allouee;
    char*  m_gfin_creneau;
    char*  m_gtexte_corta;
    char*  m_groute;
    char*  m_gparking;
    char*  m_gimmatric;
    char*  m_gclasse;
    char*  m_glieu_dep;
    char*  m_glieu_arr;
    char*  m_gimprimante;
    char*  m_gcatturb;
    char*  m_gniveau_et_unite;
    char*  m_gair_speed;
    char*  m_gregle;
    char*  m_gsvfr;
    char*  m_gact_level;
    char*  m_gpkdep;
    char*  m_gpkarr;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMvol_pointData*  m_tpoint[EM_C_SIG_TDV_POINT_STRIP];
    int m_npoint;            // Taille courante de m_tpoint


    // Ajoute sur le flux les attributs d'un objet EMstrip_volData.
    friend ostream& operator << (ostream& ostr, const EMstrip_volData& obj);


private:

    // Mesures de securite :
    EMstrip_volData& operator = (const EMstrip_volData&);
    int operator == (const EMstrip_volData&);
    int operator != (const EMstrip_volData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMstrip_volData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMstrip_volData.H
//------------------------------------------------------------------------------

