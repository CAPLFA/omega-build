/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_sitl_ext_h
#define CVS_id_sitl_ext_h
static const char *CVS_sitl_ext_h __attribute__ ((unused)) = "@(#) $Id: sitl_ext.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

/* 13 Novembre 1997 */

   /* Fin objet calculateurs                                                  */
extern int SITL_Calcfin (/*  */);

   /* Init objet calculateurs                                                 */
extern int SITL_Calcinit (/*  */);

   /* Maj sur l'objet calculateurs                                            */
extern int SITL_Calcmaj (/* p_calc, p_priv, i_ind */);
   /*
   IN  SITLt_calc * p_calc :  Structure calculateur recue                   
   IN  char * p_priv :  pointeur structure agent                      
   IN  int i_ind :  Index si tabule                               
   */

   /* Maj d'un champ                                                          */
extern char * SITL_Champmaj (/* s_ancien, s_nouveau */);
   /*
   IN  char * s_ancien :  Pointeur ancienne valeur                       
   IN  char * s_nouveau :  Pointeur nouvelle valeur                       
   */

   /* Fin objets site t                                                       */
extern int SITL_Fin (/*  */);

   /* Incident autre                                                          */
extern int SITL_Incautre (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Incident calc                                                           */
extern int SITL_Inccalc (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Incident res                                                            */
extern int SITL_Incres (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Incident site                                                           */
extern int SITL_Incsite (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Incident term                                                           */
extern int SITL_Incterm (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Init objets MIBH t                                                      */
extern int SITL_Initialiser (/* i_port, s_racine, s_agent */);
   /*
   IN  int i_port :  port d'ecoute                                  
   IN  char * s_racine :  repertoire contenant les fichiers mibh         
   IN  char * s_agent :  repertoire contenant les fichiers listes       
   */

   /* Maj autre                                                               */
extern int SITL_Majautre (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Maj calc                                                                */
extern int SITL_Majcalc (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Maj res                                                                 */
extern int SITL_Majres (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Maj site                                                                */
extern int SITL_Majsite (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Maj term                                                                */
extern int SITL_Majterm (/* p_obj, i_ind */);
   /*
   IN  char * p_obj :  pointeur agent concerne                         
   IN  int i_ind :  index si tabule                                 
   */

   /* Recherche attribut                                                      */
extern char * SITL_Rechatt (/* t_val, i_nb, s_nom */);
   /*
   IN  MIBHt_val * t_val :  table des attributs                             
   IN  int i_nb :  nonbre d'elements                               
   IN  char * s_nom :  nom de l'attribut recherche                     
   */

   /* Fin objet reseau                                                        */
extern int SITL_Resfin (/*  */);

   /* Init objet equipement reseau                                            */
extern int SITL_Resinit (/*  */);

   /* Maj sur l'objet equipement reseau                                       */
extern int SITL_Resmaj (/* p_res, p_priv, i_ind */);
   /*
   IN  SITLt_res * p_res :  Structure equipement reseau recue             
   IN  char * p_priv :  pointeur structure agent                      
   IN  int i_ind :  Index si tabule                               
   */

   /* Init objets site                                                        */
extern int SITL_Siteinit (/*  */);

   /* Maj sur l'objet site                                                    */
extern int SITL_Sitemaj (/* p_site */);
   /*
   IN  SITLt_site * p_site :  Structure site recue                      
   */

extern int SITL_Sitesync (/* cor */);
   /*
    integer cor : 
   */

   /* Fin objet terminaux                                                     */
extern int SITL_Termfin (/*  */);

   /* Init objet terminaux                                                    */
extern int SITL_Terminit (/*  */);

   /* Maj sur l'objet terminaux                                               */
extern int SITL_Termmaj (/* p_term, p_priv, i_ind */);
   /*
   IN  SITLt_term * p_term :  Structure terminal recue                      
   IN  char * p_priv :  pointeur structure agent                      
   IN  int i_ind :  Index si tabule                               
   */

