#include <lib.h>
#include <sys/sound.h>
#include "font.h"

void main()
{

	text();
	paper(0);
	ink(7);
	cls();

	// set chars
	memcpy((void *)0xb900, ALTSET, sizeof(ALTSET));

	lores1();

	// print text
	printLoresText(1, 4, LORES_TEXT_NORMAL, "!\"#$%&*()-=+<>[]/\\");
	printLoresText(1, 7, LORES_TEXT_NORMAL, "0123456789,.?@");
	printLoresText(1, 10, LORES_TEXT_NORMAL, "THE QUICK BROWN FOX");
	printLoresText(1, 13, LORES_TEXT_NORMAL, "JUMPS OVER THE LAZY");
	printLoresText(1, 16, LORES_TEXT_NORMAL, "DOG !");
	printLoresText(1, 19, LORES_TEXT_DIMMED, "THE QUICK BROWN FOX");
	printLoresText(1, 22, LORES_TEXT_DIMMED, "JUMPS OVER THE LAZY");
	printLoresText(1, 25, LORES_TEXT_DIMMED, "DOG !");
}