//*****************************************************************************
/*! \file       EMversion.H
 *  Application EMMA
 *  \author     Jean-Francois Bosc
 *  Déclaration de la classe EMversion. Attention : toutes les opérations
 *  de comparaison ( !=, ==, <, estNulle) s'effectuent uniquement sur les
 *  numéros de version majeurs et mineurs. Le numéro d'itération n'est pas
 *  pris en compte.
 */
//*****************************************************************************

#ifndef __EMMA__EMVERSION_H
#define __EMMA__EMVERSION_H

/// Pour connaître NiveauService.

#include <string>
using namespace std;

namespace emma_corba
{
   class NiveauService;
}

namespace emma
{
   // ---------------------------------------------------------------------------
   /*! \class EMversion
    *  Attention à l'opérateur de copie ( "=" ) : c'est celui par défaut qui
    *  s'applique ici, autrement la copie s'effectue bit-à-bit.
    */
   // ---------------------------------------------------------------------------   
   class EMversion 
   {
   public:
      EMversion(int majeur = 0, int mineur = 0, int patch = 0, int increment = 0);
			
      /*!  Permet d'effectuer des affectations du type :
       *  EMversion version = niveau;
       *  \param niveau Niveau de service transmis par CORBA.
       */
      EMversion( const emma_corba::NiveauService& niveau);
      //--------------------------------------------------------------------------
      /*! Renvoie le numéro majeur.
       *  \return Numéro de version majeur.
       */
      //--------------------------------------------------------------------------
      int lireNumeroMajeur() const;
      //------------------------------------------------------------------------
      /*! Renvoie le numéro mineur.
       *  \return Numéro de version mineur.
       */
      //------------------------------------------------------------------------
      int lireNumeroMineur() const;
      //------------------------------------------------------------------------
      /*! Renvoie le numéro de patch.
       *  \return Numéro de patch.
       */
      //------------------------------------------------------------------------
      int lireNumeroPatch() const;
      //------------------------------------------------------------------------
      /*! Renvoie le numéro d'itération interne. Ce numéro est ignoré pour tous 
       *  les calculs de compatibilité ( "==", "<", "!=" ).
       *  \return Numéro d'itération interne.
       */
      //------------------------------------------------------------------------
      int lireNumeroIncrement() const;
      //--------------------------------------------------------------------------
      //! Conversion en un niveau de service CORBA.
      //--------------------------------------------------------------------------
      operator emma_corba::NiveauService() const;
      //--------------------------------------------------------------------------
      //! Conversion en une chaîne de caractère "char*".
      //--------------------------------------------------------------------------
      operator const char*() const;
      //--------------------------------------------------------------------------
      //! Conversion en un chaîne de caractère "string".
      //--------------------------------------------------------------------------
      operator string() const;
      //--------------------------------------------------------------------------
      /*! Teste si le numéro de version est nul. Plus efficace que
       *  " == VERSION_NULLE".
       *  \return Vrai si et seulement si _majeur==_mineur==_patch==0.
       */
      //--------------------------------------------------------------------------      
      bool estNulle() const;
   protected:
      //! Numéro de version majeur.
      int _majeur;
      //! Numéro de version mineur.
      int _mineur;
      //! Numéro de patch.
      int _patch;
      //! Numéro d'itération interne.
      int _increment;
			
      friend bool operator<(const EMversion& version1, const EMversion& version2);
      friend bool operator==(const EMversion& version1, const EMversion& version2);
      friend ostream& operator<<(ostream& o, const EMversion& version);
   };

   //----------------------------------------------------------------------------
   /*! Définit une relation d'ordre sur les versions (utilisé implicitement par
    *  les map et autres listes ordonnées de la STL. 
    */
   //----------------------------------------------------------------------------
   bool operator<(const EMversion& version1, const EMversion& version2);
	
   //----------------------------------------------------------------------------
   //! Relation d'inégalité.
   //----------------------------------------------------------------------------
   bool operator!=(const EMversion& version1, const EMversion& version2);

   //----------------------------------------------------------------------------
   /*! Relation d'égalité. Peut-être utilisé par les algorithmes ou les 
    *  structures de données de la STL.
    */
   //----------------------------------------------------------------------------
   bool operator==(const EMversion& version1, const EMversion& version2);

   //----------------------------------------------------------------------------
   //! Numéro de version nul.
   //----------------------------------------------------------------------------
   extern const EMversion VERSION_NULLE;
	
   //----------------------------------------------------------------------------
   //! Opération d'affichage d'une version dans un flux. 
   //----------------------------------------------------------------------------
   ostream& operator<<(ostream& o, const EMversion& version);
}


#endif // EMMA__EMVERSION_H
