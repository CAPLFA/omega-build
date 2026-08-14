/*******************************************************************************
 * \file           EMrt_stripData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMrt_stripData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMrt_strip.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMrt_stripData_H
#define __EMrt_stripData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMrt_stripData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMrt_stripData
 *  \brief   Définition de la classe implémentant l'objet métier EMrt_stripData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMrt_stripData
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
class EMrt_stripData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMrt_stripData(
        char* gzzz = (char*) 0,
        char* gnom = (char*) 0,
        char* gdirection = (char*) 0,
        char* gpriorite = (char*) 0,
        char* gqfu = (char*) 0,
        char* gregle = (char*) 0,
        char* grfl_min = (char*) 0,
        char* grfl_max = (char*) 0,
        char* gcritere = (char*) 0,
        int nairway = 0,
        char** tairway = (char**) 0,
        int nliste_point = 0,
        char** tliste_point = (char**) 0,
        int ndestinataires_est = 0,
        char** tdestinataires_est = (char**) 0,
        int nliste_adep = 0,
        char** tliste_adep = (char**) 0,
        int nliste_ades = 0,
        char** tliste_ades = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMrt_stripData(const EMrt_stripData_v3_0_0&);



    // Destructeur
    ~EMrt_stripData();


    // Constructeur de copie
    EMrt_stripData(const EMrt_stripData&);



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
    EMrt_stripData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gzzz(EMstatut& statut) const;
    const char* lire_gzzz() const;
    void ecrire_gzzz(char* valeur, EMstatut& statut);
    void ecrire_gzzz(char* valeur);

    const char* lire_gnom(EMstatut& statut) const;
    const char* lire_gnom() const;
    void ecrire_gnom(char* valeur, EMstatut& statut);
    void ecrire_gnom(char* valeur);

    const char* lire_gdirection(EMstatut& statut) const;
    const char* lire_gdirection() const;
    void ecrire_gdirection(char* valeur, EMstatut& statut);
    void ecrire_gdirection(char* valeur);

    const char* lire_gpriorite(EMstatut& statut) const;
    const char* lire_gpriorite() const;
    void ecrire_gpriorite(char* valeur, EMstatut& statut);
    void ecrire_gpriorite(char* valeur);

    const char* lire_gqfu(EMstatut& statut) const;
    const char* lire_gqfu() const;
    void ecrire_gqfu(char* valeur, EMstatut& statut);
    void ecrire_gqfu(char* valeur);

    const char* lire_gregle(EMstatut& statut) const;
    const char* lire_gregle() const;
    void ecrire_gregle(char* valeur, EMstatut& statut);
    void ecrire_gregle(char* valeur);

    const char* lire_grfl_min(EMstatut& statut) const;
    const char* lire_grfl_min() const;
    void ecrire_grfl_min(char* valeur, EMstatut& statut);
    void ecrire_grfl_min(char* valeur);

    const char* lire_grfl_max(EMstatut& statut) const;
    const char* lire_grfl_max() const;
    void ecrire_grfl_max(char* valeur, EMstatut& statut);
    void ecrire_grfl_max(char* valeur);

    const char* lire_gcritere(EMstatut& statut) const;
    const char* lire_gcritere() const;
    void ecrire_gcritere(char* valeur, EMstatut& statut);
    void ecrire_gcritere(char* valeur);

    int nombre_airway(EMstatut& statut) const;
    int nombre_airway() const;
    const char* lire_airway(int nIndex, EMstatut& statut) const;
    const char* lire_airway(int nIndex) const;
    int ajouter_airway(char* elem, EMstatut& statut);
    int ajouter_airway(char* elem);

    int nombre_liste_point(EMstatut& statut) const;
    int nombre_liste_point() const;
    const char* lire_liste_point(int nIndex, EMstatut& statut) const;
    const char* lire_liste_point(int nIndex) const;
    int ajouter_liste_point(char* elem, EMstatut& statut);
    int ajouter_liste_point(char* elem);

    int nombre_destinataires_est(EMstatut& statut) const;
    int nombre_destinataires_est() const;
    const char* lire_destinataires_est(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires_est(int nIndex) const;
    int ajouter_destinataires_est(char* elem, EMstatut& statut);
    int ajouter_destinataires_est(char* elem);

    int nombre_liste_adep(EMstatut& statut) const;
    int nombre_liste_adep() const;
    const char* lire_liste_adep(int nIndex, EMstatut& statut) const;
    const char* lire_liste_adep(int nIndex) const;
    int ajouter_liste_adep(char* elem, EMstatut& statut);
    int ajouter_liste_adep(char* elem);

    int nombre_liste_ades(EMstatut& statut) const;
    int nombre_liste_ades() const;
    const char* lire_liste_ades(int nIndex, EMstatut& statut) const;
    const char* lire_liste_ades(int nIndex) const;
    int ajouter_liste_ades(char* elem, EMstatut& statut);
    int ajouter_liste_ades(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gzzz;
    char*  m_gnom;
    char*  m_gdirection;
    char*  m_gpriorite;
    char*  m_gqfu;
    char*  m_gregle;
    char*  m_grfl_min;
    char*  m_grfl_max;
    char*  m_gcritere;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tairway[EM_C_SIG_AIRWAY];
    int m_nairway;            // Taille courante de m_tairway

    char*  m_tliste_point[EM_C_SIG_LISTE_POINT];
    int m_nliste_point;            // Taille courante de m_tliste_point

    char*  m_tdestinataires_est[EM_C_SIG_DEST_EST];
    int m_ndestinataires_est;            // Taille courante de m_tdestinataires_est

    char*  m_tliste_adep[EM_C_SIG_NB_ADEP_ROUTE_STRIP];
    int m_nliste_adep;            // Taille courante de m_tliste_adep

    char*  m_tliste_ades[EM_C_SIG_NB_ADES_ROUTE_STRIP];
    int m_nliste_ades;            // Taille courante de m_tliste_ades


    // Ajoute sur le flux les attributs d'un objet EMrt_stripData.
    friend ostream& operator << (ostream& ostr, const EMrt_stripData& obj);


private:

    // Mesures de securite :
    EMrt_stripData& operator = (const EMrt_stripData&);
    int operator == (const EMrt_stripData&);
    int operator != (const EMrt_stripData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMrt_stripData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMrt_stripData.H
//------------------------------------------------------------------------------

