#include<stdio.h>
int main (){
 char animal[30];
 char adjective[30];
 char object[30];
 char verb[30];
 //input 
 printf("add animal : ");
 scanf("%s" ,&animal);
 printf("add adjective : ");
 scanf("%s" ,&adjective);
 printf("add object : ");
 scanf("%s" ,&object);
 printf("add verb : ");
 scanf("%s" ,&verb);
 // output
 printf("\n");
 printf("My pet %s is very %s. ", animal, adjective);
 printf("Yesterday, it ate my %s and started %s!\n", object, verb);

    return 0;
}