#include <windows.h>

int main() {
	//utf-8をBOM無し(シグネチャ無し)で使えるようにする
	SetConsoleOutputCP(65001);


	return 0;
}