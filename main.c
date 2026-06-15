#include <stdio.h>

int main()
{
    int voltage;

    int powerCuts = 0;
    int lowVoltage = 0;
    int highVoltage = 0;
    int normalVoltage = 0;

    printf("SMART POWER CUT & VOLTAGE MONITORING SYSTEM\n");

    while (1)
    {
        printf("\nEnter Voltage (-1 to Exit): ");
        scanf("%d", &voltage);

        if (voltage == -1)
            break;

        if (voltage == 0)
        {
            printf("Status: POWER CUT\n");
            powerCuts++;
        }
        else if (voltage < 200)
        {
            printf("Status: LOW VOLTAGE\n");
            lowVoltage++;
        }
        else if (voltage > 250)
        {
            printf("Status: HIGH VOLTAGE\n");
            highVoltage++;
        }
        else
        {
            printf("Status: NORMAL VOLTAGE\n");
            normalVoltage++;
        }
    }

    printf("\n===== SYSTEM REPORT =====\n");
    printf("Power Cuts        : %d\n", powerCuts);
    printf("Low Voltage Events: %d\n", lowVoltage);
    printf("High Voltage Events: %d\n", highVoltage);
    printf("Normal Voltage Events: %d\n", normalVoltage);

    return 0;
}
