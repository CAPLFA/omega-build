/*******************************************************************************
 * \file           EMtraceData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMtraceData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtrace.data
 * \date  Génération :  27/05/2025 a 12:52:54
 *******************************************************************************
 */


#ifndef __EMtraceData_H
#define __EMtraceData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMtraceData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   spy
 *  \class   EMtraceData
 *  \brief   Définition de la classe implémentant l'objet métier EMtraceData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMtraceData
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
class EMtraceData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMtraceData(
        int nTrace = (int) 0,
        char* gLabelTrace = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMtraceData(const EMtraceData_v3_0_0&);



    // Destructeur
    ~EMtraceData();


    // Constructeur de copie
    EMtraceData(const EMtraceData&);



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
    EMtraceData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    int lire_nTrace(EMstatut& statut) const;
    int lire_nTrace() const;
    void ecrire_nTrace(const int valeur, EMstatut& statut);
    void ecrire_nTrace(const int valeur);

    const char* lire_gLabelTrace(EMstatut& statut) const;
    const char* lire_gLabelTrace() const;
    void ecrire_gLabelTrace(char* valeur, EMstatut& statut);
    void ecrire_gLabelTrace(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    int  m_nTrace;
    char*  m_gLabelTrace;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMtraceData.
    friend ostream& operator << (ostream& ostr, const EMtraceData& obj);


private:

    // Mesures de securite :
    EMtraceData& operator = (const EMtraceData&);
    int operator == (const EMtraceData&);
    int operator != (const EMtraceData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMtraceData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtraceData.H
//------------------------------------------------------------------------------

