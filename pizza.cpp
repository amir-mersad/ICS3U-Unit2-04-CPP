// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program calculates the price of a pizza

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates price of the pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "enter the diameter of the pizza that you want (mm): << ";
    std::cin >> diameter;

    // process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "the cost for a " << diameter << "inch of pizza is: $" <<
        std::fixed << std::setprecision(2) << std::setfill('0')<< total
        << "." << std::endl;
        // i dont see any reason for the period but i put it because you did
}
