#include "fichier.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Constructeur optionnel, initialise le nom du fichier (si nécessaire)
Fichier::Fichier() {
    nomFichier = "C:/Users/thais/Documents Local/CPI A2/Projet 2/testprosit2.txt";
}

void Fichier::lecture() {
    ifstream monFlux(nomFichier.c_str()); // Changement vers ifstream pour la lecture
    if (monFlux) {
        string ligne;
        while (getline(monFlux, ligne)) {
            cout << ligne << endl;
        }
    } else {
        cerr << "ERREUR: Impossible d'ouvrir le fichier en mode lecture." << endl;
    }
}

void Fichier::ecriture() {
    ofstream monFlux(nomFichier.c_str());
    if (monFlux) {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(36);
        monFlux << "J'ai " << age << " ans." << endl;
    } else {
        cerr << "ERREUR: Impossible d'ouvrir le fichier en mode écriture." << endl;
    }
}
