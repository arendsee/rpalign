#ifndef __BLOSUM90_HPP__
#define __BLOSUM90_HPP__

#include <vector>
#include <iostream>
#include <pybind11/pybind11.h>
namespace py = pybind11;

// This file defines
//  - the BLOSUM90 substitution matrix
//  - functions for transforming sequences so they are compatible with the matrix
//  - functions for looking up character values in the matrix (substitution_score and isGap)
//
// The matrix contains 26 columns and 26 rows. These correspond to the letters
// of the alphabet. 'Z' stores gaps. The letters that are not used are for
// amino acids, unknowns ('X') or gaps are filled with 0's.

std::vector<int> BLOSUM90_0  { 5,  0,  -1,  -3,  -1,  -3,   0,  -2,  -2,  0,  -1,  -2,  -2,  -2,  0,  -1,  -1,  -2,   1,   0,  0,  -1,  -4,  -1,  -3,  -1};
std::vector<int> BLOSUM90_1  { 0,  0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0};
std::vector<int> BLOSUM90_2  {-1,  0,   9,  -5,  -6,  -3,  -4,  -5,  -2,  0,  -4,  -2,  -2,  -4,  0,  -4,  -4,  -5,  -2,  -2,  0,  -2,  -4,  -1,  -4,  -1};
std::vector<int> BLOSUM90_3  {-3,  0,  -5,   7,   1,  -5,  -2,  -2,  -5,  0,  -1,  -5,  -4,   1,  0,  -3,  -1,  -3,  -1,  -2,  0,  -5,  -6,  -1,  -4,  -1};
std::vector<int> BLOSUM90_4  {-1,  0,  -6,   1,   6,  -5,  -3,  -1,  -4,  0,   0,  -4,  -3,  -1,  0,  -2,   2,  -1,  -1,  -1,  0,  -3,  -5,  -1,  -4,  -1};
std::vector<int> BLOSUM90_5  {-3,  0,  -3,  -5,  -5,   7,  -5,  -2,  -1,  0,  -4,   0,  -1,  -4,  0,  -4,  -4,  -4,  -3,  -3,  0,  -2,   0,  -1,   3,  -1};
std::vector<int> BLOSUM90_6  { 0,  0,  -4,  -2,  -3,  -5,   6,  -3,  -5,  0,  -2,  -5,  -4,  -1,  0,  -3,  -3,  -3,  -1,  -3,  0,  -5,  -4,  -1,  -5,  -1};
std::vector<int> BLOSUM90_7  {-2,  0,  -5,  -2,  -1,  -2,  -3,   8,  -4,  0,  -1,  -4,  -3,   0,  0,  -3,   1,   0,  -2,  -2,  0,  -4,  -3,  -1,   1,  -1};
std::vector<int> BLOSUM90_8  {-2,  0,  -2,  -5,  -4,  -1,  -5,  -4,   5,  0,  -4,   1,   1,  -4,  0,  -4,  -4,  -4,  -3,  -1,  0,   3,  -4,  -1,  -2,  -1};
std::vector<int> BLOSUM90_9  { 0,  0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0};
std::vector<int> BLOSUM90_10 {-1,  0,  -4,  -1,   0,  -4,  -2,  -1,  -4,  0,   6,  -3,  -2,   0,  0,  -2,   1,   2,  -1,  -1,  0,  -3,  -5,  -1,  -3,  -1};
std::vector<int> BLOSUM90_11 {-2,  0,  -2,  -5,  -4,   0,  -5,  -4,   1,  0,  -3,   5,   2,  -4,  0,  -4,  -3,  -3,  -3,  -2,  0,   0,  -3,  -1,  -2,  -1};
std::vector<int> BLOSUM90_12 {-2,  0,  -2,  -4,  -3,  -1,  -4,  -3,   1,  0,  -2,   2,   7,  -3,  0,  -3,   0,  -2,  -2,  -1,  0,   0,  -2,  -1,  -2,  -1};
std::vector<int> BLOSUM90_13 {-2,  0,  -4,   1,  -1,  -4,  -1,   0,  -4,  0,   0,  -4,  -3,   7,  0,  -3,   0,  -1,   0,   0,  0,  -4,  -5,  -1,  -3,  -1};
std::vector<int> BLOSUM90_14 { 0,  0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0};
std::vector<int> BLOSUM90_15 {-1,  0,  -4,  -3,  -2,  -4,  -3,  -3,  -4,  0,  -2,  -4,  -3,  -3,  0,   8,  -2,  -3,  -2,  -2,  0,  -3,  -5,  -1,  -4,  -1};
std::vector<int> BLOSUM90_16 {-1,  0,  -4,  -1,   2,  -4,  -3,   1,  -4,  0,   1,  -3,  0,    0,  0,  -2,   7,   1,  -1,  -1,  0,  -3,  -3,  -1,  -3,  -1};
std::vector<int> BLOSUM90_17 {-2,  0,  -5,  -3,  -1,  -4,  -3,   0,  -4,  0,   2,  -3,  -2,  -1,  0,  -3,   1,   6,  -1,  -2,  0,  -3,  -4,  -1,  -3,  -1};
std::vector<int> BLOSUM90_18 { 1,  0,  -2,  -1,  -1,  -3,  -1,  -2,  -3,  0,  -1,  -3,  -2,   0,  0,  -2,  -1,  -1,   5,   1,  0,  -2,  -4,  -1,  -3,  -1};
std::vector<int> BLOSUM90_19 { 0,  0,  -2,  -2,  -1,  -3,  -3,  -2,  -1,  0,  -1,  -2,  -1,   0,  0,  -2,  -1,  -2,   1,   6,  0,  -1,  -4,  -1,  -2,  -1};
std::vector<int> BLOSUM90_20 { 0,  0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0};
std::vector<int> BLOSUM90_21 {-1,  0,  -2,  -5,  -3,  -2,  -5,  -4,   3,  0,  -3,   0,   0,  -4,  0,  -3,  -3,  -3,  -2,  -1,  0,   5,  -3,  -1,  -3,  -1};
std::vector<int> BLOSUM90_22 {-4,  0,  -4,  -6,  -5,   0,  -4,  -3,  -4,  0,  -5,  -3,  -2,  -5,  0,  -5,  -3,  -4,  -4,  -4,  0,  -3,  11,  -1,   2,  -1};
std::vector<int> BLOSUM90_23 {-1,  0,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  0,  -1,  -1,  -1,  -1,  0,  -1,  -1,  -1,  -1,  -1,  0,  -1,  -1,  -1,  -1,  -1};
std::vector<int> BLOSUM90_24 {-3,  0,  -4,  -4,  -4,   3,  -5  , 1,  -2,  0,  -3,  -2,  -2,  -3,  0,  -4,  -3,  -3,  -3,  -2,  0,  -3,   2,  -1,   8,  -1};
std::vector<int> BLOSUM90_25 { 0,  0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0};

