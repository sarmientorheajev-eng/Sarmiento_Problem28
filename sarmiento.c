#include <stdio.h>

int main() {
int households, i = 1, consumption;
int totalConsumption = 0, over10 = 0;
float bill, totalBill = 0;

printf("Enter number of households: ");
scanf("%d", &households);

while (households <= 0) {
    printf("Enter a valid number: ");
    scanf("%d", &households);
}

while (i <= households) {
    printf("\nHousehold %d\n", i);
    printf("Enter water consumption (cubic meters): ");
    scanf("%d", &consumption);

    while (consumption < 0) {
        printf("Enter a valid consumption: ");
        scanf("%d", &consumption);
    }

    if (consumption <= 10) {
        bill = consumption * 20;
    } else {
        bill = (10 * 20) + ((consumption - 10) * 25);
        over10++;
    }

    printf("Water Bill: P%.2f\n", bill);

    totalConsumption += consumption;
    totalBill += bill;

    i++;
}

printf("\n--- WATER BILL SUMMARY ---\n");
printf("Total Households: %d\n", households);
printf("Total Water Consumed: %d cubic meters\n", totalConsumption);
printf("Total Billing Amount: P%.2f\n", totalBill);
printf("Households Exceeding 10 Cubic Meters: %d\n", over10);

return 0;
}