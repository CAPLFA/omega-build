/*******************************************************************************
 * \file           EMsigbaseDEFINES.H
 * Application  :  EMMA
 * Rôle         :  Définition des constantes du service sigbase
 *
 * \author  Fichier généré automatiquement à partir de EMsigbaseCONSTANTES.decl
 * \date  Génération :  27/05/2025 a 12:52:56
 *******************************************************************************
 */


#ifndef __EMSIGBASEDEFINES_H
#define __EMSIGBASEDEFINES_H


// ------------------ Definition des constantes du projet ---------------


const int   EM_BD_PT_OK = 0 ;   // 

const int   EM_C_SIG_ACC_DEST_EST = 5 ;   // 

const int   EM_C_SIG_AERODROME_ADR = 3 ;   // 

const int   EM_C_SIG_AIRWAY = 2 ;   // 

const int   EM_C_SIG_DEST_EST = 5 ;   // 

const int   EM_C_SIG_DEST_LOGIQUES = 3 ;   // Nombre de destinataires logiques

const int   EM_C_SIG_DEST_RSFTA = 21 ;   // 

const int   EM_C_SIG_IMPRIMANTES = 3 ;   // Nombre d'imprimantes destinatrices des RIP

const int   EM_C_SIG_LISTE_AIRWAY = 2 ;   // 

const int   EM_C_SIG_LISTE_COULEUR = 1 ;   // nombre max de couleurs de terrains

const int   EM_C_SIG_LISTE_DEST_EST = 5 ;   // 

const int   EM_C_SIG_LISTE_EXT = 2 ;   // 

const int   EM_C_SIG_LISTE_POINT = 18 ;   // 

const int   EM_C_SIG_LISTE_POINT_ATS = 10 ;   // 

const int   EM_C_SIG_LISTE_QFU = 4 ;   // nombre max de QFU 

const int   EM_C_SIG_LISTE_RUB_CHGT = 6 ;   // 

const int   EM_C_SIG_LISTE_TERRAIN_SATELLITE = 10 ;   // nombre max de terrains satellites 

const int   EM_C_SIG_MTO_INDICATEUR = 12 ;   // 

const int   EM_C_SIG_MTO_VENT_ALT = 10 ;   // 

const int   EM_C_SIG_NB_ADEP_ROUTE_STRIP = 30 ;   // Nombre max d'aerodromes depart possibles dans la route STRIP

const int   EM_C_SIG_NB_ADES_ROUTE_STRIP = 30 ;   // Nombre max d'aerodromes destination possibles dans la route STRIP

const int   EM_C_SIG_NTM_LIEUX = 7 ;   // 

const int   EM_C_SIG_NTM_PERES = 4 ;   // 

const int   EM_C_SIG_POINTS_OM = 10 ;   // 

const int   EM_C_SIG_REGULATION = 2 ;   // 

const int   EM_C_SIG_TDV_POINT_STRIP = 4 ;   // 

const int   EM_IFG_NB_MOYENS = 36 ;   // nombre de moyens radio electriques

const int   EM_LSE_ACP = 30 ;   // Acceptation de ddv soumise    

const int   EM_LSE_ACT_JSY = 666 ;   // Activation d un mvt par fe atc 

const int   EM_LSE_ALARME_EVT = 22 ;   // Evenement d'alarme            

const int   EM_LSE_ANNUL = 1 ;   // Annulation                    

const int   EM_LSE_ANNUL_NON_NA = 8 ;   // Annulation non habilitee      

const int   EM_LSE_ANNUL_TOUR = 77 ;   // Annulation pour la tour       

const int   EM_LSE_APMACT = 671 ;   // Evt activation depuis massif

const int   EM_LSE_APMCLD = 670 ;   // Evt clairance depart depuis massif

const int   EM_LSE_APMCNL = 673 ;   // Evt de cancel depuis massif

const int   EM_LSE_APMEVF = 668 ;   // Evt eveil fiche depuis massif

const int   EM_LSE_APMEVL = 667 ;   // Evt eveil depuis massif

const int   EM_LSE_APMMOD = 672 ;   // Evt de modification depuis massif

const int   EM_LSE_APMNTF = 669 ;   // Evt notification ABI ou PAC depuis massif

