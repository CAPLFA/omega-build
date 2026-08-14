//*****************************************************************************
/*! \file        EMcommunCB.H
 *  Application  EMMA
 *  \author      Erwan Demairy
 *
 *  Déclare l'interface EMcommunCB, qui permet au noyau EMMA d'interagir
 *  avec le noyau d'EMMA.
 */
//*****************************************************************************
#ifndef __EMCOMMUNCB_H
#define __EMCOMMUNCB_H

#include "EMfd.H"
using namespace emma;
// ----------------------------------------------------------------------------
/*! \class   EMcommunCB
 *  \brief   Interface d'appel d'une application par EMMA.
 *  \author  Erwan Demairy
 *  \date    12 août 2005
 *
 *  \par Description
 *    EMcommunCB est une interface : il n'est donc pas possible de créer
 *    un objet de ce type.
 */
class EMcommunCB
{
public:
   // --------------------------------------------------------------------------
   //! Demande à l'application si elle veut recevoir les traces d'un niveau.
   /*! \param niveau [in] Niveau de trace dont E
    *  \return
    *    - 0 signifie que l'application accepte d'être notifiée.
    *    - toute autre valeur indique que l'application ne veut pas
    *            être notifiée des traces de ce niveau.
    *----------------------------------------------------------------------------
    */
   static int autoriseNiveauTrace(int niveau);

   static void archiveMessageTrace(int niveau, const char* message);

   static void ajoutFD( EMfd fd);

   static void suppressionFD( EMfd fd);

private:

   EMcommunCB();

   virtual ~EMcommunCB();

};





#endif /* __EMCOMMUNCB_H */
