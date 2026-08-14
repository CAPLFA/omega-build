/*******************************************************************************
 * \file           EMplnServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMpln.act
 * \date  Génération :  27/05/2025 a 12:52:53
 *******************************************************************************
 */


#ifndef __EMplnServeurVersClientImplementation_H
#define __EMplnServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMplnServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMpln_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMpln_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service pln pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service pln.
    virtual void notifie_contexte(
        CORBA::Long eCtxt
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void notifie_pln(
        const EMplnData_v3_0_0& pPln,
        CORBA::Long eNotif,
        CORBA::Long nIdAbo,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void repond_reponse(
        const EMreponseData_v3_0_0& pPln,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void repond_repStip(
        const EMrepStipData_v3_0_0& pRepSTIP,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void repond_repMult(
        const EMrepMultData_v3_0_0& pRepListe,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void signale_info(
        CORBA::Long nErreur,
        const char* gMessage,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void fin_ini_abo_pln(
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service pln.
    virtual void notifie_strip(
        const EMstripData_v3_0_0& pStrip,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMplnServeurVersClientImplementation.H
//------------------------------------------------------------------------------

