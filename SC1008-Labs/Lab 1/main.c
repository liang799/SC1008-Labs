//
//  main.c
//  SC1008-Labs
//
//  Created by Neoh Tian Pok on 23/1/26.
//

#include <stdlib.h>
#include <stdio.h>

char determineGrade(int mark);
int studentId;
int studentMark;

int main() {

    while(1) {
        printf("Enter Student ID:\n");
        scanf("%d", &studentId);

        if (studentId == -1) {
            return 0;
        }

        printf("Enter Mark:\n");
        scanf("%d", &studentMark);

        printf("Grade = %c\n", determineGrade(studentMark));
    }

    return 0;
}

char determineGrade(int mark) {
    if (mark >= 75) {
        return 'A';
    } else if (mark >= 65) {
        return 'B';
    } else if (mark >= 55) {
        return 'C';
    } else if (mark >= 45) {
        return 'D';
    } else {
        return 'F';
    }
}
