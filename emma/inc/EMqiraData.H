/*******************************************************************************
 * \file           EMqiraData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMqiraData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMqira.data
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMqiraData_H
#define __EMqiraData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMqiraData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   mto
 *  \class   EMqiraData
 *  \brief   Définition de la classe implémentant l'objet métier EMqiraData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMqiraData
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
class EMqiraData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMqiraData(
        char* gnom_peri = (char*) 0,
        char* gnature = (char*) 0,
        int nindicateur = 0,
        char** tindicateur = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMqiraData(const EMqiraData_v3_0_0&);



    // Destructeur
    ~EMqiraData();


    // Constructeur de copie
    EMqiraData(const EMqiraData&);



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
    EMqiraData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gnom_peri(EMstatut& statut) const;
    const char* lire_gnom_peri() const;
    void ecrire_gnom_peri(char* valeur, EMstatut& statut);
    void ecrire_gnom_peri(char* valeur);

    const char* lire_gnature(EMstatut& statut) const;
    const char* lire_gnature() const;
    void ecrire_gnature(char* valeur, EMstatut& statut);
    void ecrire_gnature(char* valeur);

    int nombre_indicateur(EMstatut& statut) const;
    int nombre_indicateur() const;
    const char* lire_indicateur(int nIndex, EMstatut& statut) const;
    const char* lire_indicateur(int nIndex) const;
    int ajouter_indicateur(char* elem, EMstatut& statut);
    int ajouter_indicateur(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gnom_peri;
    char*  m_gnature;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tindicateur[EM_C_SIG_MTO_INDICATEUR];
    int m_nindicateur;            // Taille courante de m_tindicateur


    // Ajoute sur le flux les attributs d'un objet EMqiraData.
    friend ostream& operator << (ostream& ostr, const EMqiraData& obj);


private:

    // Mesures de securite :
    EMqiraData& operator = (const EMqiraData&);
    int operator == (const EMqiraData&);
    int operator != (const EMqiraData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMqiraData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMqiraData.H
//------------------------------------------------------------------------------

