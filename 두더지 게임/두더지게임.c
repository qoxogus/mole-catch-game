#include<stdio.h>
#include<windows.h> 
#include<stdlib.h>  
#include<time.h>    //clock
#include<conio.h>   
#include<MMSystem.h>
#pragma comment(lib,"Winmm.lib")
#define getcoin_sound "C:\\Users\\user\\Downloads\\啪歜囀檣�僱潿\囀檣�僱�4.wav"
#define wrong_sound "C:\\Users\\user\\Downloads\\sound_button_wrong.wav"
#define _CRT_SECURE_NO_WARNINGS


int cnt;
int score = 0;
char name[100];
int a1[3] = { 1,1,1 };
int a2[3] = { 2,2,2 };
int a3[3] = { 3,3,3 };
int a4[3] = { 4,4,4 };
int a5[3] = { 5,5,5 };
int a6[3] = { 6,6,6 };
int a7[3] = { 7,7,7 };
int a8[3] = { 8,8,8 };
int a9[3] = { 9,9,9 };
int i;
int RandomNumber;
int color = 6;
#define COMMAND_SIZE 256
clock_t st; clock_t end;
int Time = 0;
void Score_chart_Print() {
	int max = 0;
	int i = 0, step, temp, j;
	int scores[10];
	char ch;
	system("cls");
	printf("    ≦ ≦ ≦ ≦ ≦ 薄熱ル ≦ ≦ ≦ ≦ ≦\n\n");
	FILE* fp;
	fp = fopen("C:\\FILE input output\\Rankingsystem.txt", "r");

	while (feof(fp) == 0) {
		ch = fgetc(fp);
		if (fp == EOF)break;
		putchar(ch);
	}
	fclose(fp);
}
void Score() {
	
	printf("薄熱ル縑 殮溘й 檜葷擊 殮溘ж撮蹂 : ");
	scanf_s("%s", name);
	FILE* fp;
	fp = fopen("C:\\FILE input output\\Rankingsystem.txt", "a+");
	fprintf(fp, "檜葷 : %s\t\t\t | 薄熱 : %d\n", name, score);
	fclose(fp);
	printf("薄熱 : %d 檜葷 : %s\n\n", score, name);
	printf("薄熱ル縑 殮溘醞");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".");
	Sleep(400);
	printf(".\n\n");
	printf("薄熱ル縑 殮溘 諫猿!!\n");
	Sleep(1000);
	Score_chart_Print();
}

