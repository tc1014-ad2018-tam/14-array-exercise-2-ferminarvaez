// Fermín Narváez Reyes A01411229
#include <stdio.h>

//Regla para sumar
double suma(double numero[],int n){
  double s=0;
  for(int i=0;i<n;i++){
    s+=numero[i];
  }
  return s;
}

//Regla para sacar el promedio
double promedio(double numero[], int n){
  return suma(numero,n)/n;
}

//Regla para el menor array y su posición
void menor(double numero[], int n){
  double m=numero[0];
  int pos=0;
  for(int i=1;i<n;i++){
    if(numero[i]<m){
      m=numero[i];
      pos=i;
    }
  }
    printf("El valor menor está en la posición: %d", pos);
    printf("Y es: %lf\n", m);
}

//Regla para el mayor array y su posición
void mayor(double numero[], int n){
  double m=numero[0];
  int pos=0;
  for(int i=1;i<n;i++){
    if(numero[i]>m){
      m=numero[i];
      pos=i;
    }
  }
    printf("El valor mayor está en la posición: %d", pos);
    printf("Y es: %lf\n", m);
}

int main(void) {

  // Definir las variables
  int n;
  int op;
  printf("Define el tamaño del arreglo: ");
  scanf("%i", &n);

  double numero[n];

  printf("Escribe %i numeros\n", n); // Output

  //Outpu que dirá al usuario que escriba los arrays
  for(int i=0;i<n;i++){
      printf("Escribe el numero %d:", i);
      scanf("%lf",&numero[i]);
  }

  do{
        printf("\nSelecciona una opcion.\n");
        printf("1. Menor\n");
        printf("2. Mayor\n");
        printf("3. Suma.\n");
        printf("4. Promedio\n");
        printf("5. Salir\n");

        scanf("%i", &op);

        //Dependerá del usuario ¿? Dudas
        switch (op){
            case 1:
              menor(numero,n);
              printf("El número y su posición está arriba");
              break;
            case 2:
              mayor(numero,n);
              printf("El número y su posición está arriba");
              break;
            case 3:
              printf("El total de la suma es: %lf", suma(numero,n));
              break;
            case 4:
              printf("El promedio es: %lf", promedio(numero,n));
              break;
            case 5:
              printf("Adiós");
              break;
            default:
                printf("Presiona otro número. Esta opción no existe. \n");
        }
    } while (op<=5&&op>=0);

  return 0;
}