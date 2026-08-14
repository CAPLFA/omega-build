/*******************************************************************************
 * \file           EMconfOpeData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMconfOpeData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMconfOpe.data
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMconfOpeData_H
#define __EMconfOpeData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMolgaDEFINES.H"
#include "EMpositionData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMconfOpeData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   olga
 *  \class   EMconfOpeData
 *  \brief   Définition de la classe implémentant l'objet métier EMconfOpeData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMconfOpeData
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
class EMconfOpeData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMconfOpeData(
        char* gConfOpe = (char*) 0,
        int nNumero = (int) 0,
        char* gPeriphFermes = (char*) 0,
        int npositions = 0,
        EMpositionData** tpositions = (EMpositionData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMconfOpeData(const EMconfOpeData_v3_0_0&);



    // Destructeur
    ~EMconfOpeData();


    // Constructeur de copie
    EMconfOpeData(const EMconfOpeData&);



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
    EMconfOpeData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gConfOpe(EMstatut& statut) const;
    const char* lire_gConfOpe() const;
    void ecrire_gConfOpe(char* valeur, EMstatut& statut);
    void ecrire_gConfOpe(char* valeur);

    int lire_nNumero(EMstatut& statut) const;
    int lire_nNumero() const;
    void ecrire_nNumero(const int valeur, EMstatut& statut);
    void ecrire_nNumero(const int valeur);

    const char* lire_gPeriphFermes(EMstatut& statut) const;
    const char* lire_gPeriphFermes() const;
    void ecrire_gPeriphFermes(char* valeur, EMstatut& statut);
    void ecrire_gPeriphFermes(char* valeur);

    int nombre_positions(EMstatut& statut) const;
    int nombre_positions() const;
    const EMpositionData* lire_positions(int nIndex, EMstatut& statut) const;
    const EMpositionData* lire_positions(int nIndex) const;
    int ajouter_positions(EMpositionData* elem, EMstatut& statut);
    int ajouter_positions(EMpositionData* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gConfOpe;
    int  m_nNumero;
    char*  m_gPeriphFermes;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMpositionData*  m_tpositions[C_EM_MAX_POS];
    int m_npositions;            // Taille courante de m_tpositions


    // Ajoute sur le flux les attributs d'un objet EMconfOpeData.
    friend ostream& operator << (ostream& ostr, const EMconfOpeData& obj);


private:

    // Mesures de securite :
    EMconfOpeData& operator = (const EMconfOpeData&);
    int operator == (const EMconfOpeData&);
    int operator != (const EMconfOpeData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMconfOpeData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMconfOpeData.H
//------------------------------------------------------------------------------

