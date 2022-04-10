///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file catDatabase.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#pragma once
#include <stdbool.h>
#define MAX_CATS 1024
#define MAX_CAT_NAME 50

typedef float Weight;
typedef int NumCats;

enum gender{UNKNOWN_GENDER,MALE,FEMALE};
enum breed{UNKNOWN_BREED, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};
enum Color{BLACK, WHITE, RED, BLUE, GREEN, PINK, UNKNOWN_COLOR};

/*
struct Cat {
    char name[MAX_CAT_NAME];
    bool isFixed;
    Weight weight;
    enum gender catGender;
    enum breed catBreed;
    enum Color collarColor1;
    enum Color collarColor2;
    unsigned long long license;
};

extern struct Cat cat[];

extern NumCats numCats;
*/
//extern void initializeDatabase();
