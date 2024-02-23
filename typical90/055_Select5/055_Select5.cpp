#include <iostream>
#include <vector>

int main(void)
{

  int Num_integer;
  unsigned long int Prime_number;    // 条件より演算上の制約からunsinged int形式にする
  unsigned long int Remainder;

  std::cin >> Num_integer >> Prime_number >> Remainder;

  std::vector<unsigned long int> Array(Num_integer);
  for (int i = 0; i < Num_integer; i++) {
    std::cin >> Array.at(i);
  }

  int count_saticefy_condition = 0;
  for (int i_1 = 0; i_1 < Num_integer - 4; i_1++) {
    for (int i_2 = i_1 + 1; i_2 < Num_integer - 3; i_2++) {
      for (int i_3 = i_2 + 1; i_3 < Num_integer - 2; i_3++) {
        for (int i_4 = i_3 + 1; i_4 < Num_integer - 1; i_4++) {
          for (int i_5 = i_4 + 1; i_5 < Num_integer; i_5++) {
            // 以下の処理ではオーバーフローの可能性があるのでunsined long intを用いる
            unsigned long int A_1_Prime = Array.at(i_1) % Prime_number;
            unsigned long int A_2_Prime = (A_1_Prime * Array.at(i_2)) % Prime_number;
            unsigned long int A_3_Prime = (A_2_Prime * Array.at(i_3)) % Prime_number;
            unsigned long int A_4_Prime = (A_3_Prime * Array.at(i_4)) % Prime_number;
            unsigned long int A_5_Prime = (A_4_Prime * Array.at(i_5)) % Prime_number;

            if (A_5_Prime == Remainder) {
              count_saticefy_condition += 1;
            }
          }
        }
      }
    }
  }

  std::cout << count_saticefy_condition << std::endl;

  return 0;
}
