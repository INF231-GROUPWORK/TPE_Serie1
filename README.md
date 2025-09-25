# TPE_Serie1
Ce repository est pour TPE_Serie1
INF231 : Structures de Données  
Année académique 2025–2026  

## Description
Ce projet regroupe 9 exercices implémentés en langage C.  
Chaque exercice est présenté sous forme de dossier algorithmique : énoncé clair, principe de résolution, algorithme résumé, et complexité. 

## 1. Produit de deux matrices
  **Problème** : Calculer le produit de deux matrices carrées de taille p.  
  **Principe** : Chaque élément de la matrice résultat est obtenu en multipliant ligne de la première matrice par colonne de la seconde.  
  **Algorithme** : Pour chaque i, j → C[i][j] = somme (n[i][k] × m[k][j]).  
  **Complexité** : Temps O(p³), espace O(p²).

## 2. Somme de deux matrices
  **Problème** : Calculer la somme de deux matrices carrées de taille p.  
  **Principe** : Additionner chaque élément correspondant.  
  **Algorithme** : Pour chaque i, j → C[i][j] = n[i][j] + m[i][j].  
  **Complexité** : Temps O(p²), espace O(p²).  

## 3. Recherche séquentielle dans un tableau
  **Problème** : Retrouver la position d’une valeur donnée dans un tableau.  
  **Principe** : Parcourir le tableau élément par élément jusqu’à trouver la valeur.  
  **Algorithme** : Pour i = 0 → n-1 : si T[i] = val → afficher position.  
  **Complexité** : Temps O(n), espace O(1).  

## 4. Multiplication par additions successives
  **Problème** : Calculer a × b en utilisant uniquement des additions.  
  **Principe** : Additionner `a` à lui-même `b` fois.  
  **Algorithme** : res = 0 ; répéter b fois → res = res + a.  
  **Complexité** : Temps O(b), espace O(1). 

## 5. Test de tri d’un tableau
  **Problème** : Vérifier si un tableau est trié dans l’ordre croissant.  
  **Principe** : Comparer chaque élément avec le suivant.  
  **Algorithme** :  pour i allant de 0 a n-1 faire T[i] > T[i+1] → non trié, sinon trié.  
  **Complexité** : Temps O(n), espace O(1).  

## 6. Médiane d’un tableau
  **Problème** : Déterminer la médiane des éléments d’un tableau.  
  **Principe** : Trier le tableau, puis prendre l’élément du milieu (ou la moyenne des deux du centre si n est pair).  
  **Algorithme** :  
  - Trier T par tri à bulles.  
  - Si n impair → médiane = T[n/2].  
  - Sinon → médiane = (T[n/2 -1] + T[n/2]) / 2.  
  **Complexité** : Temps O(n²) avec tri à bulles, espace O(1).  

## 7. Inversion d’un tableau
  **Problème** : Inverser l’ordre des éléments d’un tableau.  
  **Principe** : Échanger les éléments symétriques.  
  **Algorithme** : Pour i = 0 → n/2 : échanger T[i] et T[n-1-i].  
  **Complexité** : Temps O(n), espace O(1).  

## 8. Produit vectoriel
  **Problème** : Calculer le produit vectoriel de deux vecteurs 3D.  
  **Principe** : Appliquer la formule du produit vectoriel en dimension 3.  
  **Algorithme** : (u2v3 − u3v2, u3v1 − u1v3, u1v2 − u2v1).  
  **Complexité** : Temps O(1), espace O(1).  

## 9. Produit vecteur-matrice
  **Problème** : Multiplier un vecteur par une matrice.  
  **Principe** : Chaque composante du vecteur résultat est une combinaison linéaire des colonnes de la matrice.  
  **Algorithme** : Pour chaque colonne j : X[j] = somme (vec[i] × mat[i][j]).  
  **Complexité** : Temps O(n × m), espace O(m). 

# Instructions de compilation et d'exécution
Pour compiler les fichiers sources :
gcc -o nom_du_programme nom_du_fichier.c
Pour exécuter le programme :
./nom_du_programme
# Exemple
si nom_du_fichier = somme.c et nom_du_programme = somme
pour compiler : gcc -o somme.c somme
pour executer : ./somme

