// selection sort function module in C
#include <iostream>


void display(int a[],int n){
    int i;

    for(i=0;i<n;i++){
    std::cout << a[i] << " ";
}
    std::cout<<std::endl;
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int data[], int length){ 
	int i, j, m; 

  for (i = 0; i < length - 1; i++){
      m = i;
      for (j = i + 1; j < length; j++){
          if (data[j] < data[m]){
              m = j;
            }
        }
        if (m != i){
            swap(&data[i], &data[m]);
        }
        display(data, length);
    }
    std::cout<<"======================"<<std::endl;
}


void insertion(int a[], int n){
  int i, j;
  for (j=1; j<n; j++) {
      int value = a[j];
      for (i = j-1; i>=0; i--) {
          if (value<a[i])
              a[i+1] = a[i];
          else
              break;
          display(a,n);
      }
      a[i+1] = value;
  }
  std::cout<<"======================"<<std::endl;
}


void bubbleSort(int a[], int n){
    int i, j;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0;                      
        for (j = 0; j < n - 1 - i; j++) { 
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swapped = 1;
            }
        }
        display(a, n);                    
        if (!swapped) 
        break;           
    }
    std::cout<<"======================"<<std::endl;
}



