//Lab981201_3
#include <conio2.h>
int main()
{
  textbackground(BLACK);
  clrscr();
  textbackground(LIGHTGRAY);  //Set background color to LIGHTGRAY
  textcolor(BLUE);  //Set foreground color to BLUE
  highvideo(); //high-intensity
  cprintf("This is a HIGH intensity word.\r\n");  //remember to add '\r' to begin at a new line when using cprintf
  getch();
  
  lowvideo();  //low-intensity
  textcolor(RED);
  cprintf("This is a LOW intensity word.\r\n");
  getch();
  
  textcolor(BLUE);
  cprintf("Oops! Don't press any key, or I'll be deleted!!");
  if (getch())
	delline();  //delete a line at the position of cursor
  //set foreground to WHITE, background to GREEN and BLINKING text BLINK == 128 BLINK + (GREEN << 4) + WHILE = 10101111
  //textattr(BLINK + (GREEN << 4) + WHITE);  //no blinking text in Dev-C++
  //set foreground to WHITE, background to GREEN
  textattr((GREEN << 4) + WHITE);
  cprintf("\rHaha!! You've deleted a line!!\r\n");
  getch();
  
  textattr((BLACK << 4) + LIGHTGRAY);
  clrscr();  //fill with background color
  cprintf("The end. Press any key.\r\n");
  getch();
  
  return 0;
}
