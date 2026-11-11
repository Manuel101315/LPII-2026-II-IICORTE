#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void C (int x , int y, int n){
    int i , j;
    for (i=0; i< n; i++){
        for (j=0; j<n; j++){
            if (i== 0 || j==0 || i==n-1){
                gotoxy(x+j , y+i);
                cout<<"*";
            }
        }
    }
}

void M (int x, int y, int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j == 0 || j == n - 1 || (i == j && i <= n / 2) || (j == n - 1 - i && i <= n / 2)){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void A (int x, int y, int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            	if (((j == 0 || j == n - 1) && i > 0) || (i == 0 && j > 0 && j < n - 1) || (i == n / 2)){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void N (int x, int y, int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j == 0 || j == n - 1 || i == j){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void U (int x, int y, int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            	if (((j == 0 || j == n - 1) && i < n - 1) || (i == n - 1 && j > 0 && j < n - 1)){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void E (int x, int y, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == 0 || i == 0 || i == n - 1 || (i == n / 2 && j < n - 1)){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

void L (int x, int y, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (j == 0 || i == n - 1){
                gotoxy(x + j, y + i);
                cout << "*";
            }
        }
    }
}

int main(){

    M(5, 5, 9);
    A(15, 5, 9);
    N(25, 5, 9);
    U(35, 5, 9);
    E(45, 5, 9);
    L(55, 5, 9);
    
    gotoxy(0, 16);
    return 0;
}