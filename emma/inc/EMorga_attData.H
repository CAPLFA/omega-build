/*******************************************************************************
 * \file           EMorga_attData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMorga_attData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMorga_att.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMorga_attData_H
#define __EMorga_attData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMorga_attData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMorga_attData
 *  \brief   Définition de la classe implémentant l'objet métier EMorga_attData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMorga_attData
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
class EMorga_attData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMorga_attData(
        char* goaci = (char*) 0,
        int next = 0,
        char** text = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMorga_attData(const EMorga_attData_v3_0_0&);



    // Destructeur
    ~EMorga_attData();


    // Constructeur de copie
    EMorga_attData(const EMorga_attData&);



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
    EMorga_attData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_goaci(EMstatut& statut) const;
    const char* lire_goaci() const;
    void ecrire_goaci(char* valeur, EMstatut& statut);
    void ecrire_goaci(char* valeur);

    int nombre_ext(EMstatut& statut) const;
    int nombre_ext() const;
    const char* lire_ext(int nIndex, EMstatut& statut) const;
    const char* lire_ext(int nIndex) const;
    int ajouter_ext(char* elem, EMstatut& statut);
    int ajouter_ext(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_goaci;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_text[EM_C_SIG_LISTE_EXT];
    int m_next;            // Taille courante de m_text


    // Ajoute sur le flux les attributs d'un objet EMorga_attData.
    friend ostream& operator << (ostream& ostr, const EMorga_attData& obj);


private:

    // Mesures de securite :
    EMorga_attData& operator = (const EMorga_attData&);
    int operator == (const EMorga_attData&);
    int operator != (const EMorga_attData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMorga_attData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMorga_attData.H
//------------------------------------------------------------------------------

