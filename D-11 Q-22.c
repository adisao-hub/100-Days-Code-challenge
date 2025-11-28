#include <stdio.h>

int main() {
    float CP, SP, amount;
    
    printf("Enter Cost Price: ");
    scanf("%f", &CP);
    
    printf("Enter Selling Price: ");
    scanf("%f", &SP);
    
    if (SP > CP) {
        amount = SP - CP;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", (amount / CP) * 100);
    }
    else if (CP > SP) {
        amount = CP - SP;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", (amount / CP) * 100);
    }
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}
