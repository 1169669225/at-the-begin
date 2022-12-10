// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// //类可以把变量，数组，函数放在一起
// //vector容器存放内置数据类型
// void myprint(int val)
// {
//     cout << val <<endl;
// }
// void test01()
// {
//     //创建了一个容器(数组)
//     vector<int> v;
//    //向容器中插入数据
//    v.push_back(10);
//    v.push_back(20);
//    v.push_back(30);
//    v.push_back(40);
//    //通过迭代器访问容器中的数据
//    vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
//    vector<int>::iterator itEnd = v.end();//结束迭代器              最后一个元素的下一个位置
//    //第一种遍历
// //    while(itBegin != itEnd)
// //    {
    
// //       cout << *itBegin << endl;
// //       itBegin++;
// //    }
//   //第二中遍历
// //   for(vector<int>::iterator it = v.begin();it != v.end();it++)
// //   {
// //     cout << *it << endl;

// //   }
//   //第3中遍历   利用STL提供遍历算法
//   for_each(v.begin(),v.end(),myprint);
  
// }
// int main()
// {
   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// const int N  = 1e6 + 10;
// int n;
// int q[N];
// void quick_sort(int q[],int l,int r)
// {
//   if(l >= r)return ;
//   int x = q[(l + r + 1) / 2],i = l - 1,j = r + 1;
//   while(i < j)
//   {
//     do i++; while(q[i] < x);
//     do i--; while(q[j] > x);
//     if(i < j) swap(q[i],q[j]);
    
//   }
//   quick_sort(q,l,i- 1);
//   quick_sort(q,i,r);
// }
// int main()
// {
//   scanf("%d",&n);
//   for(int i = 0;i < n;i++) scanf("%d",&q[i]);
//   quick_sort(q,0,n - 1);
//   for(int i = 0;i < n; i++) printf("%d",&q[i]);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// //归并排序  ,中间为分界点,两边先递归排序，(把两个有序的数组合并)
// //两端第一个元素指针,先比较段元素,最后两个端元素比大小
// const int N = 100010;
// int n;
// int q[N],tmp[N];
// void merge_sort(int q[],int l ,int r)
// {
//   if(l >=r) return ;
//   int mid = (l + r) / 2;
//   merge_sort(q,l,mid),merge_sort(q,mid + 1,r);
//   int k = 0,i = 1,j = mid + 1;
//   while(i <= mid && j <=r)
//   {
//     if(q[i] <= q[j]) tmp[k++] = q[i++];
//     else tmp[k++] = q[j++];
//   }
//   while(i <= mid) tmp[k++] = q[i++];
//   while(j <= r) tmp[k++] = q[j++];
//   for(i = l,j = 0; i <= r;i++,j++) q[i] = tmp[j];
// }
// int main()
// {
//   scanf("%d",&n);
//   for(int i = 0;i < n;i++) scanf("%d",&q[i]);
//   merge_sort(q,0,n - 1);
//   for(int i = 0;i < n; i++) scanf("%d",&q[i]);

//   return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// //整数二分;有单调性一定可以二分，能二分不一定有单调性,寻找性质边界
// const int N = 100010;
// int n,m;
// int q[N];
// int main()
// {
//   scanf("%d%d",&n,&m);
//   for(int i = 0;i <n;i++) scanf("%d",&q[i]);
//   while(m--)
//   {
//     int x;
//     scanf("%d",&x);
//     int l = 0,r = n- 1;
//     while(l < r)
//     {
//       int mid = (l + r) / 2;
//       if(q[mid]>=x) r = mid;
//       else l = mid + 1;
//     }
//     if(q[l] != x) cout <<"-1 -1" << endl;
//     else
//     {
//       cout <<l <<endl;
//       int l = 0,r = n- 1;
//       while(l < r)
//       {
//         int mid = (1 + r) / 2;
//         if(q[mid] <= x) l = mid;
//         else r = mid - 1;
//       }
//       cout << l <<endl;
//     }
//   }
//   return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  
  return 0;
}