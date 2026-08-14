/*******************************************************************************
 * \file           EMroute_trkData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMroute_trkData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMroute_trk.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMroute_trkData_H
#define __EMroute_trkData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMroute_trkData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMroute_trkData
 *  \brief   Définition de la classe implémentant l'objet métier EMroute_trkData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMroute_trkData
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
class EMroute_trkData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMroute_trkData(
        char* gzzz = (char*) 0,
        char* gnom = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gdebut_valid = (char*) 0,
        char* gfin_valid = (char*) 0,
        char* ganticip_est = (char*) 0,
        int nroute_amont = 0,
        char** troute_amont = (char**) 0,
        int nroute_strip = 0,
        char** troute_strip = (char**) 0,
        int nroute_aval = 0,
        char** troute_aval = (char**) 0,
        int nacc_est = 0,
        char** tacc_est = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMroute_trkData(const EMroute_trkData_v3_0_0&);



    // Destructeur
    ~EMroute_trkData();


    // Constructeur de copie
    EMroute_trkData(const EMroute_trkData&);



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
    EMroute_trkData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


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

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gdebut_valid(EMstatut& statut) const;
    const char* lire_gdebut_valid() const;
    void ecrire_gdebut_valid(char* valeur, EMstatut& statut);
    void ecrire_gdebut_valid(char* valeur);

    const char* lire_gfin_valid(EMstatut& statut) const;
    const char* lire_gfin_valid() const;
    void ecrire_gfin_valid(char* valeur, EMstatut& statut);
    void ecrire_gfin_valid(char* valeur);

    const char* lire_ganticip_est(EMstatut& statut) const;
    const char* lire_ganticip_est() const;
    void ecrire_ganticip_est(char* valeur, EMstatut& statut);
    void ecrire_ganticip_est(char* valeur);

    int nombre_route_amont(EMstatut& statut) const;
    int nombre_route_amont() const;
    const char* lire_route_amont(int nIndex, EMstatut& statut) const;
    const char* lire_route_amont(int nIndex) const;
    int ajouter_route_amont(char* elem, EMstatut& statut);
    int ajouter_route_amont(char* elem);

    int nombre_route_strip(EMstatut& statut) const;
    int nombre_route_strip() const;
    const char* lire_route_strip(int nIndex, EMstatut& statut) const;
    const char* lire_route_strip(int nIndex) const;
    int ajouter_route_strip(char* elem, EMstatut& statut);
    int ajouter_route_strip(char* elem);

    int nombre_route_aval(EMstatut& statut) const;
    int nombre_route_aval() const;
    const char* lire_route_aval(int nIndex, EMstatut& statut) const;
    const char* lire_route_aval(int nIndex) const;
    int ajouter_route_aval(char* elem, EMstatut& statut);
    int ajouter_route_aval(char* elem);

    int nombre_acc_est(EMstatut& statut) const;
    int nombre_acc_est() const;
    const char* lire_acc_est(int nIndex, EMstatut& statut) const;
    const char* lire_acc_est(int nIndex) const;
    int ajouter_acc_est(char* elem, EMstatut& statut);
    int ajouter_acc_est(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gzzz;
    char*  m_gnom;
    char*  m_gaerod_dep;
    char*  m_gaerod_dest;
    char*  m_gdebut_valid;
    char*  m_gfin_valid;
    char*  m_ganticip_est;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_troute_amont[EM_ROUTE_AMONT_MAX_POINTS];
    int m_nroute_amont;            // Taille courante de m_troute_amont

    char*  m_troute_strip[EM_ROUTE_STRIP_MAX_POINTS];
    int m_nroute_strip;            // Taille courante de m_troute_strip

    char*  m_troute_aval[EM_ROUTE_AVALE_MAX_POINTS];
    int m_nroute_aval;            // Taille courante de m_troute_aval

    char*  m_tacc_est[EM_C_SIG_ACC_DEST_EST];
    int m_nacc_est;            // Taille courante de m_tacc_est


    // Ajoute sur le flux les attributs d'un objet EMroute_trkData.
    friend ostream& operator << (ostream& ostr, const EMroute_trkData& obj);


private:

    // Mesures de securite :
    EMroute_trkData& operator = (const EMroute_trkData&);
    int operator == (const EMroute_trkData&);
    int operator != (const EMroute_trkData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMroute_trkData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMroute_trkData.H
//------------------------------------------------------------------------------

