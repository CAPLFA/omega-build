//*****************************************************************************
/*!\file        EMcommunItf.H
 * Application  EMMA 3
 * \author      Erwan Demairy
 *
 * Déclare l'interface EMcommunItf, qui permet à l'application
 * d'interagir avec le noyau d'EMMA.
 */
//*****************************************************************************
#ifndef __EMCOMMUNITF_H
#define __EMCOMMUNITF_H

#include "EMfd.H"
#include "EMglobalsItf.H"
#include "EMversion.H" 

// ----------------------------------------------------------------------------
/*! \class   EMcommunItf
 *  \brief   Interface d'appel du noyau EMMA par une application.
 *  \author  Erwan Demairy
 *  \date    12 août 2005
 *
 *  \par  Description
 *    EMcommunItf est une interface statique qui permet à une application 
 *    de manipuler le noyau d'EMMA, c'est-à-dire les fonctionnalités
 *    indépendantes d'un service métier spécifique.
 *
 *  \par  Dynamique
 *    EMcommunItf étant une interface, il n'est pas possible d'instancier la
 *    classe. Tous les accès se font pas des méthodes statiques 
 *    EMcommunItf:: ....
 *
 *  \par  Enchaînement des opérations
 *    Une application qui souhaite utiliser EMMA doit :
 *    1. appeler la méthode initialise() en donnant le nom logique de 
 *       l'application. Ce nom est utilisé par EMMA pour distinguer les 
 *       applications. Ce nom doit être unique pour une machine d'exécution.
 *    2. Enregistrer le descripteur de fichier renvoyé par EMMA avec 
 *       EMcommunCB::ajoutFD.
 *    3. Exécuter une boucle d'événement de type select. Cette boucle doit
 *       scruter le descripteur de fichier d'EMMA, en plus de ceux 
 *       éventuellement utilisés par l'application. 
 *       Dans cette boucle, l'application peut effectuer les opérations
 *       suivantes : 
 *       i. activer un service métier, en tant que client ou serveur.
 *       ii. une fois activée, l'application peut émettre au moyen
 *         de l'interface EMxxxItf::appel vers son interlocuteur.
 *       iii. la réception d'un envoi se fait par l'appel des
 *         procédure EMxxxCB::appelCB, qui doivent être définies par 
 *         l'application.
 *    4. Lorsque l'application n'a plus besoin d'un service EMMA, elle 
 *       le désactive en appelant EMxxxItf::desactive().
 *    5. Lorsque l'application ne souhaite plus utiliser EMMA, elle 
 *       appelle EMcommunItf::fin(), ce qui permet de nettoyer le contexte
 *       de l'application.
 */
class EMcommunItf
{
public:
   // --------------------------------------------------------------------------
   /*! Cette méthode permet à l'application de demander l'initialisation
    *  du point d'accès.
    *  Disposer d'un point d'accès permet à l'application d'utiliser ou de
    *  rendre des services EMMA, une fois ceux-ci activés.
    *  Le rôle de cette méthode est :
    *    1. d'initialiser l'ORB utilisé par EMMA pour communiquer ;
    *    2. créer le POA du noyau et l'enregistrer auprès du service de nommage;
    *    3. de créer le tubepermettant à l'outil de visualisation de modifier 
    *       le niveau d'information de débogage ;
    *
    *  \param nomLogique [in] Nom qui permet à EMMA de distinguer les
    *    différentes applications. Ce nom doit être unique pour une même machine
    *    d'exécution.
    *
    *  \return Le résultat de l'initialisation.
    *    - EMS_OK si tout s'est bien passé, et que le point d'accès
    *      est maintenant opérationnel.
    *    - EMS_DEJA_INITIALISE si le point d'accès est déjà initialisé.      
    *    
    *    - EMS_ERREUR si la création de l'ORB est impossible.
    *  \sa  fin()
    *
    *  \todo Trouver un moyen de factoriser le code de blindage (try...catch
    *    répétés dans toutes les méthodes).
    */
   //---------------------------------------------------------------------------
   static EMstatus initialise(const char* nomLogique) throw();

   // --------------------------------------------------------------------------
   //! Fait passer le point d'accès dans l'état "désactivé".
   /*! Le rôle de cette méthode est de :
    * 	1. clôturer tous les service serveur (appel de EM_x_SerItf::desactive() ) ;
    * 	2. clôturer toutes les connexions clientes (appel de EM_x_CliItf::desactive()) ;
    * 	3. désenregistrer l'objet noyau auprès du service de nommage.
    */
   //-------------------------------------------------------------------------
   static EMstatus fin() throw();

   // --------------------------------------------------------------------------
   //! Fonction appelée par l'application lorsqu'elle détecte un
   //! événement.
   /*! Cette méthode permet à l'application de notifier EMMA
    * qu'un événement a eu lieu sur le descripteur de fichier fd.
    */
   //-------------------------------------------------------------------------
   static void traitementFD( EMfd fd ) throw();

   // --------------------------------------------------------------------------
   //! Procédure obsolète.
   /*! Cette fonction ne devrait plus être appelée.
    */
   //-------------------------------------------------------------------------
   static void testerCom() throw();

   // --------------------------------------------------------------------------
   //! Procédure obsolète, remplacée par la fonction afficheTout.
   /*! Cette méthode ne devrait plus être appelée.
    */
   //-------------------------------------------------------------------------
   static void printAll() throw();

   // ------------------------------------------------------------------------
   //! Permet l'affichage de l'ensemble des objets EMMA de l'application.
   /*! Cette fonction remplace printAll.
    */
   //-------------------------------------------------------------------------
   static EMstatus afficheTout() throw();

   // ------------------------------------------------------------------------
   //! Recupération de la version du noyau
   //-------------------------------------------------------------------------
   static EMversion lireVersion() throw();

private:
   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, du constructeur.
   //-------------------------------------------------------------------------
   EMcommunItf();

   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, du destructeur.
   //-------------------------------------------------------------------------
   virtual ~EMcommunItf();

   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, du constructeur par
   //! copie.
   //-------------------------------------------------------------------------
   EMcommunItf(const EMcommunItf&);

   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, de l'opérateur de copie.
   //-------------------------------------------------------------------------
   EMcommunItf& operator =(const EMcommunItf&);

   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, de l'opérateur
   //! d'égalité.
   //-------------------------------------------------------------------------
   int operator ==(const EMcommunItf&);

   // ------------------------------------------------------------------------
   //! Empêche l'utilisation, implicite ou explicite, de l'opérateur
   //! d'inégalité.
   //-------------------------------------------------------------------------
   int operator !=(const EMcommunItf&);

}; // class EMcommunItf


#endif // __EMCOMMUNITF_H
