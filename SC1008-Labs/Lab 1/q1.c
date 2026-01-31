//
//  main.c
//  SC1008-Labs
//
//  Created by Neoh Tian Pok on 23/1/26.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    int studentId;
    int studentMark;

    while (1) {
        printf("Enter Student ID:\n");
        scanf("%d", &studentId);

        if (studentId == -1) {
            return 0;
        }

        printf("Enter Mark:\n");
        scanf("%d", &studentMark);

        if (studentMark >= 75) {
            grade = 'A';
        } else if (studentMark >= 65) {
            grade = 'B';
        } else if (studentMark >= 55) {
            grade = 'C';
        } else if (studentMark >= 45) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        printf("Grade = %c\n", grade);
    }
    return 0;
}
