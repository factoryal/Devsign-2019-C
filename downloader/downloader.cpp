#include <iostream>
#include <Windows.h>
using namespace std;

int main(void){
    
    //system("echo off");
    system("chcp 65001");
    cout << endl << endl;
    cout << "      ___           ___           ___           ___                       ___           ___      " << endl;
    cout << "     /\\  \\         /\\  \\         /\\__\\         /\\  \\          ___        /\\  \\         /\\__\\     " << endl;
    cout << "    /::\\  \\       /::\\  \\       /:/  /        /::\\  \\        /\\  \\      /::\\  \\       /::|  |    " << endl;
    cout << "   /:/\\:\\  \\     /:/\\:\\  \\     /:/  /        /:/\\ \\  \\       \\:\\  \\    /:/\\:\\  \\     /:|:|  |    " << endl;
    cout << "  /:/  \\:\\__\\   /::\\~\\:\\  \\   /:/__/  ___   _\\:\\~\\ \\  \\      /::\\__\\  /:/  \\:\\  \\   /:/|:|  |__  " << endl;
    cout << " /:/__/ \\:|__| /:/\\:\\ \\:\\__\\  |:|  | /\\__\\ /\\ \\:\\ \\ \\__\\  __/:/\\/__/ /:/__/_\\:\\__\\ /:/ |:| /\\__\\ " << endl;
    cout << " \\:\\  \\ /:/  / \\:\\~\\:\\ \\/__/  |:|  |/:/  / \\:\\ \\:\\ \\/__/ /\\/:/  /    \\:\\  /\\ \\/__/ \\/__|:|/:/  / " << endl;
    cout << "  \\:\\  /:/  /   \\:\\ \\:\\__\\    |:|__/:/  /   \\:\\ \\:\\__\\   \\::/__/      \\:\\ \\:\\__\\       |:/:/  /  " << endl;
    cout << "   \\:\\/:/  /     \\:\\ \\/__/     \\::::/__/     \\:\\/:/  /    \\:\\__\\       \\:\\/:/  /       |::/  /   " << endl;
    cout << "    \\::/__/       \\:\\__\\        ~~~~          \\::/  /      \\/__/        \\::/  /        /:/  /    " << endl;
    cout << "     ~~            \\/__/                       \\/__/                     \\/__/         \\/__/     " << endl;
 
    cout << endl << endl;

    cout << "<<< DEVSIGN 2019 C 과제 다운로더 >>>" << endl << endl;

    cout << "** 업데이트 서버에 접속하는 중입니다..." << endl;
    system("wget https://habitat.factoryal.com/devsign/2019-C/updater.exe");

    cout << endl << "** 업데이터 실행 중..." << endl;
    system(".\\updater.exe");

    cout << "** 업데이터 정리 중..." << endl;
    system("rm updater.exe");

    cout << "다운로더가 곧 종료됩니다..." << endl;
    Sleep(3000);

    return 0;
}