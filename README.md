# 🧠 Rush02 – Piscine C @ 42

## 📝 Objectif

Créer un programme nommé `rush-02` capable de convertir un **nombre entier positif** en **toutes lettres**, en s’appuyant sur un dictionnaire texte.

---

## 🔧 Exemple d’utilisation

```bash
$> ./rush-02 42
forty two

$> ./rush-02 100000
one hundred thousand

$> ./rush-02 custom.dict 20
twenty (ou autre selon le dictionnaire)
```

---

## ⚙️ Arguments

Le programme peut prendre :

- 1 argument : le **nombre** à convertir.
- 2 arguments : un **fichier dictionnaire personnalisé** + le nombre à convertir.

---

## 🚫 Erreurs à gérer

- Nombre non valide (lettres, flottants, négatif, vide...) → `Error\n`
- Dictionnaire invalide ou incomplet → `Dict Error\n`

---

## 📘 Format du dictionnaire

Chaque ligne doit suivre le format :

```
<number>[espaces] : [espaces]<texte>
```

Exemples valides :
```
0 : zero
100 : one hundred
42 : forty two
```

- Les lignes peuvent être dans n'importe quel ordre.
- Il peut y avoir des lignes vides.
- Les espaces autour du `:` ou du texte doivent être ignorés (`trim`).
- Le fichier doit contenir **au minimum toutes les clés de base nécessaires**.

---

## 🗂️ Structure du projet

```
ex00/
├── main.c                → point d’entrée du programme
├── parser.c/.h           → lit et parse le dictionnaire
├── dict_utils.c/.h       → fonctions de recherche dans le dictionnaire
├── number_to_words.c/.h  → convertit un nombre en lettres
├── string_utils.c/.h     → fonctions utiles (strlen, strcmp, etc.)
├── Makefile              → compilation
└── README.md             → ce fichier
```

---

## 🔨 Compilation

```bash
make
```

Ton `Makefile` doit contenir au minimum les règles :
- `all` (ou `$(NAME)`)
- `clean`
- `fclean`
- `re`

Le programme est compilé avec : `cc -Wall -Wextra -Werror`

---

## ✅ Étapes de développement

1. **Recoder les fonctions de base** (`string_utils`)
2. **Parser le fichier dictionnaire** (ignorer espaces, lignes vides)
3. **Valider les arguments** (nombre positif uniquement)
4. **Chercher les mots dans le dictionnaire**
5. **Découper le nombre en blocs de 3 chiffres**
6. **Afficher chaque bloc avec son suffixe** (`thousand`, `million`, etc.)
7. **Gérer toutes les erreurs proprement**
8. **Libérer la mémoire (free)**

---

## 🌟 Bonus (facultatif)

- Ajouter les mots de liaison : `and`, `-`, `,`
- Support d'autres langues avec un dictionnaire traduit
- Lire depuis l’entrée standard si l’argument est `-` :
  ```bash
  ./rush-02 -
  42
  forty two
  ^D
  ```

---

## 🧽 À ne pas oublier

- Respect strict de la **norme 42**
- Aucun **leak mémoire**
- Gérer **tous les cas d’erreur**
- **Comprendre l’ensemble du code** (même si vous êtes en groupe)
- Apporter un projet **propre et fonctionnel** le jour de l’éval

---

## 💬 Besoin d’aide ?

- Parle avec tes camarades (c’est le but de la piscine !)
- Débug pas à pas
- Teste ton parser séparément
- Commence petit, et avance morceau par morceau

---

**Bon courage 🚀 et amuse-toi bien à coder intelligemment !**