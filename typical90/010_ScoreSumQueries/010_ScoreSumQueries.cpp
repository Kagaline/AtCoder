#include <iostream>
#include <utility>
#include <vector>

int main(void)
{

  // 生徒の人数
  int Num_students;
  std::cin >> Num_students;

  // それぞれのクラスについて学籍番号までの点数の累積和
  std::vector<int> sum_class_1 = {0};
  std::vector<int> sum_class_2 = {0};

  // 累積和を計算する
  for (int i = 0; i < Num_students; i++) {

    // クラスが1であることを示す
    const int class_one = 1;

    // クラスと点数を読み込む
    int class_name;
    int score;
    std::cin >> class_name >> score;

    if (class_name == class_one) {    // クラス1の時
      sum_class_1.push_back(sum_class_1.back() + score);
      sum_class_2.push_back(sum_class_2.back());
    } else {    // クラス2の時
      sum_class_1.push_back(sum_class_1.back());
      sum_class_2.push_back(sum_class_2.back() + score);
    }
  }

  // クエリに応じて結果を出力する
  int Num_queries;
  std::cin >> Num_queries;

  for (int i = 0; i < Num_queries; i++) {
    int start, end;
    std::cin >> start >> end;

    // 指定区間の累積和を計算する
    const int class_1_total_score = sum_class_1.at(end) - sum_class_1.at(start - 1);
    const int class_2_total_score = sum_class_2.at(end) - sum_class_2.at(start - 1);

    // 結果を出力する
    std::cout << class_1_total_score << " " << class_2_total_score << std::endl;
  }

  return 0;
}
