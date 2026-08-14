/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_sms_ext_h
#define CVS_id_sms_ext_h
static const char *CVS_sms_ext_h __attribute__ ((unused)) = "@(#) $Id: sms_ext.h 64 2013-09-24 14:23:58Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

   /* Acces objet appli */
extern int SMS_appliSet(int i_field, int i_index, char *value);
extern int SMS_appliGet(int i_field, int i_index, char *value);

   /* Fin objets appli                                                        */
extern void SMS_Applifin ();

   /* Init objets appli                                                       */
extern void SMS_Appliinit ();

   /* Maj sur l'objet appli                                                   */
extern void SMS_Applimaj (SMSt_appli *p_appli);
   /*
   IN  SMSt_appli * p_appli :  Structure appli recue                        
   */

   /* Suppr sur l'objet appli                                                 */
extern void SMS_Applisuppr (SMSt_appli *p_appli);
   /*
   IN  SMSt_appli * p_appli :  Structure appli recue                        
   */

   /* Synthese des etats appli                                                */
extern void SMS_Applisynth ();

   /* Maj d'un champ                                                          */
extern char * SMS_Champmaj (/* s_ancien, s_nouveau */);
   /*
   IN  char * s_ancien :  Pointeur ancienne valeur                       
   IN  char * s_nouveau :  Pointeur nouvelle valeur                       
   */

   /* Fin du module                                                           */
extern void SMS_Fin ();

   /* Init du module                                                          */
extern void SMS_Init (SMSt_act *p_act, int i_nb);
   /*
   IN  SMSt_act * p_act :  fonctions a memoriser                          
   IN  int i_nb :  nombre de tables a gerer (1 ou 2 pour gedeond)  
   */

   /* Acces objet process */
extern int SMS_processSet(int i_field, int i_index, char *value);
extern int SMS_processGet(int i_field, int i_index, char *value);

   /* Fin objets process                                                      */
extern void SMS_Processfin ();

   /* Init objet process                                                      */
extern void SMS_Processinit ();

   /* Maj sur l'objet process                                                 */
extern void SMS_Processmaj (SMSt_process *p_process, int b_nouv);
   /*
   IN  SMSt_process * p_process :  Structure process recue                  
   */

   /* Suppr sur l'objet process                                               */
extern void SMS_Processsuppr (SMSt_process *p_process);
   /*
   IN  SMSt_process * p_process :  Structure process recue                  
   */

   /* Synthese des etats process                                              */
extern void SMS_Processsynth ();

   /* Acces objet se */
extern int SMS_seSet(int i_field, int i_index, char *value);
extern int SMS_seGet(int i_field, int i_index, char *value);

   /* Fin objets se                                                           */
extern void SMS_Sefin ();

   /* Init objet se                                                           */
extern void SMS_Seinit ();

   /* Maj sur l'objet se                                                      */
extern void SMS_Semaj (SMSt_se *p_se);
   /*
   IN  SMSt_se * p_se :  Structure se recue                                 
   */

   /* Suppr sur l'objet se                                                    */
extern void SMS_Sesuppr (SMSt_se *p_se);
   /*
   IN  SMSt_se * p_se :  Structure se recue                                 
   */

   /* Synthese des etats se                                                   */
extern void SMS_Sesynth ();

   /* Acces objet gedeon */
extern int SMS_gedeonSet(int i_field, int i_index, char *value);
extern int SMS_gedeonGet(int i_field, int i_index, char *value);

   /* Fin  objets gedeon                                                       */
extern void SMS_Gedeonfin ();

   /* Init objets gedeon                                                       */
extern void SMS_Gedeoninit ();

   /* Maj sur l'objet gedeon                                                   */
extern void SMS_Gedeonmaj (int i_etat);
   /*
   IN  int i_etat :  etat de l'application                          
   */

   /* Acces objet tdb */
extern int SMS_tdbSet(int i_field, int i_index, char *value);
extern int SMS_tdbGet(int i_field, int i_index, char *value);

   /* Fin objets tdb                                                          */
extern void SMS_Tdbfin ();

   /* Init objets tdb                                                         */
extern void SMS_Tdbinit ();

   /* Maj sur l'objet tdb                                                     */
extern void SMS_Tdbmaj (SMSt_tdb *p_tdb);
   /*
   IN  SMSt_tdb * p_tdb :  Structure tdb recue                            
   */


/* SMS tools */
extern void *SMS_getCur(void *p_elem, int i_index, int i_limit);
extern int SMS_setstr(char **gedstr, const char *value);
extern int SMS_setint(int *gedint, const char *value);
extern int SMS_getstr(char *dest, const char *gedstr);
extern int SMS_getint(char *dest, int gedint);
