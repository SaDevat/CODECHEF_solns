// 1. a problem on sticks

// #include <bits/stdc++.h>

// int main()
// {
//     int t;
//     std::cin >> t;
//     for (size_t i = 0; i < t; i++)
//     {
//         int n;
//         std::cin >> n;
//         std::set<int> v;
//         for (size_t j = 0; j < n; j++)
//         {
//             int x;
//             std::cin >> x;
//             if (x > 0)
//             {
//                 v.insert(x);
//             }
//         }
//         int ans = v.size();
//         std::cout << ans << "\n";
//     }
// }

// 2. ada matrix

// gave wrong answer ....  even though self test cases were satisfied

// #include <bits/stdc++.h>
// int main()
// {
//     int t;
//     std::cin >> t;
//     for (size_t i = 0; i < t; i++)
//     {
//         int n;
//         std::cin >> n;
//         std::vector<int> v(n, 0);
//         int ans = 0;
//         for (size_t j = 0; j < n; j++)
//         {
//             for (size_t k = 0; k < n; k++)
//             {
//                 int temp;
//                 std::cin >> temp;
//                 if ((j * n + (k + 1)) == temp)
//                 {
//                     v[j]++;
//                 }
//             }
//         }
//         std::sort(v.begin(), v.end());
//         std::cout << v[n - 1] << "\n";
//     }
// }

// 3. coronavirus spread 2
// #include <bits/stdc++.h>
// int main()
// {
//     int t;
//     std::cin>>t;
//     for (size_t i = 0; i < t; i++)
//     {
//         int n;std::cin>>n;
//         std::set<int> v;
//         for (size_t j = 0; j < n; j++)
//         {
//             int x; std::cin>>x;
//             x = x + j;
//             v.insert(x);
//         }
//         int min=1, max=1;
//         if(v.size()==1)
//         {
//             min=max=n;
//         }
//         else
//         {
//             max = n - v.size() + 1;
//         }
//         std::cout<<min<<" "<<max<<"\n";
//     }
// }

// CHEFINA AND SWAP

#include <bits/stdc++.h>
int main()
{
    int t;
    std::cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n;std::cin>>n;
        int sum = (n*(n+1))/2;
        int ans=0;
        if(n==1||n==2||sum%2!=0)
        {ans=0;}
        else
        {
            
        }
        
    }
    
}