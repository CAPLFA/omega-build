/*******************************************************************************
 * \file           EMcode_infraData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMcode_infraData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcode_infra.data
 * \date  Génération :  27/05/2025 a 12:53:00
 *******************************************************************************
 */


#ifndef __EMcode_infraData_H
#define __EMcode_infraData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMcode_infraData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ifg
 *  \class   EMcode_infraData
 *  \brief   Définition de la classe implémentant l'objet métier EMcode_infraData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMcode_infraData
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
class EMcode_infraData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMcode_infraData(
        char* gvisibilite = (char*) 0,
        char* gapproche = (char*) 0,
        char* gbalisage = (char*) 0,
        char* gpiste = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMcode_infraData(const EMcode_infraData_v3_0_0&);



    // Destructeur
    ~EMcode_infraData();


    // Constructeur de copie
    EMcode_infraData(const EMcode_infraData&);



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
    EMcode_infraData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gvisibilite(EMstatut& statut) const;
    const char* lire_gvisibilite() const;
    void ecrire_gvisibilite(char* valeur, EMstatut& statut);
    void ecrire_gvisibilite(char* valeur);

    const char* lire_gapproche(EMstatut& statut) const;
    const char* lire_gapproche() const;
    void ecrire_gapproche(char* valeur, EMstatut& statut);
    void ecrire_gapproche(char* valeur);

    const char* lire_gbalisage(EMstatut& statut) const;
    const char* lire_gbalisage() const;
    void ecrire_gbalisage(char* valeur, EMstatut& statut);
    void ecrire_gbalisage(char* valeur);

    const char* lire_gpiste(EMstatut& statut) const;
    const char* lire_gpiste() const;
    void ecrire_gpiste(char* valeur, EMstatut& statut);
    void ecrire_gpiste(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gvisibilite;
    char*  m_gapproche;
    char*  m_gbalisage;
    char*  m_gpiste;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMcode_infraData.
    friend ostream& operator << (ostream& ostr, const EMcode_infraData& obj);


private:

    // Mesures de securite :
    EMcode_infraData& operator = (const EMcode_infraData&);
    int operator == (const EMcode_infraData&);
    int operator != (const EMcode_infraData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMcode_infraData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcode_infraData.H
//------------------------------------------------------------------------------