void Command_size() {
	char command[COMMAND_SIZE] = { '\0', };           // 夔樂璽 餌檜鍔 褻薑
	int lines = 50;
	int cols = 80;
	sprintf(command, "mode con: lines=%d cols=%d", lines, cols);
	system(command);
}
void Print_Map() {    //籀擠 舒渦雖 煎堅? 轎溘
	int i;
	for (i = 0;i < 2;i++) {
		system("color 0d");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        ;::::::::;;;~,         弛\n");
		printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
		printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
		printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
		printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
		printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
		printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
		printf("弛    *:::::::::;;;:::::::*~i    弛\n");
		printf("弛    *:::::::!*!;::::::::::!    弛\n");
		printf("弛    *::::!,     ~::::::::!!    弛\n");
		printf("弛    !:::$         ;:::::::!    弛\n");
		printf("弛    !:::           :::::::!    弛\n");
		printf("弛    !:::*         -=::::::!    弛\n");
		printf("弛    !;::::*      -=:;:;;::!    弛\n");
		printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
		printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
		printf("弛                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(300);
		system("cls");
		system("color 0e");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        ;::::::::;;;~,         弛\n");
		printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
		printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
		printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
		printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
		printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
		printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
		printf("弛    *:::::::::;;;:::::::*~i    弛\n");
		printf("弛    *:::::::!*!;::::::::::!    弛\n");
		printf("弛    *::::!,     ~::::::::!!    弛\n");
		printf("弛    !:::$         ;:::::::!    弛\n");
		printf("弛    !:::           :::::::!    弛\n");
		printf("弛    !:::*         -=::::::!    弛\n");
		printf("弛    !;::::*      -=:;:;;::!    弛\n");
		printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
		printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
		printf("弛                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(300);
		system("cls");
		system("color 0c");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        ;::::::::;;;~,         弛\n");
		printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
		printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
		printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
		printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
		printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
		printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
		printf("弛    *:::::::::;;;:::::::*~i    弛\n");
		printf("弛    *:::::::!*!;::::::::::!    弛\n");
		printf("弛    *::::!,     ~::::::::!!    弛\n");
		printf("弛    !:::$         ;:::::::!    弛\n");
		printf("弛    !:::           :::::::!    弛\n");
		printf("弛    !:::*         -=::::::!    弛\n");
		printf("弛    !;::::*      -=:;:;;::!    弛\n");
		printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
		printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
		printf("弛                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(300);
		system("cls");
		system("color 0b");
		PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        ;::::::::;;;~,         弛\n");
		printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
		printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
		printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
		printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
		printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
		printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
		printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
		printf("弛    *:::::::::;;;:::::::*~i    弛\n");
		printf("弛    *:::::::!*!;::::::::::!    弛\n");
		printf("弛    *::::!,     ~::::::::!!    弛\n");
		printf("弛    !:::$         ;:::::::!    弛\n");
		printf("弛    !:::           :::::::!    弛\n");
		printf("弛    !:::*         -=::::::!    弛\n");
		printf("弛    !;::::*      -=:;:;;::!    弛\n");
		printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
		printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
		printf("弛                               弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		Sleep(300);
		system("cls");
	}
	system("color 07");
	PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛        ;::::::::;;;~,         弛\n");
	printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
	printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
	printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
	printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
	printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
	printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
	printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
	printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
	printf("弛    *:::::::::;;;:::::::*~i    弛\n");
	printf("弛    *:::::::!*!;::::::::::!    弛\n");
	printf("弛    *::::!,     ~::::::::!!    弛\n");
	printf("弛    !:::$         ;:::::::!    弛\n");
	printf("弛    !:::           :::::::!    弛\n");
	printf("弛    !:::*         -=::::::!    弛\n");
	printf("弛    !;::::*      -=:;:;;::!    弛\n");
	printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
	printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
	printf("弛                               弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("\n\n");
}


void Print_instruction() {           //啪歜 撲貲憮 轎溘
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛                          ≦啪歜 撲貲憮≦                           弛\n");
	printf("弛                                                                    弛\n");
	printf("弛 忙式式式 [TIMER] 式式式忖   忙式式式式式 [SCORE] 式式式式式忖   忙式式式式式式 [LMT] 式式式式式式忖  弛\n");
	printf("弛  薯и衛除 : 30蟾       撩奢 +1 | 褒ぬ -2      濩晦 薯и 衛除 1蟾   弛\n");
	printf("弛 戌式式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式式式式式式戎  弛\n");
	printf("弛 褻濛酈 = 酈ぬ萄 1 ~ 9 (NUM LOCK)               ≦薯и衛除 蟾婁 -1  弛\n");
	printf("弛 �飛橉� 1 ~ 9梱雖曖 廓�� = 舒渦雖 廓��                              弛\n");
	printf("弛             ≦薄熱陛 -10薄檜ж 橾衛 啪歜螃幗                       弛\n");
	printf("弛             ≦и廓揚楝憮 ぎ溜擊衛 棻艇酈蒂 援腦雖 葆撮蹂           弛\n");
	printf("弛 ≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦ 弛\n");
	printf("弛                                                                    弛\n");
	printf("弛   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("喻塢儀 璋濠");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") 舒渦雖 嫦儅 : 璋濠縑 蜃朝 酈幗が擊 援艇棻.         弛\n");
	printf("弛                                                                    弛\n");
	printf("弛            ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	printf("777                  888                  999");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf("           弛\n");
	printf("弛          7     7              8     8              9     9         弛\n");
	printf("弛         7       7            8       8            9       9        弛\n");
	printf("弛         7 ≠ ≠ 7            8 ≠ ≠ 8            9 ≠ ≠ 9        弛\n");
	printf("弛         7   W   7            8   W   8            9   W   9        弛\n");
	printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
	printf("弛                                                                    弛\n");
	printf("弛   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	printf("蟾煙儀 寡唳");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : 喻塢儀璋濠縑 蜃朝 酈幗が擊 揚毓擊 唳辦 /薄熱+1   弛\n");
	printf("弛                                                                    弛\n");
	printf("弛            ");
	printf("444                  555                  666");
	printf("           弛\n");
	printf("弛          4     4              5     5              6     6         弛\n");
	printf("弛         4       4            5       5            6       6        弛\n");
	printf("弛         4 ≠ ≠ 4            5 ≠ ≠ 5            6 ≠ ≠ 6        弛\n");
	printf("弛         4   W   4            5   W   5            6   W   6        弛\n");
	printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
	printf("弛                                                                    弛\n");
	printf("弛   (");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	printf("說除儀 寡唳");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(") : 喻塢儀縑 蜃雖彊朝 棻艇 璋濠蒂 揚毓擊 唳辦 /薄熱-2弛\n");
	printf("弛                                                                    弛\n");
	printf("弛                                                                    弛\n");
	printf("弛            ");
	printf("111                  222                  333");
	printf("           弛\n");
	printf("弛          1     1              2     2              3     3         弛\n");
	printf("弛         1       1            2       2            3       3        弛\n");
	printf("弛         1 ≠ ≠ 1            2 ≠ ≠ 2            3 ≠ ≠ 3        弛\n");
	printf("弛         1   W   1            2   W   2            3   W   3        弛\n");
	printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
	printf("弛                                                                    弛\n");
	printf("弛                ≦偽擎 廓�ㄟ� 罹楝廓 釭螢 熱 氈蝗棲棻.              弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void Print_Waiting() {   //啪歜衛濛梱雖 3..2..1..
	for (int i = 3; i >= 1; i--) {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                           忙式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("                           弛   啪歜衛濛 梱雖 %d蟾 弛\n", i);
		printf("                           戌式式式式式式式式式式式式式式式式式式式式式戎\n");
		printf("\n");
		printf("                  衛濛ж晦 瞪梱雖 嬴鼠楛 酈紫 援腦雖 葆撮蹂... \n\n");
		printf("                  啪歜縑 菟橫陛賊 酈爾萄蒂 и廓噶虜 揚楝輿撮蹂...\n\n");
		printf("                  援艇啪 ぎ葬湍 蜃湍 и廓虜 揚楝輿撮蹂...\n\n");
		if (_kbhit()) {
			printf("                  衛濛ж晦瞪 酈爾萄陛 揚溥 啪歜擊 部鹿棲棻...\n\n");
			system("pause > nul");
			exit(1);
		}
		Sleep(1000);
		system("cls");
	}

}

void wait(int seconds) {     //Sleep 寰噙堅 顫檜該
	clock_t endwait;         // 1蟾撮晦
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while (clock() < endwait) {
	}
}
int rand123;

print_789() {
	if (rand123 == 7) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);//喻塢儀
		printf("%d%d%d", a7[0], a7[1], a7[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a7[0], a7[1], a7[2]);
	printf("                  ");
	if (rand123 == 8) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a8[0], a8[1], a8[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a8[0], a8[1], a8[2]);
	printf("                  ");
	if (rand123 == 9) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a9[0], a9[1], a9[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a9[0], a9[1], a9[2]);
}
print_456() {
	if (rand123 == 4) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a4[0], a4[1], a4[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else 
		printf("%d%d%d", a4[0], a4[1], a4[2]);
	printf("                  ");
	if (rand123 == 5) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a5[0], a5[1], a5[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a5[0], a5[1], a5[2]);
	printf("                  ");
	if (rand123 == 6) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a6[0], a6[1], a6[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a6[0], a6[1], a6[2]);
}
print_123() {
	if (rand123 == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a1[0], a1[1], a1[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a1[0], a1[1], a1[2]);
	printf("                  ");
	if (rand123 == 2) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a2[0], a2[1], a2[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a2[0], a2[1], a2[2]);
	printf("                  ");
	if (rand123 == 3) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("%d%d%d", a3[0], a3[1], a3[2]);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	}
	else
		printf("%d%d%d", a3[0], a3[1], a3[2]);
}







void Game_start() {
	srand((unsigned)time(NULL));
	for (i = 30;i > 0;i--) {
		
		RandomNumber = rand() % 9 + 1;
		rand123 = RandomNumber;
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛 忙式式式 [TIMER] 式式式忖   忙式式式式式 [SCORE] 式式式式式忖   忙式式式式式式 [LMT] 式式式式式式忖  弛\n");
		printf("弛 ");
		printf("       %02d蟾         ", i);
		printf("         %02d薄           ", score);
		printf("         1蟾          ");
		printf(" 弛\n");
		printf("弛 戌式式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式式式式式式戎   戌式式式式式式式式式式式式式式式式式式式戎  弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛 ≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦≦ 弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛            ");
		print_789();//寡翮 777 888 999 轎溘
		printf("           弛\n");
		printf("弛          7     7              8     8              9     9         弛\n");
		printf("弛         7       7            8       8            9       9        弛\n");
		printf("弛         7 ≠ ≠ 7            8 ≠ ≠ 8            9 ≠ ≠ 9        弛\n");
		printf("弛         7   W   7            8   W   8            9   W   9        弛\n");
		printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛            ");
		print_456();//寡翮 444 555 666 轎溘
		printf("           弛\n");
		printf("弛          4     4              5     5              6     6         弛\n");
		printf("弛         4       4            5       5            6       6        弛\n");
		printf("弛         4 ≠ ≠ 4            5 ≠ ≠ 5            6 ≠ ≠ 6        弛\n");
		printf("弛         4   W   4            5   W   5            6   W   6        弛\n");
		printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("弛            ");
		print_123();//寡翮 111 222 333 轎溘
		printf("           弛\n");
		printf("弛          1     1              2     2              3     3         弛\n");
		printf("弛         1       1            2       2            3       3        弛\n");
		printf("弛         1 ≠ ≠ 1            2 ≠ ≠ 2            3 ≠ ≠ 3        弛\n");
		printf("弛         1   W   1            2   W   2            3   W   3        弛\n");
		printf("弛        @@@@***@@@@          @@@@***@@@@          @@@@***@@@@       弛\n");
		printf("弛                                                                    弛\n");
		printf("弛                                                                    弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");


		wait(1);                     //顫檜該 л熱煎 檜翕
		char choice;
		if (_kbhit())
		{
			choice = getch();
			cnt++;
			if ((int)choice == '1' && RandomNumber == 1) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '2' && RandomNumber == 2) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '3' && RandomNumber == 3) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;
				
			}
			else if ((int)choice == '4' && RandomNumber == 4) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '5' && RandomNumber == 5) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '6' && RandomNumber == 6) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '7' && RandomNumber == 7) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '8' && RandomNumber == 8) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else if ((int)choice == '9' && RandomNumber == 9) {
				score++;
				score++;
				system("color 2f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(getcoin_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 2;

			}
			else {
				score--;
				system("color 4f");
				Sleep(150);
				system("color 07");
				PlaySound(TEXT(wrong_sound), NULL, SND_FILENAME | SND_ASYNC);
				color = 4;

			}
			
		}
		score--;
		color = 6;
		wait(0.5);
		system("cls");
		if (score <= -10) {
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛        ;::::::::;;;~,              弛\n");
			printf("弛      ;~~~~~~~~~~~~;;~~,            弛\n");
			printf("弛     ,;:~~~~~~~~~~;;~~~~,           弛\n");
			printf("弛    ,::~~~~~~~~~~~~~;:~~~,          弛\n");
			printf("弛    :~~~~:~~~~~~~~~::::!!!,         弛\n");
			printf("弛    :~~~~:~~~~~~~~~::::,iii         弛\n");
			printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i         弛\n");
			printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i         弛\n");
			printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i         弛\n");
			printf("弛    *:::::::::;;;:::::::*~i         弛\n");
			printf("弛    *:::::::!*!;::::::::::!         弛\n");
			printf("弛    *::::!,     ~::::::::!!         弛\n");
			printf("弛    !:::$         ;:::::::!         弛\n");
			printf("弛    !:::           :::::::!         弛\n");
			printf("弛    !:::*         -=::::::!         弛\n");
			printf("弛    !;::::*      -=:;:;;::!         弛\n");
			printf("弛    !;::::&~-~--~=;:::::::!         弛\n");
			printf("弛 ~:;!##::::::::::::::;:::;!!##      弛\n");
			printf("弛                                    弛\n");
			printf("弛  @@@@      @     @       @  @@@@@@ 弛\n");
			printf("弛 @    @    @  @   @ @   @ @  @      弛\n");
			printf("弛 @       @      @ @  @ @  @  @      弛\n");
			printf("弛 @   @@  @ @@@@ @ @   @   @  @@@@@@ 弛\n");
			printf("弛 @    @  @      @ @       @  @      弛\n");
			printf("弛  @@@@   @      @ @       @  @@@@@@ 弛\n");
			printf("弛                                    弛\n");
			printf("弛  @@@@   @     @   @@@@@@@   @@@@@@ 弛\n");
			printf("弛 @    @  @     @   @         @     @弛\n");
			printf("弛 @    @   @   @    @         @     @弛\n");
			printf("弛 @    @   @   @    @@@@@@@   @@@@@@ 弛\n");
			printf("弛 @    @    @ @     @         @    @ 弛\n");
			printf("弛  @@@@      @      @@@@@@@   @     @弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			system("pause > nul");
			exit(1);
			
		}
	}
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛        ;::::::::;;;~,         弛\n");
	printf("弛      ;~~~~~~~~~~~~;;~~,       弛\n");
	printf("弛     ,;:~~~~~~~~~~;;~~~~,      弛\n");
	printf("弛    ,::~~~~~~~~~~~~~;:~~~,     弛\n");
	printf("弛    :~~~~:~~~~~~~~~::::!!!,    弛\n");
	printf("弛    :~~~~:~~~~~~~~~::::,iii    弛\n");
	printf("弛    ;~忙式式式式式忖~!!~ 忙式式式式式忖:i    弛\n");
	printf("弛    :~弛  ≠ 戍式式式式式扣 ≠  弛:i    弛\n");
	printf("弛    -:戌式式式式式戎 ~~~~戌式式式式式戎:i    弛\n");
	printf("弛    *:::::::::;;;:::::::*~i    弛\n");
	printf("弛    *:::::::!*!;::::::::::!    弛\n");
	printf("弛    *::::!,     ~::::::::!!    弛\n");
	printf("弛    !:::$         ;:::::::!    弛\n");
	printf("弛    !:::           :::::::!    弛\n");
	printf("弛    !:::*         -=::::::!    弛\n");
	printf("弛    !;::::*      -=:;:;;::!    弛\n");
	printf("弛    !;::::&~-~--~=;:::::::!    弛\n");
	printf("弛 ~:;!##::::::::::::::;:::;!!## 弛\n");
	printf("弛                               弛\n");
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	printf("渡褐曖 薄熱朝 : %d薄 殮棲棻..!!(30薄 虜薄) \n", score);
	if (score == 30)printf("虜薄殮棲棻!!\n");
	printf("\n");
	Score();
	//system("pause > nul");

}


int main() {
	system("title 舒渦雖 濩晦 啪歜");
	srand((unsigned int)time(NULL));

	Command_size(); //夔樂璽 餌檜鍔 滲唳

	Print_Map();   //煎堅 轎溘

	system("pause");//啗樓ж溥賊 嬴鼠酈釭 援腦撮蹂

	system("cls");//夔樂縑氈朝璽 蟾晦��

	Print_instruction(); //撲貲憮 轎溘

	system("pause");
	system("cls");

	Print_Waiting();//啪歜衛濛梱雖 3..2..1.. 轎溘

	Game_start(); //啪歜 �飛� 轎溘       

	//system("pause > nul");

}
//ぎ葬賊 說除儀
//蜃戲賊 蟾煙儀
//薄熱ル
