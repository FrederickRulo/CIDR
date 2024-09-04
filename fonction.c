#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Inclure cette bibliothèque pour atoi
#include "prototype.h"


void saisirCIDR(char cidr[]) {
    printf("Entrez l'adresse en notation CIDR (ex: 192.168.1.0/24) : ");
    scanf("%19s", cidr);
}


void extraireCIDR(char cidr[], char ip[], int *prefixe) {
    
    char *token = strtok(cidr, "/");

    
    strcpy(ip, token);

    
    token = strtok(NULL, "/");
    *prefixe = atoi(token); 
}


void afficherResultat(char ip[], int prefixe) {
    
    int bitsHotes = 32 - prefixe;

    
    printf("Adresse IP : %s\n", ip);
    printf("Nombre de bits réseau : %d\n", prefixe);
    printf("Nombre de bits hôtes : %d\n", bitsHotes);
}
