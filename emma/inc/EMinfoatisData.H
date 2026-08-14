/*******************************************************************************
 * \file           EMinfoatisData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMinfoatisData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMinfoatis.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMinfoatisData_H
#define __EMinfoatisData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"
#include "EMifg_qfu_en_serviceData.H"
#include "EMifg_alarme_qfu_en_serviceData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMinfoatisData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMinfoatisData
 *  \brief   Définition de la classe implémentant l'objet métier EMinfoatisData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMinfoatisData
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
class EMinfoatisData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMinfoatisData(
        char* gstatut_atis = (char*) 0,
        char* gdate_enreg = (char*) 0,
        char* galarme_horaire = (char*) 0,
        char* glettre_atis = (char*) 0,
        char* gchoix_ecoute = (char*) 0,
        char* gatis_est_suspendu = (char*) 0,
        char* gmoyen_percee = (char*) 0,
        char* gqfu_moyen_percee = (char*) 0,
        char* gqfu1 = (char*) 0,
        char* gqfu2 = (char*) 0,
        char* getat_piste = (char*) 0,
        char* getat_piste_fr2 = (char*) 0,
        char* getat_piste_fr3 = (char*) 0,
        char* getat_piste_fr4 = (char*) 0,
        char* getat_piste_fr5 = (char*) 0,
        char* getat_piste_fr6 = (char*) 0,
        char* getat_piste_fr7 = (char*) 0,
        char* getat_piste_fr8 = (char*) 0,
        char* getat_piste_fr9 = (char*) 0,
        char* getat_piste_fr10 = (char*) 0,
        char* getat_piste_code1 = (char*) 0,
        char* getat_piste_code2 = (char*) 0,
        char* getat_piste_code3 = (char*) 0,
        char* getat_piste_code4 = (char*) 0,
        char* getat_piste_code5 = (char*) 0,
        char* getat_piste_code6 = (char*) 0,
        char* getat_piste_code7 = (char*) 0,
        char* getat_piste_code8 = (char*) 0,
        char* getat_piste_code9 = (char*) 0,
        char* getat_piste_code10 = (char*) 0,
        char* getat_piste_angl4 = (char*) 0,
        char* getat_piste_angl10 = (char*) 0,
        char* getat_piste_datalink1 = (char*) 0,
        char* getat_piste_datalink2 = (char*) 0,
        char* getat_piste_datalink3 = (char*) 0,
        char* getat_piste_datalink4 = (char*) 0,
        char* getat_piste_datalink5 = (char*) 0,
        char* getat_piste_datalink6 = (char*) 0,
        char* getat_piste_datalink7 = (char*) 0,
        char* getat_piste_datalink8 = (char*) 0,
        char* getat_piste_datalink9 = (char*) 0,
        char* getat_piste_datalink10 = (char*) 0,
        char* gniv_transition = (char*) 0,
        char* gindic_itineraire = (char*) 0,
        char* gmoyen_rad_filtre = (char*) 0,
        char* gmoyen_rad_normal = (char*) 0,
        char* gexploitation1 = (char*) 0,
        char* gexploitation2 = (char*) 0,
        char* gexploitation3 = (char*) 0,
        char* gexploitation4 = (char*) 0,
        char* gexploitation5 = (char*) 0,
        char* gexploitation6 = (char*) 0,
        char* gexploitation7 = (char*) 0,
        char* gexploitation8 = (char*) 0,
        char* gexploitation9 = (char*) 0,
        char* gexploitation10 = (char*) 0,
        char* gexploitation_code1 = (char*) 0,
        char* gexploitation_code2 = (char*) 0,
        char* gexploitation_code3 = (char*) 0,
        char* gexploitation_code4 = (char*) 0,
        char* gexploitation_code5 = (char*) 0,
        char* gexploitation_code6 = (char*) 0,
        char* gexploitation_code7 = (char*) 0,
        char* gexploitation_code8 = (char*) 0,
        char* gexploitation_code9 = (char*) 0,
        char* gexploitation_code10 = (char*) 0,
        char* gexploitation_angl4 = (char*) 0,
        char* gexploitation_angl10 = (char*) 0,
        char* gexploitation_datalink1 = (char*) 0,
        char* gexploitation_datalink2 = (char*) 0,
        char* gexploitation_datalink3 = (char*) 0,
        char* gexploitation_datalink4 = (char*) 0,
        char* gexploitation_datalink5 = (char*) 0,
        char* gexploitation_datalink6 = (char*) 0,
        char* gexploitation_datalink7 = (char*) 0,
        char* gexploitation_datalink8 = (char*) 0,
        char* gexploitation_datalink9 = (char*) 0,
        char* gexploitation_datalink10 = (char*) 0,
        char* gtexte_chef_de_quart = (char*) 0,
        char* gforce_vent_moyen = (char*) 0,
        char* gdir_vent_moyen = (char*) 0,
        char* gforce_vent_max = (char*) 0,
        char* gforce_vent_moyen2 = (char*) 0,
        char* gdir_vent_moyen2 = (char*) 0,
        char* gforce_vent_max2 = (char*) 0,
        char* gtair = (char*) 0,
        char* gtd = (char*) 0,
        char* gqnh = (char*) 0,
        char* gqfe = (char*) 0,
        char* gqfe1 = (char*) 0,
        char* gqfe2 = (char*) 0,
        char* gqfe3 = (char*) 0,
        char* gqfe4 = (char*) 0,
        char* gclair = (char*) 0,
        char* gorigine_info_tour = (char*) 0,
        char* gcavok = (char*) 0,
        char* gvisi = (char*) 0,
        char* gtemps_present = (char*) 0,
        char* gnuages1 = (char*) 0,
        char* gnuages2 = (char*) 0,
        char* gnuages3 = (char*) 0,
        char* gnuages4 = (char*) 0,
        char* grens_sup = (char*) 0,
        char* grens_sup2 = (char*) 0,
        char* grens_sup3 = (char*) 0,
        char* grens_sup4 = (char*) 0,
        char* grens_sup5 = (char*) 0,
        char* grens_sup6 = (char*) 0,
        char* grens_sup7 = (char*) 0,
        char* grens_sup8 = (char*) 0,
        char* grens_sup9 = (char*) 0,
        char* grens_sup10 = (char*) 0,
        char* grens_sup_code1 = (char*) 0,
        char* grens_sup_code2 = (char*) 0,
        char* grens_sup_code3 = (char*) 0,
        char* grens_sup_code4 = (char*) 0,
        char* grens_sup_code5 = (char*) 0,
        char* grens_sup_code6 = (char*) 0,
        char* grens_sup_code7 = (char*) 0,
        char* grens_sup_code8 = (char*) 0,
        char* grens_sup_code9 = (char*) 0,
        char* grens_sup_code10 = (char*) 0,
        char* grens_sup_angl2 = (char*) 0,
        char* grens_sup_angl10 = (char*) 0,
        char* grens_sup_datalink1 = (char*) 0,
        char* grens_sup_datalink2 = (char*) 0,
        char* grens_sup_datalink3 = (char*) 0,
        char* grens_sup_datalink4 = (char*) 0,
        char* grens_sup_datalink5 = (char*) 0,
        char* grens_sup_datalink6 = (char*) 0,
        char* grens_sup_datalink7 = (char*) 0,
        char* grens_sup_datalink8 = (char*) 0,
        char* grens_sup_datalink9 = (char*) 0,
        char* grens_sup_datalink10 = (char*) 0,
        char* gtexte_clair_fr = (char*) 0,
        char* gtexte_clair_angl = (char*) 0,
        char* gtexte_clair_datalink = (char*) 0,
        char* galarme_moyen_percee = (char*) 0,
        char* galarme_qfu_moyen_percee = (char*) 0,
        char* galarme_qfu1 = (char*) 0,
        char* galarme_qfu2 = (char*) 0,
        char* galarme_etat_piste = (char*) 0,
        char* galarme_etat_piste_fr2 = (char*) 0,
        char* galarme_etat_piste_fr3 = (char*) 0,
        char* galarme_etat_piste_fr4 = (char*) 0,
        char* galarme_etat_piste_fr5 = (char*) 0,
        char* galarme_etat_piste_fr6 = (char*) 0,
        char* galarme_etat_piste_fr7 = (char*) 0,
        char* galarme_etat_piste_fr8 = (char*) 0,
        char* galarme_etat_piste_fr9 = (char*) 0,
        char* galarme_etat_piste_fr10 = (char*) 0,
        char* galarme_etat_piste_code1 = (char*) 0,
        char* galarme_etat_piste_code2 = (char*) 0,
        char* galarme_etat_piste_code3 = (char*) 0,
        char* galarme_etat_piste_angl4 = (char*) 0,
        char* galarme_etat_piste_angl10 = (char*) 0,
        char* galarme_etat_piste_datalink4 = (char*) 0,
        char* galarme_etat_piste_datalink10 = (char*) 0,
        char* galarme_niv_transition = (char*) 0,
        char* galarme_indic_itineraire = (char*) 0,
        char* galarme_moyen_rad = (char*) 0,
        char* galarme_exploitation1 = (char*) 0,
        char* galarme_exploitation2 = (char*) 0,
        char* galarme_exploitation3 = (char*) 0,
        char* galarme_exploitation4 = (char*) 0,
        char* galarme_exploitation5 = (char*) 0,
        char* galarme_exploitation6 = (char*) 0,
        char* galarme_exploitation7 = (char*) 0,
        char* galarme_exploitation8 = (char*) 0,
        char* galarme_exploitation9 = (char*) 0,
        char* galarme_exploitation10 = (char*) 0,
        char* galarme_exploitation_code1 = (char*) 0,
        char* galarme_exploitation_code2 = (char*) 0,
        char* galarme_exploitation_code3 = (char*) 0,
        char* galarme_exploitation_angl4 = (char*) 0,
        char* galarme_exploitation_angl10 = (char*) 0,
        char* galarme_exploitation_datalink4 = (char*) 0,
        char* galarme_exploitation_datalink10 = (char*) 0,
        char* galarme_dir_vent_moy = (char*) 0,
        char* galarme_for_vent_moy = (char*) 0,
        char* galarme_vent_max = (char*) 0,
        char* galarme_dir_vent_moy2 = (char*) 0,
        char* galarme_for_vent_moy2 = (char*) 0,
        char* galarme_vent_max2 = (char*) 0,
        char* galarme_tair = (char*) 0,
        char* galarme_td = (char*) 0,
        char* galarme_qnh = (char*) 0,
        char* galarme_qfe = (char*) 0,
        char* galarme_qfe1 = (char*) 0,
        char* galarme_qfe2 = (char*) 0,
        char* galarme_qfe3 = (char*) 0,
        char* galarme_qfe4 = (char*) 0,
        char* galarme_clair = (char*) 0,
        char* galarme_cavok = (char*) 0,
        char* galarme_visi = (char*) 0,
        char* galarme_temps_present = (char*) 0,
        char* galarme_nuages1 = (char*) 0,
        char* galarme_nuages2 = (char*) 0,
        char* galarme_nuages3 = (char*) 0,
        char* galarme_nuages4 = (char*) 0,
        char* galarme_rens_sup = (char*) 0,
        char* galarme_rens_sup2 = (char*) 0,
        char* galarme_rens_sup3 = (char*) 0,
        char* galarme_rens_sup4 = (char*) 0,
        char* galarme_rens_sup5 = (char*) 0,
        char* galarme_rens_sup6 = (char*) 0,
        char* galarme_rens_sup7 = (char*) 0,
        char* galarme_rens_sup8 = (char*) 0,
        char* galarme_rens_sup9 = (char*) 0,
        char* galarme_rens_sup10 = (char*) 0,
        char* galarme_rens_sup_code1 = (char*) 0,
        char* galarme_rens_sup_code2 = (char*) 0,
        char* galarme_rens_sup_code3 = (char*) 0,
        char* galarme_rens_sup_angl2 = (char*) 0,
        char* galarme_rens_sup_angl10 = (char*) 0,
        char* galarme_rens_sup_datalink2 = (char*) 0,
        char* galarme_rens_sup_datalink10 = (char*) 0,
        int nqfu_en_service = 0,
        EMifg_qfu_en_serviceData** tqfu_en_service = (EMifg_qfu_en_serviceData**) 0,
        int nalarme_qfu_en_service = 0,
        EMifg_alarme_qfu_en_serviceData** talarme_qfu_en_service = (EMifg_alarme_qfu_en_serviceData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMinfoatisData(const EMinfoatisData_v3_0_0&);



    // Destructeur
    ~EMinfoatisData();


    // Constructeur de copie
    EMinfoatisData(const EMinfoatisData&);



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
    EMinfoatisData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gstatut_atis(EMstatut& statut) const;
    const char* lire_gstatut_atis() const;
    void ecrire_gstatut_atis(char* valeur, EMstatut& statut);
    void ecrire_gstatut_atis(char* valeur);

    const char* lire_gdate_enreg(EMstatut& statut) const;
    const char* lire_gdate_enreg() const;
    void ecrire_gdate_enreg(char* valeur, EMstatut& statut);
    void ecrire_gdate_enreg(char* valeur);

    const char* lire_galarme_horaire(EMstatut& statut) const;
    const char* lire_galarme_horaire() const;
    void ecrire_galarme_horaire(char* valeur, EMstatut& statut);
    void ecrire_galarme_horaire(char* valeur);

    const char* lire_glettre_atis(EMstatut& statut) const;
    const char* lire_glettre_atis() const;
    void ecrire_glettre_atis(char* valeur, EMstatut& statut);
    void ecrire_glettre_atis(char* valeur);

    const char* lire_gchoix_ecoute(EMstatut& statut) const;
    const char* lire_gchoix_ecoute() const;
    void ecrire_gchoix_ecoute(char* valeur, EMstatut& statut);
    void ecrire_gchoix_ecoute(char* valeur);

    const char* lire_gatis_est_suspendu(EMstatut& statut) const;
    const char* lire_gatis_est_suspendu() const;
    void ecrire_gatis_est_suspendu(char* valeur, EMstatut& statut);
    void ecrire_gatis_est_suspendu(char* valeur);

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

    const char* lire_getat_piste(EMstatut& statut) const;
    const char* lire_getat_piste() const;
    void ecrire_getat_piste(char* valeur, EMstatut& statut);
    void ecrire_getat_piste(char* valeur);

    const char* lire_getat_piste_fr2(EMstatut& statut) const;
    const char* lire_getat_piste_fr2() const;
    void ecrire_getat_piste_fr2(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr2(char* valeur);

    const char* lire_getat_piste_fr3(EMstatut& statut) const;
    const char* lire_getat_piste_fr3() const;
    void ecrire_getat_piste_fr3(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr3(char* valeur);

    const char* lire_getat_piste_fr4(EMstatut& statut) const;
    const char* lire_getat_piste_fr4() const;
    void ecrire_getat_piste_fr4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr4(char* valeur);

    const char* lire_getat_piste_fr5(EMstatut& statut) const;
    const char* lire_getat_piste_fr5() const;
    void ecrire_getat_piste_fr5(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr5(char* valeur);

    const char* lire_getat_piste_fr6(EMstatut& statut) const;
    const char* lire_getat_piste_fr6() const;
    void ecrire_getat_piste_fr6(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr6(char* valeur);

    const char* lire_getat_piste_fr7(EMstatut& statut) const;
    const char* lire_getat_piste_fr7() const;
    void ecrire_getat_piste_fr7(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr7(char* valeur);

    const char* lire_getat_piste_fr8(EMstatut& statut) const;
    const char* lire_getat_piste_fr8() const;
    void ecrire_getat_piste_fr8(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr8(char* valeur);

    const char* lire_getat_piste_fr9(EMstatut& statut) const;
    const char* lire_getat_piste_fr9() const;
    void ecrire_getat_piste_fr9(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr9(char* valeur);

    const char* lire_getat_piste_fr10(EMstatut& statut) const;
    const char* lire_getat_piste_fr10() const;
    void ecrire_getat_piste_fr10(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_fr10(char* valeur);

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

    const char* lire_getat_piste_code4(EMstatut& statut) const;
    const char* lire_getat_piste_code4() const;
    void ecrire_getat_piste_code4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code4(char* valeur);

    const char* lire_getat_piste_code5(EMstatut& statut) const;
    const char* lire_getat_piste_code5() const;
    void ecrire_getat_piste_code5(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code5(char* valeur);

    const char* lire_getat_piste_code6(EMstatut& statut) const;
    const char* lire_getat_piste_code6() const;
    void ecrire_getat_piste_code6(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code6(char* valeur);

    const char* lire_getat_piste_code7(EMstatut& statut) const;
    const char* lire_getat_piste_code7() const;
    void ecrire_getat_piste_code7(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code7(char* valeur);

    const char* lire_getat_piste_code8(EMstatut& statut) const;
    const char* lire_getat_piste_code8() const;
    void ecrire_getat_piste_code8(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code8(char* valeur);

    const char* lire_getat_piste_code9(EMstatut& statut) const;
    const char* lire_getat_piste_code9() const;
    void ecrire_getat_piste_code9(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code9(char* valeur);

    const char* lire_getat_piste_code10(EMstatut& statut) const;
    const char* lire_getat_piste_code10() const;
    void ecrire_getat_piste_code10(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_code10(char* valeur);

    const char* lire_getat_piste_angl4(EMstatut& statut) const;
    const char* lire_getat_piste_angl4() const;
    void ecrire_getat_piste_angl4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_angl4(char* valeur);

    const char* lire_getat_piste_angl10(EMstatut& statut) const;
    const char* lire_getat_piste_angl10() const;
    void ecrire_getat_piste_angl10(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_angl10(char* valeur);

    const char* lire_getat_piste_datalink1(EMstatut& statut) const;
    const char* lire_getat_piste_datalink1() const;
    void ecrire_getat_piste_datalink1(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink1(char* valeur);

    const char* lire_getat_piste_datalink2(EMstatut& statut) const;
    const char* lire_getat_piste_datalink2() const;
    void ecrire_getat_piste_datalink2(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink2(char* valeur);

    const char* lire_getat_piste_datalink3(EMstatut& statut) const;
    const char* lire_getat_piste_datalink3() const;
    void ecrire_getat_piste_datalink3(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink3(char* valeur);

    const char* lire_getat_piste_datalink4(EMstatut& statut) const;
    const char* lire_getat_piste_datalink4() const;
    void ecrire_getat_piste_datalink4(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink4(char* valeur);

    const char* lire_getat_piste_datalink5(EMstatut& statut) const;
    const char* lire_getat_piste_datalink5() const;
    void ecrire_getat_piste_datalink5(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink5(char* valeur);

    const char* lire_getat_piste_datalink6(EMstatut& statut) const;
    const char* lire_getat_piste_datalink6() const;
    void ecrire_getat_piste_datalink6(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink6(char* valeur);

    const char* lire_getat_piste_datalink7(EMstatut& statut) const;
    const char* lire_getat_piste_datalink7() const;
    void ecrire_getat_piste_datalink7(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink7(char* valeur);

    const char* lire_getat_piste_datalink8(EMstatut& statut) const;
    const char* lire_getat_piste_datalink8() const;
    void ecrire_getat_piste_datalink8(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink8(char* valeur);

    const char* lire_getat_piste_datalink9(EMstatut& statut) const;
    const char* lire_getat_piste_datalink9() const;
    void ecrire_getat_piste_datalink9(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink9(char* valeur);

    const char* lire_getat_piste_datalink10(EMstatut& statut) const;
    const char* lire_getat_piste_datalink10() const;
    void ecrire_getat_piste_datalink10(char* valeur, EMstatut& statut);
    void ecrire_getat_piste_datalink10(char* valeur);

    const char* lire_gniv_transition(EMstatut& statut) const;
    const char* lire_gniv_transition() const;
    void ecrire_gniv_transition(char* valeur, EMstatut& statut);
    void ecrire_gniv_transition(char* valeur);

    const char* lire_gindic_itineraire(EMstatut& statut) const;
    const char* lire_gindic_itineraire() const;
    void ecrire_gindic_itineraire(char* valeur, EMstatut& statut);
    void ecrire_gindic_itineraire(char* valeur);

    const char* lire_gmoyen_rad_filtre(EMstatut& statut) const;
    const char* lire_gmoyen_rad_filtre() const;
    void ecrire_gmoyen_rad_filtre(char* valeur, EMstatut& statut);
    void ecrire_gmoyen_rad_filtre(char* valeur);

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

    const char* lire_gexploitation5(EMstatut& statut) const;
    const char* lire_gexploitation5() const;
    void ecrire_gexploitation5(char* valeur, EMstatut& statut);
    void ecrire_gexploitation5(char* valeur);

    const char* lire_gexploitation6(EMstatut& statut) const;
    const char* lire_gexploitation6() const;
    void ecrire_gexploitation6(char* valeur, EMstatut& statut);
    void ecrire_gexploitation6(char* valeur);

    const char* lire_gexploitation7(EMstatut& statut) const;
    const char* lire_gexploitation7() const;
    void ecrire_gexploitation7(char* valeur, EMstatut& statut);
    void ecrire_gexploitation7(char* valeur);

    const char* lire_gexploitation8(EMstatut& statut) const;
    const char* lire_gexploitation8() const;
    void ecrire_gexploitation8(char* valeur, EMstatut& statut);
    void ecrire_gexploitation8(char* valeur);

    const char* lire_gexploitation9(EMstatut& statut) const;
    const char* lire_gexploitation9() const;
    void ecrire_gexploitation9(char* valeur, EMstatut& statut);
    void ecrire_gexploitation9(char* valeur);

    const char* lire_gexploitation10(EMstatut& statut) const;
    const char* lire_gexploitation10() const;
    void ecrire_gexploitation10(char* valeur, EMstatut& statut);
    void ecrire_gexploitation10(char* valeur);

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

    const char* lire_gexploitation_code4(EMstatut& statut) const;
    const char* lire_gexploitation_code4() const;
    void ecrire_gexploitation_code4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code4(char* valeur);

    const char* lire_gexploitation_code5(EMstatut& statut) const;
    const char* lire_gexploitation_code5() const;
    void ecrire_gexploitation_code5(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code5(char* valeur);

    const char* lire_gexploitation_code6(EMstatut& statut) const;
    const char* lire_gexploitation_code6() const;
    void ecrire_gexploitation_code6(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code6(char* valeur);

    const char* lire_gexploitation_code7(EMstatut& statut) const;
    const char* lire_gexploitation_code7() const;
    void ecrire_gexploitation_code7(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code7(char* valeur);

    const char* lire_gexploitation_code8(EMstatut& statut) const;
    const char* lire_gexploitation_code8() const;
    void ecrire_gexploitation_code8(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code8(char* valeur);

    const char* lire_gexploitation_code9(EMstatut& statut) const;
    const char* lire_gexploitation_code9() const;
    void ecrire_gexploitation_code9(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code9(char* valeur);

    const char* lire_gexploitation_code10(EMstatut& statut) const;
    const char* lire_gexploitation_code10() const;
    void ecrire_gexploitation_code10(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_code10(char* valeur);

    const char* lire_gexploitation_angl4(EMstatut& statut) const;
    const char* lire_gexploitation_angl4() const;
    void ecrire_gexploitation_angl4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_angl4(char* valeur);

    const char* lire_gexploitation_angl10(EMstatut& statut) const;
    const char* lire_gexploitation_angl10() const;
    void ecrire_gexploitation_angl10(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_angl10(char* valeur);

    const char* lire_gexploitation_datalink1(EMstatut& statut) const;
    const char* lire_gexploitation_datalink1() const;
    void ecrire_gexploitation_datalink1(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink1(char* valeur);

    const char* lire_gexploitation_datalink2(EMstatut& statut) const;
    const char* lire_gexploitation_datalink2() const;
    void ecrire_gexploitation_datalink2(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink2(char* valeur);

    const char* lire_gexploitation_datalink3(EMstatut& statut) const;
    const char* lire_gexploitation_datalink3() const;
    void ecrire_gexploitation_datalink3(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink3(char* valeur);

    const char* lire_gexploitation_datalink4(EMstatut& statut) const;
    const char* lire_gexploitation_datalink4() const;
    void ecrire_gexploitation_datalink4(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink4(char* valeur);

    const char* lire_gexploitation_datalink5(EMstatut& statut) const;
    const char* lire_gexploitation_datalink5() const;
    void ecrire_gexploitation_datalink5(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink5(char* valeur);

    const char* lire_gexploitation_datalink6(EMstatut& statut) const;
    const char* lire_gexploitation_datalink6() const;
    void ecrire_gexploitation_datalink6(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink6(char* valeur);

    const char* lire_gexploitation_datalink7(EMstatut& statut) const;
    const char* lire_gexploitation_datalink7() const;
    void ecrire_gexploitation_datalink7(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink7(char* valeur);

    const char* lire_gexploitation_datalink8(EMstatut& statut) const;
    const char* lire_gexploitation_datalink8() const;
    void ecrire_gexploitation_datalink8(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink8(char* valeur);

    const char* lire_gexploitation_datalink9(EMstatut& statut) const;
    const char* lire_gexploitation_datalink9() const;
    void ecrire_gexploitation_datalink9(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink9(char* valeur);

    const char* lire_gexploitation_datalink10(EMstatut& statut) const;
    const char* lire_gexploitation_datalink10() const;
    void ecrire_gexploitation_datalink10(char* valeur, EMstatut& statut);
    void ecrire_gexploitation_datalink10(char* valeur);

    const char* lire_gtexte_chef_de_quart(EMstatut& statut) const;
    const char* lire_gtexte_chef_de_quart() const;
    void ecrire_gtexte_chef_de_quart(char* valeur, EMstatut& statut);
    void ecrire_gtexte_chef_de_quart(char* valeur);

    const char* lire_gforce_vent_moyen(EMstatut& statut) const;
    const char* lire_gforce_vent_moyen() const;
    void ecrire_gforce_vent_moyen(char* valeur, EMstatut& statut);
    void ecrire_gforce_vent_moyen(char* valeur);

    const char* lire_gdir_vent_moyen(EMstatut& statut) const;
    const char* lire_gdir_vent_moyen() const;
    void ecrire_gdir_vent_moyen(char* valeur, EMstatut& statut);
    void ecrire_gdir_vent_moyen(char* valeur);

    const char* lire_gforce_vent_max(EMstatut& statut) const;
    const char* lire_gforce_vent_max() const;
    void ecrire_gforce_vent_max(char* valeur, EMstatut& statut);
    void ecrire_gforce_vent_max(char* valeur);

    const char* lire_gforce_vent_moyen2(EMstatut& statut) const;
    const char* lire_gforce_vent_moyen2() const;
    void ecrire_gforce_vent_moyen2(char* valeur, EMstatut& statut);
    void ecrire_gforce_vent_moyen2(char* valeur);

    const char* lire_gdir_vent_moyen2(EMstatut& statut) const;
    const char* lire_gdir_vent_moyen2() const;
    void ecrire_gdir_vent_moyen2(char* valeur, EMstatut& statut);
    void ecrire_gdir_vent_moyen2(char* valeur);

    const char* lire_gforce_vent_max2(EMstatut& statut) const;
    const char* lire_gforce_vent_max2() const;
    void ecrire_gforce_vent_max2(char* valeur, EMstatut& statut);
    void ecrire_gforce_vent_max2(char* valeur);

    const char* lire_gtair(EMstatut& statut) const;
    const char* lire_gtair() const;
    void ecrire_gtair(char* valeur, EMstatut& statut);
    void ecrire_gtair(char* valeur);

    const char* lire_gtd(EMstatut& statut) const;
    const char* lire_gtd() const;
    void ecrire_gtd(char* valeur, EMstatut& statut);
    void ecrire_gtd(char* valeur);

    const char* lire_gqnh(EMstatut& statut) const;
    const char* lire_gqnh() const;
    void ecrire_gqnh(char* valeur, EMstatut& statut);
    void ecrire_gqnh(char* valeur);

    const char* lire_gqfe(EMstatut& statut) const;
    const char* lire_gqfe() const;
    void ecrire_gqfe(char* valeur, EMstatut& statut);
    void ecrire_gqfe(char* valeur);

    const char* lire_gqfe1(EMstatut& statut) const;
    const char* lire_gqfe1() const;
    void ecrire_gqfe1(char* valeur, EMstatut& statut);
    void ecrire_gqfe1(char* valeur);

    const char* lire_gqfe2(EMstatut& statut) const;
    const char* lire_gqfe2() const;
    void ecrire_gqfe2(char* valeur, EMstatut& statut);
    void ecrire_gqfe2(char* valeur);

    const char* lire_gqfe3(EMstatut& statut) const;
    const char* lire_gqfe3() const;
    void ecrire_gqfe3(char* valeur, EMstatut& statut);
    void ecrire_gqfe3(char* valeur);

    const char* lire_gqfe4(EMstatut& statut) const;
    const char* lire_gqfe4() const;
    void ecrire_gqfe4(char* valeur, EMstatut& statut);
    void ecrire_gqfe4(char* valeur);

    const char* lire_gclair(EMstatut& statut) const;
    const char* lire_gclair() const;
    void ecrire_gclair(char* valeur, EMstatut& statut);
    void ecrire_gclair(char* valeur);

    const char* lire_gorigine_info_tour(EMstatut& statut) const;
    const char* lire_gorigine_info_tour() const;
    void ecrire_gorigine_info_tour(char* valeur, EMstatut& statut);
    void ecrire_gorigine_info_tour(char* valeur);

    const char* lire_gcavok(EMstatut& statut) const;
    const char* lire_gcavok() const;
    void ecrire_gcavok(char* valeur, EMstatut& statut);
    void ecrire_gcavok(char* valeur);

    const char* lire_gvisi(EMstatut& statut) const;
    const char* lire_gvisi() const;
    void ecrire_gvisi(char* valeur, EMstatut& statut);
    void ecrire_gvisi(char* valeur);

    const char* lire_gtemps_present(EMstatut& statut) const;
    const char* lire_gtemps_present() const;
    void ecrire_gtemps_present(char* valeur, EMstatut& statut);
    void ecrire_gtemps_present(char* valeur);

    const char* lire_gnuages1(EMstatut& statut) const;
    const char* lire_gnuages1() const;
    void ecrire_gnuages1(char* valeur, EMstatut& statut);
    void ecrire_gnuages1(char* valeur);

    const char* lire_gnuages2(EMstatut& statut) const;
    const char* lire_gnuages2() const;
    void ecrire_gnuages2(char* valeur, EMstatut& statut);
    void ecrire_gnuages2(char* valeur);

    const char* lire_gnuages3(EMstatut& statut) const;
    const char* lire_gnuages3() const;
    void ecrire_gnuages3(char* valeur, EMstatut& statut);
    void ecrire_gnuages3(char* valeur);

    const char* lire_gnuages4(EMstatut& statut) const;
    const char* lire_gnuages4() const;
    void ecrire_gnuages4(char* valeur, EMstatut& statut);
    void ecrire_gnuages4(char* valeur);

    const char* lire_grens_sup(EMstatut& statut) const;
    const char* lire_grens_sup() const;
    void ecrire_grens_sup(char* valeur, EMstatut& statut);
    void ecrire_grens_sup(char* valeur);

    const char* lire_grens_sup2(EMstatut& statut) const;
    const char* lire_grens_sup2() const;
    void ecrire_grens_sup2(char* valeur, EMstatut& statut);
    void ecrire_grens_sup2(char* valeur);

    const char* lire_grens_sup3(EMstatut& statut) const;
    const char* lire_grens_sup3() const;
    void ecrire_grens_sup3(char* valeur, EMstatut& statut);
    void ecrire_grens_sup3(char* valeur);

    const char* lire_grens_sup4(EMstatut& statut) const;
    const char* lire_grens_sup4() const;
    void ecrire_grens_sup4(char* valeur, EMstatut& statut);
    void ecrire_grens_sup4(char* valeur);

    const char* lire_grens_sup5(EMstatut& statut) const;
    const char* lire_grens_sup5() const;
    void ecrire_grens_sup5(char* valeur, EMstatut& statut);
    void ecrire_grens_sup5(char* valeur);

    const char* lire_grens_sup6(EMstatut& statut) const;
    const char* lire_grens_sup6() const;
    void ecrire_grens_sup6(char* valeur, EMstatut& statut);
    void ecrire_grens_sup6(char* valeur);

    const char* lire_grens_sup7(EMstatut& statut) const;
    const char* lire_grens_sup7() const;
    void ecrire_grens_sup7(char* valeur, EMstatut& statut);
    void ecrire_grens_sup7(char* valeur);

    const char* lire_grens_sup8(EMstatut& statut) const;
    const char* lire_grens_sup8() const;
    void ecrire_grens_sup8(char* valeur, EMstatut& statut);
    void ecrire_grens_sup8(char* valeur);

    const char* lire_grens_sup9(EMstatut& statut) const;
    const char* lire_grens_sup9() const;
    void ecrire_grens_sup9(char* valeur, EMstatut& statut);
    void ecrire_grens_sup9(char* valeur);

    const char* lire_grens_sup10(EMstatut& statut) const;
    const char* lire_grens_sup10() const;
    void ecrire_grens_sup10(char* valeur, EMstatut& statut);
    void ecrire_grens_sup10(char* valeur);

    const char* lire_grens_sup_code1(EMstatut& statut) const;
    const char* lire_grens_sup_code1() const;
    void ecrire_grens_sup_code1(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code1(char* valeur);

    const char* lire_grens_sup_code2(EMstatut& statut) const;
    const char* lire_grens_sup_code2() const;
    void ecrire_grens_sup_code2(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code2(char* valeur);

    const char* lire_grens_sup_code3(EMstatut& statut) const;
    const char* lire_grens_sup_code3() const;
    void ecrire_grens_sup_code3(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code3(char* valeur);

    const char* lire_grens_sup_code4(EMstatut& statut) const;
    const char* lire_grens_sup_code4() const;
    void ecrire_grens_sup_code4(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code4(char* valeur);

    const char* lire_grens_sup_code5(EMstatut& statut) const;
    const char* lire_grens_sup_code5() const;
    void ecrire_grens_sup_code5(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code5(char* valeur);

    const char* lire_grens_sup_code6(EMstatut& statut) const;
    const char* lire_grens_sup_code6() const;
    void ecrire_grens_sup_code6(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code6(char* valeur);

    const char* lire_grens_sup_code7(EMstatut& statut) const;
    const char* lire_grens_sup_code7() const;
    void ecrire_grens_sup_code7(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code7(char* valeur);

    const char* lire_grens_sup_code8(EMstatut& statut) const;
    const char* lire_grens_sup_code8() const;
    void ecrire_grens_sup_code8(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code8(char* valeur);

    const char* lire_grens_sup_code9(EMstatut& statut) const;
    const char* lire_grens_sup_code9() const;
    void ecrire_grens_sup_code9(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code9(char* valeur);

    const char* lire_grens_sup_code10(EMstatut& statut) const;
    const char* lire_grens_sup_code10() const;
    void ecrire_grens_sup_code10(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_code10(char* valeur);

    const char* lire_grens_sup_angl2(EMstatut& statut) const;
    const char* lire_grens_sup_angl2() const;
    void ecrire_grens_sup_angl2(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_angl2(char* valeur);

    const char* lire_grens_sup_angl10(EMstatut& statut) const;
    const char* lire_grens_sup_angl10() const;
    void ecrire_grens_sup_angl10(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_angl10(char* valeur);

    const char* lire_grens_sup_datalink1(EMstatut& statut) const;
    const char* lire_grens_sup_datalink1() const;
    void ecrire_grens_sup_datalink1(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink1(char* valeur);

    const char* lire_grens_sup_datalink2(EMstatut& statut) const;
    const char* lire_grens_sup_datalink2() const;
    void ecrire_grens_sup_datalink2(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink2(char* valeur);

    const char* lire_grens_sup_datalink3(EMstatut& statut) const;
    const char* lire_grens_sup_datalink3() const;
    void ecrire_grens_sup_datalink3(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink3(char* valeur);

    const char* lire_grens_sup_datalink4(EMstatut& statut) const;
    const char* lire_grens_sup_datalink4() const;
    void ecrire_grens_sup_datalink4(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink4(char* valeur);

    const char* lire_grens_sup_datalink5(EMstatut& statut) const;
    const char* lire_grens_sup_datalink5() const;
    void ecrire_grens_sup_datalink5(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink5(char* valeur);

    const char* lire_grens_sup_datalink6(EMstatut& statut) const;
    const char* lire_grens_sup_datalink6() const;
    void ecrire_grens_sup_datalink6(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink6(char* valeur);

    const char* lire_grens_sup_datalink7(EMstatut& statut) const;
    const char* lire_grens_sup_datalink7() const;
    void ecrire_grens_sup_datalink7(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink7(char* valeur);

    const char* lire_grens_sup_datalink8(EMstatut& statut) const;
    const char* lire_grens_sup_datalink8() const;
    void ecrire_grens_sup_datalink8(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink8(char* valeur);

    const char* lire_grens_sup_datalink9(EMstatut& statut) const;
    const char* lire_grens_sup_datalink9() const;
    void ecrire_grens_sup_datalink9(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink9(char* valeur);

    const char* lire_grens_sup_datalink10(EMstatut& statut) const;
    const char* lire_grens_sup_datalink10() const;
    void ecrire_grens_sup_datalink10(char* valeur, EMstatut& statut);
    void ecrire_grens_sup_datalink10(char* valeur);

    const char* lire_gtexte_clair_fr(EMstatut& statut) const;
    const char* lire_gtexte_clair_fr() const;
    void ecrire_gtexte_clair_fr(char* valeur, EMstatut& statut);
    void ecrire_gtexte_clair_fr(char* valeur);

    const char* lire_gtexte_clair_angl(EMstatut& statut) const;
    const char* lire_gtexte_clair_angl() const;
    void ecrire_gtexte_clair_angl(char* valeur, EMstatut& statut);
    void ecrire_gtexte_clair_angl(char* valeur);

    const char* lire_gtexte_clair_datalink(EMstatut& statut) const;
    const char* lire_gtexte_clair_datalink() const;
    void ecrire_gtexte_clair_datalink(char* valeur, EMstatut& statut);
    void ecrire_gtexte_clair_datalink(char* valeur);

    const char* lire_galarme_moyen_percee(EMstatut& statut) const;
    const char* lire_galarme_moyen_percee() const;
    void ecrire_galarme_moyen_percee(char* valeur, EMstatut& statut);
    void ecrire_galarme_moyen_percee(char* valeur);

    const char* lire_galarme_qfu_moyen_percee(EMstatut& statut) const;
    const char* lire_galarme_qfu_moyen_percee() const;
    void ecrire_galarme_qfu_moyen_percee(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfu_moyen_percee(char* valeur);

    const char* lire_galarme_qfu1(EMstatut& statut) const;
    const char* lire_galarme_qfu1() const;
    void ecrire_galarme_qfu1(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfu1(char* valeur);

    const char* lire_galarme_qfu2(EMstatut& statut) const;
    const char* lire_galarme_qfu2() const;
    void ecrire_galarme_qfu2(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfu2(char* valeur);

    const char* lire_galarme_etat_piste(EMstatut& statut) const;
    const char* lire_galarme_etat_piste() const;
    void ecrire_galarme_etat_piste(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste(char* valeur);

    const char* lire_galarme_etat_piste_fr2(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr2() const;
    void ecrire_galarme_etat_piste_fr2(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr2(char* valeur);

    const char* lire_galarme_etat_piste_fr3(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr3() const;
    void ecrire_galarme_etat_piste_fr3(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr3(char* valeur);

    const char* lire_galarme_etat_piste_fr4(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr4() const;
    void ecrire_galarme_etat_piste_fr4(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr4(char* valeur);

    const char* lire_galarme_etat_piste_fr5(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr5() const;
    void ecrire_galarme_etat_piste_fr5(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr5(char* valeur);

    const char* lire_galarme_etat_piste_fr6(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr6() const;
    void ecrire_galarme_etat_piste_fr6(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr6(char* valeur);

    const char* lire_galarme_etat_piste_fr7(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr7() const;
    void ecrire_galarme_etat_piste_fr7(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr7(char* valeur);

    const char* lire_galarme_etat_piste_fr8(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr8() const;
    void ecrire_galarme_etat_piste_fr8(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr8(char* valeur);

    const char* lire_galarme_etat_piste_fr9(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr9() const;
    void ecrire_galarme_etat_piste_fr9(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr9(char* valeur);

    const char* lire_galarme_etat_piste_fr10(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_fr10() const;
    void ecrire_galarme_etat_piste_fr10(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_fr10(char* valeur);

    const char* lire_galarme_etat_piste_code1(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_code1() const;
    void ecrire_galarme_etat_piste_code1(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_code1(char* valeur);

    const char* lire_galarme_etat_piste_code2(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_code2() const;
    void ecrire_galarme_etat_piste_code2(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_code2(char* valeur);

    const char* lire_galarme_etat_piste_code3(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_code3() const;
    void ecrire_galarme_etat_piste_code3(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_code3(char* valeur);

    const char* lire_galarme_etat_piste_angl4(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_angl4() const;
    void ecrire_galarme_etat_piste_angl4(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_angl4(char* valeur);

    const char* lire_galarme_etat_piste_angl10(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_angl10() const;
    void ecrire_galarme_etat_piste_angl10(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_angl10(char* valeur);

    const char* lire_galarme_etat_piste_datalink4(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_datalink4() const;
    void ecrire_galarme_etat_piste_datalink4(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_datalink4(char* valeur);

    const char* lire_galarme_etat_piste_datalink10(EMstatut& statut) const;
    const char* lire_galarme_etat_piste_datalink10() const;
    void ecrire_galarme_etat_piste_datalink10(char* valeur, EMstatut& statut);
    void ecrire_galarme_etat_piste_datalink10(char* valeur);

    const char* lire_galarme_niv_transition(EMstatut& statut) const;
    const char* lire_galarme_niv_transition() const;
    void ecrire_galarme_niv_transition(char* valeur, EMstatut& statut);
    void ecrire_galarme_niv_transition(char* valeur);

    const char* lire_galarme_indic_itineraire(EMstatut& statut) const;
    const char* lire_galarme_indic_itineraire() const;
    void ecrire_galarme_indic_itineraire(char* valeur, EMstatut& statut);
    void ecrire_galarme_indic_itineraire(char* valeur);

    const char* lire_galarme_moyen_rad(EMstatut& statut) const;
    const char* lire_galarme_moyen_rad() const;
    void ecrire_galarme_moyen_rad(char* valeur, EMstatut& statut);
    void ecrire_galarme_moyen_rad(char* valeur);

    const char* lire_galarme_exploitation1(EMstatut& statut) const;
    const char* lire_galarme_exploitation1() const;
    void ecrire_galarme_exploitation1(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation1(char* valeur);

    const char* lire_galarme_exploitation2(EMstatut& statut) const;
    const char* lire_galarme_exploitation2() const;
    void ecrire_galarme_exploitation2(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation2(char* valeur);

    const char* lire_galarme_exploitation3(EMstatut& statut) const;
    const char* lire_galarme_exploitation3() const;
    void ecrire_galarme_exploitation3(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation3(char* valeur);

    const char* lire_galarme_exploitation4(EMstatut& statut) const;
    const char* lire_galarme_exploitation4() const;
    void ecrire_galarme_exploitation4(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation4(char* valeur);

    const char* lire_galarme_exploitation5(EMstatut& statut) const;
    const char* lire_galarme_exploitation5() const;
    void ecrire_galarme_exploitation5(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation5(char* valeur);

    const char* lire_galarme_exploitation6(EMstatut& statut) const;
    const char* lire_galarme_exploitation6() const;
    void ecrire_galarme_exploitation6(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation6(char* valeur);

    const char* lire_galarme_exploitation7(EMstatut& statut) const;
    const char* lire_galarme_exploitation7() const;
    void ecrire_galarme_exploitation7(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation7(char* valeur);

    const char* lire_galarme_exploitation8(EMstatut& statut) const;
    const char* lire_galarme_exploitation8() const;
    void ecrire_galarme_exploitation8(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation8(char* valeur);

    const char* lire_galarme_exploitation9(EMstatut& statut) const;
    const char* lire_galarme_exploitation9() const;
    void ecrire_galarme_exploitation9(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation9(char* valeur);

    const char* lire_galarme_exploitation10(EMstatut& statut) const;
    const char* lire_galarme_exploitation10() const;
    void ecrire_galarme_exploitation10(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation10(char* valeur);

    const char* lire_galarme_exploitation_code1(EMstatut& statut) const;
    const char* lire_galarme_exploitation_code1() const;
    void ecrire_galarme_exploitation_code1(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_code1(char* valeur);

    const char* lire_galarme_exploitation_code2(EMstatut& statut) const;
    const char* lire_galarme_exploitation_code2() const;
    void ecrire_galarme_exploitation_code2(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_code2(char* valeur);

    const char* lire_galarme_exploitation_code3(EMstatut& statut) const;
    const char* lire_galarme_exploitation_code3() const;
    void ecrire_galarme_exploitation_code3(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_code3(char* valeur);

    const char* lire_galarme_exploitation_angl4(EMstatut& statut) const;
    const char* lire_galarme_exploitation_angl4() const;
    void ecrire_galarme_exploitation_angl4(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_angl4(char* valeur);

    const char* lire_galarme_exploitation_angl10(EMstatut& statut) const;
    const char* lire_galarme_exploitation_angl10() const;
    void ecrire_galarme_exploitation_angl10(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_angl10(char* valeur);

    const char* lire_galarme_exploitation_datalink4(EMstatut& statut) const;
    const char* lire_galarme_exploitation_datalink4() const;
    void ecrire_galarme_exploitation_datalink4(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_datalink4(char* valeur);

    const char* lire_galarme_exploitation_datalink10(EMstatut& statut) const;
    const char* lire_galarme_exploitation_datalink10() const;
    void ecrire_galarme_exploitation_datalink10(char* valeur, EMstatut& statut);
    void ecrire_galarme_exploitation_datalink10(char* valeur);

    const char* lire_galarme_dir_vent_moy(EMstatut& statut) const;
    const char* lire_galarme_dir_vent_moy() const;
    void ecrire_galarme_dir_vent_moy(char* valeur, EMstatut& statut);
    void ecrire_galarme_dir_vent_moy(char* valeur);

    const char* lire_galarme_for_vent_moy(EMstatut& statut) const;
    const char* lire_galarme_for_vent_moy() const;
    void ecrire_galarme_for_vent_moy(char* valeur, EMstatut& statut);
    void ecrire_galarme_for_vent_moy(char* valeur);

    const char* lire_galarme_vent_max(EMstatut& statut) const;
    const char* lire_galarme_vent_max() const;
    void ecrire_galarme_vent_max(char* valeur, EMstatut& statut);
    void ecrire_galarme_vent_max(char* valeur);

    const char* lire_galarme_dir_vent_moy2(EMstatut& statut) const;
    const char* lire_galarme_dir_vent_moy2() const;
    void ecrire_galarme_dir_vent_moy2(char* valeur, EMstatut& statut);
    void ecrire_galarme_dir_vent_moy2(char* valeur);

    const char* lire_galarme_for_vent_moy2(EMstatut& statut) const;
    const char* lire_galarme_for_vent_moy2() const;
    void ecrire_galarme_for_vent_moy2(char* valeur, EMstatut& statut);
    void ecrire_galarme_for_vent_moy2(char* valeur);

    const char* lire_galarme_vent_max2(EMstatut& statut) const;
    const char* lire_galarme_vent_max2() const;
    void ecrire_galarme_vent_max2(char* valeur, EMstatut& statut);
    void ecrire_galarme_vent_max2(char* valeur);

    const char* lire_galarme_tair(EMstatut& statut) const;
    const char* lire_galarme_tair() const;
    void ecrire_galarme_tair(char* valeur, EMstatut& statut);
    void ecrire_galarme_tair(char* valeur);

    const char* lire_galarme_td(EMstatut& statut) const;
    const char* lire_galarme_td() const;
    void ecrire_galarme_td(char* valeur, EMstatut& statut);
    void ecrire_galarme_td(char* valeur);

    const char* lire_galarme_qnh(EMstatut& statut) const;
    const char* lire_galarme_qnh() const;
    void ecrire_galarme_qnh(char* valeur, EMstatut& statut);
    void ecrire_galarme_qnh(char* valeur);

    const char* lire_galarme_qfe(EMstatut& statut) const;
    const char* lire_galarme_qfe() const;
    void ecrire_galarme_qfe(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfe(char* valeur);

    const char* lire_galarme_qfe1(EMstatut& statut) const;
    const char* lire_galarme_qfe1() const;
    void ecrire_galarme_qfe1(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfe1(char* valeur);

    const char* lire_galarme_qfe2(EMstatut& statut) const;
    const char* lire_galarme_qfe2() const;
    void ecrire_galarme_qfe2(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfe2(char* valeur);

    const char* lire_galarme_qfe3(EMstatut& statut) const;
    const char* lire_galarme_qfe3() const;
    void ecrire_galarme_qfe3(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfe3(char* valeur);

    const char* lire_galarme_qfe4(EMstatut& statut) const;
    const char* lire_galarme_qfe4() const;
    void ecrire_galarme_qfe4(char* valeur, EMstatut& statut);
    void ecrire_galarme_qfe4(char* valeur);

    const char* lire_galarme_clair(EMstatut& statut) const;
    const char* lire_galarme_clair() const;
    void ecrire_galarme_clair(char* valeur, EMstatut& statut);
    void ecrire_galarme_clair(char* valeur);

    const char* lire_galarme_cavok(EMstatut& statut) const;
    const char* lire_galarme_cavok() const;
    void ecrire_galarme_cavok(char* valeur, EMstatut& statut);
    void ecrire_galarme_cavok(char* valeur);

    const char* lire_galarme_visi(EMstatut& statut) const;
    const char* lire_galarme_visi() const;
    void ecrire_galarme_visi(char* valeur, EMstatut& statut);
    void ecrire_galarme_visi(char* valeur);

    const char* lire_galarme_temps_present(EMstatut& statut) const;
    const char* lire_galarme_temps_present() const;
    void ecrire_galarme_temps_present(char* valeur, EMstatut& statut);
    void ecrire_galarme_temps_present(char* valeur);

    const char* lire_galarme_nuages1(EMstatut& statut) const;
    const char* lire_galarme_nuages1() const;
    void ecrire_galarme_nuages1(char* valeur, EMstatut& statut);
    void ecrire_galarme_nuages1(char* valeur);

    const char* lire_galarme_nuages2(EMstatut& statut) const;
    const char* lire_galarme_nuages2() const;
    void ecrire_galarme_nuages2(char* valeur, EMstatut& statut);
    void ecrire_galarme_nuages2(char* valeur);

    const char* lire_galarme_nuages3(EMstatut& statut) const;
    const char* lire_galarme_nuages3() const;
    void ecrire_galarme_nuages3(char* valeur, EMstatut& statut);
    void ecrire_galarme_nuages3(char* valeur);

    const char* lire_galarme_nuages4(EMstatut& statut) const;
    const char* lire_galarme_nuages4() const;
    void ecrire_galarme_nuages4(char* valeur, EMstatut& statut);
    void ecrire_galarme_nuages4(char* valeur);

    const char* lire_galarme_rens_sup(EMstatut& statut) const;
    const char* lire_galarme_rens_sup() const;
    void ecrire_galarme_rens_sup(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup(char* valeur);

    const char* lire_galarme_rens_sup2(EMstatut& statut) const;
    const char* lire_galarme_rens_sup2() const;
    void ecrire_galarme_rens_sup2(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup2(char* valeur);

    const char* lire_galarme_rens_sup3(EMstatut& statut) const;
    const char* lire_galarme_rens_sup3() const;
    void ecrire_galarme_rens_sup3(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup3(char* valeur);

    const char* lire_galarme_rens_sup4(EMstatut& statut) const;
    const char* lire_galarme_rens_sup4() const;
    void ecrire_galarme_rens_sup4(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup4(char* valeur);

    const char* lire_galarme_rens_sup5(EMstatut& statut) const;
    const char* lire_galarme_rens_sup5() const;
    void ecrire_galarme_rens_sup5(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup5(char* valeur);

    const char* lire_galarme_rens_sup6(EMstatut& statut) const;
    const char* lire_galarme_rens_sup6() const;
    void ecrire_galarme_rens_sup6(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup6(char* valeur);

    const char* lire_galarme_rens_sup7(EMstatut& statut) const;
    const char* lire_galarme_rens_sup7() const;
    void ecrire_galarme_rens_sup7(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup7(char* valeur);

    const char* lire_galarme_rens_sup8(EMstatut& statut) const;
    const char* lire_galarme_rens_sup8() const;
    void ecrire_galarme_rens_sup8(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup8(char* valeur);

    const char* lire_galarme_rens_sup9(EMstatut& statut) const;
    const char* lire_galarme_rens_sup9() const;
    void ecrire_galarme_rens_sup9(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup9(char* valeur);

    const char* lire_galarme_rens_sup10(EMstatut& statut) const;
    const char* lire_galarme_rens_sup10() const;
    void ecrire_galarme_rens_sup10(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup10(char* valeur);

    const char* lire_galarme_rens_sup_code1(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_code1() const;
    void ecrire_galarme_rens_sup_code1(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_code1(char* valeur);

    const char* lire_galarme_rens_sup_code2(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_code2() const;
    void ecrire_galarme_rens_sup_code2(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_code2(char* valeur);

    const char* lire_galarme_rens_sup_code3(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_code3() const;
    void ecrire_galarme_rens_sup_code3(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_code3(char* valeur);

    const char* lire_galarme_rens_sup_angl2(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_angl2() const;
    void ecrire_galarme_rens_sup_angl2(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_angl2(char* valeur);

    const char* lire_galarme_rens_sup_angl10(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_angl10() const;
    void ecrire_galarme_rens_sup_angl10(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_angl10(char* valeur);

    const char* lire_galarme_rens_sup_datalink2(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_datalink2() const;
    void ecrire_galarme_rens_sup_datalink2(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_datalink2(char* valeur);

    const char* lire_galarme_rens_sup_datalink10(EMstatut& statut) const;
    const char* lire_galarme_rens_sup_datalink10() const;
    void ecrire_galarme_rens_sup_datalink10(char* valeur, EMstatut& statut);
    void ecrire_galarme_rens_sup_datalink10(char* valeur);

    int nombre_qfu_en_service(EMstatut& statut) const;
    int nombre_qfu_en_service() const;
    const EMifg_qfu_en_serviceData* lire_qfu_en_service(int nIndex, EMstatut& statut) const;
    const EMifg_qfu_en_serviceData* lire_qfu_en_service(int nIndex) const;
    int ajouter_qfu_en_service(EMifg_qfu_en_serviceData* elem, EMstatut& statut);
    int ajouter_qfu_en_service(EMifg_qfu_en_serviceData* elem);

    int nombre_alarme_qfu_en_service(EMstatut& statut) const;
    int nombre_alarme_qfu_en_service() const;
    const EMifg_alarme_qfu_en_serviceData* lire_alarme_qfu_en_service(int nIndex, EMstatut& statut) const;
    const EMifg_alarme_qfu_en_serviceData* lire_alarme_qfu_en_service(int nIndex) const;
    int ajouter_alarme_qfu_en_service(EMifg_alarme_qfu_en_serviceData* elem, EMstatut& statut);
    int ajouter_alarme_qfu_en_service(EMifg_alarme_qfu_en_serviceData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gstatut_atis;
    char*  m_gdate_enreg;
    char*  m_galarme_horaire;
    char*  m_glettre_atis;
    char*  m_gchoix_ecoute;
    char*  m_gatis_est_suspendu;
    char*  m_gmoyen_percee;
    char*  m_gqfu_moyen_percee;
    char*  m_gqfu1;
    char*  m_gqfu2;
    char*  m_getat_piste;
    char*  m_getat_piste_fr2;
    char*  m_getat_piste_fr3;
    char*  m_getat_piste_fr4;
    char*  m_getat_piste_fr5;
    char*  m_getat_piste_fr6;
    char*  m_getat_piste_fr7;
    char*  m_getat_piste_fr8;
    char*  m_getat_piste_fr9;
    char*  m_getat_piste_fr10;
    char*  m_getat_piste_code1;
    char*  m_getat_piste_code2;
    char*  m_getat_piste_code3;
    char*  m_getat_piste_code4;
    char*  m_getat_piste_code5;
    char*  m_getat_piste_code6;
    char*  m_getat_piste_code7;
    char*  m_getat_piste_code8;
    char*  m_getat_piste_code9;
    char*  m_getat_piste_code10;
    char*  m_getat_piste_angl4;
    char*  m_getat_piste_angl10;
    char*  m_getat_piste_datalink1;
    char*  m_getat_piste_datalink2;
    char*  m_getat_piste_datalink3;
    char*  m_getat_piste_datalink4;
    char*  m_getat_piste_datalink5;
    char*  m_getat_piste_datalink6;
    char*  m_getat_piste_datalink7;
    char*  m_getat_piste_datalink8;
    char*  m_getat_piste_datalink9;
    char*  m_getat_piste_datalink10;
    char*  m_gniv_transition;
    char*  m_gindic_itineraire;
    char*  m_gmoyen_rad_filtre;
    char*  m_gmoyen_rad_normal;
    char*  m_gexploitation1;
    char*  m_gexploitation2;
    char*  m_gexploitation3;
    char*  m_gexploitation4;
    char*  m_gexploitation5;
    char*  m_gexploitation6;
    char*  m_gexploitation7;
    char*  m_gexploitation8;
    char*  m_gexploitation9;
    char*  m_gexploitation10;
    char*  m_gexploitation_code1;
    char*  m_gexploitation_code2;
    char*  m_gexploitation_code3;
    char*  m_gexploitation_code4;
    char*  m_gexploitation_code5;
    char*  m_gexploitation_code6;
    char*  m_gexploitation_code7;
    char*  m_gexploitation_code8;
    char*  m_gexploitation_code9;
    char*  m_gexploitation_code10;
    char*  m_gexploitation_angl4;
    char*  m_gexploitation_angl10;
    char*  m_gexploitation_datalink1;
    char*  m_gexploitation_datalink2;
    char*  m_gexploitation_datalink3;
    char*  m_gexploitation_datalink4;
    char*  m_gexploitation_datalink5;
    char*  m_gexploitation_datalink6;
    char*  m_gexploitation_datalink7;
    char*  m_gexploitation_datalink8;
    char*  m_gexploitation_datalink9;
    char*  m_gexploitation_datalink10;
    char*  m_gtexte_chef_de_quart;
    char*  m_gforce_vent_moyen;
    char*  m_gdir_vent_moyen;
    char*  m_gforce_vent_max;
    char*  m_gforce_vent_moyen2;
    char*  m_gdir_vent_moyen2;
    char*  m_gforce_vent_max2;
    char*  m_gtair;
    char*  m_gtd;
    char*  m_gqnh;
    char*  m_gqfe;
    char*  m_gqfe1;
    char*  m_gqfe2;
    char*  m_gqfe3;
    char*  m_gqfe4;
    char*  m_gclair;
    char*  m_gorigine_info_tour;
    char*  m_gcavok;
    char*  m_gvisi;
    char*  m_gtemps_present;
    char*  m_gnuages1;
    char*  m_gnuages2;
    char*  m_gnuages3;
    char*  m_gnuages4;
    char*  m_grens_sup;
    char*  m_grens_sup2;
    char*  m_grens_sup3;
    char*  m_grens_sup4;
    char*  m_grens_sup5;
    char*  m_grens_sup6;
    char*  m_grens_sup7;
    char*  m_grens_sup8;
    char*  m_grens_sup9;
    char*  m_grens_sup10;
    char*  m_grens_sup_code1;
    char*  m_grens_sup_code2;
    char*  m_grens_sup_code3;
    char*  m_grens_sup_code4;
    char*  m_grens_sup_code5;
    char*  m_grens_sup_code6;
    char*  m_grens_sup_code7;
    char*  m_grens_sup_code8;
    char*  m_grens_sup_code9;
    char*  m_grens_sup_code10;
    char*  m_grens_sup_angl2;
    char*  m_grens_sup_angl10;
    char*  m_grens_sup_datalink1;
    char*  m_grens_sup_datalink2;
    char*  m_grens_sup_datalink3;
    char*  m_grens_sup_datalink4;
    char*  m_grens_sup_datalink5;
    char*  m_grens_sup_datalink6;
    char*  m_grens_sup_datalink7;
    char*  m_grens_sup_datalink8;
    char*  m_grens_sup_datalink9;
    char*  m_grens_sup_datalink10;
    char*  m_gtexte_clair_fr;
    char*  m_gtexte_clair_angl;
    char*  m_gtexte_clair_datalink;
    char*  m_galarme_moyen_percee;
    char*  m_galarme_qfu_moyen_percee;
    char*  m_galarme_qfu1;
    char*  m_galarme_qfu2;
    char*  m_galarme_etat_piste;
    char*  m_galarme_etat_piste_fr2;
    char*  m_galarme_etat_piste_fr3;
    char*  m_galarme_etat_piste_fr4;
    char*  m_galarme_etat_piste_fr5;
    char*  m_galarme_etat_piste_fr6;
    char*  m_galarme_etat_piste_fr7;
    char*  m_galarme_etat_piste_fr8;
    char*  m_galarme_etat_piste_fr9;
    char*  m_galarme_etat_piste_fr10;
    char*  m_galarme_etat_piste_code1;
    char*  m_galarme_etat_piste_code2;
    char*  m_galarme_etat_piste_code3;
    char*  m_galarme_etat_piste_angl4;
    char*  m_galarme_etat_piste_angl10;
    char*  m_galarme_etat_piste_datalink4;
    char*  m_galarme_etat_piste_datalink10;
    char*  m_galarme_niv_transition;
    char*  m_galarme_indic_itineraire;
    char*  m_galarme_moyen_rad;
    char*  m_galarme_exploitation1;
    char*  m_galarme_exploitation2;
    char*  m_galarme_exploitation3;
    char*  m_galarme_exploitation4;
    char*  m_galarme_exploitation5;
    char*  m_galarme_exploitation6;
    char*  m_galarme_exploitation7;
    char*  m_galarme_exploitation8;
    char*  m_galarme_exploitation9;
    char*  m_galarme_exploitation10;
    char*  m_galarme_exploitation_code1;
    char*  m_galarme_exploitation_code2;
    char*  m_galarme_exploitation_code3;
    char*  m_galarme_exploitation_angl4;
    char*  m_galarme_exploitation_angl10;
    char*  m_galarme_exploitation_datalink4;
    char*  m_galarme_exploitation_datalink10;
    char*  m_galarme_dir_vent_moy;
    char*  m_galarme_for_vent_moy;
    char*  m_galarme_vent_max;
    char*  m_galarme_dir_vent_moy2;
    char*  m_galarme_for_vent_moy2;
    char*  m_galarme_vent_max2;
    char*  m_galarme_tair;
    char*  m_galarme_td;
    char*  m_galarme_qnh;
    char*  m_galarme_qfe;
    char*  m_galarme_qfe1;
    char*  m_galarme_qfe2;
    char*  m_galarme_qfe3;
    char*  m_galarme_qfe4;
    char*  m_galarme_clair;
    char*  m_galarme_cavok;
    char*  m_galarme_visi;
    char*  m_galarme_temps_present;
    char*  m_galarme_nuages1;
    char*  m_galarme_nuages2;
    char*  m_galarme_nuages3;
    char*  m_galarme_nuages4;
    char*  m_galarme_rens_sup;
    char*  m_galarme_rens_sup2;
    char*  m_galarme_rens_sup3;
    char*  m_galarme_rens_sup4;
    char*  m_galarme_rens_sup5;
    char*  m_galarme_rens_sup6;
    char*  m_galarme_rens_sup7;
    char*  m_galarme_rens_sup8;
    char*  m_galarme_rens_sup9;
    char*  m_galarme_rens_sup10;
    char*  m_galarme_rens_sup_code1;
    char*  m_galarme_rens_sup_code2;
    char*  m_galarme_rens_sup_code3;
    char*  m_galarme_rens_sup_angl2;
    char*  m_galarme_rens_sup_angl10;
    char*  m_galarme_rens_sup_datalink2;
    char*  m_galarme_rens_sup_datalink10;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMifg_qfu_en_serviceData*  m_tqfu_en_service[EM_C_SIG_LISTE_QFU];
    int m_nqfu_en_service;            // Taille courante de m_tqfu_en_service

    EMifg_alarme_qfu_en_serviceData*  m_talarme_qfu_en_service[EM_C_SIG_LISTE_QFU];
    int m_nalarme_qfu_en_service;            // Taille courante de m_talarme_qfu_en_service


    // Ajoute sur le flux les attributs d'un objet EMinfoatisData.
    friend ostream& operator << (ostream& ostr, const EMinfoatisData& obj);


private:

    // Mesures de securite :
    EMinfoatisData& operator = (const EMinfoatisData&);
    int operator == (const EMinfoatisData&);
    int operator != (const EMinfoatisData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMinfoatisData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMinfoatisData.H
//------------------------------------------------------------------------------

