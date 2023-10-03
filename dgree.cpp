#include <stdio.h>
#include <math.h>

#define EARTH_RADIUS 6371.0 // Earth's radius in kilometers

double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = degreesToRadians(lat1);
    lon1 = degreesToRadians(lon1);
    lat2 = degreesToRadians(lat2);
    lon2 = degreesToRadians(lon2);

    double dlon = lon2 - lon1;

    double distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(dlon)) * EARTH_RADIUS;

    return distance;
}

int main() {
    double lat1, lon1, lat2, lon2;
    
    printf("Enter latitude and longitude of the origin (in degrees):\n");
    scanf("%lf %lf", &lat1, &lon1);
    
    printf("Enter latitude and longitude of the destination (in degrees):\n");
    scanf("%lf %lf", &lat2, &lon2);
    
    double distance = calculateDistance(lat1, lon1, lat2, lon2);
    
    printf("\nLocation Distance\n");
    printf("========================\n");
    printf("Origin:      (%.6lf, %.6lf)\n", lat1, lon1);
    printf("Destination: (%.6lf, %.6lf)\n", lat2, lon2);
    printf("Air distance is %.6lf kms\n", distance);
    
    return 0;
}

