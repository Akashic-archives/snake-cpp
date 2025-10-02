#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <ncurses.h>
#include <chrono>
#include <thread>

using namespace std;

int main(int argc, char ** argv) {

  initscr();
  noecho();
  srand(time(0));

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      mvprintw(i, j*2, "#");
    }
  }

  refresh();

  std::this_thread::sleep_for(std::chrono::milliseconds(1200));

  clear();

  keypad(stdscr, TRUE);
  nodelay(stdscr, true);

  clear();
  refresh();
  nodelay(stdscr, false);
  getch();
  endwin();

  return 0;

}

