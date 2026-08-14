/*******************************************************************************
 * \file           EMaerodromeData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMaerodromeData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMaerodrome.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMaerodromeData_H
#define __EMaerodromeData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMaerodromeData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMaerodromeData
 *  \brief   Définition de la classe implémentant l'objet métier EMaerodromeData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMaerodromeData
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
class EMaerodromeData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMaerodromeData(
        char* gcode_oaci = (char*) 0,
        char* gnom_aerod = (char*) 0,
        char* glatitude = (char*) 0,
        char* glongitude = (char*) 0,
        char* gcomment = (char*) 0,
        char* galr_oaci = (char*) 0,
        char* gapp_oaci = (char*) 0,
        char* gbia_oaci = (char*) 0,
        char* gbdp_oaci = (char*) 0,
        char* gcom_oaci = (char*) 0,
        char* gmto_oaci = (char*) 0,
        char* gapp_adr = (char*) 0,
        char* gccr_adr = (char*) 0,
        char* gciv_adr = (char*) 0,
        char* gccs_adr = (char*) 0,
        char* gdcc_adr = (char*) 0,
        char* gdmc_adr = (char*) 0,
        char* gmil_adr = (char*) 0,
        char* gh_ouvert_p1 = (char*) 0,
        char* gh_ferm_p1 = (char*) 0,
        char* gh_ouvert_p2 = (char*) 0,
        char* gh_ferm_p2 = (char*) 0,
        char cbourrage = (char) 0,
        int nifr_adr = 0,
        char** tifr_adr = (char**) 0,
        int nvfr_adr = 0,
        char** tvfr_adr = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMaerodromeData(const EMaerodromeData_v3_0_0&);



    // Destructeur
    ~EMaerodromeData();


    // Constructeur de copie
    EMaerodromeData(const EMaerodromeData&);



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
    EMaerodromeData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gcode_oaci(EMstatut& statut) const;
    const char* lire_gcode_oaci() const;
    void ecrire_gcode_oaci(char* valeur, EMstatut& statut);
    void ecrire_gcode_oaci(char* valeur);

    const char* lire_gnom_aerod(EMstatut& statut) const;
    const char* lire_gnom_aerod() const;
    void ecrire_gnom_aerod(char* valeur, EMstatut& statut);
    void ecrire_gnom_aerod(char* valeur);

    const char* lire_glatitude(EMstatut& statut) const;
    const char* lire_glatitude() const;
    void ecrire_glatitude(char* valeur, EMstatut& statut);
    void ecrire_glatitude(char* valeur);

    const char* lire_glongitude(EMstatut& statut) const;
    const char* lire_glongitude() const;
    void ecrire_glongitude(char* valeur, EMstatut& statut);
    void ecrire_glongitude(char* valeur);

    const char* lire_gcomment(EMstatut& statut) const;
    const char* lire_gcomment() const;
    void ecrire_gcomment(char* valeur, EMstatut& statut);
    void ecrire_gcomment(char* valeur);

    const char* lire_galr_oaci(EMstatut& statut) const;
    const char* lire_galr_oaci() const;
    void ecrire_galr_oaci(char* valeur, EMstatut& statut);
    void ecrire_galr_oaci(char* valeur);

    const char* lire_gapp_oaci(EMstatut& statut) const;
    const char* lire_gapp_oaci() const;
    void ecrire_gapp_oaci(char* valeur, EMstatut& statut);
    void ecrire_gapp_oaci(char* valeur);

    const char* lire_gbia_oaci(EMstatut& statut) const;
    const char* lire_gbia_oaci() const;
    void ecrire_gbia_oaci(char* valeur, EMstatut& statut);
    void ecrire_gbia_oaci(char* valeur);

    const char* lire_gbdp_oaci(EMstatut& statut) const;
    const char* lire_gbdp_oaci() const;
    void ecrire_gbdp_oaci(char* valeur, EMstatut& statut);
    void ecrire_gbdp_oaci(char* valeur);

    const char* lire_gcom_oaci(EMstatut& statut) const;
    const char* lire_gcom_oaci() const;
    void ecrire_gcom_oaci(char* valeur, EMstatut& statut);
    void ecrire_gcom_oaci(char* valeur);

    const char* lire_gmto_oaci(EMstatut& statut) const;
    const char* lire_gmto_oaci() const;
    void ecrire_gmto_oaci(char* valeur, EMstatut& statut);
    void ecrire_gmto_oaci(char* valeur);

    const char* lire_gapp_adr(EMstatut& statut) const;
    const char* lire_gapp_adr() const;
    void ecrire_gapp_adr(char* valeur, EMstatut& statut);
    void ecrire_gapp_adr(char* valeur);

    const char* lire_gccr_adr(EMstatut& statut) const;
    const char* lire_gccr_adr() const;
    void ecrire_gccr_adr(char* valeur, EMstatut& statut);
    void ecrire_gccr_adr(char* valeur);

    const char* lire_gciv_adr(EMstatut& statut) const;
    const char* lire_gciv_adr() const;
    void ecrire_gciv_adr(char* valeur, EMstatut& statut);
    void ecrire_gciv_adr(char* valeur);

    const char* lire_gccs_adr(EMstatut& statut) const;
    const char* lire_gccs_adr() const;
    void ecrire_gccs_adr(char* valeur, EMstatut& statut);
    void ecrire_gccs_adr(char* valeur);

    const char* lire_gdcc_adr(EMstatut& statut) const;
    const char* lire_gdcc_adr() const;
    void ecrire_gdcc_adr(char* valeur, EMstatut& statut);
    void ecrire_gdcc_adr(char* valeur);

    const char* lire_gdmc_adr(EMstatut& statut) const;
    const char* lire_gdmc_adr() const;
    void ecrire_gdmc_adr(char* valeur, EMstatut& statut);
    void ecrire_gdmc_adr(char* valeur);

    const char* lire_gmil_adr(EMstatut& statut) const;
    const char* lire_gmil_adr() const;
    void ecrire_gmil_adr(char* valeur, EMstatut& statut);
    void ecrire_gmil_adr(char* valeur);

    const char* lire_gh_ouvert_p1(EMstatut& statut) const;
    const char* lire_gh_ouvert_p1() const;
    void ecrire_gh_ouvert_p1(char* valeur, EMstatut& statut);
    void ecrire_gh_ouvert_p1(char* valeur);

    const char* lire_gh_ferm_p1(EMstatut& statut) const;
    const char* lire_gh_ferm_p1() const;
    void ecrire_gh_ferm_p1(char* valeur, EMstatut& statut);
    void ecrire_gh_ferm_p1(char* valeur);

    const char* lire_gh_ouvert_p2(EMstatut& statut) const;
    const char* lire_gh_ouvert_p2() const;
    void ecrire_gh_ouvert_p2(char* valeur, EMstatut& statut);
    void ecrire_gh_ouvert_p2(char* valeur);

    const char* lire_gh_ferm_p2(EMstatut& statut) const;
    const char* lire_gh_ferm_p2() const;
    void ecrire_gh_ferm_p2(char* valeur, EMstatut& statut);
    void ecrire_gh_ferm_p2(char* valeur);

    char lire_cbourrage(EMstatut& statut) const;
    char lire_cbourrage() const;
    void ecrire_cbourrage(const char valeur, EMstatut& statut);
    void ecrire_cbourrage(const char valeur);

    int nombre_ifr_adr(EMstatut& statut) const;
    int nombre_ifr_adr() const;
    const char* lire_ifr_adr(int nIndex, EMstatut& statut) const;
    const char* lire_ifr_adr(int nIndex) const;
    int ajouter_ifr_adr(char* elem, EMstatut& statut);
    int ajouter_ifr_adr(char* elem);

    int nombre_vfr_adr(EMstatut& statut) const;
    int nombre_vfr_adr() const;
    const char* lire_vfr_adr(int nIndex, EMstatut& statut) const;
    const char* lire_vfr_adr(int nIndex) const;
    int ajouter_vfr_adr(char* elem, EMstatut& statut);
    int ajouter_vfr_adr(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gcode_oaci;
    char*  m_gnom_aerod;
    char*  m_glatitude;
    char*  m_glongitude;
    char*  m_gcomment;
    char*  m_galr_oaci;
    char*  m_gapp_oaci;
    char*  m_gbia_oaci;
    char*  m_gbdp_oaci;
    char*  m_gcom_oaci;
    char*  m_gmto_oaci;
    char*  m_gapp_adr;
    char*  m_gccr_adr;
    char*  m_gciv_adr;
    char*  m_gccs_adr;
    char*  m_gdcc_adr;
    char*  m_gdmc_adr;
    char*  m_gmil_adr;
    char*  m_gh_ouvert_p1;
    char*  m_gh_ferm_p1;
    char*  m_gh_ouvert_p2;
    char*  m_gh_ferm_p2;
    char  m_cbourrage;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tifr_adr[EM_C_SIG_AERODROME_ADR];
    int m_nifr_adr;            // Taille courante de m_tifr_adr

    char*  m_tvfr_adr[EM_C_SIG_AERODROME_ADR];
    int m_nvfr_adr;            // Taille courante de m_tvfr_adr


    // Ajoute sur le flux les attributs d'un objet EMaerodromeData.
    friend ostream& operator << (ostream& ostr, const EMaerodromeData& obj);


private:

    // Mesures de securite :
    EMaerodromeData& operator = (const EMaerodromeData&);
    int operator == (const EMaerodromeData&);
    int operator != (const EMaerodromeData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMaerodromeData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMaerodromeData.H
//------------------------------------------------------------------------------

