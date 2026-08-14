/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_agent_h
#define CVS_id_agent_h
static const char *CVS_agent_h __attribute__ ((unused)) = "@(#) $Id: agent.h 123 2013-11-19 10:04:21Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : Agent.h
**
** Description : Interface avec l'AgentX
**
** Utilisation :
**
** Implementation :
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : CBR     Date :  13/06/13 Version :
**    Origine : Portage CentOS 6.3
** MODIFICATIONS :
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
**
*******************************************************************************/

#ifndef __AGENT__
#define __AGENT__

#include "errorcode.h"
#define CAGENT_OK        0
#define CAGENT_KO        1

enum SNMP_cat
   {
        CSMS_GEDEON,
        CSMS_APPLI,
        CSMS_SE,
        CSMS_PROCESS,
        CSMS_TDB,
        CSMS_AUTRES,
        CSMS_MACH
   };

typedef struct
{
    unsigned char *name;
    unsigned char *type;
    int field;
    int (*getfnx)(int,int,unsigned char*);
    int (*setfnx)(int,int,unsigned char*);
} Agent_data;

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_Start
**
** Description : demarrage de l'agent X
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**   background        E           Demarrage ou non en arriere plan (STD)
**   nomAgent          E           Nom de l'agentX
**   priorite          E           Priorite de l'agentX (STD moins prioritaire que STG)
** -----------------------------------------------------------------------------
*******************************************************************************/
extern int Agent_Start(int background, char* nomAgent, int priorite);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_Stop
**
** Description : arret de l'agent X
**
*******************************************************************************/
extern int Agent_Stop();

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_DoIt
**
** Description : Reception d'une requete
**
*******************************************************************************/
extern void Agent_DoIt();

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_Init
**
** Description : Initialisation de l'agentX
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**   priorite        E           priorite de l'agent (STD moins prioritaire que STG)
** -----------------------------------------------------------------------------
*******************************************************************************/
extern void Agent_Init(int priorite);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_Ajouter
**
** Description : Ajout d'une application, d'un sous-ensemble ou d'un process
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**   categorie    E           Application, se ou process
**   index        E           numero a rajouter
** -----------------------------------------------------------------------------
*******************************************************************************/
extern void Agent_Ajouter(enum SNMP_cat categorie, int index);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : Agent_Supprimer
**
** Description : Suppression d'une application, d'un sous-ensemble ou d'un process
**
** Parametres :
**
**    Libelle         E/S           Description
** -----------------------------------------------------------------------------
**   categorie    E           Application, se ou process
**   index        E           numero a supprimer
** -----------------------------------------------------------------------------
*******************************************************************************/
extern void Agent_Supprimer(enum SNMP_cat categorie, int index);

#endif
