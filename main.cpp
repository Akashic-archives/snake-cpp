#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>
using namespace std;



class Coordonnees {
public:
  int x;
  int y;
  Coordonnees(int newX, int newY) {
    x = newX;
    y = newY;
  }
};



int main(int argc, char ** argv) {

  initscr();

  srand(time(0));

  queue<Coordonnees> snake;
  snake.push(Coordonnees(rand() % 5, rand() % 5));

  printw("Hello");
  refresh();
  getch();
  endwin();

  return 0;

}

