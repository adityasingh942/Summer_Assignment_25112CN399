#include <stdio.h>

int main() {
    int seats = 50, book;

    printf("Available Seats: %d\n", seats);
    printf("Enter seats to book: ");
    scanf("%d", &book);

    if(book <= seats) {
        seats -= book;
        printf("Booking Successful\n");
    } else {
        printf("Seats Not Available\n");
    }

    printf("Remaining Seats: %d", seats);

    return 0;
}