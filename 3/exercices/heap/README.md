# Tas

## Introduction

La mémoire d'un ordinateur est divisée en plusieurs sections. Les principales sections sont :
- la pile (stack en anglais)
- le tas (tas en anglais)

On utilisera les noms anglais, ce sont ceux qui sont fréquemment utilisés.

### Stack

La stack est utilisée pour contenir toutes les variables locales d'un programme. Lorsque que l'on déclare un entier de la manière suivante par exemple :
```c
int main(void)
{
    int entier = 0;
    return 0;
}
```

De la place est réservée sur la stack pour la variable **entier** et sa valeur y est stockée.
La place dont aura besoin le programme pour stocker cette variable ne dépend pas de l'exécution, mais simplement du code du programme.
Autrement dit, le système (compilateur) pourra prévoir la quantité nécessaire de mémoire pour stocker cette variable.

### Heap

Le heap, quant à lui, est utilisé pour contenir la mémoire allouée dynamiquement lors de l'exécution d'un programme. C'est à dire la mémoire
dépendante de la manière dont s'exécute le programme.

Par exemple : imaginons un programme qui demande à un utilisateur combien de fois il veut afficher un carré à l'écran. Le compilateur ne peut
pas savoir à l'avance quel sera le chiffre rentré par l'utilisateur. Autrement dit, la quantité de mémoire nécessaire dépend de l'exécution du programme.

Il faudra ainsi faire appel à une fonction qui s'appelle **malloc** (memory allocation), et qui se trouve dans la libc, plus précisément dans le fichier :
```c
#include <stdlib.h>
```

## Objectif

Nous allons apprendre à utiliser cette fonction.

L'objectif de cet exercice sera d'allouer un tableau de caractères dont la taille dépend d'un nombre entré par l'utilisateur.

Ecrire le code d'un programme qui fait les choses suivantes :
- demande à l'utilisateur de rentrer un nombre et stocke ce nombre dans une variable appelée **n**
- alloue un tableau de caractères de taille **n**
- appelle la fonction **strlen** contenue dans la **libc** pour obtenir la taille de ce tableau
- affiche la taille du tableau pour vérifier que l'on a alloué correctement