#ifndef __SORTING_H__
#define __SORTING_H__
#include "types.h"
// #include "compareFunc.h"

using ContainerElemType = T1;
using ContainerRange    = int;

void DemoBurbuja();
void intercambiar(ContainerElemType& a, ContainerElemType& b);
void PrintArray(ContainerElemType arr[], ContainerRange n);

void BurbujaClasico(ContainerElemType arr[], ContainerRange n);

// void BurbujaClasico(ContainerElemType* arr, ContainerRange n, CompFunc pComp);
// void BurbujaRecursivo(ContainerElemType* arr, ContainerRange n, CompFunc pComp);


// ContainerRange  particionar(ContainerElemType* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void QuickSort  (ContainerElemType* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void DemoQuickSort();

// void Merge(ContainerElemType* arr, const ContainerRange left, const ContainerRange mid, const ContainerRange right, CompFunc pComp); 
// void MergeSort(ContainerElemType* arr, const ContainerRange begin, const ContainerRange end, CompFunc pComp);
// void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__