#include <stdio.h>
#include <iostream>
#include <windows.h>

int main() {
	//utf-8をBOM無し(シグネチャ無し)で使えるようにする
	//↓使うと文字化けするので追加オプションで対応
	//SetConsoleOutputCP(65001);

	char letter[] = "abcあいう123";
	printf("%s",letter);
	return 0;
}