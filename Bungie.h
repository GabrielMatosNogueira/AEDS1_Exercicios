/*
[BUNGIE LIBRARY]
- Type: Input/Output console
- Name: Bungie
- @author GabrielMatosNogueira [Github]
- @version  Bungie - v1.0-2025-01  (Version 1.0 - 2025/01)

[RESPONSABLE CLEAN CODE, PLEASE CHECKOUT LIBRARY DOCUMENTATION]
*/

// Libraries:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include <time.h>

// EXIBITHION FUNCTIONS

// ED-s identification
void Bidentification (const char *ED)
{
    printf("\n- [%s]\n- Author: Gabriel Matos Nogueira\n- Registration: 870863\n\n", ED);
}

// Display message on screen
void Bprint(const char *phrase)
{
    printf("%s", phrase);
}

// Display message with one integer value
void BprintInt(const char *phrase, int number)
{
    printf("%s[%d]", phrase, number);
}

// Display message with one double value
void BprintDouble(const char *phrase, double number)
{
    printf("%s[%lf]", phrase, number);
}

// Display methods options
//void BmethodsDisplay(cons)

// READ DATA FUNCTIONS

// Read integer value
int Breadint (int number)
{
    int scan=0;
    scanf("%d", &scan);
    getchar();
    return (scan);
}

// Read double value
double Breaddouble (double number)
{
    double scan=0.0;
    scanf("%lf", &scan);
    getchar();
    return (scan);
}

// Read char value

char Breadchar (char character)
{
    char letter=' ';
    scanf("%c", &letter);
    getchar();
    return (letter);
}

// MATH FUNCTIONS
