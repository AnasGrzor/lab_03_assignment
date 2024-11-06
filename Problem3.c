
#include <stdio.h>

int main() {
    float dollars, pounds, euros;
    
    printf("Enter amount in dollars: $");
    scanf("%f", &dollars);
    
    // Convert dollars to pounds (1 dollar = 0.74 pound)
    pounds = dollars * 0.74;
    
    // Convert dollars to euros (1 dollar = 0.86 euro)
    euros = dollars * 0.86;
    
    printf("\nEquivalent amounts:\n");
    printf("Pounds: £%.2f\n", pounds);
    printf("Euros: €%.2f\n", euros);
    
    return 0;
}
