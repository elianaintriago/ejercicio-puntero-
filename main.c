 #include <stdio.h>

int main() {

int num=150, a;
int *x; //puntero
x = &num; //almacena la direccion de num
a= *x;

printf("%d %p",num,x);//imprime, %p te da la direccion de la variable, %d te da el valor de la variable num

float pi=3.1415, d;
float *ptrF; //definicion de puntero 
ptrF=&pi; // puntero almacena la direccion de pi

printf("%f %p", pi, ptrF); //imprime

char letra= 'a', c;
char *ptrC; //definicion del puntero 
printf("%c %c %p",letra,c,ptrC);

    return 0;
}  
    