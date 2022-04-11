#ifndef CG_H
#define CG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isGrowingNumber(const int n);
void displayCamelCase(char* arr);
int sumFrom2toN(const int N);
char* alternateReading(char *arr);
char* inverseWordReading(char *arr);
void offsetReading(int offset, char *arr);
void decomposeWord();
#endif