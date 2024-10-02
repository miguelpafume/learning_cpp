// Section 17
// Challenge 1

#include <iostream>
#include <memory>
#include <vector>

class Test {
private:
    int data;
public:
    Test() : data{0} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    Test(int data) : data {data} { std::cout << "\tTest constructor (" << data << ")" << std::endl; }
    int get_data() const {return data; }
    ~Test() {std::cout << "\tTest destructor (" << data << ")" << std::endl; }
};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
  return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num) {
  for(int i {0}; i < num; i++) {
    int data {0};
    std::cout << "Ender data point [" << i << "] : ";
    std::cin >> data;
    vec.push_back(std::make_shared<Test>(data));
  }
}

void display(const std::vector<std::shared_ptr<Test>>&vec) {
  std::cout << "Displaying vector data..." << "\n===================" << std::endl;
  for(std::shared_ptr<Test> i: vec) {
    std::cout << i->get_data() << std::endl;
  }
  std::cout << "===================" << std::endl;
}

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    std::cout << "How many data points do you want to enter: ";

    int num;
    std::cin >> num;

    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}