const int   EM_LSE_ARRET_LIGNE = 72 ;   // Arret ligne RSFTA             

const int   EM_LSE_ARRIVEE = 14 ;   // Confirmation d'arrivee vol    

const int   EM_LSE_ARRIVEE_AVEC_ARR = 84 ;   // Evt arrivee avec emission ARR 

const int   EM_LSE_AVIS = 25 ;   // Avis                          

const int   EM_LSE_AVIS_CREAT = 18 ;   // Avis de creation              

const int   EM_LSE_AVIS_MODIF = 19 ;   // Avis de modification          

const int   EM_LSE_AVIS_SUPPR = 20 ;   // Avis de suppression           

const int   EM_LSE_CREAT = 2 ;   // Creation                      

const int   EM_LSE_CREAT_NON_NA = 6 ;   // Creation non habilitee        

const int   EM_LSE_DDVMSG_MAJ_ETAT = 80 ;   // Champ ETAT devient Obsolete   

const int   EM_LSE_DEPART = 13 ;   // Confirmation de depart vol    

const int   EM_LSE_DEPART_AVEC_DEP = 83 ;   // Evt depart avec emission DEP  

const int   EM_LSE_EATARR = 90 ;   // Evt penetration en zone SEQ                      

const int   EM_LSE_ERREUR = 4 ;   // Erreur                        

const int   EM_LSE_ERR_SYNTAXE = 11 ;   // Erreur de syntaxe             

const int   EM_LSE_LANCEMENT_LIGNE = 71 ;   // Lancement ligne RSFTA         

const int   EM_LSE_LISTE = 5 ;   // Liste                         

const int   EM_LSE_MEO_CONFIG = 29 ;   // Configuration                 

const int   EM_LSE_MODIF = 3 ;   // Modification                  

const int   EM_LSE_MODIFDATE = 10 ;   // Modification de date (test)   

const int   EM_LSE_MODIF_NON_NA = 7 ;   // Modification non habilitee    

const int   EM_LSE_MSGBAL_SUPPRES = 76 ;   // Evenement de sup adresse bal  

const int   EM_LSE_MSGEX_CORRECT = 55 ;   // Evenement correction msrse    

const int   EM_LSE_MSGEX_RECU = 12 ;   // Message exploite recu         

const int   EM_LSE_MSGTR_EMIS = 70 ;   // Message transmis emis         

const int   EM_LSE_MSGTR_RECU = 69 ;   // Message transmis recu         

const int   EM_LSE_MSG_CAOBS_RECU = 78 ;   // Reception d'un message CAOBS  

const int   EM_LSE_MSG_COTEL_RECU = 73 ;   // Reception d'un message COTEL  

const int   EM_LSE_MSG_EMIS = 675 ;   // Evt msg �mis de NAGEST vers SIGMA

const int   EM_LSE_MSG_NONRECONNU = 28 ;   // Message non reconnu recu      

const int   EM_LSE_MSG_SVC = 27 ;   // Message de service recu       

const int   EM_LSE_MVTMSG_VAL_SUP = 44 ;   // Refus de validation d'un msg  

const int   EM_LSE_MVTSSR_ALL = 85 ;   // Evt allocation code SSR       

const int   EM_LSE_MVTSSR_LIB = 86 ;   // Evt liberation code SSR       

const int   EM_LSE_MVT_ATTRIBUTION_ROUTE = 33 ;   // Attribution de route strip    

const int   EM_LSE_MVT_REFUS_CREATION = 34 ;   // Refus d'attribution de route  

const int   EM_LSE_MVT_TOUCHE_ACT = 38 ;   // Touche activation             

const int   EM_LSE_MVT_TOUCHE_ATT = 40 ;   // Touche atterrissage           

const int   EM_LSE_MVT_TOUCHE_CLO = 42 ;   // Touche cloture                

const int   EM_LSE_MVT_TOUCHE_COOR = 43 ;   // Touche coordination CCR/APP   

const int   EM_LSE_MVT_TOUCHE_DEC = 37 ;   // Touche decollage              

const int   EM_LSE_MVT_TOUCHE_MER = 35 ;   // Touche mise en route          

