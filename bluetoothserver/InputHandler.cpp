#include "stdafx.h"
#include "InputHandler.h"
#include "windows.h"


InputHandler::InputHandler(){
	ip.type = INPUT_KEYBOARD;
}


void InputHandler::keyPress(int key){


	ip.ki.wVk = key; //the key which will be pressed
	ip.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &ip, sizeof(INPUT));

	ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &ip, sizeof(INPUT));
}



 void InputHandler::inputToEvent(char * input, int inputLength){
	std::string inputString(input);
	//std::size_t pos;

	if (inputString.compare("Next\n") == 0){
		std::cout << "Next" << std::endl;
		keyPress(VK_RIGHT);

	}
	else if (inputString.compare("Previous\n") == 0){
		std::cout << "Previous" << std::endl;
		keyPress(VK_LEFT);
	}
}

