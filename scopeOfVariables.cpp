// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Oct/3/2023
// This program shows how local and global variables work.

#include <iostream>

// Declaring global variable.
int variableX = 25;

void localVariable() {
    // This shows what happens with local variables.
    int variableX = 10;
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variable: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // This shows what happens with global variables.
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Global variable: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // This function calls local and global.
    localVariable();
    globalVariable();
}
