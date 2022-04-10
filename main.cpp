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
#include <iostream>
#include <cassert>

#include "Cat.h"
#include "catDatabase.h"
#include "addCats.h"
#include "reportCats.h"
#include "deleteCats.h"
#include "config.h"

using namespace std;

#define MAX_NAME1    "1234567890123456789012345678901234567890123456789"
#define ILLEGAL_NAME "12345678901234567890123456789012345678901234567890"


int main() {
    cout << "Starting " << PROGRAM_TITLE << endl ;

    Cat testCat =  Cat();
    assert(testCat.getName() != nullptr );
    assert(strcmp(testCat.getName(), "") == 0);
    assert(testCat.getGender() == UNKNOWN_GENDER);
    assert(testCat.getBreed() == UNKNOWN_BREED);
    assert(testCat.isFixed() == false);
    assert(testCat.getWeight() == 0);


    //assert(!testCat.validate());  // Should crash program

    //testCat.setName(nullptr);
    //cout << "This shouldn't print" << endl; // We should never get here

    //testCat.setName("");
    //cout << "This shouldn't print" << endl; // We should never get here

    testCat.setName("a");
    //cout << "This should print" << endl;

    testCat.setName(MAX_NAME1);

    //testCat.setName(ILLEGAL_NAME);
    //cout << "This shouldn't print" << endl; // We should never get here

    testCat.setGender(MALE);
    //testCat.setGender(FEMALE);
    //cout << "This shouldn't print" << endl; // We should never get here


    testCat.setBreed(MANX);
    //testCat.setBreed(PERSIAN);
    //cout << "This shouldn't print" << endl; // We should never get here

    //assert(testCat.isFixed()); //This should fail
    testCat.fixedCat();
    assert(testCat.isFixed());

    //testCat.setWeight(0);
    //cout << "This shouldn't print" << endl; // We should never get here

    testCat.setWeight(1.0/1024);
    assert(testCat.getWeight() == 1.0/1024);

    assert(testCat.validate());
    testCat.print();

    cout << "Done with " << PROGRAM_TITLE << endl ;
 }



