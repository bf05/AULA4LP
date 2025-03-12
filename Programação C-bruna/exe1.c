#include <stdio.h>

int main() {
   float nota;
   
    printf ("digite uma nota de [0-10]:");
    scanf ("%f"  , &nota);
    
    if (nota>=9) {
        puts("A");
    } else { 
            if(nota >=8) {
              puts ("B");
            } else {
                if (nota>=7) {
                    puts("C");
                } else { 
                    if(nota >=6) {
                        puts ("D");
                    } else {
                        puts("F");
                    } 
                    
                         
                   
                }
            }
    }
    
   return 0;

}