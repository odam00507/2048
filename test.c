#include <stdio.h>




void printGrid(int a1, int a2, int a3, int a4, int b1, int b2, int b3, int b4, int c1, int c2, int c3, int c4, int d1, int d2, int d3, int d4);

void swipeRightA(int *a1, int *a2, int *a3, int *a4);
void swipeRightB(int *b1, int *b2, int *b3, int *b4);
void swipeRightC(int *c1, int *c2, int *c3, int *c4);
void swipeRightD(int *d1, int *d2, int *d3, int *d4);

void swipeLeftA(int *a1, int *a2, int *a3, int *a4);
void swipeLeftB(int *b1, int *b2, int *b3, int *b4);
void swipeLeftC(int *c1, int *c2, int *c3, int *c4);
void swipeLeftD(int *d1, int *d2, int *d3, int *d4);

void swipeUp1(int *a1, int *a2, int *a3, int *a4);
void swipeUp2(int *b1, int *b2, int *b3, int *b4);
void swipeUp3(int *c1, int *c2, int *c3, int *c4);
void swipeUp4(int *d1, int *d2, int *d3, int *d4);

void swipeDown1(int *a1, int *a2, int *a3, int *a4);
void swipeDown2(int *b1, int *b2, int *b3, int *b4);
void swipeDown3(int *c1, int *c2, int *c3, int *c4);
void swipeDown4(int *d1, int *d2, int *d3, int *d4);



int main()
{

// Our variables to represent eache cell
    int a1 = 0;
    int a2 = 0;
    int a3 = 2;
    int a4 = 2;
    
    int b1 = 2;
    int b2 = 0;
    int b3 = 0;
    int b4 = 0;
    
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 2;
    
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    
    
    
    while (1)
    {
        int key;
        key = getchar();
    
        if (key == 'D/n' || key == 'd')
        {
            swipeRightA(a1, a2, a3, a4);
            swipeRightB(b1, b2, b3, b4);
            swipeRightC(c1, c2, c3, c4);
            swipeRightD(d1, d2, d3, d4);
        }

        else if (key == 'A' || key == 'a')
        {
            swipeLeftA(a1, a2, a3, a4);
            swipeLeftB(b1, b2, b3, b4);
            swipeLeftC(c1, c2, c3, c4);
            swipeLeftD(d1, d2, d3, d4);
        }

        else if (key == 'W' || key == 'w')
        {
            swipeUp1(a1, b1, c1, d1);
            swipeUp2(a2, b2, c2, d2);
            swipeUp2(a3, b3, c3, d3);
            swipeUp2(a4, b4, c4, d4);
        }

        else if (key == 'S' || key == 's')
        {
            swipeDown1(a1, a2, a3, a4);
            swipeDown2(b1, b2, b3, b4);
            swipeDown3(c1, c2, c3, c4);
            swipeDown4(d1, d2, d3, d4);
        }
        else if (key == 'Q' || key == 'q')
        {
            printf("");
            break;
        }
        else
        {
            printf("Something went wrong \n");
        }
        
        printGrid(a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4);
    }
    
    
    
    

    

// Random number generation
    
}









// Functions, all of them are down here
// Function to print the grid
void printGrid(int a1, int a2, int a3, int a4, int b1, int b2, int b3, int b4, int c1, int c2, int c3, int c4, int d1, int d2, int d3, int d4);




// When D is pressed, Numbers swipe right:
void swipeRightA(int *a1, int *a2, int *a3, int *a4) {
    // Shift tiles to the right
    if (*a4 == 0) { *a4 = *a3; *a3 = *a2; *a2 = *a1; *a1 = 0; }
    if (*a3 == 0) { *a3 = *a2; *a2 = *a1; *a1 = 0; }
    if (*a2 == 0) { *a2 = *a1; *a1 = 0; }

    // Merge tiles
    if (*a4 == *a3) { *a4 += *a3; *a3 = *a2; *a2 = *a1; *a1 = 0; }
    if (*a3 == *a2) { *a3 += *a2; *a2 = *a1; *a1 = 0; }
    if (*a2 == *a1) { *a2 += *a1; *a1 = 0; }
    return *a1;
    return *a2;
    return *a3;
    return *a4;
}
void swipeRightB(int *b1, int *b2, int *b3, int *b4) {
    // Shift tiles to the right
    if (*b4 == 0) { *b4 = *b3; *b3 = *b2; *b2 = *b1; *b1 = 0; }
    if (*b3 == 0) { *b3 = *b2; *b2 = *b1; *b1 = 0; }
    if (*b2 == 0) { *b2 = *b1; *b1 = 0; }

    // Merge tiles
    if (*b4 == *b3) { *b4 += *b3; *b3 = *b2; *b2 = *b1; *b1 = 0; }
    if (*b3 == *b2) { *b3 += *b2; *b2 = *b1; *b1 = 0; }
    if (*b2 == *b1) { *b2 += *b1; *b1 = 0; }
    return *b1;
    return *b2;
    return *b3;
    return *b4;
}










// Random number generation
    
// Functions, all of them are down here
// Function to print the grid
void printGrid(int a1, int a2, int a3, int a4, int b1, int b2, int b3, int b4, int c1, int c2, int c3, int c4, int d1, int d2, int d3, int d4) {
    printf("%4d %4d %4d %4d\n", a1, a2, a3, a4);
    printf("%4d %4d %4d %4d\n", b1, b2, b3, b4);
    printf("%4d %4d %4d %4d\n", c1, c2, c3, c4);
    printf("%4d %4d %4d %4d\n", d1, d2, d3, d4);
}






    