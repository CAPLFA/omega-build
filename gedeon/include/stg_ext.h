/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_stg_ext_h
#define CVS_id_stg_ext_h
static const char *CVS_stg_ext_h __attribute__ ((unused)) = "@(#) $Id: stg_ext.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

#include "sms.h"
#include "LGE_obj_tdb.h"
#include "LGE_obj_appli.h"
#include "LGE_obj_se.h"
#include "LGE_obj_process.h"

/* 13 Novembre 1997 */

   /* Action sur un tdb                                                       */
extern int STG_Acttdb (SMSt_tdb *p_tdb);
   /*
   IN  SMSt_tdb * p_tdb :  pointeur objet tdb                              
   */

   /* Changement objet tdb                                                    */
extern int STG_Chgttdb (int i_num, int i_event, LGT_tdb *p_message);
   /*
   IN  int i_num :  numero message                                 
   IN  int i_event :  type evenement                                 
   IN  LGT_tdb * p_message :  pointeur message recu                          
   */

   /* Maj d'un tdb                                                            */
extern void STG_Majtdb (LGT_tdb *p_message);
   /*
   IN  LGT_tdb * p_message :  pointeur message recu                          
   */

   /* Action sur un se                                                        */
extern int STG_Actse (SMSt_se * p_se);
   /*
   IN  SMSt_se * p_se :  pointeur objet se                              
   */

   /* Changement objet se                                                     */
extern int STG_Chgtse (int i_num, int i_event, LGT_se *p_message);
   /*
   IN  int i_num :  numero message                                 
   IN  int i_event :  type evenement                                 
   IN  LGT_se * p_message :  pointeur message recu                          
   */

   /* Maj d'un se                                                             */
extern int STG_Majse (LGT_se * p_message);
   /*
   IN  LGT_se * p_message :  pointeur message recu                          
   */

   /* Lancement abonnement appli                                              */
extern void STG_Abtappli ();

   /* Lancement abonnement process                                            */
extern void STG_Abtprocess ();

   /* Lancement abonnement se                                                 */
extern void STG_Abtse ();

   /* Lancement abonnement tdb                                                */
extern void STG_Abttdb ();

   /* Action sur une appli                                                    */
extern int STG_Actappli (SMSt_appli *p_appli);
   /*
   IN  SMSt_appli * p_appli :  pointeur objet appli                     
   */

   /* Action su r un process                                                  */
extern int STG_Actprocess (SMSt_process *p_process);
   /*
   IN  SMSt_process * p_process :  pointeur objet process                    
   */

   /* Arret abonnement appli                                                  */
extern void STG_Arretabtappli ();

   /* Arret abonnement process                                                */
extern void STG_Arretabtprocess ();

   /* Arret abonnement tdb                                                    */
extern void STG_Arretabttdb ();

   /* Arret abonnement se                                                     */
extern void STG_Arretabtse ();

   /* Changement objet appli                                                  */
extern int STG_Chgtappli (int i_num, int i_event, LGT_appli *p_message);
   /*
   IN  int i_num :  numero message                                 
   IN  int i_event :  type evenement                                 
   IN  LGT_appli * p_message :  pointeur message recu                       
   */

   /* Changement objet process                                                */
extern int STG_Chgtprocess (int i_num, int i_event, LGT_process *p_message);
   /*
   IN  int i_num :  numero message                                 
   IN  int i_event :  type evenement                                 
   IN  LGT_process * p_message :  pointeur message recu                       
   */

   /* Codage etat chaine                                                      */
extern char * STG_Codeetatchaine (char * s_etat);
   /*
   IN  char * s_etat :  adresse chaine etat GEDEON                     
   */

   /* Codage etat entier                                                      */
extern int STG_Codeetatnum (char *s_etat);
   /*
   IN  char * s_etat :  adresse chaine etat GEDEON                     
   */

   /* Conversion date                                                         */
extern long STG_Convdate (char *s_date);
   /*
   IN  char * s_date :  date recue de sigma (YYMMDDhhmm)               
   */

   /* Initialisation du stg                                                   */
extern void STG_Init (int argc, char **argv, void (*pt_arret)());
   /*
   IN  int argc :  nombre d'arguments                             
   IN  char * * argv :  table des arguments                            
   IN  void (*)() pt_arret :  Adresse fonction d'arret                       
   */

   /* Maj d'une appli                                                         */
extern int STG_Majappli (LGT_appli *p_message);
   /*
   IN  LGT_appli * p_message :  pointeur message recu                       
   */

   /* Sortie du stg                                                           */
extern int STG_Out ();

   /* Recup des infos d'un process                                            */
extern void STG_Recupprocess (LGT_process *p_message, SMSt_process *p_process);
   /*
   IN  LGT_process * p_message :  pointeur message recu                       
   INOUT  SMSt_process * p_process :  structure process a remplir              
   */

