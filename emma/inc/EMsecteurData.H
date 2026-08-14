/*******************************************************************************
 * \file           EMsecteurData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMsecteurData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMsecteur.data
 * \date  Génération :  27/05/2025 a 12:52:50
 *******************************************************************************
 */


#ifndef __EMsecteurData_H
#define __EMsecteurData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMsecteurData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   di
 *  \class   EMsecteurData
 *  \brief   Définition de la classe implémentant l'objet métier EMsecteurData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMsecteurData
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
class EMsecteurData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMsecteurData(
        char* gSECID = (char*) 0,
        char* gSECCAR = (char*) 0,
        int nSECTRFL = (int) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMsecteurData(const EMsecteurData_v3_0_0&);



    // Destructeur
    ~EMsecteurData();


    // Constructeur de copie
    EMsecteurData(const EMsecteurData&);



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
    EMsecteurData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gSECID(EMstatut& statut) const;
    const char* lire_gSECID() const;
    void ecrire_gSECID(char* valeur, EMstatut& statut);
    void ecrire_gSECID(char* valeur);

    const char* lire_gSECCAR(EMstatut& statut) const;
    const char* lire_gSECCAR() const;
    void ecrire_gSECCAR(char* valeur, EMstatut& statut);
    void ecrire_gSECCAR(char* valeur);

    int lire_nSECTRFL(EMstatut& statut) const;
    int lire_nSECTRFL() const;
    void ecrire_nSECTRFL(const int valeur, EMstatut& statut);
    void ecrire_nSECTRFL(const int valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gSECID;
    char*  m_gSECCAR;
    int  m_nSECTRFL;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMsecteurData.
    friend ostream& operator << (ostream& ostr, const EMsecteurData& obj);


private:

    // Mesures de securite :
    EMsecteurData& operator = (const EMsecteurData&);
    int operator == (const EMsecteurData&);
    int operator != (const EMsecteurData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMsecteurData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsecteurData.H
//------------------------------------------------------------------------------

