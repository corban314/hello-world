/* Hello World program in C
 * Written by Nathanael Kazmierczai, October 2017
 */

 #include <stdio.h>

int main(int argc, char** argv) {
    printf("\nHello World!\n");
    if (argc) {
        printf("\nYou have entered %d arguments.\n",argc-1);
    }
}
