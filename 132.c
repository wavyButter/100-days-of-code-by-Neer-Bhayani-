#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight light;

    printf("Enter traffic light color (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", (int*)&light);

    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}
