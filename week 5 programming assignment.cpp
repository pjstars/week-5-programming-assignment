
// week 5 programming assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include < stdlib.h>


//using namespace
using namespace std;

//////////////////////////////////////////////////////////////////////defining the constant 
const int iTotalOneSize = 0, iTotalSmall = 0, iTotalMedium = 0, iTotalLarge = 0;
const int cost_one_size_surfboard = 100.00, cost_small_surfboard = 175.00, cost_medium_surfboard = 190.00, cost_large_surfboard = 200.00;

//Acoomplishes its task and returns control to the caller
//show the user how to use the program
void ShowUsage();

//function to sell the surboard 
void MakePurchase(int& iTotalOneSize, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge);

//function to show the number of surfboard of each size sold 
void DisplayPurchase(const int iTotalOneSize, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);

//function to show the total amount of money made
void DisplayTotal(const int iTotalOneSize, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);

int main()
{
    char choice, size;
    int qty = 0;
    int totalQtyOneSize = 0,
        totalQtySmall = 0,
        totalQtyMedium = 0,
        totalQtyLarge = 0;


    //declare the constants 
    const int headerlen = 60;

    //calling the function 
    ShowUsage();

    //the user's input 
    cout << "\nPlease enter selection: ";
    cin >> choice;

    while (choice != 'Q')
    {
        if (choice == 'S')
        {
            ShowUsage();
            system("clS");
            ShowUsage();
        }
        else if (choice == 'P')
        {
            MakePurchase(totalQtyOneSize, totalQtySmall, totalQtyMedium, totalQtyLarge);
            cout << endl;
        }
        else if (choice == 'C')
        {
            if (totalQtyOneSize == 0 && totalQtySmall == 0 && totalQtyMedium == 0 && totalQtyLarge == 0)
            {
                cout << "No purchase made yet. " << endl;
                cout << endl;
            }
            else
            {
                DisplayPurchase(totalQtyOneSize, totalQtySmall, totalQtyMedium, totalQtyLarge);
            }
        }
        else if (choice == 'T')
        {
            if (totalQtyOneSize == 0 && totalQtySmall == 0 && totalQtyMedium == 0 && totalQtyLarge == 0)
            {
                cout << "No purchase made yet. " << endl;
            }
            else
            {
                DisplayTotal(totalQtyOneSize, totalQtySmall, totalQtyMedium, totalQtyLarge);
            }
        }
        //else if (choice == 'S' or choice == 'P' or choice == 'C' or choice == 'T' or choice == 'Q')
        //    {
        //        cout << "Invalid Choice!" << endl;
         //   }
        cout << "\nPlease enter selection:";
        cin >> choice;

    }
    cout << "Thank You" << endl;

}
//show the user how to use the program
void ShowUsage()
{
    cout << setw(60) << setfill('*') << "*" << endl;
    cout << setw(5) << setfill('*') << "*" << " Welcome to my Johnny Utah's PointBreak Surf Shop " << setw(5) << "*" << endl;
    cout << setw(60) << setfill('*') << "*" << endl;
    cout << endl;
    cout << "To show program usage 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchases press 'C'" << endl;
    cout << "To display total amount due press 'T' " << endl;
    cout << "To quit the program press 'Q'" << endl;
}
//function to sell the surboard 
void MakePurchase(int& iTotalOneSize, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
    int qty = 0;
    char size;

    cout << "Please enter the quanitity and type (X= one size, S=small, M=medium, L=large) of surfboard you would like to purchase: ";
    cin >> qty >> size;
    if (size == 'X')
    {
        iTotalOneSize = iTotalOneSize + qty;
    }
    else if (size == 'S')
    {
        iTotalSmall = iTotalSmall + qty;
    }
    else if (size == 'M')
    {
        iTotalMedium = iTotalMedium + qty;
    }
    else if (size == 'L')
    {
        iTotalLarge = iTotalLarge + qty;
    }
}
//function to show the number of surfboard of each size sold 
void DisplayPurchase(const int iTotalOneSize, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    if (iTotalOneSize > 0)
    {
        cout << "The total number of one size surfboard is " << iTotalOneSize << endl;
    }
    if (iTotalSmall > 0)
    {
        cout << "The total number of small surfboard is " << iTotalSmall << endl;
    }
    if (iTotalMedium > 0)
    {
        cout << "The total number of medium surfboard is " << iTotalMedium << endl;
    }
    if (iTotalLarge > 0)
    {
        cout << "The total number of large surfboard is " << iTotalLarge << endl;
    }
}
//function to show the total amount of money made
void DisplayTotal(const int iTotalOneSize, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    double  surfboard_amt_one_size, surfboard_amt_small, surfboard_amt_medium, surfboard_amt_large, total_amt_due;
    surfboard_amt_one_size = surfboard_amt_small = surfboard_amt_medium = surfboard_amt_large = total_amt_due = 0;

    cout << fixed << setprecision(2);
    if (iTotalOneSize > 0)
    {
        surfboard_amt_one_size = iTotalOneSize * cost_one_size_surfboard;
        cout << "The total number of XS surfboards ";
        cout << "is " << iTotalOneSize;
        cout << " at a total of $";
        cout << surfboard_amt_one_size << endl;

        total_amt_due = total_amt_due + surfboard_amt_one_size;
    }
    if (iTotalSmall > 0)
    {
        surfboard_amt_small = iTotalSmall * cost_small_surfboard;
        cout << "The total number of small surfboards ";
        cout << "is " << iTotalSmall;
        cout << " at a total of $";
        cout << surfboard_amt_small << endl;

        total_amt_due = total_amt_due + surfboard_amt_small;
    }
    if (iTotalMedium > 0)
    {
        surfboard_amt_medium = iTotalMedium * cost_medium_surfboard;
        cout << "The total number of medium surfboards ";
        cout << "is " << iTotalMedium;
        cout << " at a total of $";
        cout << surfboard_amt_medium << endl;

        total_amt_due = total_amt_due + surfboard_amt_medium;
    }
    if (iTotalLarge > 0)
    {
        surfboard_amt_large = iTotalLarge * cost_large_surfboard;
        cout << "The total number of large surfboards ";
        cout << "is " << iTotalLarge;
        cout << " at a total of $";
        cout << surfboard_amt_large << endl;

        total_amt_due = total_amt_due + surfboard_amt_large;
    }
    cout << "Amount due: $" << total_amt_due << endl;
    return;

}
