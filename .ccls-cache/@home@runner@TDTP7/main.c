#include <stdio.h>
#include <math.h>

#define PI 3.14159

int ex2() {
 int altitude = 1000;
 double temperature = 25.2;
 printf("temperature | altitude(en m)\n");
 for (int i = 1; i <= 10; i++) {
     temperature -= 0.8;
     printf("%11.1f | %d\n", temperature, altitude);
     altitude += 100;
     }
 return 0;
}

int estPaire(int);
int sommeCarres(int);

int main () {
    int parite, somme;
    scanf("%d", &parite);
    scanf("%d", &somme);
    printf("%d\n", estPaire(parite));
    printf("%d\n", sommeCarres(somme));
}

int estPaire(int arg) {
    if (arg % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int sommeCarres(int arg) {
    int somme = 0;
    for (int i = 1; i <= arg; i++) {
        somme += i*i;
    }
    return somme;
}