#include <stdio.h>
int main() {
    float length, height, area;

    printf("ENTER LENGTH: ");
    scanf("%f", &length);

    printf("ENTER HEIGHT: ");
    scanf("%f", &height);

    area = length * height;

    printf("AREA OF RECTANGLE IS %.2f\n", area);

    return 0;

    

}