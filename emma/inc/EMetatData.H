/*******************************************************************************
 * \file           EMetatData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMetatData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMetat.data
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMetatData_H
#define __EMetatData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMetatTYPES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMetatData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   etat
 *  \class   EMetatData
 *  \brief   Définition de la classe implémentant l'objet métier EMetatData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMetatData
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
class EMetatData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMetatData(
        char* gSysteme = (char*) 0,
        char* gLibelle = (char*) 0,
        char* gVersion = (char*) 0,
        char* gProtocole = (char*) 0,
        EM_ETAT_SYSTEME eEtat = (EM_ETAT_SYSTEME) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMetatData(const EMetatData_v3_0_0&);



    // Destructeur
    ~EMetatData();


    // Constructeur de copie
    EMetatData(const EMetatData&);



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
    EMetatData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gSysteme(EMstatut& statut) const;
    const char* lire_gSysteme() const;
    void ecrire_gSysteme(char* valeur, EMstatut& statut);
    void ecrire_gSysteme(char* valeur);

    const char* lire_gLibelle(EMstatut& statut) const;
    const char* lire_gLibelle() const;
    void ecrire_gLibelle(char* valeur, EMstatut& statut);
    void ecrire_gLibelle(char* valeur);

    const char* lire_gVersion(EMstatut& statut) const;
    const char* lire_gVersion() const;
    void ecrire_gVersion(char* valeur, EMstatut& statut);
    void ecrire_gVersion(char* valeur);

    const char* lire_gProtocole(EMstatut& statut) const;
    const char* lire_gProtocole() const;
    void ecrire_gProtocole(char* valeur, EMstatut& statut);
    void ecrire_gProtocole(char* valeur);

    EM_ETAT_SYSTEME lire_eEtat(EMstatut& statut) const;
    EM_ETAT_SYSTEME lire_eEtat() const;
    void ecrire_eEtat(const EM_ETAT_SYSTEME valeur, EMstatut& statut);
    void ecrire_eEtat(const EM_ETAT_SYSTEME valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gSysteme;
    char*  m_gLibelle;
    char*  m_gVersion;
    char*  m_gProtocole;
    EM_ETAT_SYSTEME  m_eEtat;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMetatData.
    friend ostream& operator << (ostream& ostr, const EMetatData& obj);


private:

    // Mesures de securite :
    EMetatData& operator = (const EMetatData&);
    int operator == (const EMetatData&);
    int operator != (const EMetatData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMetatData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMetatData.H
//------------------------------------------------------------------------------

