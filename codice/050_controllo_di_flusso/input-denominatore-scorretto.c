#include <stdio.h>

main() {
    int denominatore;
    scanf("%d", &denominatore);
    if (10 / denominatore > 2 && denominatore != 0)
        printf("Verificato\n");
}