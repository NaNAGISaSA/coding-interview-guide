#ifndef _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_LOCAL_MINIMUM_H_
#define _CODING_INTERVIEW_GUIDE_VECTOR_AND_MATRIX_FIND_LOCAL_MINIMUM_H_

/*
【题目】
定义局部最小的概念。arr长度为1时，arr[0]是局部最小。
arr的长度为N(N>1)时，如果arr[0]<arr[1]，那么arr[0]是局部最小；如果arr[N-1]<arr[N-2]，那么arr[N-1]是局部最小；
如果0<i<N-1，既有arr[i]<arr[i-1]，又有arr[i]<arr[i+1]，那么arr[i]是局部最小。
给定无序数组arr，已知arr中任意两个相邻的数不相等。写一个函数，只需返回arr中任意一个局部最小出现的位置即可。
【要求】
时间复杂度为O(logN)，空间复杂度为O(1)。
*/

#include <vector>

namespace coding_interview_guide::vector_and_matrix::find_local_minimum {

class FindLocalMinimum {
public:
    static int find(const std::vector<int>& vec);
};

}  // namespace coding_interview_guide::vector_and_matrix::find_local_minimum

#endif