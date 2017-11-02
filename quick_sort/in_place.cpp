
int main(){

  int num1_base[] = {8, 2, 5, 7, 4, 3};
  /*
  origin:	[8, 2, 5, 7, 4, 3], iter=0, storeIndex=0.
  phase1-0:	[8, 2, 3, 7, 4, 5], select 3 as pivot, swap to right.
  phase1-1:     [8, 2, 3, 7, 4, 5], 8 > 5, don't swap, iter += 1.
  phase1-2:	[8, 2, 3, 7, 4, 5], iter=1, storeIndex=0.
  phase1-3:	[2, 8, 3, 7, 4, 5], since 2 < 5, swap, all += 1
  phase1-4:	[2, 8, 3, 7, 4, 5], iter=2, storeIndex=1.
  phase1-5:	[2, 8, 3, 7, 4, 5], since 3 < 5, swap, all += 1
  phase1-6:	[2, 3, 8, 7, 4, 5], iter=3, storeIndex=2.
  phase1-7:	[2, 3, 8, 7, 4, 5], since 7 > 5, don't swap, iter += 1.
  phase1-8:	[2, 3, 8, 7, 4, 5], iter=4, storeIndex=2.
  phase1-9:	[2, 3, 4, 7, 8, 5], since 4 < 5, swap, all += 1.
  phase1-10:	[2, 3, 4, 7, 8, 5], iter=5, storeIndex=3.
  phase1-11:    [2, 3, 4, 5, 7, 8], end of vector, swap right to storeIndex.
  phase2 
  ...
  ..
  .
  
  */
  vector<int> num1(num1_base, num1_base + sizeof(num1_base)/sizeof(int));
  quick_sort(num1);
  print_vector(num1);
}
