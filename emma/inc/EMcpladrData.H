/*******************************************************************************
 * \file           EMcpladrData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMcpladrData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMcpladr.data
 * \date  Génération :  27/05/2025 a 12:53:04
 *******************************************************************************
 */


#ifndef __EMcpladrData_H
#define __EMcpladrData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMcpladrData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   rsfta
 *  \class   EMcpladrData
 *  \brief   Définition de la classe implémentant l'objet métier EMcpladrData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMcpladrData
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
class EMcpladrData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMcpladrData(
        char* gid_cpl = (char*) 0,
        char* gid_ddv = (char*) 0,
        char* gid_vol = (char*) 0,
        char* gtypmesg = (char*) 0,
        char* gexpediteur = (char*) 0,
        char* gexped_src = (char*) 0,
        char* gpriorite = (char*) 0,
        char* gtexte = (char*) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMcpladrData(const EMcpladrData_v3_0_0&);



    // Destructeur
    ~EMcpladrData();


    // Constructeur de copie
    EMcpladrData(const EMcpladrData&);



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
    EMcpladrData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gid_cpl(EMstatut& statut) const;
    const char* lire_gid_cpl() const;
    void ecrire_gid_cpl(char* valeur, EMstatut& statut);
    void ecrire_gid_cpl(char* valeur);

    const char* lire_gid_ddv(EMstatut& statut) const;
    const char* lire_gid_ddv() const;
    void ecrire_gid_ddv(char* valeur, EMstatut& statut);
    void ecrire_gid_ddv(char* valeur);

    const char* lire_gid_vol(EMstatut& statut) const;
    const char* lire_gid_vol() const;
    void ecrire_gid_vol(char* valeur, EMstatut& statut);
    void ecrire_gid_vol(char* valeur);

    const char* lire_gtypmesg(EMstatut& statut) const;
    const char* lire_gtypmesg() const;
    void ecrire_gtypmesg(char* valeur, EMstatut& statut);
    void ecrire_gtypmesg(char* valeur);

    const char* lire_gexpediteur(EMstatut& statut) const;
    const char* lire_gexpediteur() const;
    void ecrire_gexpediteur(char* valeur, EMstatut& statut);
    void ecrire_gexpediteur(char* valeur);

    const char* lire_gexped_src(EMstatut& statut) const;
    const char* lire_gexped_src() const;
    void ecrire_gexped_src(char* valeur, EMstatut& statut);
    void ecrire_gexped_src(char* valeur);

    const char* lire_gpriorite(EMstatut& statut) const;
    const char* lire_gpriorite() const;
    void ecrire_gpriorite(char* valeur, EMstatut& statut);
    void ecrire_gpriorite(char* valeur);

    const char* lire_gtexte(EMstatut& statut) const;
    const char* lire_gtexte() const;
    void ecrire_gtexte(char* valeur, EMstatut& statut);
    void ecrire_gtexte(char* valeur);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gid_cpl;
    char*  m_gid_ddv;
    char*  m_gid_vol;
    char*  m_gtypmesg;
    char*  m_gexpediteur;
    char*  m_gexped_src;
    char*  m_gpriorite;
    char*  m_gtexte;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMcpladrData.
    friend ostream& operator << (ostream& ostr, const EMcpladrData& obj);


private:

    // Mesures de securite :
    EMcpladrData& operator = (const EMcpladrData&);
    int operator == (const EMcpladrData&);
    int operator != (const EMcpladrData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMcpladrData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMcpladrData.H
//------------------------------------------------------------------------------

