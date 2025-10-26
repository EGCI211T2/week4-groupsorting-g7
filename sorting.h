// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
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
      printf("======================\n");
  }
}


void bubbleSort(int a[],int n){
  int i,j;
  int sorted;
    sorted = 1;
      for(j=1;j<=n-1;j++){
        if(a[j]>a[j+1]){
        swap(&a[j],a[j+1]);
        sorted = 0;
        }    
      display(a,n);
    }
    if (sorted)break;
}



