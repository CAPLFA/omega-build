/*******************************************************************************
 * \file           EMddv_complemtData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMddv_complemtData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMddv_complemt.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMddv_complemtData_H
#define __EMddv_complemtData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMddv_canotsData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMddv_complemtData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMddv_complemtData
 *  \brief   Définition de la classe implémentant l'objet métier EMddv_complemtData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMddv_complemtData
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
class EMddv_complemtData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMddv_complemtData(
        EMddv_canotsData* pcanots = (EMddv_canotsData*) 0,
        char* gautonomie = (char*) 0,
        char* gnbpers = (char*) 0,
        char* gradetres = (char*) 0,
        char* gsurvie = (char*) 0,
        char* ggilets = (char*) 0,
        char* gdescaero = (char*) 0,
        char* gremarques = (char*) 0,
        char* gpilote = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMddv_complemtData(const EMddv_complemtData_v3_0_0&);



    // Destructeur
    ~EMddv_complemtData();


    // Constructeur de copie
    EMddv_complemtData(const EMddv_complemtData&);



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
    EMddv_complemtData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const EMddv_canotsData* lire_pcanots(EMstatut& statut) const;
    const EMddv_canotsData* lire_pcanots() const;
    void ecrire_pcanots(EMddv_canotsData* valeur, EMstatut& statut);
    void ecrire_pcanots(EMddv_canotsData* valeur);

    const char* lire_gautonomie(EMstatut& statut) const;
    const char* lire_gautonomie() const;
    void ecrire_gautonomie(char* valeur, EMstatut& statut);
    void ecrire_gautonomie(char* valeur);

    const char* lire_gnbpers(EMstatut& statut) const;
    const char* lire_gnbpers() const;
    void ecrire_gnbpers(char* valeur, EMstatut& statut);
    void ecrire_gnbpers(char* valeur);

    const char* lire_gradetres(EMstatut& statut) const;
    const char* lire_gradetres() const;
    void ecrire_gradetres(char* valeur, EMstatut& statut);
    void ecrire_gradetres(char* valeur);

    const char* lire_gsurvie(EMstatut& statut) const;
    const char* lire_gsurvie() const;
    void ecrire_gsurvie(char* valeur, EMstatut& statut);
    void ecrire_gsurvie(char* valeur);

    const char* lire_ggilets(EMstatut& statut) const;
    const char* lire_ggilets() const;
    void ecrire_ggilets(char* valeur, EMstatut& statut);
    void ecrire_ggilets(char* valeur);

    const char* lire_gdescaero(EMstatut& statut) const;
    const char* lire_gdescaero() const;
    void ecrire_gdescaero(char* valeur, EMstatut& statut);
    void ecrire_gdescaero(char* valeur);

    const char* lire_gremarques(EMstatut& statut) const;
    const char* lire_gremarques() const;
    void ecrire_gremarques(char* valeur, EMstatut& statut);
    void ecrire_gremarques(char* valeur);

    const char* lire_gpilote(EMstatut& statut) const;
    const char* lire_gpilote() const;
    void ecrire_gpilote(char* valeur, EMstatut& statut);
    void ecrire_gpilote(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    EMddv_canotsData*  m_pcanots;
    char*  m_gautonomie;
    char*  m_gnbpers;
    char*  m_gradetres;
    char*  m_gsurvie;
    char*  m_ggilets;
    char*  m_gdescaero;
    char*  m_gremarques;
    char*  m_gpilote;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMddv_complemtData.
    friend ostream& operator << (ostream& ostr, const EMddv_complemtData& obj);


private:

    // Mesures de securite :
    EMddv_complemtData& operator = (const EMddv_complemtData&);
    int operator == (const EMddv_complemtData&);
    int operator != (const EMddv_complemtData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMddv_complemtData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMddv_complemtData.H
//------------------------------------------------------------------------------

