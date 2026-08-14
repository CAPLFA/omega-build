/*******************************************************************************
 * \file           EMddvData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMddvData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMddv.data
 * \date  Génération :  27/05/2025 a 12:53:03
 *******************************************************************************
 */


#ifndef __EMddvData_H
#define __EMddvData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMddv_aeronefData.H"
#include "EMddv_complemtData.H"
#include "EMddv_diversData.H"
#include "EMsigbaseDEFINES.H"
#include "EMddv_regulData.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMddvData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   pdv
 *  \class   EMddvData
 *  \brief   Définition de la classe implémentant l'objet métier EMddvData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMddvData
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
class EMddvData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMddvData(
        EMddv_aeronefData* paeronef = (EMddv_aeronefData*) 0,
        EMddv_complemtData* pcomplement = (EMddv_complemtData*) 0,
        EMddv_diversData* pdivers = (EMddv_diversData*) 0,
        char* gid_ddv = (char*) 0,
        char* gtype = (char*) 0,
        char* getat = (char*) 0,
        char* gdate_depot = (char*) 0,
        char* gorigine = (char*) 0,
        char* gidaero = (char*) 0,
        char* gidssr = (char*) 0,
        char* gidmilit = (char*) 0,
        char* gtypvol = (char*) 0,
        char* gregvol = (char*) 0,
        char* geqrna = (char*) 0,
        char* geqssr = (char*) 0,
        char* gdate_dep = (char*) 0,
        char* gaerod_dep = (char*) 0,
        char* gheure_dep = (char*) 0,
        char* gniveau = (char*) 0,
        char* gvitesse = (char*) 0,
        char* groute = (char*) 0,
        char* gaerod_dest = (char*) 0,
        char* gaerod_deg1 = (char*) 0,
        char* gaerod_deg2 = (char*) 0,
        char* gduree = (char*) 0,
        char* gexpediteur = (char*) 0,
        char* gnocautra = (char*) 0,
        char* getcautra = (char*) 0,
        char* gnoifps = (char*) 0,
        char* getatifps = (char*) 0,
        char* gval_complt = (char*) 0,
        char* gneweobdt_fsh = (char*) 0,
        char* gidnext = (char*) 0,
        char* gformat_ddv = (char*) 0,
        int nregulation = 0,
        EMddv_regulData** tregulation = (EMddv_regulData**) 0,
        int ndestinataires = 0,
        char** tdestinataires = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMddvData(const EMddvData_v3_0_0&);



    // Destructeur
    ~EMddvData();


    // Constructeur de copie
    EMddvData(const EMddvData&);



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
    EMddvData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const EMddv_aeronefData* lire_paeronef(EMstatut& statut) const;
    const EMddv_aeronefData* lire_paeronef() const;
    void ecrire_paeronef(EMddv_aeronefData* valeur, EMstatut& statut);
    void ecrire_paeronef(EMddv_aeronefData* valeur);

    const EMddv_complemtData* lire_pcomplement(EMstatut& statut) const;
    const EMddv_complemtData* lire_pcomplement() const;
    void ecrire_pcomplement(EMddv_complemtData* valeur, EMstatut& statut);
    void ecrire_pcomplement(EMddv_complemtData* valeur);

    const EMddv_diversData* lire_pdivers(EMstatut& statut) const;
    const EMddv_diversData* lire_pdivers() const;
    void ecrire_pdivers(EMddv_diversData* valeur, EMstatut& statut);
    void ecrire_pdivers(EMddv_diversData* valeur);

    const char* lire_gid_ddv(EMstatut& statut) const;
    const char* lire_gid_ddv() const;
    void ecrire_gid_ddv(char* valeur, EMstatut& statut);
    void ecrire_gid_ddv(char* valeur);

    const char* lire_gtype(EMstatut& statut) const;
    const char* lire_gtype() const;
    void ecrire_gtype(char* valeur, EMstatut& statut);
    void ecrire_gtype(char* valeur);

    const char* lire_getat(EMstatut& statut) const;
    const char* lire_getat() const;
    void ecrire_getat(char* valeur, EMstatut& statut);
    void ecrire_getat(char* valeur);

    const char* lire_gdate_depot(EMstatut& statut) const;
    const char* lire_gdate_depot() const;
    void ecrire_gdate_depot(char* valeur, EMstatut& statut);
    void ecrire_gdate_depot(char* valeur);

    const char* lire_gorigine(EMstatut& statut) const;
    const char* lire_gorigine() const;
    void ecrire_gorigine(char* valeur, EMstatut& statut);
    void ecrire_gorigine(char* valeur);

    const char* lire_gidaero(EMstatut& statut) const;
    const char* lire_gidaero() const;
    void ecrire_gidaero(char* valeur, EMstatut& statut);
    void ecrire_gidaero(char* valeur);

    const char* lire_gidssr(EMstatut& statut) const;
    const char* lire_gidssr() const;
    void ecrire_gidssr(char* valeur, EMstatut& statut);
    void ecrire_gidssr(char* valeur);

    const char* lire_gidmilit(EMstatut& statut) const;
    const char* lire_gidmilit() const;
    void ecrire_gidmilit(char* valeur, EMstatut& statut);
    void ecrire_gidmilit(char* valeur);

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

    const char* lire_gdate_dep(EMstatut& statut) const;
    const char* lire_gdate_dep() const;
    void ecrire_gdate_dep(char* valeur, EMstatut& statut);
    void ecrire_gdate_dep(char* valeur);

    const char* lire_gaerod_dep(EMstatut& statut) const;
    const char* lire_gaerod_dep() const;
    void ecrire_gaerod_dep(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dep(char* valeur);

    const char* lire_gheure_dep(EMstatut& statut) const;
    const char* lire_gheure_dep() const;
    void ecrire_gheure_dep(char* valeur, EMstatut& statut);
    void ecrire_gheure_dep(char* valeur);

    const char* lire_gniveau(EMstatut& statut) const;
    const char* lire_gniveau() const;
    void ecrire_gniveau(char* valeur, EMstatut& statut);
    void ecrire_gniveau(char* valeur);

    const char* lire_gvitesse(EMstatut& statut) const;
    const char* lire_gvitesse() const;
    void ecrire_gvitesse(char* valeur, EMstatut& statut);
    void ecrire_gvitesse(char* valeur);

    const char* lire_groute(EMstatut& statut) const;
    const char* lire_groute() const;
    void ecrire_groute(char* valeur, EMstatut& statut);
    void ecrire_groute(char* valeur);

    const char* lire_gaerod_dest(EMstatut& statut) const;
    const char* lire_gaerod_dest() const;
    void ecrire_gaerod_dest(char* valeur, EMstatut& statut);
    void ecrire_gaerod_dest(char* valeur);

    const char* lire_gaerod_deg1(EMstatut& statut) const;
    const char* lire_gaerod_deg1() const;
    void ecrire_gaerod_deg1(char* valeur, EMstatut& statut);
    void ecrire_gaerod_deg1(char* valeur);

    const char* lire_gaerod_deg2(EMstatut& statut) const;
    const char* lire_gaerod_deg2() const;
    void ecrire_gaerod_deg2(char* valeur, EMstatut& statut);
    void ecrire_gaerod_deg2(char* valeur);

    const char* lire_gduree(EMstatut& statut) const;
    const char* lire_gduree() const;
    void ecrire_gduree(char* valeur, EMstatut& statut);
    void ecrire_gduree(char* valeur);

    const char* lire_gexpediteur(EMstatut& statut) const;
    const char* lire_gexpediteur() const;
    void ecrire_gexpediteur(char* valeur, EMstatut& statut);
    void ecrire_gexpediteur(char* valeur);

    const char* lire_gnocautra(EMstatut& statut) const;
    const char* lire_gnocautra() const;
    void ecrire_gnocautra(char* valeur, EMstatut& statut);
    void ecrire_gnocautra(char* valeur);

    const char* lire_getcautra(EMstatut& statut) const;
    const char* lire_getcautra() const;
    void ecrire_getcautra(char* valeur, EMstatut& statut);
    void ecrire_getcautra(char* valeur);

    const char* lire_gnoifps(EMstatut& statut) const;
    const char* lire_gnoifps() const;
    void ecrire_gnoifps(char* valeur, EMstatut& statut);
    void ecrire_gnoifps(char* valeur);

    const char* lire_getatifps(EMstatut& statut) const;
    const char* lire_getatifps() const;
    void ecrire_getatifps(char* valeur, EMstatut& statut);
    void ecrire_getatifps(char* valeur);

    const char* lire_gval_complt(EMstatut& statut) const;
    const char* lire_gval_complt() const;
    void ecrire_gval_complt(char* valeur, EMstatut& statut);
    void ecrire_gval_complt(char* valeur);

    const char* lire_gneweobdt_fsh(EMstatut& statut) const;
    const char* lire_gneweobdt_fsh() const;
    void ecrire_gneweobdt_fsh(char* valeur, EMstatut& statut);
    void ecrire_gneweobdt_fsh(char* valeur);

    const char* lire_gidnext(EMstatut& statut) const;
    const char* lire_gidnext() const;
    void ecrire_gidnext(char* valeur, EMstatut& statut);
    void ecrire_gidnext(char* valeur);

    const char* lire_gformat_ddv(EMstatut& statut) const;
    const char* lire_gformat_ddv() const;
    void ecrire_gformat_ddv(char* valeur, EMstatut& statut);
    void ecrire_gformat_ddv(char* valeur);

    int nombre_regulation(EMstatut& statut) const;
    int nombre_regulation() const;
    const EMddv_regulData* lire_regulation(int nIndex, EMstatut& statut) const;
    const EMddv_regulData* lire_regulation(int nIndex) const;
    int ajouter_regulation(EMddv_regulData* elem, EMstatut& statut);
    int ajouter_regulation(EMddv_regulData* elem);

    int nombre_destinataires(EMstatut& statut) const;
    int nombre_destinataires() const;
    const char* lire_destinataires(int nIndex, EMstatut& statut) const;
    const char* lire_destinataires(int nIndex) const;
    int ajouter_destinataires(char* elem, EMstatut& statut);
    int ajouter_destinataires(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    EMddv_aeronefData*  m_paeronef;
    EMddv_complemtData*  m_pcomplement;
    EMddv_diversData*  m_pdivers;
    char*  m_gid_ddv;
    char*  m_gtype;
    char*  m_getat;
    char*  m_gdate_depot;
    char*  m_gorigine;
    char*  m_gidaero;
    char*  m_gidssr;
    char*  m_gidmilit;
    char*  m_gtypvol;
    char*  m_gregvol;
    char*  m_geqrna;
    char*  m_geqssr;
    char*  m_gdate_dep;
    char*  m_gaerod_dep;
    char*  m_gheure_dep;
    char*  m_gniveau;
    char*  m_gvitesse;
    char*  m_groute;
    char*  m_gaerod_dest;
    char*  m_gaerod_deg1;
    char*  m_gaerod_deg2;
    char*  m_gduree;
    char*  m_gexpediteur;
    char*  m_gnocautra;
    char*  m_getcautra;
    char*  m_gnoifps;
    char*  m_getatifps;
    char*  m_gval_complt;
    char*  m_gneweobdt_fsh;
    char*  m_gidnext;
    char*  m_gformat_ddv;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    EMddv_regulData*  m_tregulation[EM_C_SIG_REGULATION];
    int m_nregulation;            // Taille courante de m_tregulation

    char*  m_tdestinataires[EM_C_SIG_DEST_RSFTA];
    int m_ndestinataires;            // Taille courante de m_tdestinataires


    // Ajoute sur le flux les attributs d'un objet EMddvData.
    friend ostream& operator << (ostream& ostr, const EMddvData& obj);


private:

    // Mesures de securite :
    EMddvData& operator = (const EMddvData&);
    int operator == (const EMddvData&);
    int operator != (const EMddvData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMddvData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMddvData.H
//------------------------------------------------------------------------------

