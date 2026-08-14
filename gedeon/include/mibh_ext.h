/*------------------------ Entete CVS --------------------------------------*/
#ifndef CVS_id_mibh_ext_h
#define CVS_id_mibh_ext_h
static const char *CVS_mibh_ext_h __attribute__ ((unused)) = "@(#) $Id: mibh_ext.h 45 2013-07-15 09:14:30Z cbrenier $"; 
#endif
/*--------------------------------------------------------------------------*/

/* 13 Novembre 1997 */

   /* Action sur un agent                                                     */
extern int MIBH_Action (/* p_priv, i_ind, s_nom, i_val */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_ind :  index si tabule                                
   IN  char * s_nom :  nom de l'action                                
   IN  int i_val :  valeur associee a l'action                     
   */

   /* timeout pour mibh                                                       */
extern int MIBH_Activer (/*  */);

   /* Ajustement etat de synthese                                             */
extern int MIBH_Ajustetat (/* i_type, p_vp */);
   /*
   IN  int i_type :  type de l'agent                                
   INOUT  Value * p_vp :  pointeur sur structure valeur               
   */

   /* Changement valeurs                                                      */
extern int MIBH_Change (/* p_agent, p_idobj */);
   /*
   IN  MIBHt_agent * p_agent :  pointeur contexte agent                        
   IN  void * p_idobj :  pointeur objet concerne                        
   */

   /* Combien                                                                 */
extern int MIBH_Combien (/* p_nbemis, p_lgemis, p_nbrec, p_lgrec */);
   /*
   OUT  long * p_nbemis :  nb requetes emises                            
   OUT  long * p_lgemis :  cumul longueur requetes                       
   OUT  long * p_nbrec :  nb reponses recues                            
   OUT  long * p_lgrec :  cumul longueur reponses                       
   */

   /* Creation                                                                */
extern char * MIBH_Creeragent (/* s_fichier, i_no, p_foncmaj, p_foncinc */);
   /*
   IN  char * s_fichier :  nom fichier conf                               
   IN  int i_no :  index dans fichier                             
   IN  int (*)() p_foncmaj :  pointeur fonction maj                          
   IN  int (*)() p_foncinc :  pointeur fonction incident                     
   */

   /* Emission                                                                */
extern int MIBH_Envoyer (/* p_priv, s_don, l_lg */);
   /*
   IN  void * p_priv :  pointeur contexte agent                        
   IN  unsigned char * s_don :  donnees a emmettre                             
   IN  long l_lg :  longueur                                       
   */

   /* Fermeture                                                               */
extern int MIBH_Fermer (/*  */);

   /* Impression                                                              */
extern int MIBH_Imprimer (/* i_code, p_priv, i_id, s_str */);
   /*
   IN  int i_code :  code flot                                      
   IN  void * p_priv :  pointeur contexte agent                        
   IN  int32 i_id :  identifiant mibh                               
   IN  char * * s_str :  pointeur chaine a imprimer                     
   */

   /* Init distant                                                            */
extern int MIBH_Initdist (/* p_priv */);
   /*
   IN  char * p_priv :  pointeur agent                                 
   */

   /* Initialisation                                                          */
extern int MIBH_Initialiser (/* i_port, s_racine */);
   /*
   IN  int i_port :  port d'ecoute                                  
   IN  char * s_racine :  repertoire contenant les fichiers mibh         
   */

   /* Liberation agent                                                        */
extern int MIBH_Libereragent_i (/* p_priv */);
   /*
   IN  char * p_priv :  pointeur agent                                 
   */

   /* Liberation valeurs attribut                                             */
extern int MIBH_Liberervaleurs (/* p_val, i_nb */);
   /*
   IN  MIBHt_val * p_val :  table des pointeurs valeurs                    
   IN  int i_nb :  nombre de valeurs a liberer                    
   */

   /* Reception d'une trame                                                   */
extern int MIBH_Lire (/*  */);

   /* Recup valeurs un attribut                                               */
extern int MIBH_Lireun (/* p_priv, i_ind, p_val, s_nomatt */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_ind :  index si tabule                                
   INOUT  MIBHt_val * p_val :  table des pointeurs valeurs                 
   IN  char * s_nomatt :  nom de l'attribut a lire                       
   */

   /* Recup valeurs attribut                                                  */
extern int MIBH_Lirevaleurs (/* p_priv, i_ind, p_val */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_ind :  index si tabule                                
   IN  MIBHt_val * p_val :  table des pointeurs valeurs                    
   */

   /* Modif attribut prive                                                    */
extern int MIBH_Modifprive (/* p_priv, i_ind, s_nom, i_val */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_ind :  index si tabule                                
   IN  char * s_nom :  nom de l'attribut                              
   IN  int i_val :  valeur associee a l'action                     
   */

   /* Que faire pour mibh                                                     */
extern int MIBH_Quoi (/* pt_pfd */);
   /*
   IN  struct pollfd * pt_pfd :  pointeur structure poll a remplir              
   */

   /* Gestion raffraichissement                                               */
extern int MIBH_Raffraichir (/* p_priv, i_code */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_code :  code action demandee                           
   */

   /* Gestion restauration                                                    */
extern int MIBH_Restaurer (/* p_priv, i_code */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   IN  int i_code :  code  CMIBH_OK -> ajout, CMIBH_KO -> retrait   
   */

   /* Stat                                                                    */
extern int MIBH_Stat (/* s_nomfic, s_texte */);
   /*
   IN  char * s_nomfic :  nom de fichier stat                            
   IN  char * s_texte :  texte a ecrire en premier                      
   */

   /* Suppression                                                             */
extern int MIBH_Supprimeragent (/* p_priv */);
   /*
   IN  char * p_priv :  pointeur contexte agent                        
   */

   /* Terminaison                                                             */
extern int MIBH_Terminer (/* i_code, p_priv, i_id, p_idobj */);
   /*
   IN  int i_code :  code flot                                      
   IN  void * p_priv :  pointeur contexte agent                        
   IN  int32 i_id :  identifiant mibh                               
   IN  void * p_idobj :  pointeur objet concerne                        
   */

   /* Valeur retour                                                           */
extern int MIBH_Valretour (/* p_valcour, s_val, i_lg */);
   /*
   INOUT  MIBHt_val * p_valcour :  pointeur structure a remplir                
   IN  char * s_val :  chaine valeur fournie par MIBH                 
   IN  int i_lg :  longueur de la chaine valeur                   
   */

