//Define a function swapDistance() for the structure defined in question no.2, to swap the content of two Distance variables. //
#include<stdio.h>
struct distance { 
    int feet;
    float inch;
};
void swapdistance(struct distance *d1, struct distance *d2) {
    struct distance temp;
    temp = *d1;
    *d1 = *d2;
    *d2 = temp;
}
int main() {
    struct distance dist1 = {10, 5.5};
    struct distance dist2 = {20, 8.2};
printf("Before swap:\n");
printf("Dist1: %d %.1f\n", dist1.feet, dist1.inch);
printf("Dist2: %d %.1f\n", dist2.feet, dist2.inch);
swapdistance(&dist1, &dist2);
printf("After swap:\n");
printf("Dist1: %d %.1f\n", dist1.feet,dist1.inch);
printf("Dist2: %d %.1f\n", dist2.feet,dist2.inch);
return 0;

    
}
