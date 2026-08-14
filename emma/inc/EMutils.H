//*****************************************************************************
/*!
 * \file        EMutils.H
 * Application  EMMA
 * \author      
 *
 * Interface commune à tous les adaptateurs clients.
 */
//*****************************************************************************


#ifndef __EMMA__EMutils_H
#define __EMMA__EMutils_H

  //---------------- Declaration classe --------------------------
class EMmatriceIntInt 
{
   //------ Methodes
public:
   // constructeurs / destructeurs
   EMmatriceIntInt();
   virtual ~EMmatriceIntInt();
   // accesseurs
   int estPresent( int i );
   int trouve( int i );
   void printObj();
		
   // modifieurs
   void ajoute( int i, int j );
   void retire( int i );
		  
   // operateurs

private:
   void * m_pMatrice;
};

#endif // __EMMA__EMUTILS_H

