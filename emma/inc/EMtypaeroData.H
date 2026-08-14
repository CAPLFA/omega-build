/*******************************************************************************
 * \file           EMtypaeroData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMtypaeroData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtypaero.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMtypaeroData_H
#define __EMtypaeroData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMtypaeroData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMtypaeroData
 *  \brief   Définition de la classe implémentant l'objet métier EMtypaeroData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMtypaeroData
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
class EMtypaeroData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMtypaeroData(
        char* gtype = (char*) 0,
        char* gcatturb = (char*) 0,
        char* gcatturb_CAA = (char*) 0,
        char* gmasse = (char*) 0,
        char* gclasse = (char*) 0,
        char* gaccoust = (char*) 0,
        char* gcatssis = (char*) 0,
        char* gcatpark = (char*) 0,
        char* gniveau = (char*) 0,
        char* gvitesse = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMtypaeroData(const EMtypaeroData_v3_0_0&);



    // Destructeur
    ~EMtypaeroData();


    // Constructeur de copie
    EMtypaeroData(const EMtypaeroData&);



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
    EMtypaeroData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gcatturb(EMstatut& statut) const;
    const char* lire_gcatturb() const;
    void ecrire_gcatturb(char* valeur, EMstatut& statut);
    void ecrire_gcatturb(char* valeur);

    const char* lire_gcatturb_CAA(EMstatut& statut) const;
    const char* lire_gcatturb_CAA() const;
    void ecrire_gcatturb_CAA(char* valeur, EMstatut& statut);
    void ecrire_gcatturb_CAA(char* valeur);

    const char* lire_gmasse(EMstatut& statut) const;
    const char* lire_gmasse() const;
    void ecrire_gmasse(char* valeur, EMstatut& statut);
    void ecrire_gmasse(char* valeur);

    const char* lire_gclasse(EMstatut& statut) const;
    const char* lire_gclasse() const;
    void ecrire_gclasse(char* valeur, EMstatut& statut);
    void ecrire_gclasse(char* valeur);

    const char* lire_gaccoust(EMstatut& statut) const;
    const char* lire_gaccoust() const;
    void ecrire_gaccoust(char* valeur, EMstatut& statut);
    void ecrire_gaccoust(char* valeur);

    const char* lire_gcatssis(EMstatut& statut) const;
    const char* lire_gcatssis() const;
    void ecrire_gcatssis(char* valeur, EMstatut& statut);
    void ecrire_gcatssis(char* valeur);

    const char* lire_gcatpark(EMstatut& statut) const;
    const char* lire_gcatpark() const;
    void ecrire_gcatpark(char* valeur, EMstatut& statut);
    void ecrire_gcatpark(char* valeur);

    const char* lire_gniveau(EMstatut& statut) const;
    const char* lire_gniveau() const;
    void ecrire_gniveau(char* valeur, EMstatut& statut);
    void ecrire_gniveau(char* valeur);

    const char* lire_gvitesse(EMstatut& statut) const;
    const char* lire_gvitesse() const;
    void ecrire_gvitesse(char* valeur, EMstatut& statut);
    void ecrire_gvitesse(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gtype;
    char*  m_gcatturb;
    char*  m_gcatturb_CAA;
    char*  m_gmasse;
    char*  m_gclasse;
    char*  m_gaccoust;
    char*  m_gcatssis;
    char*  m_gcatpark;
    char*  m_gniveau;
    char*  m_gvitesse;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMtypaeroData.
    friend ostream& operator << (ostream& ostr, const EMtypaeroData& obj);


private:

    // Mesures de securite :
    EMtypaeroData& operator = (const EMtypaeroData&);
    int operator == (const EMtypaeroData&);
    int operator != (const EMtypaeroData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMtypaeroData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtypaeroData.H
//------------------------------------------------------------------------------

