/*******************************************************************************
 * \file           EMmsf_aeronefData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmsf_aeronefData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmsf_aeronef.data
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmsf_aeronefData_H
#define __EMmsf_aeronefData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMmsf_aeronefData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   massif
 *  \class   EMmsf_aeronefData
 *  \brief   Définition de la classe implémentant l'objet métier EMmsf_aeronefData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmsf_aeronefData
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
class EMmsf_aeronefData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmsf_aeronefData(
        int nNBARC = (int) 0,
        char* gimmatric = (char*) 0,
        char* gARCTYP = (char*) 0,
        char* gARCTYPPIL = (char*) 0,
        char cWKTRC = (char) 0,
        char ccatturb_caa = (char) 0,
        char* gclasse = (char*) 0,
        char cacoustique = (char) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmsf_aeronefData(const EMmsf_aeronefData_v3_0_0&);



    // Destructeur
    ~EMmsf_aeronefData();


    // Constructeur de copie
    EMmsf_aeronefData(const EMmsf_aeronefData&);



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
    EMmsf_aeronefData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    int lire_nNBARC(EMstatut& statut) const;
    int lire_nNBARC() const;
    void ecrire_nNBARC(const int valeur, EMstatut& statut);
    void ecrire_nNBARC(const int valeur);

    const char* lire_gimmatric(EMstatut& statut) const;
    const char* lire_gimmatric() const;
    void ecrire_gimmatric(char* valeur, EMstatut& statut);
    void ecrire_gimmatric(char* valeur);

    const char* lire_gARCTYP(EMstatut& statut) const;
    const char* lire_gARCTYP() const;
    void ecrire_gARCTYP(char* valeur, EMstatut& statut);
    void ecrire_gARCTYP(char* valeur);

    const char* lire_gARCTYPPIL(EMstatut& statut) const;
    const char* lire_gARCTYPPIL() const;
    void ecrire_gARCTYPPIL(char* valeur, EMstatut& statut);
    void ecrire_gARCTYPPIL(char* valeur);

    char lire_cWKTRC(EMstatut& statut) const;
    char lire_cWKTRC() const;
    void ecrire_cWKTRC(const char valeur, EMstatut& statut);
    void ecrire_cWKTRC(const char valeur);

    char lire_ccatturb_caa(EMstatut& statut) const;
    char lire_ccatturb_caa() const;
    void ecrire_ccatturb_caa(const char valeur, EMstatut& statut);
    void ecrire_ccatturb_caa(const char valeur);

    const char* lire_gclasse(EMstatut& statut) const;
    const char* lire_gclasse() const;
    void ecrire_gclasse(char* valeur, EMstatut& statut);
    void ecrire_gclasse(char* valeur);

    char lire_cacoustique(EMstatut& statut) const;
    char lire_cacoustique() const;
    void ecrire_cacoustique(const char valeur, EMstatut& statut);
    void ecrire_cacoustique(const char valeur);



    //---------- Declaration des champs en acces direct ----------------

    int  m_nNBARC;
    char*  m_gimmatric;
    char*  m_gARCTYP;
    char*  m_gARCTYPPIL;
    char  m_cWKTRC;
    char  m_ccatturb_caa;
    char*  m_gclasse;
    char  m_cacoustique;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMmsf_aeronefData.
    friend ostream& operator << (ostream& ostr, const EMmsf_aeronefData& obj);


private:

    // Mesures de securite :
    EMmsf_aeronefData& operator = (const EMmsf_aeronefData&);
    int operator == (const EMmsf_aeronefData&);
    int operator != (const EMmsf_aeronefData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmsf_aeronefData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmsf_aeronefData.H
//------------------------------------------------------------------------------

