#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

unsigned long long int cvt8_to_9(unsigned long long int);    // これは8->10 , 10->9 の二つの関数に分けてもイイかも
unsigned long long int rewrite8_to_5(unsigned long long int);

int main(void)
{

    unsigned long long int oct_number;
    std::cin >> oct_number;

    int operation_times;
    std::cin >> operation_times;

    for (int i = 0; i < operation_times; i++) {
        unsigned long long int tmp = cvt8_to_9(oct_number);
        oct_number                 = rewrite8_to_5(tmp);
        std::cout << oct_number << std::endl;
    }

    std::cout << oct_number << std::endl;
    return 0;
}

// 8 -> 9に変換する関数
unsigned long long int cvt8_to_9(unsigned long long int oct_number)
{

    const int BASE_OCT     = 8;
    std::string oct_string = std::to_string(oct_number);    // 扱いやすい文字列に変換

    // 8 -> 10
    unsigned long long int decimal_number = 0;
    int x                                 = 0;
    for (auto itr = oct_string.end() - 1; itr != oct_string.begin(); itr--) {
        decimal_number += (unsigned long long int)(*itr - '0') * (unsigned long long int)pow(BASE_OCT, x);
        x++;
    }
    decimal_number += (unsigned long long int)(*(oct_string.begin()) - '0') * (unsigned long long int)pow(BASE_OCT, x);

    // 10 -> 9
    const int BASE_Nonary     = 9;
    std::string nonary_string = "";
    while (decimal_number >= 9) {
        int reminder = decimal_number % BASE_Nonary;
        nonary_string.push_back(reminder + '0');
        decimal_number = decimal_number / BASE_Nonary;
    }
    nonary_string.push_back(decimal_number + '0');
    std::reverse(nonary_string.begin(), nonary_string.end());
    unsigned long long int nonary_number = std::stoi(nonary_string);    // 文字列から数値に変換

    return nonary_number;
}

// 8を5に書き直す関数
unsigned long long int rewrite8_to_5(unsigned long long int original_number)
{

    // 文字列に直す
    std::string original_string = std::to_string(original_number);

    auto itr = original_string.begin();
    while (itr != original_string.end()) {
        if (*itr == '8') {
            *itr = '5';
        }
        itr++;
    }
    unsigned long long int rewrited_number = std::stoi(original_string);

    return rewrited_number;
}
