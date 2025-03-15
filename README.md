
# Ford-Fulkerson Algorithm - Calcul du Flot Maximum

## 📌 Description
Ce projet implémente **l'algorithme de Ford-Fulkerson** en C++ pour **calculer le flot maximum** dans un graphe orienté avec des capacités sur les arcs.

## 📁 Structure du projet
- **`main.cpp`** → Programme principal qui exécute l'algorithme.
- **`utilities.cpp`** → Contient l'implémentation des fonctions (`fordfulkerson`, `chaineaugmentante`, `increment`).
- **`utilities.h`** → Fichier d'en-tête déclarant les fonctions.

## ⚙️ Compilation et Exécution
### 1️⃣ **Cloner le projet**
```bash
git clone https://github.com/malekghabi1607/ford-fulkerson-tp.git
cd ford-fulkerson-tp
```
### 2️⃣ **Compiler**

```bash
g++ -o fordfulkerson main.cpp utilities.cpp
```
### 3️⃣ **Exécuter**
```bash
./ford
```

### 4️⃣ **Entrer les données du graphe**
- **Nombre de sommets** (`n`): Entrez le nombre de somme
- **Nombre d'arcs** (`m`): Entrez le nombre d'ar
- **Capacités** (`u`, `v`, `c`): Entrez les capacités pour chaque a
- **Flot initial** (`s`, `t`): Entrez le flot initi
- **Flot maximum** (`max_flow`): Affiché par l'algorith
- **Chaine augmentante** (`path`): Affichée par l'algorithme à chaque itération pour montrer les chemins utilisés.
- **Flot augmenté** (`flow`): Affiché par l'algorithme à chaque itération pour montrer le flot augmenté.



## 📊 Affichage des résultats
Les résultats sont affichés à l'écran, incluant le flot maximum trouvé et les capacités et flux des arcs après chaque itération.
```bash
Flot maximum trouvé : 15
c =
0 6 6 0 0 0
6 0 0 5 0 0


f =
0 6 6 0 0 0
0 0 0 5 0 0

```
## 🔧 Outils utilisés
- **IDE** : Visual Studio Code
- **Langage** : C++
- **Compilateur** : g++
- **Système d'exploitation** : MacOS

## 📜 Licence

- Ce projet est open-source. Vous pouvez le modifier et l’utiliser librement.



