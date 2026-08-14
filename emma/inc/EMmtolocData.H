/*******************************************************************************
 * \file           EMmtolocData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmtolocData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmtoloc.data
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtolocData_H
#define __EMmtolocData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMmto_ventData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmtolocData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   mto
 *  \class   EMmtolocData
 *  \brief   Définition de la classe implémentant l'objet métier EMmtolocData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmtolocData
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
class EMmtolocData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmtolocData(
        char* gorigine_info = (char*) 0,
        char* goaci = (char*) 0,
        char* gqfu1_mto = (char*) 0,
        char* gqfu2_mto = (char*) 0,
        char* gdate_ref_auto = (char*) 0,
        char* getat_alerte_auto = (char*) 0,
        char* gdomaine = (char*) 0,
        EMmto_ventData* pventmoyen1_2 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmax1 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen1_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmin1_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen2_2 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmax2 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen2_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmin2_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen3_2 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmax3 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen3_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmin3_10 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmoyen4_2 = (EMmto_ventData*) 0,
        EMmto_ventData* pventmax4 = (EMmto_ventData*) 0,
        char* gqnh = (char*) 0,
        char* gqfe = (char*) 0,
        char* gqfe1 = (char*) 0,
        char* gqfe2 = (char*) 0,
        char* gtair = (char*) 0,
        char* gtpiste1 = (char*) 0,
        char* gtpiste2 = (char*) 0,
        char* gtd = (char*) 0,
        char* ghumidite = (char*) 0,
        char* ghbn1 = (char*) 0,
        char* ghbn2 = (char*) 0,
        char* gvimet = (char*) 0,
        char* gvmi = (char*) 0,
        char* gpvp1 = (char*) 0,
        char* gpvp2 = (char*) 0,
        char* gpvp3 = (char*) 0,
        char* glumbal = (char*) 0,
        char* gpta1 = (char*) 0,
        char* gpta2 = (char*) 0,
        char* gpta3 = (char*) 0,
        char* gdate_ref_clair = (char*) 0,
        char* gclair = (char*) 0,
        char* gdate_ref_tour_h = (char*) 0,
        char* getat_alerte_tour_h = (char*) 0,
        char* gorigine_info_tour = (char*) 0,
        char* gcavok = (char*) 0,
        char* gvisi = (char*) 0,
        char* gtemps_present = (char*) 0,
        char* gnuages1 = (char*) 0,
        char* gnuages2 = (char*) 0,
        char* gnuages3 = (char*) 0,
        char* gnuages4 = (char*) 0,
        char* grens_sup = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmtolocData(const EMmtolocData_v3_0_0&);



    // Destructeur
    ~EMmtolocData();


    // Constructeur de copie
    EMmtolocData(const EMmtolocData&);



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
    EMmtolocData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gorigine_info(EMstatut& statut) const;
    const char* lire_gorigine_info() const;
    void ecrire_gorigine_info(char* valeur, EMstatut& statut);
    void ecrire_gorigine_info(char* valeur);

    const char* lire_goaci(EMstatut& statut) const;
    const char* lire_goaci() const;
    void ecrire_goaci(char* valeur, EMstatut& statut);
    void ecrire_goaci(char* valeur);

    const char* lire_gqfu1_mto(EMstatut& statut) const;
    const char* lire_gqfu1_mto() const;
    void ecrire_gqfu1_mto(char* valeur, EMstatut& statut);
    void ecrire_gqfu1_mto(char* valeur);

    const char* lire_gqfu2_mto(EMstatut& statut) const;
    const char* lire_gqfu2_mto() const;
    void ecrire_gqfu2_mto(char* valeur, EMstatut& statut);
    void ecrire_gqfu2_mto(char* valeur);

    const char* lire_gdate_ref_auto(EMstatut& statut) const;
    const char* lire_gdate_ref_auto() const;
    void ecrire_gdate_ref_auto(char* valeur, EMstatut& statut);
    void ecrire_gdate_ref_auto(char* valeur);

    const char* lire_getat_alerte_auto(EMstatut& statut) const;
    const char* lire_getat_alerte_auto() const;
    void ecrire_getat_alerte_auto(char* valeur, EMstatut& statut);
    void ecrire_getat_alerte_auto(char* valeur);

    const char* lire_gdomaine(EMstatut& statut) const;
    const char* lire_gdomaine() const;
    void ecrire_gdomaine(char* valeur, EMstatut& statut);
    void ecrire_gdomaine(char* valeur);

    const EMmto_ventData* lire_pventmoyen1_2(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen1_2() const;
    void ecrire_pventmoyen1_2(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen1_2(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmax1(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmax1() const;
    void ecrire_pventmax1(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmax1(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen1_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen1_10() const;
    void ecrire_pventmoyen1_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen1_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmin1_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmin1_10() const;
    void ecrire_pventmin1_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmin1_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen2_2(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen2_2() const;
    void ecrire_pventmoyen2_2(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen2_2(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmax2(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmax2() const;
    void ecrire_pventmax2(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmax2(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen2_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen2_10() const;
    void ecrire_pventmoyen2_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen2_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmin2_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmin2_10() const;
    void ecrire_pventmin2_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmin2_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen3_2(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen3_2() const;
    void ecrire_pventmoyen3_2(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen3_2(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmax3(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmax3() const;
    void ecrire_pventmax3(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmax3(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen3_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen3_10() const;
    void ecrire_pventmoyen3_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen3_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmin3_10(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmin3_10() const;
    void ecrire_pventmin3_10(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmin3_10(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmoyen4_2(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmoyen4_2() const;
    void ecrire_pventmoyen4_2(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmoyen4_2(EMmto_ventData* valeur);

    const EMmto_ventData* lire_pventmax4(EMstatut& statut) const;
    const EMmto_ventData* lire_pventmax4() const;
    void ecrire_pventmax4(EMmto_ventData* valeur, EMstatut& statut);
    void ecrire_pventmax4(EMmto_ventData* valeur);

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

    const char* lire_gtair(EMstatut& statut) const;
    const char* lire_gtair() const;
    void ecrire_gtair(char* valeur, EMstatut& statut);
    void ecrire_gtair(char* valeur);

    const char* lire_gtpiste1(EMstatut& statut) const;
    const char* lire_gtpiste1() const;
    void ecrire_gtpiste1(char* valeur, EMstatut& statut);
    void ecrire_gtpiste1(char* valeur);

    const char* lire_gtpiste2(EMstatut& statut) const;
    const char* lire_gtpiste2() const;
    void ecrire_gtpiste2(char* valeur, EMstatut& statut);
    void ecrire_gtpiste2(char* valeur);

    const char* lire_gtd(EMstatut& statut) const;
    const char* lire_gtd() const;
    void ecrire_gtd(char* valeur, EMstatut& statut);
    void ecrire_gtd(char* valeur);

    const char* lire_ghumidite(EMstatut& statut) const;
    const char* lire_ghumidite() const;
    void ecrire_ghumidite(char* valeur, EMstatut& statut);
    void ecrire_ghumidite(char* valeur);

    const char* lire_ghbn1(EMstatut& statut) const;
    const char* lire_ghbn1() const;
    void ecrire_ghbn1(char* valeur, EMstatut& statut);
    void ecrire_ghbn1(char* valeur);

    const char* lire_ghbn2(EMstatut& statut) const;
    const char* lire_ghbn2() const;
    void ecrire_ghbn2(char* valeur, EMstatut& statut);
    void ecrire_ghbn2(char* valeur);

    const char* lire_gvimet(EMstatut& statut) const;
    const char* lire_gvimet() const;
    void ecrire_gvimet(char* valeur, EMstatut& statut);
    void ecrire_gvimet(char* valeur);

    const char* lire_gvmi(EMstatut& statut) const;
    const char* lire_gvmi() const;
    void ecrire_gvmi(char* valeur, EMstatut& statut);
    void ecrire_gvmi(char* valeur);

    const char* lire_gpvp1(EMstatut& statut) const;
    const char* lire_gpvp1() const;
    void ecrire_gpvp1(char* valeur, EMstatut& statut);
    void ecrire_gpvp1(char* valeur);

    const char* lire_gpvp2(EMstatut& statut) const;
    const char* lire_gpvp2() const;
    void ecrire_gpvp2(char* valeur, EMstatut& statut);
    void ecrire_gpvp2(char* valeur);

    const char* lire_gpvp3(EMstatut& statut) const;
    const char* lire_gpvp3() const;
    void ecrire_gpvp3(char* valeur, EMstatut& statut);
    void ecrire_gpvp3(char* valeur);

    const char* lire_glumbal(EMstatut& statut) const;
    const char* lire_glumbal() const;
    void ecrire_glumbal(char* valeur, EMstatut& statut);
    void ecrire_glumbal(char* valeur);

    const char* lire_gpta1(EMstatut& statut) const;
    const char* lire_gpta1() const;
    void ecrire_gpta1(char* valeur, EMstatut& statut);
    void ecrire_gpta1(char* valeur);

    const char* lire_gpta2(EMstatut& statut) const;
    const char* lire_gpta2() const;
    void ecrire_gpta2(char* valeur, EMstatut& statut);
    void ecrire_gpta2(char* valeur);

    const char* lire_gpta3(EMstatut& statut) const;
    const char* lire_gpta3() const;
    void ecrire_gpta3(char* valeur, EMstatut& statut);
    void ecrire_gpta3(char* valeur);

    const char* lire_gdate_ref_clair(EMstatut& statut) const;
    const char* lire_gdate_ref_clair() const;
    void ecrire_gdate_ref_clair(char* valeur, EMstatut& statut);
    void ecrire_gdate_ref_clair(char* valeur);

    const char* lire_gclair(EMstatut& statut) const;
    const char* lire_gclair() const;
    void ecrire_gclair(char* valeur, EMstatut& statut);
    void ecrire_gclair(char* valeur);

    const char* lire_gdate_ref_tour_h(EMstatut& statut) const;
    const char* lire_gdate_ref_tour_h() const;
    void ecrire_gdate_ref_tour_h(char* valeur, EMstatut& statut);
    void ecrire_gdate_ref_tour_h(char* valeur);

    const char* lire_getat_alerte_tour_h(EMstatut& statut) const;
    const char* lire_getat_alerte_tour_h() const;
    void ecrire_getat_alerte_tour_h(char* valeur, EMstatut& statut);
    void ecrire_getat_alerte_tour_h(char* valeur);

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



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gorigine_info;
    char*  m_goaci;
    char*  m_gqfu1_mto;
    char*  m_gqfu2_mto;
    char*  m_gdate_ref_auto;
    char*  m_getat_alerte_auto;
    char*  m_gdomaine;
    EMmto_ventData*  m_pventmoyen1_2;
    EMmto_ventData*  m_pventmax1;
    EMmto_ventData*  m_pventmoyen1_10;
    EMmto_ventData*  m_pventmin1_10;
    EMmto_ventData*  m_pventmoyen2_2;
    EMmto_ventData*  m_pventmax2;
    EMmto_ventData*  m_pventmoyen2_10;
    EMmto_ventData*  m_pventmin2_10;
    EMmto_ventData*  m_pventmoyen3_2;
    EMmto_ventData*  m_pventmax3;
    EMmto_ventData*  m_pventmoyen3_10;
    EMmto_ventData*  m_pventmin3_10;
    EMmto_ventData*  m_pventmoyen4_2;
    EMmto_ventData*  m_pventmax4;
    char*  m_gqnh;
    char*  m_gqfe;
    char*  m_gqfe1;
    char*  m_gqfe2;
    char*  m_gtair;
    char*  m_gtpiste1;
    char*  m_gtpiste2;
    char*  m_gtd;
    char*  m_ghumidite;
    char*  m_ghbn1;
    char*  m_ghbn2;
    char*  m_gvimet;
    char*  m_gvmi;
    char*  m_gpvp1;
    char*  m_gpvp2;
    char*  m_gpvp3;
    char*  m_glumbal;
    char*  m_gpta1;
    char*  m_gpta2;
    char*  m_gpta3;
    char*  m_gdate_ref_clair;
    char*  m_gclair;
    char*  m_gdate_ref_tour_h;
    char*  m_getat_alerte_tour_h;
    char*  m_gorigine_info_tour;
    char*  m_gcavok;
    char*  m_gvisi;
    char*  m_gtemps_present;
    char*  m_gnuages1;
    char*  m_gnuages2;
    char*  m_gnuages3;
    char*  m_gnuages4;
    char*  m_grens_sup;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMmtolocData.
    friend ostream& operator << (ostream& ostr, const EMmtolocData& obj);


private:

    // Mesures de securite :
    EMmtolocData& operator = (const EMmtolocData&);
    int operator == (const EMmtolocData&);
    int operator != (const EMmtolocData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmtolocData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtolocData.H
//------------------------------------------------------------------------------

