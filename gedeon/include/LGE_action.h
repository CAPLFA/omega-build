/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_LGE_action_h
#define CVS_id_LGE_action_h
static const char *CVS_LGE_action_h __attribute__ ((unused)) = "@(#) $Id: LGE_action.h 45 2013-07-15 09:14:30Z cbrenier $";
#endif
/*--------------------------------------------------------------------------*/
/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : LGE_action.sh
**
** Description : interface du fichier LGE_action.sc
**	
** Utilisation : Utilisateurs de GEDLIB 
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur : LM     Date :  15/10/97 Version : 1.0
**    Origine :
** MODIFICATIONS :
**    Auteur :        Date :          Version :
**    Origine :
**    Impact :
**
**  Auteur : chollet
**  Date   : Wed Apr 19 11:51:11 2000
**  Version:  g3.0
**  Origine: Evolution 00rg07
**  Impact : Ajout du prototype de LGinit
**
**    Auteur : CBR    Date : 07/06/13    Version :
**    Origine : Portage CentOS 6.3
**    Impact :
*******************************************************************************/


#include "LGE_gedlib.h"
#include "XGT_message_communs.h"
#include "LGE_obj_appli.h"
#include "LGE_obj_se.h"
#include "LGE_obj_process.h"

/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGinit
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
** fonction d'initialisation de la GEDLIB
** Cette fonction fait partie de l'interface de la GEDLIB
**
** Traitement
** ----------
**	Initialise la table des abonnements.
**	Memorise les fonctions d'inhibition et de rearmement.
**	Retourne la fonction traitant les interpellations.
**	
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**      argc             E
**
**      argv             E
**
**	   inhibe_signaux    E     fonction d'inhibition des signaux, alarmes,
**                                 etc.
**	   rearme_signaux    E     fonction de rearmement des signaux, alarmes,
**                                 etc.
**     libelle_client    E     chaine de caracteres arbitraire que se donne
**                             l'utilisateur de la GEDLIB.
**
** Codes de retour
** ---------------
**
**	LGR_ACCEPT : tout est OK.
**
*******************************************************************************/

int LGinit(int argc,
           char** argv,
           void (*inhibe_signaux) (),
           void (*rearme_signaux) (),
           char* libelle_client);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGevent
**
** Description : evenement sur un objet 
**
** Parametres : 
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**   nobjet				E				numero objet 
**   event           E           numero de l'evenement
**   p_objet			E           pointeur sur l'objet
**
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**   LGR_ERDATA
**   LGR_REFUS
**   LGR_ACCEPT
**
*******************************************************************************/

extern int LGevent(int  nobjet,int  event,char *p_objet);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGabonne
**
** Description : abonnement criteres 
**
** Parametres : 
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**
**   nobjet				E				numero objet 
**   p_objet			E           pointeur sur l'objet
**   fct_interpel    E           pointeur de fonction d'interpellation
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**   LGR_ERDATA
**   LGR_REFUS
**   LGR_ACCEPT
**
**
*******************************************************************************/

extern int LGabonne(int  nobjet,char *p_objet,UFONCT fct_interpel);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGhisto
**
** Description : demande d'historique 
**
** Parametres : 
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**
**
**   nobjet				E				numero objet 
**   p_objet			E           pointeur sur l'objet
**   ufonct          E           pointeur de fonction d'interpellation
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**
**   LGR_ERDATA
**   LGR_REFUS
**   LGR_ACCEPT
**
**
*******************************************************************************/

extern int LGhisto(int  nobjet,char *p_objet,UFONCT ufonct);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGliste 
**
** Description : demande de liste 
**
** Parametres :  
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**
**   nobjet				E				numero objet 
**   p_objet			E           pointeur sur l'objet
**   ufonct          E           pointeur de fonction d'interpellation
**
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**   LGR_ERDATA
**   LGR_REFUS
**   LGR_ACCEPT
**
**
**
*******************************************************************************/
extern int LGliste(int  nobjet,char *p_objet,UFONCT ufonct);


/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_init
**
** Description :initialisation de la GEDLIB 
**
** Parametres : 
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**    inhibition        E     fonction d'inhibition
**    rearmement        E     fonction de rearmement
**    p_fonction        S     fonction traitant les interpellations
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**  LGR_ACCEPT
**
**
*******************************************************************************/
int LGE_init(void (*inhibition) (),
				void (*rearmement) (),
				void (**p_fonction) ());

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGfinabonne
**
** Description : fin d'abonnement 
**
** Parametres : 
**
**    Libelle         E/S           Description 
** -----------------------------------------------------------------------------
**
** id_abon				E					identifiant d'abonnement
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
** LGR_ACCEPT
** LGR_ERREUR
**
**
*******************************************************************************/
int LGfinabonne (int id_abon);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_getliste
**
** Description :
**
** Parametres :
**
**    Libelle         E/S           Description
**    objet
**    taille
**    cr
**    fonction
** -----------------------------------------------------------------------------
**
** id_abon				E					identifiant d'abonnement
**
** -----------------------------------------------------------------------------
** Codes de retour :
**
**
*******************************************************************************/
int LGE_getliste (int objet, int taille, XM_rep_liste *p_cr, UFONCT ufonct);


