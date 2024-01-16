#include<stdio.h>

int main(){

    float a;
    float surface_area,volume;

    printf("Enter size of any side of a cube : ");
    scanf("%f",&a);

    surface_area = 6 * (a * a);
    volume = a * a * a;

    printf("Surface area of cube is: %.3f",surface_area);
    printf("\nVolume of cube is : %.3f",volume);

    return 0;
}