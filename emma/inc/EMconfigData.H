/*******************************************************************************
 * \file           EMconfigData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMconfigData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMconfig.data
 * \date  Génération :  27/05/2025 a 12:52:59
 *******************************************************************************
 */


#ifndef __EMconfigData_H
#define __EMconfigData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMconfigData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   cfg
 *  \class   EMconfigData
 *  \brief   Définition de la classe implémentant l'objet métier EMconfigData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMconfigData
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
class EMconfigData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMconfigData(
        char* gzzz = (char*) 0,
        char* gnom_config = (char*) 0,
        char* gdomaine = (char*) 0,
        char* getat_conf = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMconfigData(const EMconfigData_v3_0_0&);



    // Destructeur
    ~EMconfigData();


    // Constructeur de copie
    EMconfigData(const EMconfigData&);



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
    EMconfigData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gzzz(EMstatut& statut) const;
    const char* lire_gzzz() const;
    void ecrire_gzzz(char* valeur, EMstatut& statut);
    void ecrire_gzzz(char* valeur);

    const char* lire_gnom_config(EMstatut& statut) const;
    const char* lire_gnom_config() const;
    void ecrire_gnom_config(char* valeur, EMstatut& statut);
    void ecrire_gnom_config(char* valeur);

    const char* lire_gdomaine(EMstatut& statut) const;
    const char* lire_gdomaine() const;
    void ecrire_gdomaine(char* valeur, EMstatut& statut);
    void ecrire_gdomaine(char* valeur);

    const char* lire_getat_conf(EMstatut& statut) const;
    const char* lire_getat_conf() const;
    void ecrire_getat_conf(char* valeur, EMstatut& statut);
    void ecrire_getat_conf(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gzzz;
    char*  m_gnom_config;
    char*  m_gdomaine;
    char*  m_getat_conf;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMconfigData.
    friend ostream& operator << (ostream& ostr, const EMconfigData& obj);


private:

    // Mesures de securite :
    EMconfigData& operator = (const EMconfigData&);
    int operator == (const EMconfigData&);
    int operator != (const EMconfigData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMconfigData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMconfigData.H
//------------------------------------------------------------------------------

