//Lab981201_2
//Demonstrate seeting attributes in textmode
#include <conio2.h>  //for Dev-C++, use conio2.h
int main()
{
  textbackground(RED);
  clrscr();
  cprintf("This is my first colored-text program.\r\n");
  getch();
  
  //using textcolor() to set the foreground color
  textcolor(YELLOW);
  cprintf("I use textcolor() to set these words to yellow first.\r\n");
  getch();
  
  //using textbackground() to set the background color
  textbackground(BLUE);
  cprintf("Next, I use textbackground() to set these sentence into blue background\r\n");
  getch();
  
  //using textcolor() to set blinking text
  //textcolor(BLINK); // not valid for Dev-C++ + conio2
  cprintf("I also try to use blinking text.\r\n");
  getch();
  
  //using textattr() to set the foreground and background color
  textattr((BROWN << 4) + LIGHTGREEN);
  cprintf("I try the function textattr to change the properties of these words, too.\r\n");
  getch();
  
  //sentence with different color
  textcolor(LIGHTGRAY);
  cprintf("Be sure to use ");
  textcolor(YELLOW);
  cprintf("\\r\\n");
  textcolor(LIGHTGRAY);
  cprintf(" if you want to add text in the beginning of a new line.\r\n");
  getch();
  
  cprintf("I've got to go. See you.\r\n");
  getch();
  
  return 0;
}
