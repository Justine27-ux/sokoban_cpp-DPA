#include <ncurses.h>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

const int TINGGI_PETA = 14;
const int LEBAR_PETA = 30;
const int MAKS_LEVEL = 99;
const char SIMBOL_PEMAIN = '@';

// Definisi variabel global - justine
char petaSekarang[TINGGI_PETA][LEBAR_PETA + 1];
string namaLevel;
string pesanError;
int pemainX, pemainY;
int jumlahKotak = 0;
int levelAktif = 0;
int totalLevel = 0;
int langkahLevel = 0;
int totalLangkah = 0;




























//
























































//
void gambarGame(){
    clear()

    attron(COLOR_PAIR(1));
    mvprintw(1, 4, "===== GAME SOKOBAN =====");
    attrof(COLOR_PAIR(1));

    mvprintw(2, 4, "Level %d dari %d : %s", levelAktif + 1, totalLevel, namaLevel.c_str());
    mvprintw(3, 4, "Panah = bergerak | r = ulang level | q = keluar");

    for(int y = 0; y < TINGGI_PETA; y++){
        move(5 + y, 4);
        for(int x = 0; x < LEBAR_PETA; x++){
            char huruf = petaSekarang[y][x];
        }
    }

}