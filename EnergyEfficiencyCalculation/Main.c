#include <stdio.h>
#include <math.h>

#define PI 3.141592

float Energy(float hour) // Calcule energy
{
    return sin(hour / 24 * PI);
}

float Points(float height) // Calcule points
{
    return 10 * height * height;
}

float Rebounds(float height, float weight) // Calcule rebounds
{
    return 5 * height + sqrt(weight);
}

float Efficiency(float vHour, float vHeight, float vWeight) // Calcule Efficiency using created functions
{
    float energy = Energy(vHour);
    float points = Points(vHeight);
    float rebounds = Rebounds(vHeight, vWeight);
    return energy * (points + rebounds);
}

int main() // Main function
{
    float efficiency = Efficiency(12, 2, 100);
    printf("\nThe efficiency is: %.2f", efficiency);
    printf("\n ");
    return 0;
}
