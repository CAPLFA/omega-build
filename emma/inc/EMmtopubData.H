/*******************************************************************************
 * \file           EMmtopubData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMmtopubData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmtopub.data
 * \date  Génération :  27/05/2025 a 12:53:02
 *******************************************************************************
 */


#ifndef __EMmtopubData_H
#define __EMmtopubData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"



using namespace emma;


// Classes des objets CORBA transmis
class EMmtopubData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   mto
 *  \class   EMmtopubData
 *  \brief   Définition de la classe implémentant l'objet métier EMmtopubData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMmtopubData
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
class EMmtopubData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMmtopubData(
        char* gidmsg = (char*) 0,
        char* goaci = (char*) 0,
        char* gtypmsg = (char*) 0,
        char* gclasse = (char*) 0,
        char* gdate_ref = (char*) 0,
        char* gstatut = (char*) 0,
        char* ginfo = (char*) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMmtopubData(const EMmtopubData_v3_0_0&);



    // Destructeur
    ~EMmtopubData();


    // Constructeur de copie
    EMmtopubData(const EMmtopubData&);



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
    EMmtopubData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gidmsg(EMstatut& statut) const;
    const char* lire_gidmsg() const;
    void ecrire_gidmsg(char* valeur, EMstatut& statut);
    void ecrire_gidmsg(char* valeur);

    const char* lire_goaci(EMstatut& statut) const;
    const char* lire_goaci() const;
    void ecrire_goaci(char* valeur, EMstatut& statut);
    void ecrire_goaci(char* valeur);

    const char* lire_gtypmsg(EMstatut& statut) const;
    const char* lire_gtypmsg() const;
    void ecrire_gtypmsg(char* valeur, EMstatut& statut);
    void ecrire_gtypmsg(char* valeur);

    const char* lire_gclasse(EMstatut& statut) const;
    const char* lire_gclasse() const;
    void ecrire_gclasse(char* valeur, EMstatut& statut);
    void ecrire_gclasse(char* valeur);

    const char* lire_gdate_ref(EMstatut& statut) const;
    const char* lire_gdate_ref() const;
    void ecrire_gdate_ref(char* valeur, EMstatut& statut);
    void ecrire_gdate_ref(char* valeur);

    const char* lire_gstatut(EMstatut& statut) const;
    const char* lire_gstatut() const;
    void ecrire_gstatut(char* valeur, EMstatut& statut);
    void ecrire_gstatut(char* valeur);

    const char* lire_ginfo(EMstatut& statut) const;
    const char* lire_ginfo() const;
    void ecrire_ginfo(char* valeur, EMstatut& statut);
    void ecrire_ginfo(char* valeur);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gidmsg;
    char*  m_goaci;
    char*  m_gtypmsg;
    char*  m_gclasse;
    char*  m_gdate_ref;
    char*  m_gstatut;
    char*  m_ginfo;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----


    // Ajoute sur le flux les attributs d'un objet EMmtopubData.
    friend ostream& operator << (ostream& ostr, const EMmtopubData& obj);


private:

    // Mesures de securite :
    EMmtopubData& operator = (const EMmtopubData&);
    int operator == (const EMmtopubData&);
    int operator != (const EMmtopubData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMmtopubData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmtopubData.H
//------------------------------------------------------------------------------

