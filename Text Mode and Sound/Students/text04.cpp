//Lab981201_4 (exercise)
#include <conio2.h>
int main()
{
//  clrscr();
  textattr((LIGHTGRAY << 4) + WHITE);
  cprintf("Climb");
  textattr((BLACK << 4) + LIGHTGRAY);
  cprintf(" every ");
  textcolor(GREEN);
  cprintf("mountain\r\n");
  textcolor(LIGHTGRAY);
  cprintf("Ford ");
  textcolor(LIGHTMAGENTA);
  cprintf("every ");
  textcolor(LIGHTCYAN);
  cprintf("stream\r\n");
  textcolor(LIGHTGRAY);
  cprintf("Follow every ");
  textcolor(LIGHTRED);
  cprintf("r");
  textcolor(BROWN);
  cprintf("a");
  textcolor(YELLOW);
  cprintf("i");
  textcolor(GREEN);
  cprintf("n");
  textcolor(LIGHTBLUE);
  cprintf("b");
  textcolor(BLUE);
  cprintf("o");
  textcolor(MAGENTA);
  cprintf("w\r\n");
  textcolor(LIGHTGRAY);
  cprintf("Till you find your ");
  textattr((CYAN << 4) + YELLOW);
  cprintf("dream");
  getch();
  
  return 0;
}
