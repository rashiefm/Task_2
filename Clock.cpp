#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;
    int HH,MM,SS=0;
    bool exit=false;
void MakeClock(int HH,int MN,int SS)

#endif 

void MakeClock(int HH,int MN,int SS){
    while (exit == false){
        system("CLS");
    if (SS >= 60) {
            SS = SS % 60;
            MM++;
            }
    if (MM>9 && SS>9) {
        cout << HH << ":" << MM << ":" << SS;
        }
    if (MM<10 && SS<10) {
        cout << HH << ":0" << MM << ":0" << SS;
        }
    if (MM<10 && SS>9) {
        cout << HH << ":0" << MM << ":" << SS;
        }
    if (MM>9 && SS<10) {
        cout << HH << ":" << MM << ":0" << SS;
        }
    Sleep(1000);
    SS++;

    if (GetAsyncKeyState(VK_ESCAPE)) {
        exit = true;
    }
    }

}
