myHead.h :

#include <stdio.h>
void hoSayHello(int i);


myHead.c :

#include "myHead.h"
void hoSayHello(int i){
  int j;
  for(j=0;j<i;j++){
    printf("Hello\n");
  }
}


sayHello.c :

