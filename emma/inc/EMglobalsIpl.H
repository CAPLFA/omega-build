//*****************************************************************************
/*! \file       EMglobalsIpl.H
 *  Application EMMA
 *  \author     Erwan Demairy
 *
 *  Fichier conservé pour des raisons de compatibilité EMMA 1.
 *  Déclare uniquement EMdupliqueChaine().
 *  
 */
//*****************************************************************************
#ifndef __EMglobalsIpl_H
#define __EMglobalsIpl_H
#include <new>
using namespace std;

/*! Alloue une copie de la chaîne passée en paramètre. L'allocation s'effectue
 *  avec new char[], l'application qui a demandé la copie doit donc libérer 
 *  ensuite la mémoire avec un delete[].
 *  \param chaine Chaine à copier.
 *  \return
 *     - NULL si chaîne est NULL.
 *     - un pointeur sur la nouvelle chaîne.
 *     - exception bad_alloc si l'allocation de mémoire n'est pas possible.
 *     - un plantage de l'application si chaîne est mal formé (pas de /0
 *       terminal). La copie utiliser strlen pour déterminer la taille 
 *       de la chaîne.
 */
char* EMdupliqueChaine( const char* chaine ) throw (bad_alloc);

#endif



