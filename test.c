// #include <windows.h>

// int main(void) {

// 	MessageBoxW(
// 		NULL, 
// 		L"My first message box",
// 		L"Hello World!",
// 		MB_YESNOCANCEL
// 		);
// 	return EXIT_SUCCESS;
// }



#include <stdio.h>
#include <windows.h>

int main(void) {

	STARTUPINFOW si = { 0 };
	PROCESS_INFORMATION pi = { 0 }; 

	if (!CreateProcessW(
		L"C:\\Windows\\Systems32\\notepad.exe",
		NULL,
		NULL,
		NULL,
		FALSE,
		BELOW_NORMAL_PRIORITY_CLASS,
		NULL,
		NULL,
		&si,
		&pi
	)){
		printf("(-) failed to create process, error: id%", GetLastError());
		return EXIT_FAILURE;
	}

	printf("(+) process started! pid: %id", pi.dwProcessId)
	return EXIT_PROCESS;

}
