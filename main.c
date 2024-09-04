#include "prototype.h"

int main() {
    char cidr[20];  
    char ip[16];    
    int prefixe;    
    
    saisirCIDR(cidr);
    extraireCIDR(cidr, ip, &prefixe);
    afficherResultat(ip, prefixe);

    return 0;
}
