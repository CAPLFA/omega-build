/*******************************************************************************
 * \file           EMmvtmsgData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmvtmsgData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmvtmsg.data
 * \date  Génération :  27/05/2025 a 12:53:01
 *******************************************************************************
 */


#ifndef __EMmvtmsgData_H
#define __EMmvtmsgData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMsigbaseDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMmvtmsgData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   ldm
 *  \class   EMmvtmsgData
 *  \brief   Définition de la classe implémentant l'objet métier EMmvtmsgData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmvtmsgData
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
class EMmvtmsgData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmvtmsgData(
        char* gident_rsfta = (char*) 0,
        char* gident_mvt = (char*) 0,
        char* gident_vol = (char*) 0,
        char* gident_ddv = (char*) 0,
        char* ginderr = (char*) 0,
        char* gident_mvt_err = (char*) 0,
        char* getat = (char*) 0,
        char* gsens = (char*) 0,
        char* gdate_trans = (char*) 0,
        char* ggr_dateur = (char*) 0,
        char* gcanal = (char*) 0,
        char* gnumero = (char*) 0,
        char* gtype = (char*) 0,
        char* gindicat = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gexpediteur = (char*) 0,
        char* gpt_limite = (char*) 0,
        char* gheure_passage = (char*) 0,
        char* gniveau_aut = (char*) 0,
        char* gniveau_pas = (char*) 0,
        char* gcondition = (char*) 0,
        char* gtexte = (char*) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmvtmsgData(const EMmvtmsgData_v3_0_0&);



    // Destructeur
    ~EMmvtmsgData();


    // Constructeur de copie
    EMmvtmsgData(const EMmvtmsgData&);



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
    EMmvtmsgData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gident_rsfta(EMstatut& statut) const;
    const char* lire_gident_rsfta() const;
    void ecrire_gident_rsfta(char* valeur, EMstatut& statut);
    void ecrire_gident_rsfta(char* valeur);

    const char* lire_gident_mvt(EMstatut& statut) const;
    const char* lire_gident_mvt() const;
    void ecrire_gident_mvt(char* valeur, EMstatut& statut);
    void ecrire_gident_mvt(char* valeur);

    const char* lire_gident_vol(EMstatut& statut) const;
    const char* lire_gident_vol() const;
    void ecrire_gident_vol(char* valeur, EMstatut& statut);
    void ecrire_gident_vol(char* valeur);

    const char* lire_gident_ddv(EMstatut& statut) const;
    const char* lire_gident_ddv() const;
    void ecrire_gident_ddv(char* valeur, EMstatut& statut);
    void ecrire_gident_ddv(char* valeur);

    const char* lire_ginderr(EMstatut& statut) const;
    const char* lire_ginderr() const;
    void ecrire_ginderr(char* valeur, EMstatut& statut);
    void ecrire_ginderr(char* valeur);

    const char* lire_gident_mvt_err(EMstatut& statut) const;
    const char* lire_gident_mvt_err() const;
    void ecrire_gident_mvt_err(char* valeur, EMstatut& statut);
    void ecrire_gident_mvt_err(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gsens(EMstatut& statut) const;
    const char* lire_gsens() const;
    void ecrire_gsens(char* valeur, EMstatut& statut);
    void ecrire_gsens(char* valeur);

    const char* lire_gdate_trans(EMstatut& statut) const;
    const char* lire_gdate_trans() const;
    void ecrire_gdate_trans(char* valeur, EMstatut& statut);
    void ecrire_gdate_trans(char* valeur);

    const char* lire_ggr_dateur(EMstatut& statut) const;
    const char* lire_ggr_dateur() const;
    void ecrire_ggr_dateur(char* valeur, EMstatut& statut);
    void ecrire_ggr_dateur(char* valeur);

    const char* lire_gcanal(EMstatut& statut) const;
    const char* lire_gcanal() const;
    void ecrire_gcanal(char* valeur, EMstatut& statut);
    void ecrire_gcanal(char* valeur);

    const char* lire_gnumero(EMstatut& statut) const;
    const char* lire_gnumero() const;
    void ecrire_gnumero(char* valeur, EMstatut& statut);
    void ecrire_gnumero(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_gindicat(EMstatut& statut) const;
    const char* lire_gindicat() const;
    void ecrire_gindicat(char* valeur, EMstatut& statut);
    void ecrire_gindicat(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gexpediteur(EMstatut& statut) const;
    const char* lire_gexpediteur() const;
    void ecrire_gexpediteur(char* valeur, EMstatut& statut);
    void ecrire_gexpediteur(char* valeur);

    const char* lire_gpt_limite(EMstatut& statut) const;
    const char* lire_gpt_limite() const;
    void ecrire_gpt_limite(char* valeur, EMstatut& statut);
    void ecrire_gpt_limite(char* valeur);

    const char* lire_gheure_passage(EMstatut& statut) const;
    const char* lire_gheure_passage() const;
    void ecrire_gheure_passage(char* valeur, EMstatut& statut);
    void ecrire_gheure_passage(char* valeur);

    const char* lire_gniveau_aut(EMstatut& statut) const;
    const char* lire_gniveau_aut() const;
    void ecrire_gniveau_aut(char* valeur, EMstatut& statut);
    void ecrire_gniveau_aut(char* valeur);

    const char* lire_gniveau_pas(EMstatut& statut) const;
    const char* lire_gniveau_pas() const;
    void ecrire_gniveau_pas(char* valeur, EMstatut& statut);
    void ecrire_gniveau_pas(char* valeur);

    const char* lire_gcondition(EMstatut& statut) const;
    const char* lire_gcondition() const;
    void ecrire_gcondition(char* valeur, EMstatut& statut);
    void ecrire_gcondition(char* valeur);

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

    char*  m_gident_rsfta;
    char*  m_gident_mvt;
    char*  m_gident_vol;
    char*  m_gident_ddv;
    char*  m_ginderr;
    char*  m_gident_mvt_err;
    char*  m_getat;
    char*  m_gsens;
    char*  m_gdate_trans;
    char*  m_ggr_dateur;
    char*  m_gcanal;
    char*  m_gnumero;
    char*  m_gtype;
    char*  m_gindicat;
    char*  m_gaerod_dep;
    char*  m_gaerod_dest;
    char*  m_gexpediteur;
    char*  m_gpt_limite;
    char*  m_gheure_passage;
    char*  m_gniveau_aut;
    char*  m_gniveau_pas;
    char*  m_gcondition;
    char*  m_gtexte;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMmvtmsgData.
    friend ostream& operator << (ostream& ostr, const EMmvtmsgData& obj);


private:

    // Mesures de securite :
    EMmvtmsgData& operator = (const EMmvtmsgData&);
    int operator == (const EMmvtmsgData&);
    int operator != (const EMmvtmsgData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmvtmsgData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmvtmsgData.H
//------------------------------------------------------------------------------

