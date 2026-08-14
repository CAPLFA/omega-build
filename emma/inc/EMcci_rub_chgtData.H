/*******************************************************************************
 * \file           EMcci_rub_chgtData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMcci_rub_chgtData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcci_rub_chgt.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMcci_rub_chgtData_H
#define __EMcci_rub_chgtData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMcci_rub_chgtData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMcci_rub_chgtData
 *  \brief   Définition de la classe implémentant l'objet métier EMcci_rub_chgtData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMcci_rub_chgtData
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
class EMcci_rub_chgtData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMcci_rub_chgtData(
        char* gnum_exploitant = (char*) 0,
        char* gescale_oaci = (char*) 0,
        char* gpax_locaux = (char*) 0,
        char* gfret_local = (char*) 0,
        char* gposte_locale = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMcci_rub_chgtData(const EMcci_rub_chgtData_v3_0_0&);



    // Destructeur
    ~EMcci_rub_chgtData();


    // Constructeur de copie
    EMcci_rub_chgtData(const EMcci_rub_chgtData&);



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
    EMcci_rub_chgtData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gnum_exploitant(EMstatut& statut) const;
    const char* lire_gnum_exploitant() const;
    void ecrire_gnum_exploitant(char* valeur, EMstatut& statut);
    void ecrire_gnum_exploitant(char* valeur);

    const char* lire_gescale_oaci(EMstatut& statut) const;
    const char* lire_gescale_oaci() const;
    void ecrire_gescale_oaci(char* valeur, EMstatut& statut);
    void ecrire_gescale_oaci(char* valeur);

    const char* lire_gpax_locaux(EMstatut& statut) const;
    const char* lire_gpax_locaux() const;
    void ecrire_gpax_locaux(char* valeur, EMstatut& statut);
    void ecrire_gpax_locaux(char* valeur);

    const char* lire_gfret_local(EMstatut& statut) const;
    const char* lire_gfret_local() const;
    void ecrire_gfret_local(char* valeur, EMstatut& statut);
    void ecrire_gfret_local(char* valeur);

    const char* lire_gposte_locale(EMstatut& statut) const;
    const char* lire_gposte_locale() const;
    void ecrire_gposte_locale(char* valeur, EMstatut& statut);
    void ecrire_gposte_locale(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gnum_exploitant;
    char*  m_gescale_oaci;
    char*  m_gpax_locaux;
    char*  m_gfret_local;
    char*  m_gposte_locale;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMcci_rub_chgtData.
    friend ostream& operator << (ostream& ostr, const EMcci_rub_chgtData& obj);


private:

    // Mesures de securite :
    EMcci_rub_chgtData& operator = (const EMcci_rub_chgtData&);
    int operator == (const EMcci_rub_chgtData&);
    int operator != (const EMcci_rub_chgtData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMcci_rub_chgtData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcci_rub_chgtData.H
//------------------------------------------------------------------------------

