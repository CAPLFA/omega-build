/*******************************************************************************
 * \file           EMtranslistData.H
 * Application  :  EMMA
 * Rôle         :  Declaration de la structure EMtranslistData
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMtranslist.data
 * \date  Génération :  27/05/2025 a 12:52:50
 *******************************************************************************
 */


#ifndef __EMtranslistData_H
#define __EMtranslistData_H


//-------------------- Includes ----------------------------------------

#include <iostream>
#include <vector>

#include "EMstatut.H"
#include "EMversion.H"
#include "EMglobalsIpl.H"

#include "EMdiDEFINES.H"


using namespace emma;


// Classes des objets CORBA transmis
class EMtranslistData_v3_0_0;



// -----------------------------------------------------------------------------
/*! \addtogroup   di
 *  \class   EMtranslistData
 *  \brief   Définition de la classe implémentant l'objet métier EMtranslistData
 *
 *  \par   Description
 *         Cette classe définit le contenu de l'objet EMtranslistData
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
class EMtranslistData {

private:

    // Types des constantes "version" permettant de distinguer les constructeurs
    typedef class _v3_0_0{} T_v3_0_0;


public:

    //---------- Constructeurs / Destructeurs --------------------------

    // Constructeur par defaut (v3.0.0)
    explicit EMtranslistData(
        char* gTRANS = (char*) 0,
        int nFLIMP = (int) 0,
        int nFLMIN = (int) 0,
        int nFLMAX = (int) 0,
        int nDELTA1 = (int) 0,
        int nDELTA2 = (int) 0,
        int nCFLIMP = (int) 0,
        int nCFLMIN = (int) 0,
        int nCFLMAX = (int) 0,
        int nPFLIMP = (int) 0,
        int nPFLMIN = (int) 0,
        int nPFLMAX = (int) 0,
        int nDELTSP1 = (int) 0,
        int nDELTSP2 = (int) 0,
        int nXFLMIN = (int) 0,
        int nXFLMAX = (int) 0,
        int nTRFLMIN = (int) 0,
        int nTRFLMAX = (int) 0,
        int nfieldid = 0,
        char** tfieldid = (char**) 0
    );


    // Construction a partir d'un objet CORBA v3.0.0 recu (usage interne EMMA)
    EMtranslistData(const EMtranslistData_v3_0_0&);



    // Destructeur
    ~EMtranslistData();


    // Constructeur de copie
    EMtranslistData(const EMtranslistData&);



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
    EMtranslistData_v3_0_0 construireObjetSpecifique_v3_0_0() const;


    // Rend l'objet specifique a une version (usage interne EMMA)
    void definirVersionValide_v3_0_0();




    //---------- Accesseurs --------------------------------------------

    const char* lire_gTRANS(EMstatut& statut) const;
    const char* lire_gTRANS() const;
    void ecrire_gTRANS(char* valeur, EMstatut& statut);
    void ecrire_gTRANS(char* valeur);

    int lire_nFLIMP(EMstatut& statut) const;
    int lire_nFLIMP() const;
    void ecrire_nFLIMP(const int valeur, EMstatut& statut);
    void ecrire_nFLIMP(const int valeur);

    int lire_nFLMIN(EMstatut& statut) const;
    int lire_nFLMIN() const;
    void ecrire_nFLMIN(const int valeur, EMstatut& statut);
    void ecrire_nFLMIN(const int valeur);

    int lire_nFLMAX(EMstatut& statut) const;
    int lire_nFLMAX() const;
    void ecrire_nFLMAX(const int valeur, EMstatut& statut);
    void ecrire_nFLMAX(const int valeur);

    int lire_nDELTA1(EMstatut& statut) const;
    int lire_nDELTA1() const;
    void ecrire_nDELTA1(const int valeur, EMstatut& statut);
    void ecrire_nDELTA1(const int valeur);

    int lire_nDELTA2(EMstatut& statut) const;
    int lire_nDELTA2() const;
    void ecrire_nDELTA2(const int valeur, EMstatut& statut);
    void ecrire_nDELTA2(const int valeur);

    int lire_nCFLIMP(EMstatut& statut) const;
    int lire_nCFLIMP() const;
    void ecrire_nCFLIMP(const int valeur, EMstatut& statut);
    void ecrire_nCFLIMP(const int valeur);

    int lire_nCFLMIN(EMstatut& statut) const;
    int lire_nCFLMIN() const;
    void ecrire_nCFLMIN(const int valeur, EMstatut& statut);
    void ecrire_nCFLMIN(const int valeur);

    int lire_nCFLMAX(EMstatut& statut) const;
    int lire_nCFLMAX() const;
    void ecrire_nCFLMAX(const int valeur, EMstatut& statut);
    void ecrire_nCFLMAX(const int valeur);

    int lire_nPFLIMP(EMstatut& statut) const;
    int lire_nPFLIMP() const;
    void ecrire_nPFLIMP(const int valeur, EMstatut& statut);
    void ecrire_nPFLIMP(const int valeur);

    int lire_nPFLMIN(EMstatut& statut) const;
    int lire_nPFLMIN() const;
    void ecrire_nPFLMIN(const int valeur, EMstatut& statut);
    void ecrire_nPFLMIN(const int valeur);

    int lire_nPFLMAX(EMstatut& statut) const;
    int lire_nPFLMAX() const;
    void ecrire_nPFLMAX(const int valeur, EMstatut& statut);
    void ecrire_nPFLMAX(const int valeur);

    int lire_nDELTSP1(EMstatut& statut) const;
    int lire_nDELTSP1() const;
    void ecrire_nDELTSP1(const int valeur, EMstatut& statut);
    void ecrire_nDELTSP1(const int valeur);

    int lire_nDELTSP2(EMstatut& statut) const;
    int lire_nDELTSP2() const;
    void ecrire_nDELTSP2(const int valeur, EMstatut& statut);
    void ecrire_nDELTSP2(const int valeur);

    int lire_nXFLMIN(EMstatut& statut) const;
    int lire_nXFLMIN() const;
    void ecrire_nXFLMIN(const int valeur, EMstatut& statut);
    void ecrire_nXFLMIN(const int valeur);

    int lire_nXFLMAX(EMstatut& statut) const;
    int lire_nXFLMAX() const;
    void ecrire_nXFLMAX(const int valeur, EMstatut& statut);
    void ecrire_nXFLMAX(const int valeur);

    int lire_nTRFLMIN(EMstatut& statut) const;
    int lire_nTRFLMIN() const;
    void ecrire_nTRFLMIN(const int valeur, EMstatut& statut);
    void ecrire_nTRFLMIN(const int valeur);

    int lire_nTRFLMAX(EMstatut& statut) const;
    int lire_nTRFLMAX() const;
    void ecrire_nTRFLMAX(const int valeur, EMstatut& statut);
    void ecrire_nTRFLMAX(const int valeur);

    int nombre_fieldid(EMstatut& statut) const;
    int nombre_fieldid() const;
    const char* lire_fieldid(int nIndex, EMstatut& statut) const;
    const char* lire_fieldid(int nIndex) const;
    int ajouter_fieldid(char* elem, EMstatut& statut);
    int ajouter_fieldid(char* elem);



    //---------- Declaration des champs en acces direct ----------------

    char*  m_gTRANS;
    int  m_nFLIMP;
    int  m_nFLMIN;
    int  m_nFLMAX;
    int  m_nDELTA1;
    int  m_nDELTA2;
    int  m_nCFLIMP;
    int  m_nCFLMIN;
    int  m_nCFLMAX;
    int  m_nPFLIMP;
    int  m_nPFLMIN;
    int  m_nPFLMAX;
    int  m_nDELTSP1;
    int  m_nDELTSP2;
    int  m_nXFLMIN;
    int  m_nXFLMAX;
    int  m_nTRFLMIN;
    int  m_nTRFLMAX;


protected:

    //---------- Declaration des champs sans acces direct --------------



    //---------- Declaration des tableaux et des attributs associes ----

    char*  m_tfieldid[C_EM_NB_FIELDID];
    int m_nfieldid;            // Taille courante de m_tfieldid


    // Ajoute sur le flux les attributs d'un objet EMtranslistData.
    friend ostream& operator << (ostream& ostr, const EMtranslistData& obj);


private:

    // Mesures de securite :
    EMtranslistData& operator = (const EMtranslistData&);
    int operator == (const EMtranslistData&);
    int operator != (const EMtranslistData&);


    //---------- Attributs particuliers --------------------------------

    EMversion _version1;   // Version la + ancienne, ou version unique
    EMversion _version2;   // Version la + recente, ou Nul si version unique

    EMversion _versionValide;   // Version valide, ou nul si objet generique


};


//---------- Definitions associees -------------------------------------

ostream& operator << (ostream& ostr, const EMtranslistData& obj);


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMtranslistData.H
//------------------------------------------------------------------------------

