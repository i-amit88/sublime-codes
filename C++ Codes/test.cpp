#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
// main menu

int main()
{
    FILE *filep;

    int choice, rate, park_no;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    char v_no;

    while (true)
    {
        filep = fopen("parking.txt", "r");
        fclose(filep);

        printf("Press 1 for recipt generation  and 2 for bill generation and 3 to exit:");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\n");
            printf("Recipt Generation*");
            printf("\n");
            printf("Enter vehicle number(DO NOT USE WHITE SPACE) :");
            scanf("%s", &v_no);

            rate = 100;
            int recipt = tm.tm_hour + tm.tm_min + tm.tm_sec + tm.tm_mday + tm.tm_mon + 1 + tm.tm_year + 1900;

            fopen("parking.txt", "a");

            fprintf(filep, " %s %d %d-%02d-%02d %02d:%02d:%02d %d \n", &v_no, rate, tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec, recipt);
            fclose(filep);
            printf("\n");
            printf("================================================");
            printf("\n");
            printf(".                Pacific Parking ");
            printf("\n");
            printf("................................................");
            printf("\n");
            printf(".     Date and time: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
            printf("\n");
            printf("................................................");
            printf("\n");
            printf(".        vehicle number is- %s ", &v_no);
            printf("\n");
            printf(".             Rate per hour-%d", rate);

            printf("\n");
            printf(".              Recipt Number-%d", recipt);
            printf("\n");
            printf(".            Entrance Time-%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
            printf("\n");
            printf("~~~~~~");
            printf("\n");
            printf(".             Thankyou,come again");
            printf("\n");
            printf("~~~~~~");
            printf("\n");

            printf("================================================");
            printf("\n");
        }
        else if (choice == 2)
        {
            printf("\n");
            printf("*bill generation*");
            printf("\n");
            printf("\n");

            fopen("parking.txt", "r");

            int a;
            printf("enter the vehicle no of which bill is to be generated:");
            scanf("%d", &a);

            
            char line[256];
            int i = 0;
            while (fgets(line, sizeof(line), filep))
            {
                i++;
                if (i == a)
                {
                    printf("%s", line);
                }
            }

            fclose(filep);

            
        }
        else
        {
            printf("exiting for the day,thankyou");
            break;
        }
    }
}