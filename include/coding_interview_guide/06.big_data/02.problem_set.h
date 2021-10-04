////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
/*
【题目】
有一个包含20亿个全是32位整数的大文件，在其中找到出现次数最多的数。
【要求】
内存限制为2GB。
*/

/*
【解决方案】
解决方案是使用哈希函数将大文件分为16个小文件，由哈希算法一致性，同一个数一定会被分到同一个小文件中，
且当哈希函数设计的足够优秀时，每一个文件的整数数量都不会超过2亿个（在整数分布不是很极端的情况下）。
随后使用哈希表对16个文件分别计数，其k，v均为32位整数，可计算出该哈希表占用空间最大为1.6GB且不会产生
溢出行为。
将每一个文件中出现次数最多的数字进行比较，便可以找到大文件中出现次数最多的数字。

【题目总结】
把一个大的集合通过哈希函数分配到多台机器中，或者分配到多个文件中，这种技巧是处理大数据面试题目时最常用的
技巧之一。具体要分配多少台机器或者多少个文件，在解题时需要确定下来。
*/

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
/*
【题目】
32位无符号整数的范围是0~4294967295，现在有一个正好包含40亿个无符号整数的文件，所以在整个范围中必然有
没有出现过的数。最多使用1GB内存，怎样找到所有未出现的数？
【进阶】
内存限制为10MB，但是只用找到一个未出现的数即可。
*/

/*
【解决方案】
原问题：
使用bitmap进行处理。申请一个长度为4294967296的bitmap，其占用内存大小约500MB，符合题目要求。
随后循环40亿个数，将bitmap对应位置置1，最后循环整个bitmap，找到元素为0的位置，即为没有出现过的数。

进阶问题：
首先申请一个含有64个整形元素的数组，数组中每一个元素为将4294967296分为64个区间后，对应区间数字的出现次数，
如vec[0]代表0~67108863区间数字的出现次数，vec[1]代表67108864~134217727区间数字的出现次数，以此类推。
随后遍历40亿个数，每一个数都将整形数组对应区间元素加1，遍历完成后，从整形数组中找到第一个元素个数不满67108864的。
最后申请一个67108864长度的bitmap，约8MB，再次遍历40亿个数，如果数字落到对应区间，便将bitmap该位置1。
遍历完成后，bitmap中一定存在等于0的位，则该位对应数字便是没有出现过的数。

【题目总结】
是否出现过：属于0/1问题，可使用bitmap。
*/

////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
/*
【题目】
某搜索公司一天的用户搜索词汇是海量的（百亿数据量），请设计一种求出每天热门Top100词汇的可行办法。
*/

/*
【解决方案】
首先还是通过哈希函数进行分流，将数据通过哈希函数分流到不同的机器上。对于每一台机器，如果分流后的数据仍然不满足
内存需要，可再将数据通过哈希函数拆分成N个小文件。
对于每一个小文件，可以通过哈希表统计词频，然后使用大小为100的小根堆选择Top100并将小根堆进行**排序**。
随后对于不同的Top100，可以使用外部排序或者小根堆，选择每台机器的Top100。
最后对于每台机器的Top100，可以继续使用外部排序或者小根堆，最终选择出整体的Top100。

【题目总结】
对于哈希函数分流问题，如果还需要统计TopK，通常还会使用堆结构以及外部排序的手段进行处理。
*/