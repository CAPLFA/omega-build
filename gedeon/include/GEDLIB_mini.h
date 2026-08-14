/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_GEDLIB_mini_h
#define CVS_id_GEDLIB_mini_h
static const char *CVS_GEDLIB_mini_h __attribute__ ((unused)) = "@(#) $Id: GEDLIB_mini.h 68 2013-09-25 09:18:57Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

/* CARTOUCHE FICHIER ***********************************************************
**
** Nom : GEDLIB_mini.sh
**
** Description :  interface du fichier GEDLIB_mini.sc 
**	
** Utilisation : 
**	
** Implementation : 
**
** -----------------------------------------------------------------------------
**                                 HISTORIQUE
** CREATION :
**    Auteur :  MC    Date : 25/11/97	Version :1.0
**    Origine :  
** MODIFICATIONS :
**  Auteur : chollet
**  Date   : Wed Mar 29 17:54:56 2000
**  Version: g3.0 (lot1)
**  Origine: 99DG06
**  Impact : Ajout des fonctions GEDMIN_init et GEDMIN_lire_datagramme
**
**    Auteur : CBR    Date : 13/06/13 Version :
**    Origine : Portage CentOS 6.3
**    Impact :
*******************************************************************************/

#ifndef __GEDLIB_mini_h
#define __GEDLIB_mini_h

#define GEDMIN_err 0 /* Attention, egalement definit dans le .c */
#define GEDMIN_ok 1
#define TAILLE_MSG_ERREUR 500


/* definitions relatives aux datagrammes */
#define MAXMESG 2048
#define START_CAR '@'
#define MODE_DTGRAM 'D'
#define DTGRAM_ARRET 0
#define DTGRAM_RECONFIGURATION 1






/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : GEDMIN_maj_etat         Type : E
**
** Description  : Appelee par les process applicatifs.
**                Permet au process appelant de transmettre une demande de mise 
**						a jour de son etat et du libelle au process GEDEON : Cette
**						fonction prepare le message de demande de mise a jour d'etat
**						 contenant les informations passees en parametre puis le
**						message est transmis a GEDEON.
**                
** Parametres   :  Libelle     E/S            Description
**                 aps_nom_process : nom du process appelant
** 					 an_code_etat : code identifiant le nouvel etat du process
**                 aps_libelle : texte du libelle associe a l'etat
**                 
** Valeurs de retour :
**                 GEDMIN_err : Erreur dans l'ecriture dans la file de message GEDEON
**						 GEDMIN_ok : message de demande de mise a jour transmis
******************************************************************************/

extern int GEDMIN_maj_etat (char * aps_nom_process,int an_code_etat, char * aps_libelle);
  
/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : GEDMIN_signal_erreur         Type : E
**
** Description  : Appelee par les process applicatifs.
**                Transmet le texte d'une erreur au process GEDEON charge de la
**                gestion centralisee des erreurs (STE).
**                
**                
** Parametres   :  Libelle     E/S            Description
**                 aps_msg        	E     Texte de l'erreur
**                 aps_infos_fichier E     Nom du fichier de trace ou apparait l'erreur
**                 aps_infos_ligne	E 		Identifiant de la ligne d'appel a la fonction
**                 
** Valeurs de retour :
**
**                 GEDMIN_err : Erreur dans la transmission
**                 GEDMIN_ok : message d'erreur transmis 
**
******************************************************************************/

extern int GEDMIN_signal_erreur (char * msg, char * infos_fichier, char * infos_ligne );

/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : GEDMIN_init                                   Type : E
**
** Description  : Appelee par les process applicatifs.
**                Permet au process appelant d'initialiser la GEDLIB_mini.
**                
** Parametres   :  Libelle     E/S            Description
**
**                 argc         E
**                 argv         E
**                 fd           S             file descriptor socket
**
** Valeurs de retour :
**                 GEDMIN_err : Erreur dans l'init gedlib
**
**				   GEDMIN_ok : init gedlib correctement effectuee.
**
******************************************************************************/

extern int GEDMIN_init (int argc, char** argv, int* fd, char* nom_proc);


/* CARTOUCHE FONCTION**********************************************************
**
** Nom fonction : GEDMIN_lire_datagramme                        Type : E
**
** Description  : Appelee par les process applicatifs.
**                Permet au process appelant de lire un datagramme
**                
** Parametres   :  Libelle     E/S            Description
**
**                 fd           E             file descriptor socket
**                 typemsg      S             type de datagramme
**                                            (DTGRAM_ARRET, 
**                                            DTGRAM_RECONFIGURATION)
**                 lgdtgram     S             longueur du datagramme
**                 dtgram       S             datagramme
**
** Valeurs de retour :
**                 GEDMIN_err : Erreur dans la lecture du datagramme.
**
**				   GEDMIN_ok : Lecture correcte.
**
******************************************************************************/

int GEDMIN_lire_datagramme (int fdcom, int* typemsg, int* lgdtgram, char* dtgram);

/* CARTOUCHE FONCTION**********************************************************
 **
 ** Nom fonction : GEDMIN_envoyer               Type : E
 **
 ** Description  : fonction de transmission de message
 **                  au format connu de GEDEON
 **
 **
 ** Parametres   :  Libelle     E/S            Description
 **                  apc_expe    E              Expediteur
 **                  an_dest     E              Destinataire
 **                  an_type     E              Type message
 **                  an_taille   E              taille message
 **                  apc_message E              texte du message
 **
 ** Valeurs de retour :
 **
 **                 MSG_PB : Erreur dans la transmission
 **                 MSG_OK : message transmis
 **
 ******************************************************************************/
int GEDMIN_envoyer( char * apc_expe, int an_dest, int an_type,
      int an_taille, char * apc_message );

#endif
