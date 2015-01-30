int InsertionSort(double *numArray, const int length)
{
int i, j;
double key;
int counter =0;  
for(j=1 ; j<=ARRAYLEN-1; j++) 
{
i= j;
while(i>0 && numArray[i]<numArray[i-1])
{
key=numArray[i];
numArray[i]= numArray[i-1];
numArray[i-1]=key;
i--;
counter++;
}
}
return counter;
}

