# Exercice : Gestion d'Épées en C

## 🎯 Objectif

Cet exercice a pour but d'apprendre la gestion dynamique de la mémoire avec `malloc()` et l'utilisation des structures en C. Vous allez créer un système de gestion d'épées avec allocation dynamique de mémoire.

## 📚 Concepts abordés

- **Structures** : Définition et utilisation de structures avec `typedef`
- **Allocation dynamique** : Utilisation de `malloc()` et `free()`
- **Gestion mémoire** : Prévention des fuites mémoire
- **Énumérations** : Utilisation d'`enum` pour les types d'épées
- **Pointeurs** : Manipulation des pointeurs et des chaînes de caractères

## 🗂️ Structure du projet

```
sword_exercise/
├── sword.h              # Fichier d'en-tête avec structures et prototypes
├── sword_functions.c    # Implémentation des fonctions
├── main.c              # Programme principal
├── Makefile            # Compilation automatisée
└── README.md           # Ce fichier
```

## 📋 Étapes de l'exercice

### Étape 1 : Comprendre la structure

La structure `sword_t` contient :
- `unsigned int length` : Longueur de l'épée en centimètres
- `char *material` : Matériau de l'épée (allocation dynamique nécessaire)
- `char *type` : Type d'épée (sabre, épée, claymore, etc.) - allocation dynamique

### Étape 2 : Allocation mémoire

La fonction `create_sword()` doit :
1. Allouer de la mémoire pour la structure (`malloc(sizeof(sword_t))`)
2. Allouer de la mémoire pour le matériau (`malloc(strlen(material) + 1)`)
3. Allouer de la mémoire pour le type (`malloc(strlen(type) + 1)`)
4. Copier les chaînes avec `strcpy()`
5. Gérer les échecs d'allocation

### Étape 3 : Libération mémoire

La fonction `free_sword()` doit libérer :
1. La mémoire allouée pour le matériau
2. La mémoire allouée pour le type
3. La mémoire allouée pour la structure

**Ordre important** : Libérer d'abord le contenu, puis la structure !

### Étape 4 : Compilation et test

```bash
# Compilation manuelle
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o sword_program main.c sword_functions.c

# Exécution
./sword_program
```

## 🔧 Commandes utiles

### Compilation
```bash
# Compilation avec toutes les options
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -o sword_program main.c sword_functions.c

### Vérification mémoire (optionnel)
```bash
# Installation de valgrind (Ubuntu/Debian)
sudo apt-get install valgrind

# Test des fuites mémoire
valgrind --leak-check=full ./sword_program
```

## ✅ Résultat attendu

Le programme doit afficher :
```
=== FORGE D'ÉPÉES ===

Épées créées avec succès!

=== ÉPÉE ===
Type: Épée
Longueur: 90 cm
Matériau: Acier magique
============

=== ÉPÉE ===
Type: Katana
Longueur: 75 cm
Matériau: Acier japonais
============

=== ÉPÉE ===
Type: Claymore
Longueur: 120 cm
Matériau: Acier trempé
============

=== COMPARAISONS ===
Excalibur est plus longue que Murasame
Durandal est plus longue qu'Excalibur

Mémoire libérée avec succès!
=== FIN DU PROGRAMME ===
```

## 🚨 Points d'attention

### Gestion des erreurs
- Toujours vérifier si `malloc()` retourne `NULL`
- Libérer la mémoire déjà allouée en cas d'échec

### Ordre de libération
```c
// ✅ Correct
free(sword->material);  // D'abord le matériau
free(sword->type);      // Puis le type
free(sword);            // Enfin la structure

// ❌ Incorrect
free(sword);            // Ne plus pouvoir accéder aux membres
free(sword->material);  // Comportement indéfini !
```

### Vérification des pointeurs
```c
// ✅ Toujours vérifier avant d'utiliser
if (sword != NULL && sword->material != NULL)
    printf("Matériau: %s\n", sword->material);
```

## 🎁 Fonctionnalités bonus

Le code inclut plusieurs fonctionnalités avancées :
- Gestion de chaînes de caractères dynamiques
- Fonction de comparaison d'épées
- Gestion robuste des erreurs
- Documentation complète des fonctions

## 📝 Exercices supplémentaires

1. **Niveau débutant** : Ajouter un champ `weight` (poids) à la structure
2. **Niveau intermédiaire** : Créer une fonction `copy_sword()` qui duplique une épée
3. **Niveau avancé** : Implémenter un tableau dynamique d'épées avec `realloc()`

## 🐛 Debugging

### Erreurs communes
- **Segmentation fault** : Vérifiez les pointeurs NULL
- **Memory leak** : Assurez-vous de libérer toute la mémoire allouée
- **Double free** : Ne libérez jamais deux fois la même mémoire

### Outils de debugging
```bash
# Compilation avec symboles de debug
gcc -g -Wall -pedantic -Werror -Wextra -std=gnu89 -o sword_program main.c sword_functions.c

# Utilisation de gdb
gdb ./sword_program
```

## 🎯 Critères d'évaluation

- ✅ Compilation sans erreur ni warning
- ✅ Pas de fuite mémoire (vérifiable avec valgrind)
- ✅ Gestion correcte des cas d'erreur
- ✅ Respect des conventions de codage
- ✅ Documentation du code

Bon courage dans votre apprentissage de la gestion mémoire en C ! 🗡️
