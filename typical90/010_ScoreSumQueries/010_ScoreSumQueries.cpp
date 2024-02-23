#include <iostream>
#include <utility>
#include <vector>

int main(void)
{

  // 生徒の人数
  int Num_students;
  std::cin >> Num_students;

  // それぞれのクラスについて学籍番号までの点数の和
  std::vector<int> sum_class_1(Num_students + 1);
  std::vector<int> sum_class_2(Num_students + 1);

  // 学生番号は1からなので0番には0を入れる
  sum_class_1.at(0) = 0;
  sum_class_2.at(0) = 0;

  int class_num;
  int point;
  for (int i = 1; i <= Num_students; i++) {
    std::cin >> class_num >> point;
    if (class_num == 1) {
      sum_class_1.at(i) = sum_class_1.at(i - 1) + point;
      sum_class_2.at(i) = sum_class_2.at(i - 1) + 0;
    } else {
      sum_class_1.at(i) = sum_class_1.at(i - 1) + 0;
      sum_class_2.at(i) = sum_class_2.at(i - 1) + point;
    }
  }

  int Num_queries, start, end;
  std::cin >> Num_queries;
  for (int i = 0; i < Num_queries; i++) {
    std::cin >> start >> end;
    std::cout << sum_class_1.at(end) - sum_class_1.at(start - 1) << " "
              << sum_class_2.at(end) - sum_class_2.at(start - 1) << std::endl;
  }
  return 0;
}
