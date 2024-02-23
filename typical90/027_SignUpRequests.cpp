#include <iostream>
#include <string>
#include <unordered_map>    // ハッシュの役割をする

int main(void)
{

  int Num_inputs;
  std::cin >> Num_inputs;

  // 登録名->すでに登録しているか　を調べるためのハッシュを用意
  std::unordered_map<std::string, int> exists_name;

  //
  std::string enroll_name;
  for (int i = 0; i < Num_inputs; i++) {
    std::cin >> enroll_name;
    if (exists_name[enroll_name] == 0) {
      exists_name[enroll_name] = 1;
      std::cout << i + 1 << std::endl;
    }
  }

  return 0;
}
