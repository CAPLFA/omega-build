/*******************************************************************************
 * \file           EMmtozoneData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmtozoneData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmtozone.data
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtozoneData_H
#define __EMmtozoneData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmtozoneData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   mto
 *  \class   EMmtozoneData
 *  \brief   Définition de la classe implémentant l'objet métier EMmtozoneData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmtozoneData
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
class EMmtozoneData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmtozoneData(
        char* gident_zone = (char*) 0,
        char* glieu = (char*) 0,
        char* grayon = (char*) 0,
        char* gdate_application = (char*) 0,
        char* gdebut_validite = (char*) 0,
        char* gfin_validite = (char*) 0,
        char* gobservation = (char*) 0,
        char* gvent_surface = (char*) 0,
        char* gvisibilite = (char*) 0,
        char* gnuages = (char*) 0,
        char* gtemps = (char*) 0,
        char* gisotherme_zero = (char*) 0,
        char* gdangers = (char*) 0,
        char* gevolutions = (char*) 0,
        char* gdate_enreg = (char*) 0,
        char* gnom_obs = (char*) 0,
        char* gstatut = (char*) 0,
        char* gdate_annul = (char*) 0,
        int nvent_altitude = 0,
        char** tvent_altitude = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmtozoneData(const EMmtozoneData_v3_0_0&);



    // Destructeur
    ~EMmtozoneData();


    // Constructeur de copie
    EMmtozoneData(const EMmtozoneData&);



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
    EMmtozoneData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gident_zone(EMstatut& statut) const;
    const char* lire_gident_zone() const;
    void ecrire_gident_zone(char* valeur, EMstatut& statut);
    void ecrire_gident_zone(char* valeur);

    const char* lire_glieu(EMstatut& statut) const;
    const char* lire_glieu() const;
    void ecrire_glieu(char* valeur, EMstatut& statut);
    void ecrire_glieu(char* valeur);

    const char* lire_grayon(EMstatut& statut) const;
    const char* lire_grayon() const;
    void ecrire_grayon(char* valeur, EMstatut& statut);
    void ecrire_grayon(char* valeur);

    const char* lire_gdate_application(EMstatut& statut) const;
    const char* lire_gdate_application() const;
    void ecrire_gdate_application(char* valeur, EMstatut& statut);
    void ecrire_gdate_application(char* valeur);

    const char* lire_gdebut_validite(EMstatut& statut) const;
    const char* lire_gdebut_validite() const;
    void ecrire_gdebut_validite(char* valeur, EMstatut& statut);
    void ecrire_gdebut_validite(char* valeur);

    const char* lire_gfin_validite(EMstatut& statut) const;
    const char* lire_gfin_validite() const;
    void ecrire_gfin_validite(char* valeur, EMstatut& statut);
    void ecrire_gfin_validite(char* valeur);

    const char* lire_gobservation(EMstatut& statut) const;
    const char* lire_gobservation() const;
    void ecrire_gobservation(char* valeur, EMstatut& statut);
    void ecrire_gobservation(char* valeur);

    const char* lire_gvent_surface(EMstatut& statut) const;
    const char* lire_gvent_surface() const;
    void ecrire_gvent_surface(char* valeur, EMstatut& statut);
    void ecrire_gvent_surface(char* valeur);

    const char* lire_gvisibilite(EMstatut& statut) const;
    const char* lire_gvisibilite() const;
    void ecrire_gvisibilite(char* valeur, EMstatut& statut);
    void ecrire_gvisibilite(char* valeur);

    const char* lire_gnuages(EMstatut& statut) const;
    const char* lire_gnuages() const;
    void ecrire_gnuages(char* valeur, EMstatut& statut);
    void ecrire_gnuages(char* valeur);

    const char* lire_gtemps(EMstatut& statut) const;
    const char* lire_gtemps() const;
    void ecrire_gtemps(char* valeur, EMstatut& statut);
    void ecrire_gtemps(char* valeur);

    const char* lire_gisotherme_zero(EMstatut& statut) const;
    const char* lire_gisotherme_zero() const;
    void ecrire_gisotherme_zero(char* valeur, EMstatut& statut);
    void ecrire_gisotherme_zero(char* valeur);

    const char* lire_gdangers(EMstatut& statut) const;
    const char* lire_gdangers() const;
    void ecrire_gdangers(char* valeur, EMstatut& statut);
    void ecrire_gdangers(char* valeur);

    const char* lire_gevolutions(EMstatut& statut) const;
    const char* lire_gevolutions() const;
    void ecrire_gevolutions(char* valeur, EMstatut& statut);
    void ecrire_gevolutions(char* valeur);

    const char* lire_gdate_enreg(EMstatut& statut) const;
    const char* lire_gdate_enreg() const;
    void ecrire_gdate_enreg(char* valeur, EMstatut& statut);
    void ecrire_gdate_enreg(char* valeur);

    const char* lire_gnom_obs(EMstatut& statut) const;
    const char* lire_gnom_obs() const;
    void ecrire_gnom_obs(char* valeur, EMstatut& statut);
    void ecrire_gnom_obs(char* valeur);

    const char* lire_gstatut(EMstatut& statut) const;
    const char* lire_gstatut() const;
    void ecrire_gstatut(char* valeur, EMstatut& statut);
    void ecrire_gstatut(char* valeur);

    const char* lire_gdate_annul(EMstatut& statut) const;
    const char* lire_gdate_annul() const;
    void ecrire_gdate_annul(char* valeur, EMstatut& statut);
    void ecrire_gdate_annul(char* valeur);

    int nombre_vent_altitude(EMstatut& statut) const;
    int nombre_vent_altitude() const;
    const char* lire_vent_altitude(int nIndex, EMstatut& statut) const;
    const char* lire_vent_altitude(int nIndex) const;
    int ajouter_vent_altitude(char* elem, EMstatut& statut);
    int ajouter_vent_altitude(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gident_zone;
    char*  m_glieu;
    char*  m_grayon;
    char*  m_gdate_application;
    char*  m_gdebut_validite;
    char*  m_gfin_validite;
    char*  m_gobservation;
    char*  m_gvent_surface;
    char*  m_gvisibilite;
    char*  m_gnuages;
    char*  m_gtemps;
    char*  m_gisotherme_zero;
    char*  m_gdangers;
    char*  m_gevolutions;
    char*  m_gdate_enreg;
    char*  m_gnom_obs;
    char*  m_gstatut;
    char*  m_gdate_annul;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tvent_altitude[EM_C_SIG_MTO_VENT_ALT];
    int m_nvent_altitude;            // Taille courante de m_tvent_altitude


    // Ajoute sur le flux les attributs d'un objet EMmtozoneData.
    friend ostream& operator << (ostream& ostr, const EMmtozoneData& obj);


private:

    // Mesures de securite :
    EMmtozoneData& operator = (const EMmtozoneData&);
    int operator == (const EMmtozoneData&);
    int operator != (const EMmtozoneData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmtozoneData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtozoneData.H
//------------------------------------------------------------------------------

