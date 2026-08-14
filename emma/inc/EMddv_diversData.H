/*******************************************************************************
 * \file           EMddv_diversData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMddv_diversData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMddv_divers.data
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMddv_diversData_H
#define __EMddv_diversData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMddv_diversData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   sig
 *  \class   EMddv_diversData
 *  \brief   Définition de la classe implémentant l'objet métier EMddv_diversData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMddv_diversData
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
class EMddv_diversData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMddv_diversData(
        char* geet = (char*) 0,
        char* grif = (char*) 0,
        char* greg = (char*) 0,
        char* gsel = (char*) 0,
        char* gopr = (char*) 0,
        char* gsts = (char*) 0,
        char* gsts2 = (char*) 0,
        char* gsts3 = (char*) 0,
        char* gsts4 = (char*) 0,
        char* gtyp = (char*) 0,
        char* gper = (char*) 0,
        char* gcom = (char*) 0,
        char* gdat = (char*) 0,
        char* gnav = (char*) 0,
        char* gdep = (char*) 0,
        char* gdest = (char*) 0,
        char* galtn = (char*) 0,
        char* gralt = (char*) 0,
        char* grmk = (char*) 0,
        char* gstayinfo1 = (char*) 0,
        char* gstayinfo2 = (char*) 0,
        char* gstayinfo3 = (char*) 0,
        char* gstayinfo4 = (char*) 0,
        char* gstayinfo5 = (char*) 0,
        char* gstayinfo6 = (char*) 0,
        char* gstayinfo7 = (char*) 0,
        char* gstayinfo8 = (char*) 0,
        char* gstayinfo9 = (char*) 0,
        char* gdof = (char*) 0,
        char* gsrc = (char*) 0,
        char* gifp = (char*) 0,
        char* gcode = (char*) 0,
        char* gdle = (char*) 0,
        char* geur = (char*) 0,
        char* gorgn = (char*) 0,
        char* gpbn = (char*) 0,
        char* grfp = (char*) 0,
        char* grvr = (char*) 0,
        char* gsur = (char*) 0,
        char* gtalt = (char*) 0,
        char* gawr = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMddv_diversData(const EMddv_diversData_v3_0_0&);



    // Destructeur
    ~EMddv_diversData();


    // Constructeur de copie
    EMddv_diversData(const EMddv_diversData&);



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
    EMddv_diversData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_geet(EMstatut& statut) const;
    const char* lire_geet() const;
    void ecrire_geet(char* valeur, EMstatut& statut);
    void ecrire_geet(char* valeur);

    const char* lire_grif(EMstatut& statut) const;
    const char* lire_grif() const;
    void ecrire_grif(char* valeur, EMstatut& statut);
    void ecrire_grif(char* valeur);

    const char* lire_greg(EMstatut& statut) const;
    const char* lire_greg() const;
    void ecrire_greg(char* valeur, EMstatut& statut);
    void ecrire_greg(char* valeur);

    const char* lire_gsel(EMstatut& statut) const;
    const char* lire_gsel() const;
    void ecrire_gsel(char* valeur, EMstatut& statut);
    void ecrire_gsel(char* valeur);

    const char* lire_gopr(EMstatut& statut) const;
    const char* lire_gopr() const;
    void ecrire_gopr(char* valeur, EMstatut& statut);
    void ecrire_gopr(char* valeur);

    const char* lire_gsts(EMstatut& statut) const;
    const char* lire_gsts() const;
    void ecrire_gsts(char* valeur, EMstatut& statut);
    void ecrire_gsts(char* valeur);

    const char* lire_gsts2(EMstatut& statut) const;
    const char* lire_gsts2() const;
    void ecrire_gsts2(char* valeur, EMstatut& statut);
    void ecrire_gsts2(char* valeur);

    const char* lire_gsts3(EMstatut& statut) const;
    const char* lire_gsts3() const;
    void ecrire_gsts3(char* valeur, EMstatut& statut);
    void ecrire_gsts3(char* valeur);

    const char* lire_gsts4(EMstatut& statut) const;
    const char* lire_gsts4() const;
    void ecrire_gsts4(char* valeur, EMstatut& statut);
    void ecrire_gsts4(char* valeur);

    const char* lire_gtyp(EMstatut& statut) const;
    const char* lire_gtyp() const;
    void ecrire_gtyp(char* valeur, EMstatut& statut);
    void ecrire_gtyp(char* valeur);

    const char* lire_gper(EMstatut& statut) const;
    const char* lire_gper() const;
    void ecrire_gper(char* valeur, EMstatut& statut);
    void ecrire_gper(char* valeur);

    const char* lire_gcom(EMstatut& statut) const;
    const char* lire_gcom() const;
    void ecrire_gcom(char* valeur, EMstatut& statut);
    void ecrire_gcom(char* valeur);

    const char* lire_gdat(EMstatut& statut) const;
    const char* lire_gdat() const;
    void ecrire_gdat(char* valeur, EMstatut& statut);
    void ecrire_gdat(char* valeur);

    const char* lire_gnav(EMstatut& statut) const;
    const char* lire_gnav() const;
    void ecrire_gnav(char* valeur, EMstatut& statut);
    void ecrire_gnav(char* valeur);

    const char* lire_gdep(EMstatut& statut) const;
    const char* lire_gdep() const;
    void ecrire_gdep(char* valeur, EMstatut& statut);
    void ecrire_gdep(char* valeur);

    const char* lire_gdest(EMstatut& statut) const;
    const char* lire_gdest() const;
    void ecrire_gdest(char* valeur, EMstatut& statut);
    void ecrire_gdest(char* valeur);

    const char* lire_galtn(EMstatut& statut) const;
    const char* lire_galtn() const;
    void ecrire_galtn(char* valeur, EMstatut& statut);
    void ecrire_galtn(char* valeur);

    const char* lire_gralt(EMstatut& statut) const;
    const char* lire_gralt() const;
    void ecrire_gralt(char* valeur, EMstatut& statut);
    void ecrire_gralt(char* valeur);

    const char* lire_grmk(EMstatut& statut) const;
    const char* lire_grmk() const;
    void ecrire_grmk(char* valeur, EMstatut& statut);
    void ecrire_grmk(char* valeur);

    const char* lire_gstayinfo1(EMstatut& statut) const;
    const char* lire_gstayinfo1() const;
    void ecrire_gstayinfo1(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo1(char* valeur);

    const char* lire_gstayinfo2(EMstatut& statut) const;
    const char* lire_gstayinfo2() const;
    void ecrire_gstayinfo2(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo2(char* valeur);

    const char* lire_gstayinfo3(EMstatut& statut) const;
    const char* lire_gstayinfo3() const;
    void ecrire_gstayinfo3(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo3(char* valeur);

    const char* lire_gstayinfo4(EMstatut& statut) const;
    const char* lire_gstayinfo4() const;
    void ecrire_gstayinfo4(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo4(char* valeur);

    const char* lire_gstayinfo5(EMstatut& statut) const;
    const char* lire_gstayinfo5() const;
    void ecrire_gstayinfo5(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo5(char* valeur);

    const char* lire_gstayinfo6(EMstatut& statut) const;
    const char* lire_gstayinfo6() const;
    void ecrire_gstayinfo6(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo6(char* valeur);

    const char* lire_gstayinfo7(EMstatut& statut) const;
    const char* lire_gstayinfo7() const;
    void ecrire_gstayinfo7(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo7(char* valeur);

    const char* lire_gstayinfo8(EMstatut& statut) const;
    const char* lire_gstayinfo8() const;
    void ecrire_gstayinfo8(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo8(char* valeur);

    const char* lire_gstayinfo9(EMstatut& statut) const;
    const char* lire_gstayinfo9() const;
    void ecrire_gstayinfo9(char* valeur, EMstatut& statut);
    void ecrire_gstayinfo9(char* valeur);

    const char* lire_gdof(EMstatut& statut) const;
    const char* lire_gdof() const;
    void ecrire_gdof(char* valeur, EMstatut& statut);
    void ecrire_gdof(char* valeur);

    const char* lire_gsrc(EMstatut& statut) const;
    const char* lire_gsrc() const;
    void ecrire_gsrc(char* valeur, EMstatut& statut);
    void ecrire_gsrc(char* valeur);

    const char* lire_gifp(EMstatut& statut) const;
    const char* lire_gifp() const;
    void ecrire_gifp(char* valeur, EMstatut& statut);
    void ecrire_gifp(char* valeur);

    const char* lire_gcode(EMstatut& statut) const;
    const char* lire_gcode() const;
    void ecrire_gcode(char* valeur, EMstatut& statut);
    void ecrire_gcode(char* valeur);

    const char* lire_gdle(EMstatut& statut) const;
    const char* lire_gdle() const;
    void ecrire_gdle(char* valeur, EMstatut& statut);
    void ecrire_gdle(char* valeur);

    const char* lire_geur(EMstatut& statut) const;
    const char* lire_geur() const;
    void ecrire_geur(char* valeur, EMstatut& statut);
    void ecrire_geur(char* valeur);

    const char* lire_gorgn(EMstatut& statut) const;
    const char* lire_gorgn() const;
    void ecrire_gorgn(char* valeur, EMstatut& statut);
    void ecrire_gorgn(char* valeur);

    const char* lire_gpbn(EMstatut& statut) const;
    const char* lire_gpbn() const;
    void ecrire_gpbn(char* valeur, EMstatut& statut);
    void ecrire_gpbn(char* valeur);

    const char* lire_grfp(EMstatut& statut) const;
    const char* lire_grfp() const;
    void ecrire_grfp(char* valeur, EMstatut& statut);
    void ecrire_grfp(char* valeur);

    const char* lire_grvr(EMstatut& statut) const;
    const char* lire_grvr() const;
    void ecrire_grvr(char* valeur, EMstatut& statut);
    void ecrire_grvr(char* valeur);

    const char* lire_gsur(EMstatut& statut) const;
    const char* lire_gsur() const;
    void ecrire_gsur(char* valeur, EMstatut& statut);
    void ecrire_gsur(char* valeur);

    const char* lire_gtalt(EMstatut& statut) const;
    const char* lire_gtalt() const;
    void ecrire_gtalt(char* valeur, EMstatut& statut);
    void ecrire_gtalt(char* valeur);

    const char* lire_gawr(EMstatut& statut) const;
    const char* lire_gawr() const;
    void ecrire_gawr(char* valeur, EMstatut& statut);
    void ecrire_gawr(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_geet;
    char*  m_grif;
    char*  m_greg;
    char*  m_gsel;
    char*  m_gopr;
    char*  m_gsts;
    char*  m_gsts2;
    char*  m_gsts3;
    char*  m_gsts4;
    char*  m_gtyp;
    char*  m_gper;
    char*  m_gcom;
    char*  m_gdat;
    char*  m_gnav;
    char*  m_gdep;
    char*  m_gdest;
    char*  m_galtn;
    char*  m_gralt;
    char*  m_grmk;
    char*  m_gstayinfo1;
    char*  m_gstayinfo2;
    char*  m_gstayinfo3;
    char*  m_gstayinfo4;
    char*  m_gstayinfo5;
    char*  m_gstayinfo6;
    char*  m_gstayinfo7;
    char*  m_gstayinfo8;
    char*  m_gstayinfo9;
    char*  m_gdof;
    char*  m_gsrc;
    char*  m_gifp;
    char*  m_gcode;
    char*  m_gdle;
    char*  m_geur;
    char*  m_gorgn;
    char*  m_gpbn;
    char*  m_grfp;
    char*  m_grvr;
    char*  m_gsur;
    char*  m_gtalt;
    char*  m_gawr;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMddv_diversData.
    friend ostream& operator << (ostream& ostr, const EMddv_diversData& obj);


private:

    // Mesures de securite :
    EMddv_diversData& operator = (const EMddv_diversData&);
    int operator == (const EMddv_diversData&);
    int operator != (const EMddv_diversData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMddv_diversData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMddv_diversData.H
//------------------------------------------------------------------------------

