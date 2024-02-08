#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>

int main() {
	std::string a(1000000, 'a');
    
    auto start = std::chrono::steady_clock::now();
    std::string copy = a;
    auto end = std::chrono::steady_clock::now();
    auto copytime = end - start;
    start = std::chrono::steady_clock::now();
    std::string move = std::move(a);
    end = std::chrono::steady_clock::now();
    auto movetime = end - start;
    std::cout << "1,000,000文字を移動とコピーで比較しました" << std::endl;
    std::cout << "コピー:" << " " << copytime.count() << "μs" << std::endl;
    std::cout << "移動:" << " " << movetime.count() << "μs" << std::endl;

	return 0;
}