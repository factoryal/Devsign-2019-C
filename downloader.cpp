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

    // check if wget installed or not
    int returnCode = system(".\\wget.exe --help > out.txt");

    FILE* f = fopen(".\\out.txt", "r");
    char s[10];
    fscanf(f, "%s", s);

    fclose(f);
    system("del out.txt");

    if(strcmp(s, "GNU")){ // if wget not exists in this working directory,
        cout << "downloader>> wget을 찾을 수 없습니다." << endl;
        cout << "downloader>> 같은 디렉토리에 wget이 있는지 확인해주세요." << endl;
        Sleep(3000);
        cout << "downloader>> 10초 뒤 프로그램이 종료됩니다...\ndownloader>> ";
        for(int i=0; i<11; i++){
            cout << 10 - i << ". ";
            Sleep(1000);
        }
        return 0;
    }

    cout << "downloader>> 업데이트 서버에 접속하는 중입니다..." << endl;
    system("wget.exe https://habitat.factoryal.com/devsign/2019-C/updater.exe");

    cout << endl << "downloader>> 업데이터 실행 중..." << endl;
    system(".\\updater.exe");

    cout << "downloader>> 업데이터 정리 중..." << endl;
    system("del updater.exe");

    cout << "downloader>> 다운로더가 곧 종료됩니다..." << endl;
    Sleep(3000);
    // system("pause");

    return 0;
}