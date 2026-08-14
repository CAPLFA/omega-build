/*******************************************************************************
 * \file           EMvlrData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMvlrData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMvlr.data
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMvlrData_H
#define __EMvlrData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMvol_cautraData.H"
#include "EMddv_aeronefData.H"
#include "EMcode_statData.H"
#include "EMsigbaseDEFINES.H"
#include "EMddv_regulData.H"
#include "EMvol_pointData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMvlrData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   tdv
 *  \class   EMvlrData
 *  \brief   Définition de la classe implémentant l'objet métier EMvlrData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMvlrData
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
class EMvlrData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMvlrData(
        char* gid_vol = (char*) 0,
        char* gdate_vol = (char*) 0,
        char* gdate_mvt = (char*) 0,
        char* gdate_dep = (char*) 0,
        char* gdate_arr = (char*) 0,
        char* gdate_mvt_init = (char*) 0,
        char* gheure_mvt_init = (char*) 0,
        char* gheure_rmg = (char*) 0,
        char* gheure_COP = (char*) 0,
        char* gstamp = (char*) 0,
        char* gheure_fir = (char*) 0,
        char* getat = (char*) 0,
        char* getat_mvt = (char*) 0,
        char* getat_transfert = (char*) 0,
        char* gindic_irregul = (char*) 0,
        char* gcause_irregul = (char*) 0,
        char* gheure_irregul = (char*) 0,
        char* gid_ddv = (char*) 0,
        char* gtypddv = (char*) 0,
        EMvol_cautraData* pcautra = (EMvol_cautraData*) 0,
        char* gindicat = (char*) 0,
        char* gimmatric = (char*) 0,
        char* gcoda = (char*) 0,
        EMddv_aeronefData* paeronef = (EMddv_aeronefData*) 0,
        char* gclasse = (char*) 0,
        char* ggroupe_classe = (char*) 0,
        char* gacoustique = (char*) 0,
        char* gvitesse = (char*) 0,
        char* gniveau = (char*) 0,
        char* gregime = (char*) 0,
        char* gsvfr = (char*) 0,
        char* gcreman = (char*) 0,
        char* gtyp_vol = (char*) 0,
        char* gregle_vol = (char*) 0,
        char* gnature = (char*) 0,
        char* gtypvolct = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gheure_etd = (char*) 0,
        char* gneweobdt_fsh = (char*) 0,
        char* gheure_allouee = (char*) 0,
        char* gfin_creneau = (char*) 0,
        char* gheure_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gheure_eta = (char*) 0,
        char* gaerod_arr = (char*) 0,
        char* gades = (char*) 0,
        char* gheure_arr = (char*) 0,
        char* gtrtspec = (char*) 0,
        char* grmqnat = (char*) 0,
        char* gselcal = (char*) 0,
        char* gnbpers = (char*) 0,
        char* gcatpark = (char*) 0,
        char* gpkdep = (char*) 0,
        char* gpkarr = (char*) 0,
        char* groute = (char*) 0,
        char* gvisibilite = (char*) 0,
        char* ghbn = (char*) 0,
        char* gcodepiste = (char*) 0,
        char* gqfu = (char*) 0,
        char* gqfudec = (char*) 0,
        char* gorigine_qfudec = (char*) 0,
        char* gqfuatt = (char*) 0,
        char* gorigine_qfuatt = (char*) 0,
        char* gbalisage = (char*) 0,
        char* gapproche = (char*) 0,
        char* gevent = (char*) 0,
        char* gsens = (char*) 0,
        char* gcircuit = (char*) 0,
        char* gremisegaz = (char*) 0,
        char* gniveau_et_unite = (char*) 0,
        EMcode_statData* pcode_stat_depart = (EMcode_statData*) 0,
        EMcode_statData* pcode_stat_arrivee = (EMcode_statData*) 0,
        char* gindic_irregul_arr = (char*) 0,
        char* gindic_irregul_dep = (char*) 0,
        char* gadresse_mode_s = (char*) 0,
        char* gcoherence_fi = (char*) 0,
        char* gdate_coda = (char*) 0,
        char* gdate_eda_radar = (char*) 0,
        char* gheure_eta_radar = (char*) 0,
        char* gcptr_revarr_recu = (char*) 0,
        char* gcptr_revarr_emis = (char*) 0,
        char* gcptr_eatarr_recu = (char*) 0,
        char* gcptr_eatarr_emis = (char*) 0,
        char* gcptr_evlarr_recu = (char*) 0,
        char* gcptr_evlarr_emis = (char*) 0,
        char* gcptr_actarr_recu = (char*) 0,
        char* gcptr_actarr_emis = (char*) 0,
        char* gcptr_evldep_recu = (char*) 0,
        char* gcptr_evldep_emis = (char*) 0,
        char* gcptr_actdep_recu = (char*) 0,
        char* gcptr_actdep_emis = (char*) 0,
        char* gcptr_dec_emis = (char*) 0,
        char* gcptr_att_emis = (char*) 0,
        int nregulation = 0,
        EMddv_regulData** tregulation = (EMddv_regulData**) 0,
        int npoint = 0,
        EMvol_pointData** tpoint = (EMvol_pointData**) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0,
        int nimprimante = 0,
        char** timprimante = (char**) 0,
        int ndestinataire_logique = 0,
        char** tdestinataire_logique = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMvlrData(const EMvlrData_v3_0_0&);



    // Destructeur
    ~EMvlrData();


    // Constructeur de copie
    EMvlrData(const EMvlrData&);



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
    EMvlrData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gid_vol(EMstatut& statut) const;
    const char* lire_gid_vol() const;
    void ecrire_gid_vol(char* valeur, EMstatut& statut);
    void ecrire_gid_vol(char* valeur);

    const char* lire_gdate_vol(EMstatut& statut) const;
    const char* lire_gdate_vol() const;
    void ecrire_gdate_vol(char* valeur, EMstatut& statut);
    void ecrire_gdate_vol(char* valeur);

    const char* lire_gdate_mvt(EMstatut& statut) const;
    const char* lire_gdate_mvt() const;
    void ecrire_gdate_mvt(char* valeur, EMstatut& statut);
    void ecrire_gdate_mvt(char* valeur);

    const char* lire_gdate_dep(EMstatut& statut) const;
    const char* lire_gdate_dep() const;
    void ecrire_gdate_dep(char* valeur, EMstatut& statut);
    void ecrire_gdate_dep(char* valeur);

    const char* lire_gdate_arr(EMstatut& statut) const;
    const char* lire_gdate_arr() const;
    void ecrire_gdate_arr(char* valeur, EMstatut& statut);
    void ecrire_gdate_arr(char* valeur);

    const char* lire_gdate_mvt_init(EMstatut& statut) const;
    const char* lire_gdate_mvt_init() const;
    void ecrire_gdate_mvt_init(char* valeur, EMstatut& statut);
    void ecrire_gdate_mvt_init(char* valeur);

    const char* lire_gheure_mvt_init(EMstatut& statut) const;
    const char* lire_gheure_mvt_init() const;
    void ecrire_gheure_mvt_init(char* valeur, EMstatut& statut);
    void ecrire_gheure_mvt_init(char* valeur);

    const char* lire_gheure_rmg(EMstatut& statut) const;
    const char* lire_gheure_rmg() const;
    void ecrire_gheure_rmg(char* valeur, EMstatut& statut);
    void ecrire_gheure_rmg(char* valeur);

    const char* lire_gheure_COP(EMstatut& statut) const;
    const char* lire_gheure_COP() const;
    void ecrire_gheure_COP(char* valeur, EMstatut& statut);
    void ecrire_gheure_COP(char* valeur);

    const char* lire_gstamp(EMstatut& statut) const;
    const char* lire_gstamp() const;
    void ecrire_gstamp(char* valeur, EMstatut& statut);
    void ecrire_gstamp(char* valeur);

    const char* lire_gheure_fir(EMstatut& statut) const;
    const char* lire_gheure_fir() const;
    void ecrire_gheure_fir(char* valeur, EMstatut& statut);
    void ecrire_gheure_fir(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_getat_mvt(EMstatut& statut) const;
    const char* lire_getat_mvt() const;
    void ecrire_getat_mvt(char* valeur, EMstatut& statut);
    void ecrire_getat_mvt(char* valeur);

    const char* lire_getat_transfert(EMstatut& statut) const;
    const char* lire_getat_transfert() const;
    void ecrire_getat_transfert(char* valeur, EMstatut& statut);
    void ecrire_getat_transfert(char* valeur);

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

    const char* lire_gid_ddv(EMstatut& statut) const;
    const char* lire_gid_ddv() const;
    void ecrire_gid_ddv(char* valeur, EMstatut& statut);
    void ecrire_gid_ddv(char* valeur);

    const char* lire_gtypddv(EMstatut& statut) const;
    const char* lire_gtypddv() const;
    void ecrire_gtypddv(char* valeur, EMstatut& statut);
    void ecrire_gtypddv(char* valeur);

    const EMvol_cautraData* lire_pcautra(EMstatut& statut) const;
    const EMvol_cautraData* lire_pcautra() const;
    void ecrire_pcautra(EMvol_cautraData* valeur, EMstatut& statut);
    void ecrire_pcautra(EMvol_cautraData* valeur);

    const char* lire_gindicat(EMstatut& statut) const;
    const char* lire_gindicat() const;
    void ecrire_gindicat(char* valeur, EMstatut& statut);
    void ecrire_gindicat(char* valeur);

    const char* lire_gimmatric(EMstatut& statut) const;
    const char* lire_gimmatric() const;
    void ecrire_gimmatric(char* valeur, EMstatut& statut);
    void ecrire_gimmatric(char* valeur);

    const char* lire_gcoda(EMstatut& statut) const;
    const char* lire_gcoda() const;
    void ecrire_gcoda(char* valeur, EMstatut& statut);
    void ecrire_gcoda(char* valeur);

    const EMddv_aeronefData* lire_paeronef(EMstatut& statut) const;
    const EMddv_aeronefData* lire_paeronef() const;
    void ecrire_paeronef(EMddv_aeronefData* valeur, EMstatut& statut);
    void ecrire_paeronef(EMddv_aeronefData* valeur);

    const char* lire_gclasse(EMstatut& statut) const;
    const char* lire_gclasse() const;
    void ecrire_gclasse(char* valeur, EMstatut& statut);
    void ecrire_gclasse(char* valeur);

    const char* lire_ggroupe_classe(EMstatut& statut) const;
    const char* lire_ggroupe_classe() const;
    void ecrire_ggroupe_classe(char* valeur, EMstatut& statut);
    void ecrire_ggroupe_classe(char* valeur);

    const char* lire_gacoustique(EMstatut& statut) const;
    const char* lire_gacoustique() const;
    void ecrire_gacoustique(char* valeur, EMstatut& statut);
    void ecrire_gacoustique(char* valeur);

    const char* lire_gvitesse(EMstatut& statut) const;
    const char* lire_gvitesse() const;
    void ecrire_gvitesse(char* valeur, EMstatut& statut);
    void ecrire_gvitesse(char* valeur);

    const char* lire_gniveau(EMstatut& statut) const;
    const char* lire_gniveau() const;
    void ecrire_gniveau(char* valeur, EMstatut& statut);
    void ecrire_gniveau(char* valeur);

    const char* lire_gregime(EMstatut& statut) const;
    const char* lire_gregime() const;
    void ecrire_gregime(char* valeur, EMstatut& statut);
    void ecrire_gregime(char* valeur);

    const char* lire_gsvfr(EMstatut& statut) const;
    const char* lire_gsvfr() const;
    void ecrire_gsvfr(char* valeur, EMstatut& statut);
    void ecrire_gsvfr(char* valeur);

    const char* lire_gcreman(EMstatut& statut) const;
    const char* lire_gcreman() const;
    void ecrire_gcreman(char* valeur, EMstatut& statut);
    void ecrire_gcreman(char* valeur);

    const char* lire_gtyp_vol(EMstatut& statut) const;
    const char* lire_gtyp_vol() const;
    void ecrire_gtyp_vol(char* valeur, EMstatut& statut);
    void ecrire_gtyp_vol(char* valeur);

    const char* lire_gregle_vol(EMstatut& statut) const;
    const char* lire_gregle_vol() const;
    void ecrire_gregle_vol(char* valeur, EMstatut& statut);
    void ecrire_gregle_vol(char* valeur);

    const char* lire_gnature(EMstatut& statut) const;
    const char* lire_gnature() const;
    void ecrire_gnature(char* valeur, EMstatut& statut);
    void ecrire_gnature(char* valeur);

    const char* lire_gtypvolct(EMstatut& statut) const;
    const char* lire_gtypvolct() const;
    void ecrire_gtypvolct(char* valeur, EMstatut& statut);
    void ecrire_gtypvolct(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gheure_etd(EMstatut& statut) const;
    const char* lire_gheure_etd() const;
    void ecrire_gheure_etd(char* valeur, EMstatut& statut);
    void ecrire_gheure_etd(char* valeur);

    const char* lire_gneweobdt_fsh(EMstatut& statut) const;
    const char* lire_gneweobdt_fsh() const;
    void ecrire_gneweobdt_fsh(char* valeur, EMstatut& statut);
    void ecrire_gneweobdt_fsh(char* valeur);

    const char* lire_gheure_allouee(EMstatut& statut) const;
    const char* lire_gheure_allouee() const;
    void ecrire_gheure_allouee(char* valeur, EMstatut& statut);
    void ecrire_gheure_allouee(char* valeur);

    const char* lire_gfin_creneau(EMstatut& statut) const;
    const char* lire_gfin_creneau() const;
    void ecrire_gfin_creneau(char* valeur, EMstatut& statut);
    void ecrire_gfin_creneau(char* valeur);

    const char* lire_gheure_dep(EMstatut& statut) const;
    const char* lire_gheure_dep() const;
    void ecrire_gheure_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gheure_eta(EMstatut& statut) const;
    const char* lire_gheure_eta() const;
    void ecrire_gheure_eta(char* valeur, EMstatut& statut);
    void ecrire_gheure_eta(char* valeur);

    const char* lire_gaerod_arr(EMstatut& statut) const;
    const char* lire_gaerod_arr() const;
    void ecrire_gaerod_arr(char* valeur, EMstatut& statut);
    void ecrire_gaerod_arr(char* valeur);

    const char* lire_gades(EMstatut& statut) const;
    const char* lire_gades() const;
    void ecrire_gades(char* valeur, EMstatut& statut);
    void ecrire_gades(char* valeur);

    const char* lire_gheure_arr(EMstatut& statut) const;
    const char* lire_gheure_arr() const;
    void ecrire_gheure_arr(char* valeur, EMstatut& statut);
    void ecrire_gheure_arr(char* valeur);

    const char* lire_gtrtspec(EMstatut& statut) const;
    const char* lire_gtrtspec() const;
    void ecrire_gtrtspec(char* valeur, EMstatut& statut);
    void ecrire_gtrtspec(char* valeur);

    const char* lire_grmqnat(EMstatut& statut) const;
    const char* lire_grmqnat() const;
    void ecrire_grmqnat(char* valeur, EMstatut& statut);
    void ecrire_grmqnat(char* valeur);

    const char* lire_gselcal(EMstatut& statut) const;
    const char* lire_gselcal() const;
    void ecrire_gselcal(char* valeur, EMstatut& statut);
    void ecrire_gselcal(char* valeur);

    const char* lire_gnbpers(EMstatut& statut) const;
    const char* lire_gnbpers() const;
    void ecrire_gnbpers(char* valeur, EMstatut& statut);
    void ecrire_gnbpers(char* valeur);

    const char* lire_gcatpark(EMstatut& statut) const;
    const char* lire_gcatpark() const;
    void ecrire_gcatpark(char* valeur, EMstatut& statut);
    void ecrire_gcatpark(char* valeur);

    const char* lire_gpkdep(EMstatut& statut) const;
    const char* lire_gpkdep() const;
    void ecrire_gpkdep(char* valeur, EMstatut& statut);
    void ecrire_gpkdep(char* valeur);

    const char* lire_gpkarr(EMstatut& statut) const;
    const char* lire_gpkarr() const;
    void ecrire_gpkarr(char* valeur, EMstatut& statut);
    void ecrire_gpkarr(char* valeur);

    const char* lire_groute(EMstatut& statut) const;
    const char* lire_groute() const;
    void ecrire_groute(char* valeur, EMstatut& statut);
    void ecrire_groute(char* valeur);

    const char* lire_gvisibilite(EMstatut& statut) const;
    const char* lire_gvisibilite() const;
    void ecrire_gvisibilite(char* valeur, EMstatut& statut);
    void ecrire_gvisibilite(char* valeur);

    const char* lire_ghbn(EMstatut& statut) const;
    const char* lire_ghbn() const;
    void ecrire_ghbn(char* valeur, EMstatut& statut);
    void ecrire_ghbn(char* valeur);

    const char* lire_gcodepiste(EMstatut& statut) const;
    const char* lire_gcodepiste() const;
    void ecrire_gcodepiste(char* valeur, EMstatut& statut);
    void ecrire_gcodepiste(char* valeur);

    const char* lire_gqfu(EMstatut& statut) const;
    const char* lire_gqfu() const;
    void ecrire_gqfu(char* valeur, EMstatut& statut);
    void ecrire_gqfu(char* valeur);

    const char* lire_gqfudec(EMstatut& statut) const;
    const char* lire_gqfudec() const;
    void ecrire_gqfudec(char* valeur, EMstatut& statut);
    void ecrire_gqfudec(char* valeur);

    const char* lire_gorigine_qfudec(EMstatut& statut) const;
    const char* lire_gorigine_qfudec() const;
    void ecrire_gorigine_qfudec(char* valeur, EMstatut& statut);
    void ecrire_gorigine_qfudec(char* valeur);

    const char* lire_gqfuatt(EMstatut& statut) const;
    const char* lire_gqfuatt() const;
    void ecrire_gqfuatt(char* valeur, EMstatut& statut);
    void ecrire_gqfuatt(char* valeur);

    const char* lire_gorigine_qfuatt(EMstatut& statut) const;
    const char* lire_gorigine_qfuatt() const;
    void ecrire_gorigine_qfuatt(char* valeur, EMstatut& statut);
    void ecrire_gorigine_qfuatt(char* valeur);

    const char* lire_gbalisage(EMstatut& statut) const;
    const char* lire_gbalisage() const;
    void ecrire_gbalisage(char* valeur, EMstatut& statut);
    void ecrire_gbalisage(char* valeur);

    const char* lire_gapproche(EMstatut& statut) const;
    const char* lire_gapproche() const;
    void ecrire_gapproche(char* valeur, EMstatut& statut);
    void ecrire_gapproche(char* valeur);

    const char* lire_gevent(EMstatut& statut) const;
    const char* lire_gevent() const;
    void ecrire_gevent(char* valeur, EMstatut& statut);
    void ecrire_gevent(char* valeur);

    const char* lire_gsens(EMstatut& statut) const;
    const char* lire_gsens() const;
    void ecrire_gsens(char* valeur, EMstatut& statut);
    void ecrire_gsens(char* valeur);

    const char* lire_gcircuit(EMstatut& statut) const;
    const char* lire_gcircuit() const;
    void ecrire_gcircuit(char* valeur, EMstatut& statut);
    void ecrire_gcircuit(char* valeur);

    const char* lire_gremisegaz(EMstatut& statut) const;
    const char* lire_gremisegaz() const;
    void ecrire_gremisegaz(char* valeur, EMstatut& statut);
    void ecrire_gremisegaz(char* valeur);

    const char* lire_gniveau_et_unite(EMstatut& statut) const;
    const char* lire_gniveau_et_unite() const;
    void ecrire_gniveau_et_unite(char* valeur, EMstatut& statut);
    void ecrire_gniveau_et_unite(char* valeur);

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

    const char* lire_gadresse_mode_s(EMstatut& statut) const;
    const char* lire_gadresse_mode_s() const;
    void ecrire_gadresse_mode_s(char* valeur, EMstatut& statut);
    void ecrire_gadresse_mode_s(char* valeur);

    const char* lire_gcoherence_fi(EMstatut& statut) const;
    const char* lire_gcoherence_fi() const;
    void ecrire_gcoherence_fi(char* valeur, EMstatut& statut);
    void ecrire_gcoherence_fi(char* valeur);

    const char* lire_gdate_coda(EMstatut& statut) const;
    const char* lire_gdate_coda() const;
    void ecrire_gdate_coda(char* valeur, EMstatut& statut);
    void ecrire_gdate_coda(char* valeur);

    const char* lire_gdate_eda_radar(EMstatut& statut) const;
    const char* lire_gdate_eda_radar() const;
    void ecrire_gdate_eda_radar(char* valeur, EMstatut& statut);
    void ecrire_gdate_eda_radar(char* valeur);

    const char* lire_gheure_eta_radar(EMstatut& statut) const;
    const char* lire_gheure_eta_radar() const;
    void ecrire_gheure_eta_radar(char* valeur, EMstatut& statut);
    void ecrire_gheure_eta_radar(char* valeur);

    const char* lire_gcptr_revarr_recu(EMstatut& statut) const;
    const char* lire_gcptr_revarr_recu() const;
    void ecrire_gcptr_revarr_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_revarr_recu(char* valeur);

    const char* lire_gcptr_revarr_emis(EMstatut& statut) const;
    const char* lire_gcptr_revarr_emis() const;
    void ecrire_gcptr_revarr_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_revarr_emis(char* valeur);

    const char* lire_gcptr_eatarr_recu(EMstatut& statut) const;
    const char* lire_gcptr_eatarr_recu() const;
    void ecrire_gcptr_eatarr_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_eatarr_recu(char* valeur);

    const char* lire_gcptr_eatarr_emis(EMstatut& statut) const;
    const char* lire_gcptr_eatarr_emis() const;
    void ecrire_gcptr_eatarr_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_eatarr_emis(char* valeur);

    const char* lire_gcptr_evlarr_recu(EMstatut& statut) const;
    const char* lire_gcptr_evlarr_recu() const;
    void ecrire_gcptr_evlarr_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_evlarr_recu(char* valeur);

    const char* lire_gcptr_evlarr_emis(EMstatut& statut) const;
    const char* lire_gcptr_evlarr_emis() const;
    void ecrire_gcptr_evlarr_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_evlarr_emis(char* valeur);

    const char* lire_gcptr_actarr_recu(EMstatut& statut) const;
    const char* lire_gcptr_actarr_recu() const;
    void ecrire_gcptr_actarr_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_actarr_recu(char* valeur);

    const char* lire_gcptr_actarr_emis(EMstatut& statut) const;
    const char* lire_gcptr_actarr_emis() const;
    void ecrire_gcptr_actarr_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_actarr_emis(char* valeur);

    const char* lire_gcptr_evldep_recu(EMstatut& statut) const;
    const char* lire_gcptr_evldep_recu() const;
    void ecrire_gcptr_evldep_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_evldep_recu(char* valeur);

    const char* lire_gcptr_evldep_emis(EMstatut& statut) const;
    const char* lire_gcptr_evldep_emis() const;
    void ecrire_gcptr_evldep_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_evldep_emis(char* valeur);

    const char* lire_gcptr_actdep_recu(EMstatut& statut) const;
    const char* lire_gcptr_actdep_recu() const;
    void ecrire_gcptr_actdep_recu(char* valeur, EMstatut& statut);
    void ecrire_gcptr_actdep_recu(char* valeur);

    const char* lire_gcptr_actdep_emis(EMstatut& statut) const;
    const char* lire_gcptr_actdep_emis() const;
    void ecrire_gcptr_actdep_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_actdep_emis(char* valeur);

    const char* lire_gcptr_dec_emis(EMstatut& statut) const;
    const char* lire_gcptr_dec_emis() const;
    void ecrire_gcptr_dec_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_dec_emis(char* valeur);

    const char* lire_gcptr_att_emis(EMstatut& statut) const;
    const char* lire_gcptr_att_emis() const;
    void ecrire_gcptr_att_emis(char* valeur, EMstatut& statut);
    void ecrire_gcptr_att_emis(char* valeur);

    int nombre_regulation(EMstatut& statut) const;
    int nombre_regulation() const;
    const EMddv_regulData* lire_regulation(int nIndex, EMstatut& statut) const;
    const EMddv_regulData* lire_regulation(int nIndex) const;
    int ajouter_regulation(EMddv_regulData* elem, EMstatut& statut);
    int ajouter_regulation(EMddv_regulData* elem);

    int nombre_point(EMstatut& statut) const;
    int nombre_point() const;
    const EMvol_pointData* lire_point(int nIndex, EMstatut& statut) const;
    const EMvol_pointData* lire_point(int nIndex) const;
    int ajouter_point(EMvol_pointData* elem, EMstatut& statut);
    int ajouter_point(EMvol_pointData* elem);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);

    int nombre_imprimante(EMstatut& statut) const;
    int nombre_imprimante() const;
    const char* lire_imprimante(int nIndex, EMstatut& statut) const;
    const char* lire_imprimante(int nIndex) const;
    int ajouter_imprimante(char* elem, EMstatut& statut);
    int ajouter_imprimante(char* elem);

    int nombre_destinataire_logique(EMstatut& statut) const;
    int nombre_destinataire_logique() const;
    const char* lire_destinataire_logique(int nIndex, EMstatut& statut) const;
    const char* lire_destinataire_logique(int nIndex) const;
    int ajouter_destinataire_logique(char* elem, EMstatut& statut);
    int ajouter_destinataire_logique(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gid_vol;
    char*  m_gdate_vol;
    char*  m_gdate_mvt;
    char*  m_gdate_dep;
    char*  m_gdate_arr;
    char*  m_gdate_mvt_init;
    char*  m_gheure_mvt_init;
    char*  m_gheure_rmg;
    char*  m_gheure_COP;
    char*  m_gstamp;
    char*  m_gheure_fir;
    char*  m_getat;
    char*  m_getat_mvt;
    char*  m_getat_transfert;
    char*  m_gindic_irregul;
    char*  m_gcause_irregul;
    char*  m_gheure_irregul;
    char*  m_gid_ddv;
    char*  m_gtypddv;
    EMvol_cautraData*  m_pcautra;
    char*  m_gindicat;
    char*  m_gimmatric;
    char*  m_gcoda;
    EMddv_aeronefData*  m_paeronef;
    char*  m_gclasse;
    char*  m_ggroupe_classe;
    char*  m_gacoustique;
    char*  m_gvitesse;
    char*  m_gniveau;
    char*  m_gregime;
    char*  m_gsvfr;
    char*  m_gcreman;
    char*  m_gtyp_vol;
    char*  m_gregle_vol;
    char*  m_gnature;
    char*  m_gtypvolct;
    char*  m_gaerod_dep;
    char*  m_gheure_etd;
    char*  m_gneweobdt_fsh;
    char*  m_gheure_allouee;
    char*  m_gfin_creneau;
    char*  m_gheure_dep;
    char*  m_gaerod_dest;
    char*  m_gheure_eta;
    char*  m_gaerod_arr;
    char*  m_gades;
    char*  m_gheure_arr;
    char*  m_gtrtspec;
    char*  m_grmqnat;
    char*  m_gselcal;
    char*  m_gnbpers;
    char*  m_gcatpark;
    char*  m_gpkdep;
    char*  m_gpkarr;
    char*  m_groute;
    char*  m_gvisibilite;
    char*  m_ghbn;
    char*  m_gcodepiste;
    char*  m_gqfu;
    char*  m_gqfudec;
    char*  m_gorigine_qfudec;
    char*  m_gqfuatt;
    char*  m_gorigine_qfuatt;
    char*  m_gbalisage;
    char*  m_gapproche;
    char*  m_gevent;
    char*  m_gsens;
    char*  m_gcircuit;
    char*  m_gremisegaz;
    char*  m_gniveau_et_unite;
    EMcode_statData*  m_pcode_stat_depart;
    EMcode_statData*  m_pcode_stat_arrivee;
    char*  m_gindic_irregul_arr;
    char*  m_gindic_irregul_dep;
    char*  m_gadresse_mode_s;
    char*  m_gcoherence_fi;
    char*  m_gdate_coda;
    char*  m_gdate_eda_radar;
    char*  m_gheure_eta_radar;
    char*  m_gcptr_revarr_recu;
    char*  m_gcptr_revarr_emis;
    char*  m_gcptr_eatarr_recu;
    char*  m_gcptr_eatarr_emis;
    char*  m_gcptr_evlarr_recu;
    char*  m_gcptr_evlarr_emis;
    char*  m_gcptr_actarr_recu;
    char*  m_gcptr_actarr_emis;
    char*  m_gcptr_evldep_recu;
    char*  m_gcptr_evldep_emis;
    char*  m_gcptr_actdep_recu;
    char*  m_gcptr_actdep_emis;
    char*  m_gcptr_dec_emis;
    char*  m_gcptr_att_emis;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMddv_regulData*  m_tregulation[EM_C_SIG_REGULATION];
    int m_nregulation;            // Taille courante de m_tregulation

    EMvol_pointData*  m_tpoint[EM_C_SIG_POINTS_OM];
    int m_npoint;            // Taille courante de m_tpoint

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires

    char*  m_timprimante[EM_C_SIG_IMPRIMANTES];
    int m_nimprimante;            // Taille courante de m_timprimante

    char*  m_tdestinataire_logique[EM_C_SIG_DEST_LOGIQUES];
    int m_ndestinataire_logique;            // Taille courante de m_tdestinataire_logique


    // Ajoute sur le flux les attributs d'un objet EMvlrData.
    friend ostream& operator << (ostream& ostr, const EMvlrData& obj);


private:

    // Mesures de securite :
    EMvlrData& operator = (const EMvlrData&);
    int operator == (const EMvlrData&);
    int operator != (const EMvlrData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMvlrData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMvlrData.H
//------------------------------------------------------------------------------

