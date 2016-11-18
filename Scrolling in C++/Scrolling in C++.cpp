// Scrolling in C++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{

   string Menu[3] = { "Start Game\n", "Options\n", "Exit\n" };
   int pointer = 0;

   while (true)
   {
      system("cls");

      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //set the color to 15 white
      cout << "Main Menu\n\n";

      for (int i = 0; i < 3; i++)
      {
         if (i == pointer)
         {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // set the color to green
            cout << Menu[i] << endl;
         }
         else
         {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //set the color to 15 white
            cout << Menu[i] << endl;
         }
      }
      while (true)
      {
         if (GetAsyncKeyState(VK_UP) != 0)
         {
            pointer -= 1;
            if (pointer == -1)
            {
               pointer = 2;
            }
            break;
         }
         else if (GetAsyncKeyState(VK_DOWN) != 0)
         {
            pointer += 1;
            if (pointer == 3)
            {
               pointer = 0;
            }
            break;
         }
         else if (GetAsyncKeyState(VK_RETURN) != 0)
         {
            switch (pointer) 
            { 
            case 0:
               {
                  cout << "\n\n\nStarting New Game!";
                  Sleep(1000);
               }
               break;
            case 1:
               {
               cout << "\n\n\nThe option menu!!";
               Sleep(1000);
               }
               break;
            case 2:
               {
               return 0;
            }break;
            }
         }break;
      }
      Sleep(150);
   }

   system("pause");
    return 0;
}

