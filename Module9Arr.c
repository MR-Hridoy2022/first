// // //1. Insert an element In Array

// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int ar[n+1];
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&ar[i]);
// //     }
// //     int pos, val;
// //     scanf("%d %d",&pos,&val);
// //     for(int i=n;i>=pos;i--)
// //     {
// //         ar[i]=ar[i-1];
// //     }
    
// //     ar[pos]=val;
// //     for(int i=0;i<=n;i++)
// //     {
// //         printf("%d ",ar[i]);

// //     }
// //     return 0;
// // }


// //2.Remove element from an array.
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int ar[n];
//     for (int i=0;i<n;i++)
//     {
//         scanf("%d",&ar[i]);

//     }
//     int pos;
//     scanf("%d",&pos);
//     for (int i=pos;i<n-1;i++)
//     {
//         ar[i]=ar[i+1];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         printf("%d ",ar[i]);

//     }

    
//     return 0;
// }