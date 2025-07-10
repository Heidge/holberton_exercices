#include "sword.h"

/**
 * create_sword - Crée une nouvelle épée avec allocation dynamique
 * @length: Longueur de l'épée en centimètres
 * @material: Matériau de l'épée
 * @type: Type d'épée
 *
 * À faire:
 * 1. Allouer la mémoire pour la structure sword_t
 * 2. Initialiser le membre length
 * 3. Allouer et copier la chaîne material
 * 4. Allouer et copier la chaîne type
 * 5. Gérer les cas d'erreur d'allocation
 *
 * Return: Pointeur vers la nouvelle épée ou NULL en cas d'échec
 */
sword_t *create_sword(unsigned int length, const char *material, const char *type)
{
	sword_t *new_sword;

	/* TODO: Allouer la mémoire pour la structure */


	/* TODO: Vérifier si l'allocation a réussi */


	/* TODO: Initialiser le membre length */


	/* TODO: Allouer et copier material */
	/* Indice: strlen(material) + 1 pour le '\0' */


	/* TODO: Allouer et copier type */


	/* TODO: Retourner la nouvelle épée */

}

/**
 * print_sword - Affiche les informations d'une épée
 * @sword: Pointeur vers l'épée à afficher
 *
 * À faire:
 * 1. Vérifier que le pointeur n'est pas NULL
 * 2. Afficher length, material et type avec printf
 */
void print_sword(const sword_t *sword)
{
	/* TODO: Vérifier si sword est NULL */


	/* TODO: Afficher les informations de l'épée */
	/* Format suggéré:
	 * Type: [type]
	 * Longueur: [length] cm
	 * Matériau: [material]
	 */

}

/**
 * free_sword - Libère la mémoire d'une épée
 * @sword: Pointeur vers l'épée à libérer
 *
 * À faire:
 * 1. Vérifier que le pointeur n'est pas NULL
 * 2. Libérer material
 * 3. Libérer type
 * 4. Libérer la structure
 *
 * ATTENTION: Ordre de libération important!
 */
void free_sword(sword_t *sword)
{
	/* TODO: Vérifier si sword est NULL */


	/* TODO: Libérer material */


	/* TODO: Libérer type */


	/* TODO: Libérer la structure */

}

/**
 * compare_swords - Compare deux épées par longueur
 * @sword1: Première épée
 * @sword2: Deuxième épée
 *
 * À faire:
 * 1. Vérifier que les pointeurs ne sont pas NULL
 * 2. Comparer les longueurs
 *
 * Return: 1 si sword1 > sword2, -1 si sword1 < sword2, 0 si égales
 */
int compare_swords(const sword_t *sword1, const sword_t *sword2)
{
	/* TODO: Vérifier les pointeurs NULL */


	/* TODO: Comparer les longueurs et retourner le résultat */

}
