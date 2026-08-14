/*******************************************************************************
 * \file           EMnotamData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMnotamData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMnotam.data
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMnotamData_H
#define __EMnotamData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMnotamData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ntm
 *  \class   EMnotamData
 *  \brief   Définition de la classe implémentant l'objet métier EMnotamData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMnotamData
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
class EMnotamData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMnotamData(
        char* gid_ntm = (char*) 0,
        char* gserie = (char*) 0,
        char* gnumero = (char*) 0,
        char* gannee = (char*) 0,
        char* getat_soum = (char*) 0,
        char* gtype = (char*) 0,
        char* gfir = (char*) 0,
        char* gdate_deb = (char*) 0,
        char* gdate_fin = (char*) 0,
        char* gtexte = (char*) 0,
        char* gid_msg = (char*) 0,
        char* gdate_trans = (char*) 0,
        char* gcanal = (char*) 0,
        char* gnomesg = (char*) 0,
        char* gpriorite = (char*) 0,
        char* ggr_dateur = (char*) 0,
        char* gexpediteur = (char*) 0,
        char* gtexte_msg = (char*) 0,
        int nlieux = 0,
        char** tlieux = (char**) 0,
        int nperes = 0,
        char** tperes = (char**) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMnotamData(const EMnotamData_v3_0_0&);



    // Destructeur
    ~EMnotamData();


    // Constructeur de copie
    EMnotamData(const EMnotamData&);



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
    EMnotamData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gid_ntm(EMstatut& statut) const;
    const char* lire_gid_ntm() const;
    void ecrire_gid_ntm(char* valeur, EMstatut& statut);
    void ecrire_gid_ntm(char* valeur);

    const char* lire_gserie(EMstatut& statut) const;
    const char* lire_gserie() const;
    void ecrire_gserie(char* valeur, EMstatut& statut);
    void ecrire_gserie(char* valeur);

    const char* lire_gnumero(EMstatut& statut) const;
    const char* lire_gnumero() const;
    void ecrire_gnumero(char* valeur, EMstatut& statut);
    void ecrire_gnumero(char* valeur);

    const char* lire_gannee(EMstatut& statut) const;
    const char* lire_gannee() const;
    void ecrire_gannee(char* valeur, EMstatut& statut);
    void ecrire_gannee(char* valeur);

    const char* lire_getat_soum(EMstatut& statut) const;
    const char* lire_getat_soum() const;
    void ecrire_getat_soum(char* valeur, EMstatut& statut);
    void ecrire_getat_soum(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gfir(EMstatut& statut) const;
    const char* lire_gfir() const;
    void ecrire_gfir(char* valeur, EMstatut& statut);
    void ecrire_gfir(char* valeur);

    const char* lire_gdate_deb(EMstatut& statut) const;
    const char* lire_gdate_deb() const;
    void ecrire_gdate_deb(char* valeur, EMstatut& statut);
    void ecrire_gdate_deb(char* valeur);

    const char* lire_gdate_fin(EMstatut& statut) const;
    const char* lire_gdate_fin() const;
    void ecrire_gdate_fin(char* valeur, EMstatut& statut);
    void ecrire_gdate_fin(char* valeur);

    const char* lire_gtexte(EMstatut& statut) const;
    const char* lire_gtexte() const;
    void ecrire_gtexte(char* valeur, EMstatut& statut);
    void ecrire_gtexte(char* valeur);

    const char* lire_gid_msg(EMstatut& statut) const;
    const char* lire_gid_msg() const;
    void ecrire_gid_msg(char* valeur, EMstatut& statut);
    void ecrire_gid_msg(char* valeur);

    const char* lire_gdate_trans(EMstatut& statut) const;
    const char* lire_gdate_trans() const;
    void ecrire_gdate_trans(char* valeur, EMstatut& statut);
    void ecrire_gdate_trans(char* valeur);

    const char* lire_gcanal(EMstatut& statut) const;
    const char* lire_gcanal() const;
    void ecrire_gcanal(char* valeur, EMstatut& statut);
    void ecrire_gcanal(char* valeur);

    const char* lire_gnomesg(EMstatut& statut) const;
    const char* lire_gnomesg() const;
    void ecrire_gnomesg(char* valeur, EMstatut& statut);
    void ecrire_gnomesg(char* valeur);

    const char* lire_gpriorite(EMstatut& statut) const;
    const char* lire_gpriorite() const;
    void ecrire_gpriorite(char* valeur, EMstatut& statut);
    void ecrire_gpriorite(char* valeur);

    const char* lire_ggr_dateur(EMstatut& statut) const;
    const char* lire_ggr_dateur() const;
    void ecrire_ggr_dateur(char* valeur, EMstatut& statut);
    void ecrire_ggr_dateur(char* valeur);

    const char* lire_gexpediteur(EMstatut& statut) const;
    const char* lire_gexpediteur() const;
    void ecrire_gexpediteur(char* valeur, EMstatut& statut);
    void ecrire_gexpediteur(char* valeur);

    const char* lire_gtexte_msg(EMstatut& statut) const;
    const char* lire_gtexte_msg() const;
    void ecrire_gtexte_msg(char* valeur, EMstatut& statut);
    void ecrire_gtexte_msg(char* valeur);

    int nombre_lieux(EMstatut& statut) const;
    int nombre_lieux() const;
    const char* lire_lieux(int nIndex, EMstatut& statut) const;
    const char* lire_lieux(int nIndex) const;
    int ajouter_lieux(char* elem, EMstatut& statut);
    int ajouter_lieux(char* elem);

    int nombre_peres(EMstatut& statut) const;
    int nombre_peres() const;
    const char* lire_peres(int nIndex, EMstatut& statut) const;
    const char* lire_peres(int nIndex) const;
    int ajouter_peres(char* elem, EMstatut& statut);
    int ajouter_peres(char* elem);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gid_ntm;
    char*  m_gserie;
    char*  m_gnumero;
    char*  m_gannee;
    char*  m_getat_soum;
    char*  m_gtype;
    char*  m_gfir;
    char*  m_gdate_deb;
    char*  m_gdate_fin;
    char*  m_gtexte;
    char*  m_gid_msg;
    char*  m_gdate_trans;
    char*  m_gcanal;
    char*  m_gnomesg;
    char*  m_gpriorite;
    char*  m_ggr_dateur;
    char*  m_gexpediteur;
    char*  m_gtexte_msg;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tlieux[EM_C_SIG_NTM_LIEUX];
    int m_nlieux;            // Taille courante de m_tlieux

    char*  m_tperes[EM_C_SIG_NTM_PERES];
    int m_nperes;            // Taille courante de m_tperes

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMnotamData.
    friend ostream& operator << (ostream& ostr, const EMnotamData& obj);


private:

    // Mesures de securite :
    EMnotamData& operator = (const EMnotamData&);
    int operator == (const EMnotamData&);
    int operator != (const EMnotamData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMnotamData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMnotamData.H
//------------------------------------------------------------------------------

