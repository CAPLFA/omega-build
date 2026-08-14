/*******************************************************************************
 * \file           EMetat_famille_sData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMetat_famille_sData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat_famille_s.data
 * \date  Génération :  27/05/2025 a 12:53:05
 *******************************************************************************
 */


#ifndef __EMetat_famille_sData_H
#define __EMetat_famille_sData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMetat_famille_sData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   tdv
 *  \class   EMetat_famille_sData
 *  \brief   Définition de la classe implémentant l'objet métier EMetat_famille_sData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMetat_famille_sData
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
class EMetat_famille_sData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMetat_famille_sData(
        char* gcode_min = (char*) 0,
        char* gcode_max = (char*) 0,
        char* gcodes_libres = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMetat_famille_sData(const EMetat_famille_sData_v3_0_0&);



    // Destructeur
    ~EMetat_famille_sData();


    // Constructeur de copie
    EMetat_famille_sData(const EMetat_famille_sData&);



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
    EMetat_famille_sData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gcode_min(EMstatut& statut) const;
    const char* lire_gcode_min() const;
    void ecrire_gcode_min(char* valeur, EMstatut& statut);
    void ecrire_gcode_min(char* valeur);

    const char* lire_gcode_max(EMstatut& statut) const;
    const char* lire_gcode_max() const;
    void ecrire_gcode_max(char* valeur, EMstatut& statut);
    void ecrire_gcode_max(char* valeur);

    const char* lire_gcodes_libres(EMstatut& statut) const;
    const char* lire_gcodes_libres() const;
    void ecrire_gcodes_libres(char* valeur, EMstatut& statut);
    void ecrire_gcodes_libres(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gcode_min;
    char*  m_gcode_max;
    char*  m_gcodes_libres;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMetat_famille_sData.
    friend ostream& operator << (ostream& ostr, const EMetat_famille_sData& obj);


private:

    // Mesures de securite :
    EMetat_famille_sData& operator = (const EMetat_famille_sData&);
    int operator == (const EMetat_famille_sData&);
    int operator != (const EMetat_famille_sData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMetat_famille_sData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetat_famille_sData.H
//------------------------------------------------------------------------------

