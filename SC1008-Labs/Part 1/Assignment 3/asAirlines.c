#include <stdio.h>
#include <string.h>

#define MAX 5
#define EMPTY 0
#define TAKEN 1

typedef struct {
    char name[20];
    int ID;
    int status;
} Seat;

// Function Prototypes
void listTakenSeat(Seat plane[]);
void assignSeat(Seat plane[]);
void removeSeat(Seat plane[]);

int main() {
    Seat plane[MAX];
    int choice;
    int i;

    // Initialize the plane with unique IDs and EMPTY status
    for (i = 0; i < MAX; i++) {
        plane[i].ID = i + 1;
        plane[i].status = EMPTY;
        strcpy(plane[i].name, "");
    }

    printf("NTU AIRLINES SEATING RESERVATION PROGRAM: \n");
    printf("1: listTakenSeat()\n");
    printf("2: assignSeat()\n");
    printf("3: removeSeat()\n");
    printf("4: quit\n");

    do {
        printf("Enter your choice: \n");
        if (scanf("%d", &choice) != 1) // This line``
            break;

        switch (choice) {
        case 1:
            listTakenSeat(plane);
            break;
        case 2:
            assignSeat(plane);
            break;
        case 3:
            removeSeat(plane);
            break;
        case 4:
            return 0;
        }
    } while (choice != 4);

    return 0;
}

void listTakenSeat(Seat plane[]) {
    int i, count = 0;
    printf("listTakenSeat(): \n");

    for (i = 0; i < MAX; i++) {
        if (plane[i].status == TAKEN) {
            printf("Customer name: %s\n", plane[i].name);
            printf("Seat number (ID): %d\n", plane[i].ID);
            count++;
        }
    }

    if (count == 0) {
        printf("The seat assignment list is empty\n");
    }
}

void assignSeat(Seat plane[]) {
    int seatID, i, full = 1;
    printf("assignSeat(): \n");

    for (i = 0; i < MAX; i++) {
        if (plane[i].status == EMPTY) {
            full = 0;
            break;
        }
    }

    if (full) {
        printf("The plane is full\n");
        return;
    }

    printf("Enter the seat number: \n");
    while (1) {
        scanf("%d", &seatID);

        if (seatID < 1 || seatID > 5) {
            printf("Please enter a seat number between 1 and 5\n");
            continue;
        }

        if (plane[seatID - 1].status == TAKEN) {
            printf("Occupied! Please choose another seat\n");
            continue;
        }

        printf("Enter customer name: \n");
        scanf(" %[^\n]", plane[seatID - 1].name);
        plane[seatID - 1].status = TAKEN;
        printf("The seat has been assigned successfully\n");
        break;
    }
}

void removeSeat(Seat plane[]) {
    int seatID, i, allEmpty = 1;
    printf("removeSeat(): \n");

    for (i = 0; i < MAX; i++) {
        if (plane[i].status == TAKEN) {
            allEmpty = 0;
            break;
        }
    }

    if (allEmpty) {
        printf("All the seats are vacant\n");
        return;
    }

    printf("Enter the seat number: \n");
    while (1) {
        scanf("%d", &seatID);

        if (seatID < 1 || seatID > 5) {
            printf("Please enter a seat number between 1 and 5\n");
            continue;
        }

        if (plane[seatID - 1].status == EMPTY) {
            printf("Empty! Enter another seat number for removal\n");
            continue;
        }

        plane[seatID - 1].status = EMPTY;
        strcpy(plane[seatID - 1].name, "");
        printf("Removal is successful\n");
        break;
    }
}
