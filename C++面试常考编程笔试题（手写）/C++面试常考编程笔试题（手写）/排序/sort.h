#pragma once
#ifndef __SORT_H__
#define __SORT_H__

void quick_sort(int s[], int left, int right);
void merge_array(int array[], int left, int mid, int right, int temp[]);
void devide_array(int array[], int left, int right, int temp[]);
void MergeSort(int array[], int len);
#endif  //__SORT_H__