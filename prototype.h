#ifndef PROTOTYPE_H
#define PROTOTYPE_H

// Fonction pour saisir l'adresse CIDR
void saisirCIDR(char cidr[]);

// Fonction pour extraire l'adresse IP et le préfixe
void extraireCIDR(char cidr[], char ip[], int *prefixe);

// Fonction pour afficher les résultats
void afficherResultat(char ip[], int prefixe);

#endif
