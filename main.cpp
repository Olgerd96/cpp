#include <chrono>  	// std::chrono::steady_clock std::chrono::microseconds
#include <iostream>  	// std::cout
// #include <typeinfo> 	
#include <vector> 	// std::vector<int>

void print_vector(const std::vector<int> input_vector) {
  if (input_vector.size() > 0) {
    std::cout << "{";
    for (size_t i = 0; (i < input_vector.size() && i < 25); i++) {
      std::cout << input_vector[i] << "  ";
    }
    std::cout << "}" << std::endl;
  }
}

void print_stats(const std::vector<int> input_object) {
  std::cout
      << "sizeof Object:\t" << sizeof(input_object)
      << " bytes"
      // << "\nObject strlen:\t" << strlen(input_object.c_str()) << " chars"
      << "\nObj.size() prop:\t" << input_object.size()
      << " elements"
      // << "\nObj.lengh() prop:\t" << input_object.length() << " chars"
      << "\nObject type:\t"
      << typeid(input_object).name()
      // << "\t// get readeble name using: c++filt -t " <<
      // typeid(input_object).name()
      << "\nObject value:\t";
  print_vector(input_object);
}

std::vector<int> vectors_sum(std::vector<int> argument1,
                             std::vector<int> argument2) {
  std::vector<int> sum_vector;
  for (size_t i = 0; i < std::max(argument1.size(), argument2.size()); i++) {
    sum_vector.push_back(argument1[i] + argument2[i]);
  }

  return sum_vector;
}

int main() {
  const int vector_size = 16777216;
  std::vector<int> input1(vector_size, 42);
  std::vector<int> input2(vector_size, 54);
  std::vector<int> result;
  const int repeats = 8;
  std::vector<int> perf_history;

  for (size_t i = 0; (i < std::max(input1.size(), input2.size())) && (i < 20); i++) {
    if (i % 2 == 0) {
      input1[i] += i;
    } else {
      input2[i] -= i;
    }
  }
  std::cout << "Input1: \t";
  print_vector(input1);
  std::cout << "Input2: \t";
  print_vector(input2);

  for (int i = 0; i <= repeats; i++)
  {
    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    result = vectors_sum(input1, input2);
    std::chrono::steady_clock::time_point stop = std::chrono::steady_clock::now();
    std::chrono::microseconds::rep item = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();
    perf_history.push_back(item);
  }
  std::cout << "Performance times: \t";
  print_vector(perf_history);
  std::cout << "Result: \t";
  print_vector(result);

  return 0;
}
