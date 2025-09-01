#include <chrono>  	// std::chrono::steady_clock std::chrono::microseconds
#include <iostream>  	// std::cout
// #include <typeinfo> 	
#include <vector> 	// std::vector<int>

#include "utils.hpp"

std::vector<int> modificate_first_elements (std::vector<int> input_vector,
                                            const unsigned long limit_first_elements)
{
  std::vector<int> output_vector;
  unsigned long last_modificated = std::min(input_vector.size(), limit_first_elements)
  for (unsigned long i = 0; i <= last_modificated; ++i)
  {
    if (i % 2 == 0) {
      //some small modifitations without random
      output_vector[i] = input_vector[i] + (i%4);
    } else {
      output_vector[i] = input_vector[i] - (i%6);
    }

    return output_vector;
  }
}

int main()
{
  const int vector_size = 16777216;
  std::vector<int> input1(vector_size, 42);
  std::vector<int> input2(vector_size, 54);
  std::vector<int> result;
  const unsigned long modificate_elements = 20
  const unsigned long reruns = 8;
  std::vector<int> perf_history;
  
  unsigned long last_modificated_element = 
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

  for (int i = 0; i <= reruns; i++)
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
