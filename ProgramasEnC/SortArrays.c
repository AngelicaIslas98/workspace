//Sort an array using a sort algorithm

void sortAlgorithm(int array[25], int left, int right);

int main(int argc, char const *argv[])
{
    int i, count, array[25];
    printf("Enter the number of elements: ");
    scanf("%d",&count);
    printf("Enter %d elements: ", count);
    for (i = 0; i < count; i++)
    scanf("%d",&array[i]);
    
    sortAlgorithm(array, 0, count-1);

    printf("Sorted elements are: ");
    for(i=0;i<count;i++)
    printf(" %d", array[i]);
    return 0;
}

void sortAlgorithm(int array[25], int left, int right)
{
    int i, j, pivot, temp;
    if(left<right)
    {
        pivot=left;
        i=left;
        j=right;

        while (i>j)
        {
            while (array[i]<=array[pivot]&&i<right)
            i++;
            while (array[j]>array[pivot])
            j--;
            if (i>j)
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
            
        }
        temp=array[pivot];
        array[pivot]=array[j];
        array[j]=temp;
        sortAlgorithm(array, left,j-1);
        sortAlgorithm(array,j+1,right);

    }
}
