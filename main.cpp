///////////////////////////////////////////////////////////////////////////////
//          University of Hawaii, College of Engineering
/// @brief  Lab 08d - animal-farm-1-to-clion - EE 205 - Spr 2022
//
// Usage:  animalFarm1
//
// @file main.cpp
// @verision 1.0
//
// @author Oze Farris <ofarris@hawaii.edu>
// @date   08_20_2022
///////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "updateCats.h"
#include "deleteCats.h"
#include "config.h"


int main() {
    initializeDatabase();

    addCats( "Loki", MALE, PERSIAN, true, 8.5, BLACK, WHITE, 101 ) ;
    addCats( "Milo", MALE, MANX, true, 7.0, BLACK, RED, 102 ) ;
    addCats( "Bella", FEMALE, MAINE_COON, true, 18.2, BLACK, BLUE, 103 ) ;
    addCats( "Kali", FEMALE, SHORTHAIR, false, 9.2, BLACK, GREEN, 104 ) ;
    addCats( "Trin", FEMALE, MANX, true, 12.2, BLACK, PINK, 105 ) ;
    addCats( "Chili", UNKNOWN_GENDER, SHORTHAIR, false, 19.0, WHITE, BLACK, 106 ) ;
    addCats( "Trin", FEMALE, MANX, false, 22.0, BLACK, RED, 106 ) ; //this should fail
    addCats( "Gadi", FEMALE, SHORTHAIR, true, -0.2, BLACK, RED, 107 ) ;



    printAllCats();
    printf("\n");

    int kali = findCat( "Kali" ) ;
    printf("kali index is %d\n", kali);
    printf("\n");

    updateCatName( kali, "Chili" ) ; // this should fail
    printCat( kali );
    updateCatName( kali, "Capulet" ) ;
    updateCatWeight( kali, 9.9 ) ;
    fixCat( kali ) ;
    printCat( kali );
    printf("\n");

    printf("Here are all the cats\n");
    printAllCats();
    printf("\n");

    printf("Delete cat at index 2 and print all cats\n");
    deleteCat(2);
    printAllCats();
    printf("\n");

    deleteAllCats();
    printAllCats();
    printf("\n");
}



