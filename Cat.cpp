///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   09_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"
#include "catDatabase.h"
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>

#define FORMAT_LINE( className, member ) cout << setw(8) << (className) << setw(20) << (member) << setw(52)
/// @returns true if everything worked correctly. false if something goes
/// wrong

using namespace std;

int fail = 0;

void Cat::initializeDatabase() {
    memset( name, 0, MAX_CAT_NAME );
    isCatFixed = false;
    weight = 0;
    catGender = UNKNOWN_GENDER;
    catBreed = UNKNOWN_BREED;
    next = nullptr;
}

Cat::Cat() {
    initializeDatabase();
}

Cat::Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight ) {
    setName(newName);
    setGender(newGender);
    setBreed(newBreed);
    setWeight(newWeight);
    assert( validate() ) ;
}

Cat::~Cat() {
    initializeDatabase();
}

//Getters
const char *Cat::getName() {
    return name;
}

gender Cat::getGender() {
    return catGender;
}

breed Cat::getBreed() {
    return catBreed;
}

bool Cat::isFixed() {
    return isCatFixed;
}

Weight Cat::getWeight() {
    return weight;
}


bool Cat::print() {
    assert( validate() ) ;

    cout << setw(80) << setfill('=') << "" << endl;
    cout << setfill(' ');
    cout << left;
    cout << boolalpha;
    FORMAT_LINE("Cat", "name") << getName() << endl;
    FORMAT_LINE("Cat", "gender") << genderToString(getGender()) << endl;
    FORMAT_LINE("Cat", "breed") << breedToString(getBreed()) << endl;
    FORMAT_LINE("Cat", "isFixed") << isFixed() << endl;
    FORMAT_LINE("Cat", "weight") << getWeight() << endl;
    return true;
}


//VALIDATIONS

bool Cat::validateName(const char *newName){
    if(newName == nullptr) {
        cout << "Error: Name must be initialized " << endl ;
        fail = 1;
        return 1;
    }
    if(strlen(newName) == 0) {
        cout << "Error: Name cannot be an empty string" << endl ;
        fail = 1;
        return 1;
    }
    if(strlen(newName) >= MAX_CAT_NAME){
        cout << "Error: Name cannot be greater than " << MAX_CAT_NAME << endl ;
        fail = 1;
        return 1;
    }
    return true;
}

bool Cat::validateGender(const gender newGender) {
    if(newGender == UNKNOWN_GENDER) {
        cout << "Error: Gender must be initialized " << endl ;
        fail = 1;
        return 1;
    }
    return true;
}

bool Cat::validateBreed(const breed newBreed){
    if(newBreed == UNKNOWN_BREED) {
        cout << "Error: Breed must be initialized" << endl ;
        fail = 1;
        return 1;
    }
    return true;
}

bool Cat::validateWeight(const Weight newWeight) {
    if(newWeight <= 0) {
        cout << "Error: Weight cannot be equal to or less than zero" << endl ;
        fail = 1;
        return 1;
    }
    return true;
}

bool Cat::validate() {
    validateWeight(weight);
    validateBreed(catBreed);
    validateGender(catGender);
    validateName(name);
    if(fail = 1) {
        cout << "Error: Cat is not valid" << endl;
        return 1;
    }
    return true;
}

//Setters

void Cat::setName(const char *newName) {
    validateName(newName);
    memset(name,0,MAX_CAT_NAME);
    strcpy(name,newName);
}

void Cat::fixedCat() {
    Cat::isCatFixed = true;
}

void Cat::setWeight(Weight newWeight) {
    validateWeight(newWeight);
    Cat::weight = newWeight;
}

void Cat::setGender(gender newGender) {
    if (catGender != UNKNOWN_GENDER) {
        cout << "Error: Cannot change gender once already set" << endl;
    }
    else {
        validateGender(newGender);
        Cat::catGender = newGender;
    }
}

void Cat::setBreed(breed newBreed) {
    if(catBreed != UNKNOWN_BREED) {
        cout << "Error: Cannot change breed once already set" << endl;
    }
    else {
        validateBreed(newBreed);
        Cat::catBreed = newBreed;
    }
}




