/*******************************************************************************
 * \file           EMddv_regulData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMddv_regulData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMddv_regul.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMddv_regulData_H
#define __EMddv_regulData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMddv_regulData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMddv_regulData
 *  \brief   Définition de la classe implémentant l'objet métier EMddv_regulData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMddv_regulData
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
class EMddv_regulData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMddv_regulData(
        char* getat = (char*) 0,
        char* gpoint = (char*) 0,
        char* gheure_demandee = (char*) 0,
        char* gheure_allouee = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMddv_regulData(const EMddv_regulData_v3_0_0&);



    // Destructeur
    ~EMddv_regulData();


    // Constructeur de copie
    EMddv_regulData(const EMddv_regulData&);



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
    EMddv_regulData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gpoint(EMstatut& statut) const;
    const char* lire_gpoint() const;
    void ecrire_gpoint(char* valeur, EMstatut& statut);
    void ecrire_gpoint(char* valeur);

    const char* lire_gheure_demandee(EMstatut& statut) const;
    const char* lire_gheure_demandee() const;
    void ecrire_gheure_demandee(char* valeur, EMstatut& statut);
    void ecrire_gheure_demandee(char* valeur);

    const char* lire_gheure_allouee(EMstatut& statut) const;
    const char* lire_gheure_allouee() const;
    void ecrire_gheure_allouee(char* valeur, EMstatut& statut);
    void ecrire_gheure_allouee(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_getat;
    char*  m_gpoint;
    char*  m_gheure_demandee;
    char*  m_gheure_allouee;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMddv_regulData.
    friend ostream& operator << (ostream& ostr, const EMddv_regulData& obj);


private:

    // Mesures de securite :
    EMddv_regulData& operator = (const EMddv_regulData&);
    int operator == (const EMddv_regulData&);
    int operator != (const EMddv_regulData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMddv_regulData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMddv_regulData.H
//------------------------------------------------------------------------------

