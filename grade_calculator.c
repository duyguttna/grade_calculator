#include <stdio.h>

float calculate_average(int midterm, int final);
const char* get_letter_grade(float average);

int main() {
    int course_count;

    printf("How many courses do you want to enter grades for? ");
    scanf("%d", &course_count);

    for (int i = 1; i <= course_count; i++) {
        int midterm, final;

        printf("\n--- Course %d ---\n", i);
        printf("Enter midterm grade: ");
        scanf("%d", &midterm);

        printf("Enter final grade: ");
        scanf("%d", &final);

        float average = calculate_average(midterm, final);
        const char* letter = get_letter_grade(average);

        printf("Average: %.2f\n", average);
        printf("Letter Grade: %s\n", letter);
    }

    return 0;
}

float calculate_average(int midterm, int final) {
    return (midterm * 0.5f) + (final * 0.5f);
}

const char* get_letter_grade(float average) {
    if (average >= 85) return "AA";
    else if (average >= 75) return "BA";
    else if (average >= 65) return "BB";
    else if (average >= 55) return "CB";
    else if (average >= 50) return "CC";
    else if (average >= 45) return "DC";
    else if (average >= 35) return "DD";
    else return "FF";
