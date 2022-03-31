///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

extern int isValid(const char checkName[],Weight checkWeight);

extern int addCats(const char addName[],enum gender addGender,enum breed addBreed,bool addIsFixed,Weight addWeight,enum Color addcollarColor1, enum Color addcollarColor2, unsigned long long addlicense);
