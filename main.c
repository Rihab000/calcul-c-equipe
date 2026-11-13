#include <stdio.h>

int produit(int a, int b)
{
    return a * b;
}

float moyenne(int a, int b)
{
    return (a + b) / 2.0f;
}

int main(void)
{
    printf("Projet collaboratif - version main\n");
    printf("Produit de 3 et 4 : %d\n", produit(3, 4));
    printf("Moyenne de 3 et 4 : %.2f\n", moyenne(3, 4));
    return 0;
}
