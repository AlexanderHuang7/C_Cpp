#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"
#include "stack.h"

// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);
	int* a8 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];
		a8[i] = a1[i];
	}

	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//QuickSortPotholing(a6, N);
	int end6 = clock();

	int begin7 = clock();
	//MergeSort(a7, N);
	int end7 = clock();

	int begin8 = clock();
	//MergeSort(a8, N);
	int end8 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("QuickSort:%d\n", end5 - begin5);
	printf("QuickSortPotholing:%d\n", end6 - begin6);
	printf("MergeSort:%d\n", end7 - begin7);
	printf("MergeSort:%d\n", end8 - begin8);

	//printf("CallCount:%d\n", CallCount);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);
	free(a8);
}

void SortPrint(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

void TestSort(int* a, int n)
{
	// �������ܲ���
	//TestOP();

	// ��������
	//InsertSort(a, n);
	
	// ϣ������
	//ShellSort(a, n);

	// ѡ������
	//SelectSort(a, n);

	// ������
	//HeapSort(a, n);

	// ð������
	//BubbleSort(a, n);

	// ��������
	//QuickSort(a, 0, n - 1);
	
	// ���ŷǵݹ�
	//QuickSortNonR(a, 0, n - 1);

	// �鲢�ݹ�
	//MergeSort(a, n);

	// �鲢�ǵݹ�
	//MergeSortNonR(a, n);

	// ��������
	CountSort(a, n);

	// ��ӡ
	SortPrint(a, n);
}

int main()
{
	int a[] = { 1, 15, 12, 7, 0, 9 ,31 ,5, 20, 25 };
	int n = sizeof(a)/sizeof(a[0]);
	//scanf("%d", &n);

	int i = 0;
	//for (i = 0; i < n; i++)
	//{
	//	scanf("%d", &a[i]);
	//}

	TestSort(a, n);
	//TestOP();

	return 0;
}