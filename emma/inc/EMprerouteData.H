/*******************************************************************************
 * \file           EMprerouteData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMprerouteData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpreroute.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMprerouteData_H
#define __EMprerouteData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMprerouteData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMprerouteData
 *  \brief   Définition de la classe implémentant l'objet métier EMprerouteData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMprerouteData
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
class EMprerouteData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMprerouteData(
        char* gaerod_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gid_route = (char*) 0,
        char* groute = (char*) 0,
        char* gplancher = (char*) 0,
        char* gplafond = (char*) 0,
        char* gcomment = (char*) 0,
        char cbourrage = (char) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMprerouteData(const EMprerouteData_v3_0_0&);



    // Destructeur
    ~EMprerouteData();


    // Constructeur de copie
    EMprerouteData(const EMprerouteData&);



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
    EMprerouteData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gid_route(EMstatut& statut) const;
    const char* lire_gid_route() const;
    void ecrire_gid_route(char* valeur, EMstatut& statut);
    void ecrire_gid_route(char* valeur);

    const char* lire_groute(EMstatut& statut) const;
    const char* lire_groute() const;
    void ecrire_groute(char* valeur, EMstatut& statut);
    void ecrire_groute(char* valeur);

    const char* lire_gplancher(EMstatut& statut) const;
    const char* lire_gplancher() const;
    void ecrire_gplancher(char* valeur, EMstatut& statut);
    void ecrire_gplancher(char* valeur);

    const char* lire_gplafond(EMstatut& statut) const;
    const char* lire_gplafond() const;
    void ecrire_gplafond(char* valeur, EMstatut& statut);
    void ecrire_gplafond(char* valeur);

    const char* lire_gcomment(EMstatut& statut) const;
    const char* lire_gcomment() const;
    void ecrire_gcomment(char* valeur, EMstatut& statut);
    void ecrire_gcomment(char* valeur);

    char lire_cbourrage(EMstatut& statut) const;
    char lire_cbourrage() const;
    void ecrire_cbourrage(const char valeur, EMstatut& statut);
    void ecrire_cbourrage(const char valeur);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gaerod_dep;
    char*  m_gaerod_dest;
    char*  m_gid_route;
    char*  m_groute;
    char*  m_gplancher;
    char*  m_gplafond;
    char*  m_gcomment;
    char  m_cbourrage;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMprerouteData.
    friend ostream& operator << (ostream& ostr, const EMprerouteData& obj);


private:

    // Mesures de securite :
    EMprerouteData& operator = (const EMprerouteData&);
    int operator == (const EMprerouteData&);
    int operator != (const EMprerouteData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMprerouteData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMprerouteData.H
//------------------------------------------------------------------------------

