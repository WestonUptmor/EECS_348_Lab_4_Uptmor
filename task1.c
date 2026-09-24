#include <stdio.h>

int main() {
    int score = 0;

    while (score != 1) {
        printf("Enter the NFL Score (Enter 1 to stop): ");

        if (scanf("%d", &score) != 1) {
            printf("Invalid Input, must be an integer, please try again.\n");
            int c;
            while ((c = getchar()) != '\n');
        }
        else if (score < 0) {
            printf("Invalid Input, must be a non-negative number, please try again.\n");
        }
        else if (score != 1) {
            int exists = 0;
            for (int td = 0; td <= score / 6; td++) {
                for (int fg = 0; fg <= score / 3; fg++) {
                    for (int saf = 0; saf <= score / 2; saf++) {
                        for (int td1 = 0; td1 <= score / 7; td1++) {
                            for (int td2 = 0; td2 <= score / 8; td2++) {
                                if (6*td + 3*fg + 2*saf + 7*td1 + 8*td2 == score) {
                                    exists = 1;
                                    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, saf);
                                }
                            }
                        }
                    }
                }
            }
            if (exists == 0) {
                printf("No combinations possible.\n");
            }
        }
    }

    return 0;
}