std::vector<std::vector<int>> BLOSUM90 {
    BLOSUM90_0, BLOSUM90_1, BLOSUM90_2, BLOSUM90_3, BLOSUM90_4, BLOSUM90_5,
    BLOSUM90_6, BLOSUM90_7, BLOSUM90_8, BLOSUM90_9, BLOSUM90_10, BLOSUM90_11,
    BLOSUM90_12, BLOSUM90_13, BLOSUM90_14, BLOSUM90_15, BLOSUM90_16,
    BLOSUM90_17, BLOSUM90_18, BLOSUM90_19, BLOSUM90_20, BLOSUM90_21,
    BLOSUM90_22, BLOSUM90_23, BLOSUM90_24, BLOSUM90_25
};



// Characters in the sequences are upper case letters from A-Z. The ASCII value
// for A is 65, so we can get indices into the substitution matrix by
// subtracting 65.
int substitution_score(char a, char b){
    return BLOSUM90[a - 65][b - 65];
}



// Determine if the a character is a gap. Conventionally, a gap is represented
// by '-', but to indexed lookup, cleanSeq replaces it with the character 'Z'.
// This is an implementation detail that algorithms above should not be exposed
// to, so they should instead use this function.
bool isGap(char a){
    return (a == 'Z');
}



// This is pass-by-value and it returns a new string. I do not change in place
// because the "cleaning" done here (such as replacing '-' with 'Z') should not
// be propagated to downstream printing functions.
std::string cleanSeq(std::string x, bool is_query){
    for(size_t i = 0; i < x.size(); i++){
        char c = x[i];
        if (c == '-' || c == '_')
            c = 'Z'; // map gaps to 'Z' so that lookup is possible by index
        else if  (c >= 97 && c <= 122){
            c -= 32;
        }

        // Some of these characters represent ambiguous amino acids, but such
        // use is rair enough that I am happy to raise an error. Alternatively,
        // I could replace them with X's.
        if (c == 'B' || c == 'J' || c == 'O' || c == 'U' || ! (c >= 65 && c <= 90)){
            throw pybind11::value_error("Illegal character");
        }

        if (is_query && c == 'Z') {
            throw pybind11::value_error("Illegal character: the query sequence must not have gaps");
        }

        x[i] = c;
    }

    return x;
}

#endif