const int   EM_LSE_MVT_TOUCHE_PAS = 39 ;   // Touche passage                

const int   EM_LSE_MVT_TOUCHE_PKG = 41 ;   // Touche parking                

const int   EM_LSE_MVT_TOUCHE_ROUL = 36 ;   // Touche roulage                

const int   EM_LSE_MVT_TOUCHE_STRIP = 32 ;   // Demande d'edition de strip    

const int   EM_LSE_OPTIMISE = 74 ;   // Evenement d'optimisation      

const int   EM_LSE_PASSAGE = 17 ;   // Avis de passage vol           

const int   EM_LSE_PKG = 674 ;   // Modification du parking

const int   EM_LSE_REJET = 31 ;   // Rejet de ddv soumise          

const int   EM_LSE_REVARR = 89 ;   // Evt penetration en zone INI                      

const int   EM_LSE_RMG = 88 ;   // Evt remise de gaz                      

const int   EM_LSE_SAUVEGARDE = 26 ;   // Sauvegarde                    

const int   EM_LSE_STRIP = 45 ;   // Strip (utilise par TDV aussi) 

const int   EM_LSE_STRIP_DEC = 46 ;   // Strip decollage               

const int   EM_LSE_STRIP_DEM = 50 ;   // Strip demande                 

const int   EM_LSE_STRIP_EST = 52 ;   // Evenement estime              

const int   EM_LSE_STRIP_MER = 47 ;   // Strip mise en route           

const int   EM_LSE_STRIP_PAS = 49 ;   // Strip passage                 

const int   EM_LSE_STRIP_PEC = 48 ;   // Strip prise en compte         

const int   EM_LSE_STRIP_VOL_CREAT = 53 ;   // Evenement creation strip vol  

const int   EM_LSE_SUP_ATTCAUTRA = 51 ;   // Supp. attente accuse CAUTRA   

const int   EM_LSE_SUP_ATTIFPS = 79 ;   // Supp. attente accuse trt IFPS 

const int   EM_LSE_SURVEIL = 15 ;   // Demande de surveillance vol   

const int   EM_LSE_SURVFIN = 16 ;   // Fin de surveillance vol       

const int   EM_LSE_TOUR_HORIZON = 87 ;   // Evt tour horizon              

const int   EM_LSE_TRANSFERT = 91 ;   // Evt transfert de controle

const int   EM_LSE_VALID = 9 ;   // Validation                    

const int   EM_LSO_AERODROME = 570 ;   // Objet Aerodrome                         

const int   EM_LSO_AERONEF = 538 ;   // Objet Aeronef connu                     

const int   EM_LSO_ARCHIVE = 550 ;   // Objet Archive                           

const int   EM_LSO_BASE = 567 ;   // Objet Base                              

const int   EM_LSO_CODE_INFRA = 585 ;   // Objet code infra                        

const int   EM_LSO_CONFIG = 552 ;   // Objet Configuration                     

const int   EM_LSO_CPLADR = 551 ;   // Objet Complement d'adressage            

const int   EM_LSO_DDV = 530 ;   // Objet Declaration de vol forme complete 

const int   EM_LSO_DDVMSG = 532 ;   // Objet Message sur ddv                   

const int   EM_LSO_DDV_INFOTACT = 586 ;   // Objet ddv info tact                     

const int   EM_LSO_DVM = 539 ;   // Objet Declaration de vol memorisee      

const int   EM_LSO_DVR = 531 ;   // Objet Declaration de vol forme reduite  

const int   EM_LSO_INFOAD = 557 ;   // Objet informations etat aerodrome       

const int   EM_LSO_INFOATIS = 558 ;   // Objet informations ATIS                 

const int   EM_LSO_INFOSYNTH = 578 ;   // Objet information de synthese           

const int   EM_LSO_INFOTEXTE = 577 ;   // Objet information texte                 

const int   EM_LSO_JSY_SSR_S = 537 ;   // Objet Codes SSR pour Jersey 

const int   EM_LSO_LIGNE_RSFTA = 568 ;   // Objet ligne RSFTA                       

const int   EM_LSO_MESSAGE = 575 ;   // Objet message                           

const int   EM_LSO_MSGBALS = 571 ;   // Objet message bals                      

