
#include <stdio.h> 
#include <stdlib.h>

int main() {
int j=4;
int i=1; 
 while(j>=0){
     while (i<=j) {
        printf("%d", i);
        i=i+1;
    }
    j=j-1;
}
}
