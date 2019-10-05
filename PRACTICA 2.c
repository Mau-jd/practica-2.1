/*
Practica 2
Jaime Dominguez Mauricio
*/

#include < stdio.h >
#include < conio.h >
int  main ( nulo ) {
printf ( " 1.-suma \ n " );
printf ( " 2.-resta \ n " );
printf ( " 3.-multiplicacion \ n " );
printf ( " 4.-division \ n " );
printf ( " introduce una opción \ n " );
int opt;
scanf ( " % d " , & opt);
int a;
int b;
printf ( " introduce la primera cantidad \ n " );
scanf ( " % d " , & a);
printf ( " introduce la segunda cantidad \ n " );
scanf ( " % d " , & b);
int c;
do{
switch (opt) {

case 1:
c=a+b;
printf("El resultado es %f",c)
break;

case 2:
c=a-b;
printf("El resultado es %f",c)
break;

case 3:
c=a*b;
printf("El resultado es %f",c)
break;

case 4:
while(b==0){
printf("El segundo sumando debe ser diferente de cero")
printf("Introduce el segundo operando")
scanf("%f",&b)
}
c=a/b;
break;

default:
    printf("opcion invalida");
}
