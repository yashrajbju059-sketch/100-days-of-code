//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    
    if (sp > cp) {
        float profit = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", profit);
    } else if (cp > sp) {
        float loss = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", loss);
    } else {
        printf("No Profit No Loss");
    }
    
    return 0;
}
