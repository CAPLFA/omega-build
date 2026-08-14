/*******************************************************************************
 * \file           EMaeronefData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMaeronefData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMaeronef.data
 * \date  Génération :  27/05/2025 a 12:52:58
 *******************************************************************************
 */


#ifndef __EMaeronefData_H
#define __EMaeronefData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMddv_canotsData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMaeronefData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   bdref
 *  \class   EMaeronefData
 *  \brief   Définition de la classe implémentant l'objet métier EMaeronefData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMaeronefData
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
class EMaeronefData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMaeronefData(
        EMddv_canotsData* pcanots = (EMddv_canotsData*) 0,
        char* gimmatric = (char*) 0,
        char* gtype = (char*) 0,
        char* gmarques = (char*) 0,
        char* geqrna = (char*) 0,
        char* geqssr = (char*) 0,
        char* geqsurv = (char*) 0,
        char* ggilets = (char*) 0,
        char* gradetres = (char*) 0,
        char* gpropriet = (char*) 0,
        char* gexploitant = (char*) 0,
        char* gbase = (char*) 0,
        char* gparking = (char*) 0,
        char* gselcal = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMaeronefData(const EMaeronefData_v3_0_0&);



    // Destructeur
    ~EMaeronefData();


    // Constructeur de copie
    EMaeronefData(const EMaeronefData&);



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
    EMaeronefData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const EMddv_canotsData* lire_pcanots(EMstatut& statut) const;
    const EMddv_canotsData* lire_pcanots() const;
    void ecrire_pcanots(EMddv_canotsData* valeur, EMstatut& statut);
    void ecrire_pcanots(EMddv_canotsData* valeur);

    const char* lire_gimmatric(EMstatut& statut) const;
    const char* lire_gimmatric() const;
    void ecrire_gimmatric(char* valeur, EMstatut& statut);
    void ecrire_gimmatric(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gmarques(EMstatut& statut) const;
    const char* lire_gmarques() const;
    void ecrire_gmarques(char* valeur, EMstatut& statut);
    void ecrire_gmarques(char* valeur);

    const char* lire_geqrna(EMstatut& statut) const;
    const char* lire_geqrna() const;
    void ecrire_geqrna(char* valeur, EMstatut& statut);
    void ecrire_geqrna(char* valeur);

    const char* lire_geqssr(EMstatut& statut) const;
    const char* lire_geqssr() const;
    void ecrire_geqssr(char* valeur, EMstatut& statut);
    void ecrire_geqssr(char* valeur);

    const char* lire_geqsurv(EMstatut& statut) const;
    const char* lire_geqsurv() const;
    void ecrire_geqsurv(char* valeur, EMstatut& statut);
    void ecrire_geqsurv(char* valeur);

    const char* lire_ggilets(EMstatut& statut) const;
    const char* lire_ggilets() const;
    void ecrire_ggilets(char* valeur, EMstatut& statut);
    void ecrire_ggilets(char* valeur);

    const char* lire_gradetres(EMstatut& statut) const;
    const char* lire_gradetres() const;
    void ecrire_gradetres(char* valeur, EMstatut& statut);
    void ecrire_gradetres(char* valeur);

    const char* lire_gpropriet(EMstatut& statut) const;
    const char* lire_gpropriet() const;
    void ecrire_gpropriet(char* valeur, EMstatut& statut);
    void ecrire_gpropriet(char* valeur);

    const char* lire_gexploitant(EMstatut& statut) const;
    const char* lire_gexploitant() const;
    void ecrire_gexploitant(char* valeur, EMstatut& statut);
    void ecrire_gexploitant(char* valeur);

    const char* lire_gbase(EMstatut& statut) const;
    const char* lire_gbase() const;
    void ecrire_gbase(char* valeur, EMstatut& statut);
    void ecrire_gbase(char* valeur);

    const char* lire_gparking(EMstatut& statut) const;
    const char* lire_gparking() const;
    void ecrire_gparking(char* valeur, EMstatut& statut);
    void ecrire_gparking(char* valeur);

    const char* lire_gselcal(EMstatut& statut) const;
    const char* lire_gselcal() const;
    void ecrire_gselcal(char* valeur, EMstatut& statut);
    void ecrire_gselcal(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    EMddv_canotsData*  m_pcanots;
    char*  m_gimmatric;
    char*  m_gtype;
    char*  m_gmarques;
    char*  m_geqrna;
    char*  m_geqssr;
    char*  m_geqsurv;
    char*  m_ggilets;
    char*  m_gradetres;
    char*  m_gpropriet;
    char*  m_gexploitant;
    char*  m_gbase;
    char*  m_gparking;
    char*  m_gselcal;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMaeronefData.
    friend ostream& operator << (ostream& ostr, const EMaeronefData& obj);


private:

    // Mesures de securite :
    EMaeronefData& operator = (const EMaeronefData&);
    int operator == (const EMaeronefData&);
    int operator != (const EMaeronefData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMaeronefData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMaeronefData.H
//------------------------------------------------------------------------------

