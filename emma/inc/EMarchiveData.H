/*******************************************************************************
 * \file           EMarchiveData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMarchiveData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMarchive.data
 * \date  Génération :  27/05/2025 a 12:52:57
 *******************************************************************************
 */


#ifndef __EMarchiveData_H
#define __EMarchiveData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMarchiveData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   arc
 *  \class   EMarchiveData
 *  \brief   Définition de la classe implémentant l'objet métier EMarchiveData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMarchiveData
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
class EMarchiveData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMarchiveData(
        char* gdate_archivage = (char*) 0,
        char* gdate_sauvegarde = (char*) 0,
        char* gsupport = (char*) 0,
        char* getat_archive = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMarchiveData(const EMarchiveData_v3_0_0&);



    // Destructeur
    ~EMarchiveData();


    // Constructeur de copie
    EMarchiveData(const EMarchiveData&);



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
    EMarchiveData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gdate_archivage(EMstatut& statut) const;
    const char* lire_gdate_archivage() const;
    void ecrire_gdate_archivage(char* valeur, EMstatut& statut);
    void ecrire_gdate_archivage(char* valeur);

    const char* lire_gdate_sauvegarde(EMstatut& statut) const;
    const char* lire_gdate_sauvegarde() const;
    void ecrire_gdate_sauvegarde(char* valeur, EMstatut& statut);
    void ecrire_gdate_sauvegarde(char* valeur);

    const char* lire_gsupport(EMstatut& statut) const;
    const char* lire_gsupport() const;
    void ecrire_gsupport(char* valeur, EMstatut& statut);
    void ecrire_gsupport(char* valeur);

    const char* lire_getat_archive(EMstatut& statut) const;
    const char* lire_getat_archive() const;
    void ecrire_getat_archive(char* valeur, EMstatut& statut);
    void ecrire_getat_archive(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gdate_archivage;
    char*  m_gdate_sauvegarde;
    char*  m_gsupport;
    char*  m_getat_archive;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMarchiveData.
    friend ostream& operator << (ostream& ostr, const EMarchiveData& obj);


private:

    // Mesures de securite :
    EMarchiveData& operator = (const EMarchiveData&);
    int operator == (const EMarchiveData&);
    int operator != (const EMarchiveData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMarchiveData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMarchiveData.H
//------------------------------------------------------------------------------

