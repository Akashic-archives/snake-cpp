#include <ncurses.h>

int main() {
    initscr();             // Initialize ncurses
    keypad(stdscr, TRUE);  // Enable keypad mode for special keys
    noecho();              // Don't echo input characters

    int ch;
    printw("Press arrow keys or 'q' to quit.\n");

    while ((ch = getch()) != 'q') {
        switch (ch) {
            case KEY_UP:
                printw("Up arrow pressed!\n");
                break;
            case KEY_DOWN:
                printw("Down arrow pressed!\n");
                break;
            case KEY_LEFT:
                printw("Left arrow pressed!\n");
                break;
            case KEY_RIGHT:
                printw("Right arrow pressed!\n");
                break;
            default:
                printw("Key pressed: %d\n", ch);
                break;
        }
        refresh(); // Update the screen
    }

    endwin(); // Clean up ncurses
    return 0;
}
