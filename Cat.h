///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_10d_animal_farm_2 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   10_April_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once
#include "config.h"

#define MAX_CAT_NAME 50
#define MAX_CATS 1024

class Cat {
protected:
    char name[MAX_CAT_NAME];
    enum breed catBreed;
    enum gender catGender;
    bool isCatFixed;
    Weight weight;

public:
    Cat* next;

private:
    void toNull();

public:
    Cat();
    Cat(const char *newName, const gender newGender, const breed newBreed, const Weight newWeight );
    ~Cat();

public:
    const char *getName();
    void setName(const char* newName);
    gender getGender();
    breed getBreed();
    bool isFixed();
    void fixedCat();
    Weight getWeight();
    void setWeight(Weight newWeight);

public:
    bool print();
    bool validate();
    void setGender(gender newGender);
    void setBreed(breed newBreed);
    bool validateGender(const gender newGender);
    bool validateBreed(const breed newBreed);
    bool validateWeight(const Weight newWeight);
    bool validateName(const char* newName);
};



