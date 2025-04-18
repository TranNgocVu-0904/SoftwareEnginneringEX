#include <stdio.h>

long UlamFunc(long n) {
    // Function to perform calculations based on Ulam's conjecture
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;  // If n is even, divide it by 2
        else
            n = 3 * n + 1;  // If n is odd, multiply by 3 and add 1
    }
    return n; // When n reaches 1, return 1
}

int main() {
    const int MAX = 1000000;  // Maximum limit (can be changed)
    
    //Check out the numbers from 1 to MAX - 1
    for (int i = 1; i < MAX; i++) {
        //Check if this number does not end at 1
        if (UlamFunc(i) != 1) {
            printf("The number %d does not end at 1!\n", i);
            return 1;  // Stop the program if a number does not end at 1
        } 
        else 
        {
            printf("The number %d ends at 1!\n", i);  // Print the number that ends at 1
        }
    }
    printf("All numbers under %d end at 1!\n", MAX);
    return 0;
}

