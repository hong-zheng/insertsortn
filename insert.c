void insertsort(int* arr, int n)
{
	int i = 0;
	while (i < n-1)
	{
		// end：表示有序学列的最后一个位置
		int end = i;
		int key = arr[end + 1];
		//找到第一个小于key的位置
		while (end >= 0 && arr[end] >key){
			// 当前位置向后移动位置
			arr[end + 1] = arr[end];
			--end;
		}
		arr[end + 1] = key;
		++i;
	}
}