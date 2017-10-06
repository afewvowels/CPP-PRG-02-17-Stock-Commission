//
//  main.cpp
//  PRG-2-17-Stock-Commission
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her
//  stockbroker a 2 percent commission for the transaction. Write a program that calculates
//  and displays the following:
//  *The amount paid for the stock alone (without the commission)
//  *The amount for the commission
//  *The total amount paid (for the stock plus the commission)

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Declare constants
    const float FLT_STOCK_PRICE = 35.0f;
    const float FLT_COMMISSION_PERCENT = 0.02f;
    
    const int INT_STOCK_PURCHASED_AMOUNT = 750;
    
    // Declare variables
    float fltStockCost;
    float fltStockCommission;
    float fltStockTotal;
    
    // Calculate values
    fltStockCost = INT_STOCK_PURCHASED_AMOUNT * FLT_STOCK_PRICE;
    fltStockCommission = fltStockCost * FLT_COMMISSION_PERCENT;
    fltStockTotal = fltStockCost + fltStockCommission;
    
    // Configure decimal precision for dollar amount
    cout << setprecision(2) << fixed << showpoint;
    
    // Output calculated amounts to console
    cout << setw(25) << "Stock purchase cost: $" << fltStockCost << endl;
    cout << setw(25) << "Stock commission cost: $" << fltStockCommission << endl;
    cout << setw(25) << "Stock total cost: $" << fltStockTotal << endl;
    
    return 0;
}
