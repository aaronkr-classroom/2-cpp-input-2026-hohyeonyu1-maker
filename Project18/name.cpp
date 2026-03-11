//name.cpp
#include <iostream>
#include <string>

int main(void) {
	//이름을 물음
	std::cout << "First name: >>";
	//이름을 읽어 들임
    std::string name;
    std::cin >> name;

    // 출력하려는 메세지를 구성
    const std::string greeting = "Hello," + name + "!";

    /*
    ************** 
    *            *
    *Hello Aaron!*
    *            *
    **************
    */
    //인사말의 2번째와 4번쨰 행
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    //인사말의 1번쨰와 5번째 행
    const std::string first(second.size(), '*');
    
    //모두 출력
    std::cout
        << std::endl
        << first << std::endl
        << second << std::endl
        << "* " << greeting << " *" << std::endl
        << second << std::endl
        << first << std::endl
        << std::endl;
    return 0;
}