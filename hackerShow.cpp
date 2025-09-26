#include <iostream>
#include<string>
#include <windows.h> 
#include <cstdlib>   
#include <ctime>   
using namespace std;

void hackerShow() {
	string colors[] = { "0A","0C","0E","1E","2C","3A","4E","5F","6C","9E","D1","C9","E5","F4" };
	string msgs[] = {
		"[ACCESS GRANTED]",
		"[ACCESS DENIED]",
		"[WARNING: SYSTEM BREACH]",
		"[ENCRYPTING FILES...]",
		"[HACKING FIREWALL...]",
		"[DATA EXFILTRATION STARTED]",
		"[MALWARE DEPLOYED]",
		"[YOU ARE BEING WATCHED...]",
		"[ERROR: SECURITY FAILURE]",
		"[OVERRIDE COMPLETE]"
	};

	srand(time(0));

	for (int i = 0; i < 20; i++) {
		int colorIndex = rand() % (sizeof(colors) / sizeof(colors[0]));
		string cmd = "color " + colors[colorIndex];
		system(cmd.c_str());

		int msgIndex = rand() % (sizeof(msgs) / sizeof(msgs[0]));
		cout << msgs[msgIndex] << endl;

		Sleep(150);
	}
}
void x() {
	string colors[] = {
		"0A","0C","0E","1E","2C","3A","4E","5F","6C","9E","D1","C9","E5","F4"
	};

	srand(time(0));

	for (int i = 0; i < 20; i++) {
		int idx = rand() % (sizeof(colors) / sizeof(colors[0]));
		string cmd = "color " + colors[idx];
		system(cmd.c_str());
		Sleep(0.000000000000000000000000000000000000001);
	}
}
void scarySkull() {
	string skull[] = {
		"      █████     ",
		"   ███     ███  ",
		"  ██  ██ ██  ██ ",
		"  ██   ███   ██ ",
		"   ██       ██  ",
		"    ███   ███   ",
		"      █████     ",
		"       ██       ",
		"       ██       "
	};

	string colors[] = { "0C", "0A", "0E", "0D" };
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		int colorIndex = rand() % 4;
		string cmd = "color " + colors[colorIndex];
		system(cmd.c_str());

		system("cls");
		for (string line : skull) {
			cout << line << endl;
		}
		Sleep(200);
	}
}
void matrixRain() {
	srand(time(0));
	system("color 0A");

	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 80; j++) {
			char c = 33 + rand() % 94;
			cout << c;
		}
		cout << endl;
		Sleep(50);
	}
}
void countdownScare() {
	system("color 0C");
	for (int i = 10; i >= 0; i--) {
		system("cls");
		cout << "[SYSTEM WILL CRASH IN... " << i << "]" << endl;
		Sleep(700);
	}
	system("cls");
	cout << "[BOOM 💥]" << endl;
}
void bigFuckYou() {
	string art[] = {
		"FFFFFFFF   UUU   UUU   CCCCCCC  KKK   KKK      YYY   YYY  OOOOOOO  UUU   UUU   !!!",
		"FFF        UUU   UUU  CCC       KKK  KKK        YYY YYY  OOO   OOO UUU   UUU   !!!",
		"FFFFFFF    UUU   UUU  CCC       KKKKKK            YYY    OOO   OOO UUU   UUU   !!!",
		"FFF        UUU   UUU  CCC       KKK  KKK          YYY    OOO   OOO UUU   UUU      ",
		"FFF         UUUUUUU    CCCCCCC  KKK   KKK         YYY     OOOOOOO   UUUUUUU   !!!"
	};

	string colors[] = { "0C", "0A", "0E", "0D", "0B", "0F" };
	srand(time(0));

	for (int k = 0; k < 20; k++) { // يكرر 20 مرة عشان يملأ الشاشة
		int colorIndex = rand() % 6;
		string cmd = "color " + colors[colorIndex];
		system(cmd.c_str());

		for (int i = 0; i < 10; i++) { // يكرر نفس النص أكتر من مرة عالشاشة
			for (string line : art) {
				cout << line << endl;
			}
			cout << endl;
		}
		Sleep(200);
		system("cls");
	}
}

void magic() {
	hackerShow();
	x();
	scarySkull();
	matrixRain();
	countdownScare();
	scarySkull();
	matrixRain();
	bigFuckYou();
}

int main()
{
	string fake;
	system("color f1");
	cout << "say my name !!" << endl;
	cin >> fake;
	cout << endl << endl << "*****************" << endl;
	magic();

}