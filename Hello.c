#include <stdio.h>
#include <time.h>

int main() {
    // Name used in your PHP and Rust files
    char name[] = "Krishna Prasad";
    
    // Variables to handle time
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[10];

    // Get current system time
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Format time as HH:MM:SS
    strftime(buffer, 10, "%H:%M:%S", timeinfo);

    // Print the message
    printf("Hello %s, right now the time is %s\n", name, buffer);

    return 0;
}