const int   EM_LSO_MSRED = 541 ;   // Objet Message pre-redige                

const int   EM_LSO_MSRSE = 533 ;   // Objet Message RSFTA exploite            

const int   EM_LSO_MSRST = 543 ;   // Objet Message RSFTA transmis            

const int   EM_LSO_MTOLOC = 548 ;   // Objet Etat Meteo local                  

const int   EM_LSO_MTOPUB = 547 ;   // Objet Informations Meteo publiees       

const int   EM_LSO_MTOQNH = 583 ;   // Objet Informations Meteo QNH            

const int   EM_LSO_MTOZONE = 563 ;   // Objet bulletin meteo de zone            

const int   EM_LSO_MTO_ACQ = 569 ;   // Objet meteo ACQUISITION                 

const int   EM_LSO_MVT = 559 ;   // Objet mouvement                         

const int   EM_LSO_MVTMSG = 560 ;   // Objet message associe au mouvement      

const int   EM_LSO_MVTSSR = 579 ;   // Objet code SSR associe au mouvement     

const int   EM_LSO_NOTAM = 546 ;   // Objet Notam			           

const int   EM_LSO_ORGANISME = 540 ;   // Objet Organisme                         

const int   EM_LSO_POINT = 555 ;   // Objet point                             

const int   EM_LSO_POINT_TRK = 572 ;   // Objet point track                       

const int   EM_LSO_POSLOG = 553 ;   // Objet Position logique                  

const int   EM_LSO_PREROUTE = 534 ;   // Objet Route pre-etablie                 

const int   EM_LSO_QIRA = 587 ;   // Objet question IRA                      

const int   EM_LSO_REGULATION = 574 ;   // Objet regulation                        

const int   EM_LSO_REPIRA = 588 ;   // Objet reponse  IRA                      

const int   EM_LSO_ROUTE_TRK = 573 ;   // Objet route track                       

const int   EM_LSO_RT_STRIP = 556 ;   // Objet route STRIP                       

const int   EM_LSO_STRIP = 589 ;   // Objet strip                             

const int   EM_LSO_STRIPDAS = 590 ;   // Objet stripdas                          

const int   EM_LSO_STRIP_VOL = 561 ;   // Objet strip vol                         

const int   EM_LSO_TEST = 1 ;   // Objet Test (non utilise)                

const int   EM_LSO_TYPAERO = 542 ;   // Objet Type aeronef connu                

const int   EM_LSO_VLR = 536 ;   // Objet Vol forme reduite                 

const int   EM_LSO_VOL = 535 ;   // Objet Vol forme complete                

const int   EM_LSO_VOLALARME = 544 ;   // Objet Vol Alarme                        

const int   EM_LSO_VOLMSG = 545 ;   // Objet Vol Message                       

const int   EM_LSO_VOL_COMPLET = 554 ;   // Objet Vol Complet                       

const int   EM_LSR_ACCEPT = 0 ;   // Acceptation                   

const int   EM_LSR_ERDATA = -4 ;   // Erreur de donnees             

const int   EM_LSR_ERIDENT = -3 ;   // Erreur d'identifiant          

const int   EM_LSR_ERRCOM = -5 ;   // Erreur de communication       

const int   EM_LSR_ERREUR = -2 ;   // Erreur                        

const int   EM_LSR_REFUS = -1 ;   // Refus                         

const int   EM_MSG_GEST_LONG_MAX = 1024 ;   // 

const int   EM_NB_MAX_ADR_DEST = 6 ;   // 

const int   EM_NB_MAX_FE = 15 ;   //  NOMBRE MAX DE FONCTIONS D'EXPLOITATION PAR POSITION LOGIQUE

const int   EM_NB_MAX_ID_FONC = 15 ;   // 

const int   EM_NB_POINTS = 18 ;   // 

const int   EM_ROUTE_AMONT_MAX_POINTS = 10 ;   // 

const int   EM_ROUTE_AVALE_MAX_POINTS = 10 ;   // 

const int   EM_ROUTE_STRIP_MAX_POINTS = 18 ;   // 


#endif


//------------------------------------------------------------------------------
//  Fin du fichier EMsigbaseDEFINES.H
//------------------------------------------------------------------------------