/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_envoi
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
**	Envoyer un message par la messagerie interne.
**
** Traitement
** ----------
**
**	Appel direct a la messagerie interne.
**
**
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**        dest           E      destinataire du message.
**       typmsg          E      type du message a emettre.
**       taille          E      taille du message a emettre.
**       buffer          E      message.
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
int LGE_envoi (int dest, int typmsg, int taille, char *buffer);


/* CARTOUCHE FONCTION **********************************************************
 **
 ** Nom fonction : LGE_trace_objet
 **
 ** Description :  fonction d'aiguillage
 **
  ** Parametres :
 **
 **    Libelle         E/S           Description
 ** -----------------------------------------------------------------------------
 **      fdsimul         E        descripteur fichier deroulement (simulateur)
 **      objet           E        type d'objet
 **      ptobjet         E        pointeur sur objet
 **
 **
 **
 ** -----------------------------------------------------------------------------
 ** Codes de retour :
 **
 **
 **
 *******************************************************************************/
int LGE_trace_objet(int fdsimul,int objet,char * ptobjet);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_inhibe_USR1
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Fonction de protection (debut) contre les interruptions.
**
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
int LGE_inhibe_USR1 ();

/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_rearme_USR1
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Fonction de protection (fin) contre les interruptions.
**
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
int LGE_rearme_USR1 ();

/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_arret
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Arret de SIGLIB
**
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**
**
** Codes de retour
** ---------------
**
** LGR_ACCEPT : tout est OK
** LGR_REFUS : une table au moins n'est pas vide.
**
*******************************************************************************/
int LGE_arret ();

/*  */
/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_envoi
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Envoyer un message par la messagerie interne.
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**        dest           E      destinataire du message.
**       typmsg          E      type du message a emettre.
**       taille          E      taille du message a emettre.
**       buffer          E      message.
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
int LGE_envoi (int dest, int typmsg, int taille, char *buffer);

/*  */
/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_recept
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Recevoir un message par la messagerie interne.
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**     p_typmsg          S      type du message a emettre.
**     p_buffer          S      message.
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
int LGE_recept (int *p_typmsg, char **p_buffer);

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_reception_abonne      Type : E
**
** Description  : Fonction de reception des messages synchrones
**                en retour d'une requete d'abonnement.
**
**
** Parametres   :  Libelle     E/S            Description
**               nomi_attendu   E     numero du message interne attendu
**                                    dans le cas d'un acquitement
**                 no_obj       E     nom (numero) de l'objet : LSO_...
**                 taille_obj   E     taille de l'objet : sizeof(LST_...)
**                 ufonct       E     fonction d'interpellation d'abonnement
**                serveur       E     serveur gerant l'abonnement
**            nomi_finabonne    E     numero du message interne envoye au serveur
**                                    pour fin d'abonnement
**
** Valeurs de retour :
**                 LGR_ACCEPT : le message recu est un acquitement.
**                 LGR_ERREUR : le message recu est une erreur de traitement.
******************************************************************************/
int LGE_reception_abonne (int type, int nomi_attendu, int nomi_erreur, int no_obj, int taille_obj,
                        int serveur, UFONCT ufonct, UFONCT filtre);


/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_taille_objet
**
** Description  : Retourne la taille d'un objet.
**
**
*******************************************************************************/
int LGE_taille_objet (int nobjet);

/* CARTOUCHE FONCTION **********************************************************
**
** Nom fonction : LGE_recherche_fct_interpel
**
** Description  : Retourne l'abonner et le pointeur de fonction associée.
**
**
*******************************************************************************/
int LGE_recherche_fct_interpel (int srv, int ident_srv, int *p_id_abon, UFONCT *p_fct_interpel);


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : LGE_liste_process         Type : E
**
** Description  : Appelee par la fonction GEDLIB LGE_liste
**                Effectue l'interface entre la CU et le ND pour
**                la consultation par liste des process
**
**
** Parametres   :  Libelle     E/S            Description
**                 event        E     evenement a traiter
**                 p_process    E     pointeur sur l'objet process
**
** Valeurs de retour :
**                 LGR_ERREUR : erreur lors de la consultation
**                 Compte-rendu de LGE_getliste
******************************************************************************/
int LGE_liste_process (LGT_process *p_process, UFONCT ufonct);


/* CARTOUCHE FONCTION **********************************************************
**
** Nom Fonction : LGE_interpellation
** ------------
**
** Type : publique
** ------
**
** Description
** -----------
**
** Fonction de traitement des interpellations.
**
**
** Parametres
** ----------
**
**       Libelle        E/S           Description
**   ---------------------------------------------------------------------------
**
**
** Codes de retour
** ---------------
**
**
**
*******************************************************************************/
void LGE_interpellation (int expediteur, long identifiant, long typmsg, char *buffer);


