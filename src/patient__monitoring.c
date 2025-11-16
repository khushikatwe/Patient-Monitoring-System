// Simple demo program for Patient Monitoring System
#include <stdio.h>

int main() {
    int temp = 98;     // dummy value
    int heartbeat = 72;

    printf("Patient Temperature: %d°F\n", temp);
    printf("Heartbeat Rate: %d bpm\n", heartbeat);

    if (temp > 100) {
        printf("ALERT! High temperature detected.\n");
    }

    if (heartbeat < 60 || heartbeat > 120) {
        printf("ALERT! Abnormal heartbeat detected.\n");
    }

    return 0;
}
