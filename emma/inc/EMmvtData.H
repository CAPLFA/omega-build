/*******************************************************************************
 * \file           EMmvtData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmvtData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmvt.data
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMmvtData_H
#define __EMmvtData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMddv_aeronefData.H"
#include "EMmvt_routeData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmvtData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ldm
 *  \class   EMmvtData
 *  \brief   Définition de la classe implémentant l'objet métier EMmvtData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmvtData
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
class EMmvtData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmvtData(
        char* gident_mvt = (char*) 0,
        char* gident_vol = (char*) 0,
        char* gident_ddv = (char*) 0,
        char* gdate_mvt = (char*) 0,
        char* getat = (char*) 0,
        char* gtype = (char*) 0,
        char* gindicat = (char*) 0,
        char* gimmatric = (char*) 0,
        char* gselcal = (char*) 0,
        char* gcode_ssr = (char*) 0,
        char* gregvol = (char*) 0,
        char* gtypvol = (char*) 0,
        EMddv_aeronefData* paeronef = (EMddv_aeronefData*) 0,
        char* gaerod_dep = (char*) 0,
        char* glatitude_dep = (char*) 0,
        char* glongitude_dep = (char*) 0,
        char* glieu_dep = (char*) 0,
        char* gsecteur_dep = (char*) 0,
        char* gheure_etd = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* glatitude_dest = (char*) 0,
        char* glongitude_dest = (char*) 0,
        char* glieu_dest = (char*) 0,
        char* gsecteur_dest = (char*) 0,
        char* gheure_eta = (char*) 0,
        char* gniveau = (char*) 0,
        char* gvitesse = (char*) 0,
        char* gvitesse_sol = (char*) 0,
        char* gautonomie = (char*) 0,
        char* gnbpers = (char*) 0,
        char* geqrna = (char*) 0,
        char* gcatpark = (char*) 0,
        char* gsts = (char*) 0,
        EMmvt_routeData* proute_strip = (EMmvt_routeData*) 0,
        char* gheure_mer = (char*) 0,
        char* gheure_rou = (char*) 0,
        char* gheure_dec = (char*) 0,
        char* gheure_act = (char*) 0,
        char* gheure_att = (char*) 0,
        char* gheure_pkg = (char*) 0,
        char* gheure_clo = (char*) 0,
        char* gflag_est_emis = (char*) 0,
        char* gflag_est_recu = (char*) 0,
        char* gflag_acp_emis = (char*) 0,
        char* gflag_acp_recu = (char*) 0,
        char* gflag_coor = (char*) 0,
        char* gindic_irregul = (char*) 0,
        char* gcause_irregul = (char*) 0,
        char* gheure_irregul = (char*) 0,
        char* grang_passage = (char*) 0,
        char* gdistance = (char*) 0,
        char* gniveau_aut = (char*) 0,
        char* gniveau_aut2 = (char*) 0,
        char* gniveau_passe = (char*) 0,
        char* gorigine_strip = (char*) 0,
        char* gpkdep = (char*) 0,
        char* gpkarr = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmvtData(const EMmvtData_v3_0_0&);



    // Destructeur
    ~EMmvtData();


    // Constructeur de copie
    EMmvtData(const EMmvtData&);



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
    EMmvtData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gident_mvt(EMstatut& statut) const;
    const char* lire_gident_mvt() const;
    void ecrire_gident_mvt(char* valeur, EMstatut& statut);
    void ecrire_gident_mvt(char* valeur);

    const char* lire_gident_vol(EMstatut& statut) const;
    const char* lire_gident_vol() const;
    void ecrire_gident_vol(char* valeur, EMstatut& statut);
    void ecrire_gident_vol(char* valeur);

    const char* lire_gident_ddv(EMstatut& statut) const;
    const char* lire_gident_ddv() const;
    void ecrire_gident_ddv(char* valeur, EMstatut& statut);
    void ecrire_gident_ddv(char* valeur);

    const char* lire_gdate_mvt(EMstatut& statut) const;
    const char* lire_gdate_mvt() const;
    void ecrire_gdate_mvt(char* valeur, EMstatut& statut);
    void ecrire_gdate_mvt(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gindicat(EMstatut& statut) const;
    const char* lire_gindicat() const;
    void ecrire_gindicat(char* valeur, EMstatut& statut);
    void ecrire_gindicat(char* valeur);

    const char* lire_gimmatric(EMstatut& statut) const;
    const char* lire_gimmatric() const;
    void ecrire_gimmatric(char* valeur, EMstatut& statut);
    void ecrire_gimmatric(char* valeur);

    const char* lire_gselcal(EMstatut& statut) const;
    const char* lire_gselcal() const;
    void ecrire_gselcal(char* valeur, EMstatut& statut);
    void ecrire_gselcal(char* valeur);

    const char* lire_gcode_ssr(EMstatut& statut) const;
    const char* lire_gcode_ssr() const;
    void ecrire_gcode_ssr(char* valeur, EMstatut& statut);
    void ecrire_gcode_ssr(char* valeur);

    const char* lire_gregvol(EMstatut& statut) const;
    const char* lire_gregvol() const;
    void ecrire_gregvol(char* valeur, EMstatut& statut);
    void ecrire_gregvol(char* valeur);

    const char* lire_gtypvol(EMstatut& statut) const;
    const char* lire_gtypvol() const;
    void ecrire_gtypvol(char* valeur, EMstatut& statut);
    void ecrire_gtypvol(char* valeur);

    const EMddv_aeronefData* lire_paeronef(EMstatut& statut) const;
    const EMddv_aeronefData* lire_paeronef() const;
    void ecrire_paeronef(EMddv_aeronefData* valeur, EMstatut& statut);
    void ecrire_paeronef(EMddv_aeronefData* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_glatitude_dep(EMstatut& statut) const;
    const char* lire_glatitude_dep() const;
    void ecrire_glatitude_dep(char* valeur, EMstatut& statut);
    void ecrire_glatitude_dep(char* valeur);

    const char* lire_glongitude_dep(EMstatut& statut) const;
    const char* lire_glongitude_dep() const;
    void ecrire_glongitude_dep(char* valeur, EMstatut& statut);
    void ecrire_glongitude_dep(char* valeur);

    const char* lire_glieu_dep(EMstatut& statut) const;
    const char* lire_glieu_dep() const;
    void ecrire_glieu_dep(char* valeur, EMstatut& statut);
    void ecrire_glieu_dep(char* valeur);

    const char* lire_gsecteur_dep(EMstatut& statut) const;
    const char* lire_gsecteur_dep() const;
    void ecrire_gsecteur_dep(char* valeur, EMstatut& statut);
    void ecrire_gsecteur_dep(char* valeur);

    const char* lire_gheure_etd(EMstatut& statut) const;
    const char* lire_gheure_etd() const;
    void ecrire_gheure_etd(char* valeur, EMstatut& statut);
    void ecrire_gheure_etd(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_glatitude_dest(EMstatut& statut) const;
    const char* lire_glatitude_dest() const;
    void ecrire_glatitude_dest(char* valeur, EMstatut& statut);
    void ecrire_glatitude_dest(char* valeur);

    const char* lire_glongitude_dest(EMstatut& statut) const;
    const char* lire_glongitude_dest() const;
    void ecrire_glongitude_dest(char* valeur, EMstatut& statut);
    void ecrire_glongitude_dest(char* valeur);

    const char* lire_glieu_dest(EMstatut& statut) const;
    const char* lire_glieu_dest() const;
    void ecrire_glieu_dest(char* valeur, EMstatut& statut);
    void ecrire_glieu_dest(char* valeur);

    const char* lire_gsecteur_dest(EMstatut& statut) const;
    const char* lire_gsecteur_dest() const;
    void ecrire_gsecteur_dest(char* valeur, EMstatut& statut);
    void ecrire_gsecteur_dest(char* valeur);

    const char* lire_gheure_eta(EMstatut& statut) const;
    const char* lire_gheure_eta() const;
    void ecrire_gheure_eta(char* valeur, EMstatut& statut);
    void ecrire_gheure_eta(char* valeur);

    const char* lire_gniveau(EMstatut& statut) const;
    const char* lire_gniveau() const;
    void ecrire_gniveau(char* valeur, EMstatut& statut);
    void ecrire_gniveau(char* valeur);

    const char* lire_gvitesse(EMstatut& statut) const;
    const char* lire_gvitesse() const;
    void ecrire_gvitesse(char* valeur, EMstatut& statut);
    void ecrire_gvitesse(char* valeur);

    const char* lire_gvitesse_sol(EMstatut& statut) const;
    const char* lire_gvitesse_sol() const;
    void ecrire_gvitesse_sol(char* valeur, EMstatut& statut);
    void ecrire_gvitesse_sol(char* valeur);

    const char* lire_gautonomie(EMstatut& statut) const;
    const char* lire_gautonomie() const;
    void ecrire_gautonomie(char* valeur, EMstatut& statut);
    void ecrire_gautonomie(char* valeur);

    const char* lire_gnbpers(EMstatut& statut) const;
    const char* lire_gnbpers() const;
    void ecrire_gnbpers(char* valeur, EMstatut& statut);
    void ecrire_gnbpers(char* valeur);

    const char* lire_geqrna(EMstatut& statut) const;
    const char* lire_geqrna() const;
    void ecrire_geqrna(char* valeur, EMstatut& statut);
    void ecrire_geqrna(char* valeur);

    const char* lire_gcatpark(EMstatut& statut) const;
    const char* lire_gcatpark() const;
    void ecrire_gcatpark(char* valeur, EMstatut& statut);
    void ecrire_gcatpark(char* valeur);

    const char* lire_gsts(EMstatut& statut) const;
    const char* lire_gsts() const;
    void ecrire_gsts(char* valeur, EMstatut& statut);
    void ecrire_gsts(char* valeur);

    const EMmvt_routeData* lire_proute_strip(EMstatut& statut) const;
    const EMmvt_routeData* lire_proute_strip() const;
    void ecrire_proute_strip(EMmvt_routeData* valeur, EMstatut& statut);
    void ecrire_proute_strip(EMmvt_routeData* valeur);

    const char* lire_gheure_mer(EMstatut& statut) const;
    const char* lire_gheure_mer() const;
    void ecrire_gheure_mer(char* valeur, EMstatut& statut);
    void ecrire_gheure_mer(char* valeur);

    const char* lire_gheure_rou(EMstatut& statut) const;
    const char* lire_gheure_rou() const;
    void ecrire_gheure_rou(char* valeur, EMstatut& statut);
    void ecrire_gheure_rou(char* valeur);

    const char* lire_gheure_dec(EMstatut& statut) const;
    const char* lire_gheure_dec() const;
    void ecrire_gheure_dec(char* valeur, EMstatut& statut);
    void ecrire_gheure_dec(char* valeur);

    const char* lire_gheure_act(EMstatut& statut) const;
    const char* lire_gheure_act() const;
    void ecrire_gheure_act(char* valeur, EMstatut& statut);
    void ecrire_gheure_act(char* valeur);

    const char* lire_gheure_att(EMstatut& statut) const;
    const char* lire_gheure_att() const;
    void ecrire_gheure_att(char* valeur, EMstatut& statut);
    void ecrire_gheure_att(char* valeur);

    const char* lire_gheure_pkg(EMstatut& statut) const;
    const char* lire_gheure_pkg() const;
    void ecrire_gheure_pkg(char* valeur, EMstatut& statut);
    void ecrire_gheure_pkg(char* valeur);

    const char* lire_gheure_clo(EMstatut& statut) const;
    const char* lire_gheure_clo() const;
    void ecrire_gheure_clo(char* valeur, EMstatut& statut);
    void ecrire_gheure_clo(char* valeur);

    const char* lire_gflag_est_emis(EMstatut& statut) const;
    const char* lire_gflag_est_emis() const;
    void ecrire_gflag_est_emis(char* valeur, EMstatut& statut);
    void ecrire_gflag_est_emis(char* valeur);

    const char* lire_gflag_est_recu(EMstatut& statut) const;
    const char* lire_gflag_est_recu() const;
    void ecrire_gflag_est_recu(char* valeur, EMstatut& statut);
    void ecrire_gflag_est_recu(char* valeur);

    const char* lire_gflag_acp_emis(EMstatut& statut) const;
    const char* lire_gflag_acp_emis() const;
    void ecrire_gflag_acp_emis(char* valeur, EMstatut& statut);
    void ecrire_gflag_acp_emis(char* valeur);

    const char* lire_gflag_acp_recu(EMstatut& statut) const;
    const char* lire_gflag_acp_recu() const;
    void ecrire_gflag_acp_recu(char* valeur, EMstatut& statut);
    void ecrire_gflag_acp_recu(char* valeur);

    const char* lire_gflag_coor(EMstatut& statut) const;
    const char* lire_gflag_coor() const;
    void ecrire_gflag_coor(char* valeur, EMstatut& statut);
    void ecrire_gflag_coor(char* valeur);

    const char* lire_gindic_irregul(EMstatut& statut) const;
    const char* lire_gindic_irregul() const;
    void ecrire_gindic_irregul(char* valeur, EMstatut& statut);
    void ecrire_gindic_irregul(char* valeur);

    const char* lire_gcause_irregul(EMstatut& statut) const;
    const char* lire_gcause_irregul() const;
    void ecrire_gcause_irregul(char* valeur, EMstatut& statut);
    void ecrire_gcause_irregul(char* valeur);

    const char* lire_gheure_irregul(EMstatut& statut) const;
    const char* lire_gheure_irregul() const;
    void ecrire_gheure_irregul(char* valeur, EMstatut& statut);
    void ecrire_gheure_irregul(char* valeur);

    const char* lire_grang_passage(EMstatut& statut) const;
    const char* lire_grang_passage() const;
    void ecrire_grang_passage(char* valeur, EMstatut& statut);
    void ecrire_grang_passage(char* valeur);

    const char* lire_gdistance(EMstatut& statut) const;
    const char* lire_gdistance() const;
    void ecrire_gdistance(char* valeur, EMstatut& statut);
    void ecrire_gdistance(char* valeur);

    const char* lire_gniveau_aut(EMstatut& statut) const;
    const char* lire_gniveau_aut() const;
    void ecrire_gniveau_aut(char* valeur, EMstatut& statut);
    void ecrire_gniveau_aut(char* valeur);

    const char* lire_gniveau_aut2(EMstatut& statut) const;
    const char* lire_gniveau_aut2() const;
    void ecrire_gniveau_aut2(char* valeur, EMstatut& statut);
    void ecrire_gniveau_aut2(char* valeur);

    const char* lire_gniveau_passe(EMstatut& statut) const;
    const char* lire_gniveau_passe() const;
    void ecrire_gniveau_passe(char* valeur, EMstatut& statut);
    void ecrire_gniveau_passe(char* valeur);

    const char* lire_gorigine_strip(EMstatut& statut) const;
    const char* lire_gorigine_strip() const;
    void ecrire_gorigine_strip(char* valeur, EMstatut& statut);
    void ecrire_gorigine_strip(char* valeur);

    const char* lire_gpkdep(EMstatut& statut) const;
    const char* lire_gpkdep() const;
    void ecrire_gpkdep(char* valeur, EMstatut& statut);
    void ecrire_gpkdep(char* valeur);

    const char* lire_gpkarr(EMstatut& statut) const;
    const char* lire_gpkarr() const;
    void ecrire_gpkarr(char* valeur, EMstatut& statut);
    void ecrire_gpkarr(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gident_mvt;
    char*  m_gident_vol;
    char*  m_gident_ddv;
    char*  m_gdate_mvt;
    char*  m_getat;
    char*  m_gtype;
    char*  m_gindicat;
    char*  m_gimmatric;
    char*  m_gselcal;
    char*  m_gcode_ssr;
    char*  m_gregvol;
    char*  m_gtypvol;
    EMddv_aeronefData*  m_paeronef;
    char*  m_gaerod_dep;
    char*  m_glatitude_dep;
    char*  m_glongitude_dep;
    char*  m_glieu_dep;
    char*  m_gsecteur_dep;
    char*  m_gheure_etd;
    char*  m_gaerod_dest;
    char*  m_glatitude_dest;
    char*  m_glongitude_dest;
    char*  m_glieu_dest;
    char*  m_gsecteur_dest;
    char*  m_gheure_eta;
    char*  m_gniveau;
    char*  m_gvitesse;
    char*  m_gvitesse_sol;
    char*  m_gautonomie;
    char*  m_gnbpers;
    char*  m_geqrna;
    char*  m_gcatpark;
    char*  m_gsts;
    EMmvt_routeData*  m_proute_strip;
    char*  m_gheure_mer;
    char*  m_gheure_rou;
    char*  m_gheure_dec;
    char*  m_gheure_act;
    char*  m_gheure_att;
    char*  m_gheure_pkg;
    char*  m_gheure_clo;
    char*  m_gflag_est_emis;
    char*  m_gflag_est_recu;
    char*  m_gflag_acp_emis;
    char*  m_gflag_acp_recu;
    char*  m_gflag_coor;
    char*  m_gindic_irregul;
    char*  m_gcause_irregul;
    char*  m_gheure_irregul;
    char*  m_grang_passage;
    char*  m_gdistance;
    char*  m_gniveau_aut;
    char*  m_gniveau_aut2;
    char*  m_gniveau_passe;
    char*  m_gorigine_strip;
    char*  m_gpkdep;
    char*  m_gpkarr;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMmvtData.
    friend ostream& operator << (ostream& ostr, const EMmvtData& obj);


private:

    // Mesures de securite :
    EMmvtData& operator = (const EMmvtData&);
    int operator == (const EMmvtData&);
    int operator != (const EMmvtData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmvtData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmvtData.H
//------------------------------------------------------------------------------

