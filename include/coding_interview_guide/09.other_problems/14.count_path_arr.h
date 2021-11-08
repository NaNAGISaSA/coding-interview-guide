#ifndef _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_COUNT_PATH_ARR_H_
#define _CODING_INTERVIEW_GUIDE_OTHER_PROBLEMS_COUNT_PATH_ARR_H_

/*
【题目】
给定一个路径统计数组paths，表示一张图。
paths[i]==j代表城市i连向城市j，如果paths[i]==i，则表示i城市是首都，一张图里只会有一个首都且图中除首都指向自己之外不会有环。
例如，paths=[9,1,4,9,0,4,8,9,0,1]，代表的图如图9-14所示。
由数组表示的图可以知道，城市1是首都，所以距离为0，离首都距离为1的城市只有城市9，离首都距离为2的城市有城市0、3和7，
离首都距离为3的城市有城市4和8，离首都距离为4的城市有城市2、5和6。那么统计数组为nums=[1,1,3,2,3,0,0,0,0,0]。
【要求】
时间复杂度为O(n)，额外空间复杂度为O(1)。
*/

#include <vector>

namespace coding_interview_guide::other_problems::count_path_arr {

class CountPathArr {
public:
    static void count_path_arr(std::vector<int>& path);
    static void common_bfs(std::vector<int>& path);
};

}  // namespace coding_interview_guide::other_problems::count_path_arr

#endif
