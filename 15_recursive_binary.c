#include <stdio.h>


int Recursion_Binary_Search(int k[], int l, int h, int element)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;

        if (k[mid] == element)
        {
            return mid;
        }
        else if (k[mid] < element)
        {
            return  Recursion_Binary_Search(k, mid + 1, h, element);
        }
        else
        {
            return  Recursion_Binary_Search(k, l, mid - 1, element);
        }
    }

    return -1;
}

int main()
{
    int k[] = {10, 20, 30, 40, 50};
    int n = sizeof(k) / sizeof(k[0]);
    int v;

    printf("==> || Enter Searching Element || <== \n");
    scanf("%d", &v);

    int result = Recursion_Binary_Search(k, 0, n - 1, v);

   if (result == -1)
    {
        printf("==> || Element Is Not Found || <== \n");
    }
    else
    {
        printf("==> || Element Is Found at Index %d || <== \n", result);
    }

    return 0;
}