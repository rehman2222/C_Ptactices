#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("ERROR: Invalid number of command-line arguments.\n");
        printf("Usage: %s <total_gb> <current_day> <total_used_gb>\n", argv[0]);
        return 1; // Exit with an error code
    }

    double totalGB = atof(argv[1]);
    int currentDay = atoi(argv[2]);
    double totalUsedGB = atof(argv[3]);

    if (totalGB <= 0 || currentDay < 1 || currentDay > 30 || totalUsedGB < 0) {
        printf("ERROR: Invalid values.\n");
        return 1; // Exit with an error code
    }

    int daysRemaining = 30 - currentDay;
    double averageDailyUse = totalUsedGB / currentDay;

    printf("%d days used, %d days remaining\n", currentDay, daysRemaining);
    printf("Average daily use: %.3lf GB/day\n", averageDailyUse);

    if (averageDailyUse > totalGB / 30.0) {
        printf("You are EXCEEDING your average daily use (%.3lf GB/day).\n", totalGB / 30.0);
        printf("Continuing this high usage, you'll exceed your data plan by %.1lf GB.\n", (averageDailyUse - (totalGB / 30.0)) * 30);
    } else if (averageDailyUse == totalGB / 30.0) {
        printf("You are at or below your average daily use (%.3lf GB/day).\n", totalGB / 30.0);
        printf("You can use up to %.3lf GB/day and stay below your data plan limit.\n", (totalGB / 30.0) + 0.001);
    } else {
        printf("You have already met your limit for this month. Looks like you're getting some overage charges...\n");
    }

    return 0; // Exit successfully
}

