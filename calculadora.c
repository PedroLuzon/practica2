#include <stdio.h>
#include <math.h>

float suma(float a, float b);
float resta(float a, float b);
double multiplicacion(float a, float b);
float division(float a, float b);
double potencia(float a, float b);
double iva(float a);

int main ( int argc, char *argv[]){
     printf("----------------------------MENU--------------------------------"\n);
     printf("1. Suma"\n);
     printf("2. Resta"\n);
     printf("3. Multiplicacion"\n);
     printf("4. Division"\n);
     printf("5. Potencia\n");
     printf("6. Porcentaje\n");
}

double multiplicacion(float a, float b){
  return a * b;
}

float suma(float a, float b){
	return a+b;
}

float resta ( float a, float b) { 
        return a-b;
}

float potencia(float a, float b){
    
    float resultado=a;
    int i;
    for (i=0;i<b-1;i++)
    {
        resultado=multiplicacion(resultado,a);
        
        }
    
    return resultado;
    
    }

