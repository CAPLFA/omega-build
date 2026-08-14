/*******************************************************************************
 * \file           EMmvt_routeData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmvt_routeData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmvt_route.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMmvt_routeData_H
#define __EMmvt_routeData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"
#include "EMmvt_point_routeData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmvt_routeData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMmvt_routeData
 *  \brief   Définition de la classe implémentant l'objet métier EMmvt_routeData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmvt_routeData
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
class EMmvt_routeData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmvt_routeData(
        char* gflag_flex = (char*) 0,
        char* gnom = (char*) 0,
        char* gdirection = (char*) 0,
        int nairway = 0,
        char** tairway = (char**) 0,
        int nliste_point_rt = 0,
        EMmvt_point_routeData** tliste_point_rt = (EMmvt_point_routeData**) 0,
        int ndestinataires_est = 0,
        char** tdestinataires_est = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmvt_routeData(const EMmvt_routeData_v3_0_0&);



    // Destructeur
    ~EMmvt_routeData();


    // Constructeur de copie
    EMmvt_routeData(const EMmvt_routeData&);



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
    EMmvt_routeData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gflag_flex(EMstatut& statut) const;
    const char* lire_gflag_flex() const;
    void ecrire_gflag_flex(char* valeur, EMstatut& statut);
    void ecrire_gflag_flex(char* valeur);

    const char* lire_gnom(EMstatut& statut) const;
    const char* lire_gnom() const;
    void ecrire_gnom(char* valeur, EMstatut& statut);
    void ecrire_gnom(char* valeur);

    const char* lire_gdirection(EMstatut& statut) const;
    const char* lire_gdirection() const;
    void ecrire_gdirection(char* valeur, EMstatut& statut);
    void ecrire_gdirection(char* valeur);

    int nombre_airway(EMstatut& statut) const;
    int nombre_airway() const;
    const char* lire_airway(int nIndex, EMstatut& statut) const;
    const char* lire_airway(int nIndex) const;
    int ajouter_airway(char* elem, EMstatut& statut);
    int ajouter_airway(char* elem);

    int nombre_liste_point_rt(EMstatut& statut) const;
    int nombre_liste_point_rt() const;
    const EMmvt_point_routeData* lire_liste_point_rt(int nIndex, EMstatut& statut) const;
    const EMmvt_point_routeData* lire_liste_point_rt(int nIndex) const;
    int ajouter_liste_point_rt(EMmvt_point_routeData* elem, EMstatut& statut);
    int ajouter_liste_point_rt(EMmvt_point_routeData* elem);

    int nombre_destinataires_est(EMstatut& statut) const;
    int nombre_destinataires_est() const;
    const char* lire_destinataires_est(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires_est(int nIndex) const;
    int ajouter_destinataires_est(char* elem, EMstatut& statut);
    int ajouter_destinataires_est(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gflag_flex;
    char*  m_gnom;
    char*  m_gdirection;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tairway[EM_C_SIG_LISTE_AIRWAY];
    int m_nairway;            // Taille courante de m_tairway

    EMmvt_point_routeData*  m_tliste_point_rt[EM_NB_POINTS];
    int m_nliste_point_rt;            // Taille courante de m_tliste_point_rt

    char*  m_tdestinataires_est[EM_C_SIG_LISTE_DEST_EST];
    int m_ndestinataires_est;            // Taille courante de m_tdestinataires_est


    // Ajoute sur le flux les attributs d'un objet EMmvt_routeData.
    friend ostream& operator << (ostream& ostr, const EMmvt_routeData& obj);


private:

    // Mesures de securite :
    EMmvt_routeData& operator = (const EMmvt_routeData&);
    int operator == (const EMmvt_routeData&);
    int operator != (const EMmvt_routeData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmvt_routeData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmvt_routeData.H
//------------------------------------------------------------------------------

