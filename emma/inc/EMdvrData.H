/*******************************************************************************
 * \file           EMdvrData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMdvrData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMdvr.data
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMdvrData_H
#define __EMdvrData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMddv_aeronefData.H"
#include "EMsigbaseDEFINES.H"
#include "EMddv_regulData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMdvrData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   pdv
 *  \class   EMdvrData
 *  \brief   Définition de la classe implémentant l'objet métier EMdvrData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMdvrData
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
class EMdvrData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMdvrData(
        EMddv_aeronefData* paeronef = (EMddv_aeronefData*) 0,
        char* gid_dvr = (char*) 0,
        char* gtype = (char*) 0,
        char* getat = (char*) 0,
        char* gidaero = (char*) 0,
        char* gtypvol = (char*) 0,
        char* gregvol = (char*) 0,
        char* geqrna = (char*) 0,
        char* geqssr = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gdate_dep = (char*) 0,
        char* gheure_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gduree = (char*) 0,
        int nregulation = 0,
        EMddv_regulData** tregulation = (EMddv_regulData**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMdvrData(const EMdvrData_v3_0_0&);



    // Destructeur
    ~EMdvrData();


    // Constructeur de copie
    EMdvrData(const EMdvrData&);



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
    EMdvrData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const EMddv_aeronefData* lire_paeronef(EMstatut& statut) const;
    const EMddv_aeronefData* lire_paeronef() const;
    void ecrire_paeronef(EMddv_aeronefData* valeur, EMstatut& statut);
    void ecrire_paeronef(EMddv_aeronefData* valeur);

    const char* lire_gid_dvr(EMstatut& statut) const;
    const char* lire_gid_dvr() const;
    void ecrire_gid_dvr(char* valeur, EMstatut& statut);
    void ecrire_gid_dvr(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gidaero(EMstatut& statut) const;
    const char* lire_gidaero() const;
    void ecrire_gidaero(char* valeur, EMstatut& statut);
    void ecrire_gidaero(char* valeur);

    const char* lire_gtypvol(EMstatut& statut) const;
    const char* lire_gtypvol() const;
    void ecrire_gtypvol(char* valeur, EMstatut& statut);
    void ecrire_gtypvol(char* valeur);

    const char* lire_gregvol(EMstatut& statut) const;
    const char* lire_gregvol() const;
    void ecrire_gregvol(char* valeur, EMstatut& statut);
    void ecrire_gregvol(char* valeur);

    const char* lire_geqrna(EMstatut& statut) const;
    const char* lire_geqrna() const;
    void ecrire_geqrna(char* valeur, EMstatut& statut);
    void ecrire_geqrna(char* valeur);

    const char* lire_geqssr(EMstatut& statut) const;
    const char* lire_geqssr() const;
    void ecrire_geqssr(char* valeur, EMstatut& statut);
    void ecrire_geqssr(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gdate_dep(EMstatut& statut) const;
    const char* lire_gdate_dep() const;
    void ecrire_gdate_dep(char* valeur, EMstatut& statut);
    void ecrire_gdate_dep(char* valeur);

    const char* lire_gheure_dep(EMstatut& statut) const;
    const char* lire_gheure_dep() const;
    void ecrire_gheure_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gduree(EMstatut& statut) const;
    const char* lire_gduree() const;
    void ecrire_gduree(char* valeur, EMstatut& statut);
    void ecrire_gduree(char* valeur);

    int nombre_regulation(EMstatut& statut) const;
    int nombre_regulation() const;
    const EMddv_regulData* lire_regulation(int nIndex, EMstatut& statut) const;
    const EMddv_regulData* lire_regulation(int nIndex) const;
    int ajouter_regulation(EMddv_regulData* elem, EMstatut& statut);
    int ajouter_regulation(EMddv_regulData* elem);



    //---------- Declaration des champs en acces direct ----------------

    EMddv_aeronefData*  m_paeronef;
    char*  m_gid_dvr;
    char*  m_gtype;
    char*  m_getat;
    char*  m_gidaero;
    char*  m_gtypvol;
    char*  m_gregvol;
    char*  m_geqrna;
    char*  m_geqssr;
    char*  m_gaerod_dep;
    char*  m_gdate_dep;
    char*  m_gheure_dep;
    char*  m_gaerod_dest;
    char*  m_gduree;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMddv_regulData*  m_tregulation[EM_C_SIG_REGULATION];
    int m_nregulation;            // Taille courante de m_tregulation


    // Ajoute sur le flux les attributs d'un objet EMdvrData.
    friend ostream& operator << (ostream& ostr, const EMdvrData& obj);


private:

    // Mesures de securite :
    EMdvrData& operator = (const EMdvrData&);
    int operator == (const EMdvrData&);
    int operator != (const EMdvrData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMdvrData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMdvrData.H
//------------------------------------------------------------------------------

