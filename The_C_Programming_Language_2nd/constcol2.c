#include <stdio.h>  



enum collectors{collector1=Buya, Elizabeth_Nabagerekka, Morris_Higenyi};  

int main(){

    // Printing the number of collectors.
    for(int i=collector1;i<=Morris_Higenyi;i++){

        printf("\n%d", i);
    }

    return 0;
}
