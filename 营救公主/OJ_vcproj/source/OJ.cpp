#include <stdio.h> 
#include <string.h> 
#include <queue>
#include "OJ.h" 

/*
Description  
     每组测试数据以三个整数N,M,T(0<n, m≤20, t>0)开头，分别代表迷宫的长和高，以及公主能坚持的天数。 
	 紧接着有M行，N列字符，由"."，"*"，"P"，"S"组成。其中 "." 代表能够行走的空地。 "*" 代表墙壁，Jesse不能从此通过。 
	 "P" 是公主所在的位置。 "S" 是Jesse的起始位置。 每个时间段里Jesse只能选择“上、下、左、右”任意一方向走一步。
Prototype
     int SSaveP (int *maze[], int M, int n, int t)
Input Param 
     maze            迷宫布局（这里用二维数组实现布局）       
	 M               迷宫（数组）行数
     N               迷宫（数组）列数
	 T               公主能坚持的天数
Output Param 
                     无 
Return Value
     0         可以救出公主
     -1        不可以救出公主

*/
 
int SSavep(char *visited, int t, int n, int m) 
{ 
	// 这里面添加函数功能
	
	return 0;
}
