#include <iostream>
#include <vector>

int BinarySearch(std::vector<int>& vec,int value)
{
	if (vec.size() <= 0)
		return -1;

	int first = 0;
	int end = vec.size() - 1;

	// 判断条件很重要
	while (first <= end)
	{
		int middle = (first + end) / 2;
		if (vec[middle] == value)
		{
			return middle;
		}
		else if (vec[middle] > value)
		{
			end = middle - 1;
		}
		else if (vec[middle] < value)
		{
			first = middle + 1;
		}
	}

	return -1;
}

//int main()
//{
//	// 二分查找必须是有序的
//	std::vector<int> vecNum{ 12,13,14,23,45,48,50,66,69,79,90,99 };
//	std::cout << BinarySearch(vecNum, 14) << std::endl;
//	std::cout << BinarySearch(vecNum, 15) << std::endl;
//	std::cout << BinarySearch(vecNum, 23) << std::endl;
//	std::cout << BinarySearch(vecNum, 99) << std::endl;
//	std::cout << BinarySearch(vecNum, 100) << std::endl;
//
//}