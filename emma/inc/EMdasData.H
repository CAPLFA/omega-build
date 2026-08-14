/*******************************************************************************
 * \file           EMdasData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMdasData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdas.data
 * \date  Génération :  27/05/2025 a 12:52:51
 *******************************************************************************
 */


#ifndef __EMdasData_H
#define __EMdasData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMdasData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   das
 *  \class   EMdasData
 *  \brief   Définition de la classe implémentant l'objet métier EMdasData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMdasData
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
class EMdasData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMdasData(
        char* gaobt = (char*) 0,
        char* garcidao = (char*) 0,
        char* garctyp = (char*) 0,
        char* gpka = (char*) 0,
        char* gpkatt = (char*) 0,
        char* gpkc = (char*) 0,
        char* gpkdep = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMdasData(const EMdasData_v3_0_0&);



    // Destructeur
    ~EMdasData();


    // Constructeur de copie
    EMdasData(const EMdasData&);



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
    EMdasData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gaobt(EMstatut& statut) const;
    const char* lire_gaobt() const;
    void ecrire_gaobt(char* valeur, EMstatut& statut);
    void ecrire_gaobt(char* valeur);

    const char* lire_garcidao(EMstatut& statut) const;
    const char* lire_garcidao() const;
    void ecrire_garcidao(char* valeur, EMstatut& statut);
    void ecrire_garcidao(char* valeur);

    const char* lire_garctyp(EMstatut& statut) const;
    const char* lire_garctyp() const;
    void ecrire_garctyp(char* valeur, EMstatut& statut);
    void ecrire_garctyp(char* valeur);

    const char* lire_gpka(EMstatut& statut) const;
    const char* lire_gpka() const;
    void ecrire_gpka(char* valeur, EMstatut& statut);
    void ecrire_gpka(char* valeur);

    const char* lire_gpkatt(EMstatut& statut) const;
    const char* lire_gpkatt() const;
    void ecrire_gpkatt(char* valeur, EMstatut& statut);
    void ecrire_gpkatt(char* valeur);

    const char* lire_gpkc(EMstatut& statut) const;
    const char* lire_gpkc() const;
    void ecrire_gpkc(char* valeur, EMstatut& statut);
    void ecrire_gpkc(char* valeur);

    const char* lire_gpkdep(EMstatut& statut) const;
    const char* lire_gpkdep() const;
    void ecrire_gpkdep(char* valeur, EMstatut& statut);
    void ecrire_gpkdep(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gaobt;
    char*  m_garcidao;
    char*  m_garctyp;
    char*  m_gpka;
    char*  m_gpkatt;
    char*  m_gpkc;
    char*  m_gpkdep;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMdasData.
    friend ostream& operator << (ostream& ostr, const EMdasData& obj);


private:

    // Mesures de securite :
    EMdasData& operator = (const EMdasData&);
    int operator == (const EMdasData&);
    int operator != (const EMdasData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMdasData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdasData.H
//------------------------------------------------------------------------------

