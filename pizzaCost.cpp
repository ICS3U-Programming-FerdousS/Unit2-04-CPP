// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 1, 2022
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// declare variables
//float length, width, area, perimeter;
 
// declare constants
const float HST = 0.13;
const float LABOUR_COST = 2.00; 
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;
 
 // variables for other costs 
int rental_cost, ingred_cost, diameter; 

// variable for calculating subtotal, tax and total
float subtotal;
float tax;
float total; 

int main(){

// ask for diameter of pizza 
  std::cout << "Enter the diameter of pizza  (inches): ";
  float diameter;
  std::cin >> diameter;

// doing math
  subtotal =  LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
  tax = HST * subtotal;
  total = subtotal + tax ;
  
// display the answer 
  cout << fixed << setprecision(2) << "The total price is $" << total << std::endl;
  
}
