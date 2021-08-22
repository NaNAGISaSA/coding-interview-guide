#include <vector>

#include "04.dynamic_programming/01.fibonacci_sequence.h"

namespace coding_interview_guide::dynamic_programming::fibonacci_problem {

namespace {
std::vector<std::vector<long>> matrix_multi(const std::vector<std::vector<long>>& a,
                                            const std::vector<std::vector<long>>& b) {
    std::vector<std::vector<long>> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(std::vector<long>(b[0].size(), 0L));
    }
    for (size_t i = 0; i < a.size(); ++i) {
        for (size_t j = 0; j < b[0].size(); ++j) {
            for (size_t k = 0; k < a[0].size(); ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

std::vector<std::vector<long>> calculate_matrix(const std::vector<std::vector<long>>& matrix, unsigned int index) {
    std::vector<std::vector<long>> temp;
    for (size_t i = 0; i < matrix.size(); ++i) {
        temp.push_back(std::vector<long>(matrix[0].size(), 0L));
        temp[i][i] = 1L;
    }
    std::vector<std::vector<long>> next = matrix;
    for (; index != 0; index >>= 1) {
        if ((index & 1) == 1) {
            temp = matrix_multi(temp, next);
        }
        next = matrix_multi(next, next);
    }
    return temp;
}
}  // namespace

unsigned long FibProblem::fib_number(unsigned int index) {
    if (index == 0 || index == 1) {
        return index;
    }
    unsigned long first = 0;
    unsigned long second = 1;
    unsigned long add_on = 0;
    for (unsigned int i = 2; i <= index; ++i) {
        add_on = first + second;
        first = second;
        second = add_on;
    }
    return second;
}

/*
[F(N), F(N - 1)] = [F(N - 1), F(N - 2)] * [[1, 1], [1, 0]]
*/
unsigned long FibProblem::fib_number_opt(unsigned int index) {
    if (index == 0 || index == 1) {
        return index;
    }
    std::vector<std::vector<long>> multi_matrix = {{1L, 1L}, {1L, 0L}};
    auto matrix_pow = calculate_matrix(multi_matrix, index - 1);
    return 1 * matrix_pow[0][0] + 0 * matrix_pow[1][0];
}

unsigned long StepProblem::situations(unsigned int step_number) {
    if (step_number <= 2) {
        return step_number;
    }
    unsigned long first = 1;
    unsigned long second = 2;
    unsigned long add_on = 0;
    for (unsigned int i = 3; i <= step_number; ++i) {
        add_on = first + second;
        first = second;
        second = add_on;
    }
    return second;
}

/*
[F(N), F(N - 1)] = [F(N - 1), F(N - 2)] * [[1, 1], [1, 0]]
*/
unsigned long StepProblem::situations_opt(unsigned int step_number) {
    if (step_number <= 2) {
        return step_number;
    }
    std::vector<std::vector<long>> matrix{{1, 1}, {1, 0}};
    auto matrix_pow = calculate_matrix(matrix, step_number - 2);
    return 2 * matrix_pow[0][0] + 1 * matrix_pow[1][0];
}

unsigned long CowProblem::cow_number(unsigned int year) {
    if (year <= 3) {
        return year;
    }
    unsigned long before = 3;
    unsigned long two_before = 2;
    unsigned long three_before = 1;
    unsigned long add_on = 0;
    for (unsigned int i = 4; i <= year; ++i) {
        add_on = before + three_before;
        three_before = two_before;
        two_before = before;
        before = add_on;
    }
    return before;
}

/*
[F(N), F(N - 1), F(N - 2)] = [F(N - 1), F(N - 2), F(N - 3)] * [[1, 1, 0], [0, 0, 1], [1, 0, 0]]
*/
unsigned long CowProblem::cow_number_opt(unsigned int year) {
    if (year <= 3) {
        return year;
    }
    std::vector<std::vector<long>> matrix{{1, 1, 0}, {0, 0, 1}, {1, 0, 0}};
    auto matrix_pow = calculate_matrix(matrix, year - 3);
    return 3 * matrix_pow[0][0] + 2 * matrix_pow[1][0] + 1 * matrix_pow[2][0];
}

}  // namespace coding_interview_guide::dynamic_programming::fibonacci_problem
