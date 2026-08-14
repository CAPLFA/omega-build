/*******************************************************************************
 * \file           EMmassifServeurVersClientImplementation.H
 * Application  :  EMMA
 * Rôle         :  Declarations des classes de reception cote client
 * Version(s)   :  v3.0.0  
 *
 * \author  Fichier généré automatiquement à partir de EMmassif.act
 * \date  Génération :  27/05/2025 a 12:52:52
 *******************************************************************************
 */


#ifndef __EMmassifServeurVersClientImplementation_H
#define __EMmassifServeurVersClientImplementation_H


//-------------------- Includes ----------------------------------------

#include "EMmassifServeurVersClientS.H"


//-------------------- Declaration de la classe en v3.0.0 ------------

class POA_EMmassif_v3_0_0_ServeurVersClientImplementation :
    public POA_emma_corba::EMmassif_v3_0_0_ServeurVersClient {


public:

    //---------- Operations declarees dans le fichier IDL --------------


    //----------------------------------------------------------------------------
    /// Opérations métiers. Cf. DDI du service massif pour plus de détails.
    //----------------------------------------------------------------------------

    //! Opération métier, cf. DDI du service massif.
    virtual void notifie_vol(
        const EMvolappData_v3_0_0& pVol,
        CORBA::Long eNotif,
        CORBA::Long nIdAbo,
        CORBA::Long nIdOpe
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service massif.
    virtual void repond_reponse(
        const EMreponseData_v3_0_0& pPln,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service massif.
    virtual void repond_repStip(
        const EMrepStipData_v3_0_0& pRepSTIP,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service massif.
    virtual void repond_repMult(
        const EMrepMultData_v3_0_0& pRepListe,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service massif.
    virtual void signale_info(
        CORBA::Long nErreur,
        const char* gMessage,
        CORBA::Long nIdent
        )
      throw(CORBA::SystemException);


    //! Opération métier, cf. DDI du service massif.
    virtual void fin_ini_abo_vol(
        CORBA::Long nIdAbo
        )
      throw(CORBA::SystemException);


    //----------------------------------------------------------------------------
    /// Fin des opérations métiers.
    //----------------------------------------------------------------------------

};

#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMmassifServeurVersClientImplementation.H
//------------------------------------------------------------------------------

