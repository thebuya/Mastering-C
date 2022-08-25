#include <stdio.h>

void go_south_east ( int* lat, int* lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() 
{
    int latitude = 32; 
    int longitude = -64;

    go_south_east( &latitude, &longitude);
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

    int contestants[] = {1, 2, 3};
    int *choice = contestants;
    contestants[0] = 2;
    contestants[1] = contestants[2];
    contestants[2] = *choice;

    printf("I'm going to pick contestant number %i\n", contestants[2]);
    
    return 0;
}

{
                  

}
