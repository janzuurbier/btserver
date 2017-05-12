#include <iostream>
#include <string>
#include <windows.h>
#include "stdafx.h"

class InputHandler{

private:
	INPUT ip;
	void keyPress(int key);
public:
	InputHandler();
	void inputToEvent(char * input, int inputLength);

};
