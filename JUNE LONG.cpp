//CHEF AND PRICE CONTROL
// #include <bits/stdc++.h>

// int main()
// {
//     int q;
//     std::cin>>q;
//     std::vector<int> ans(q,0);
//     for (int i = 0; i < q; i++)
//     {
//         int n,k;
//         std::cin>>n>>k;
//         for (size_t j = 0; j < n; j++)
//         {
//             int temp; std::cin>>temp;
//             if(temp>k)
//             {
//                 temp -= k;
//                 ans[i] += temp;
//             }
//         }
//     }
//     for (size_t i = 0; i < q; i++)
//     {
//         std::cout<<ans[i]<<"\n";
//     }
// }

// CHEF AND STRING
// #include <bits/stdc++.h>

// int main()
// {
//    int n;
//    std::cin>>n;
//    std::vector<int> v(n,0);
//    for (size_t i = 0; i < n; i++)
//    {
//        std::string temp;
//        std::cin>>temp;
//        for (size_t j = 0; j < temp.size(); j++)
//        {
//            if( abs(temp[j+1]-temp[j])==1)
//            {
//                v[i]++; j++;
//            }
//        }
//    }
//    for (size_t i = 0; i < n; i++)
//    {
//        std::cout<<v[i]<<"\n";
//    }   
// }

// CHEF AND ICE CREAM
// #include <bits/stdc++.h>
// int main()
// {
//     int q;
//     std::cin>>q;
//     std::vector<int> ans(q,1);
//     for (size_t i = 0; i < q; i++)
//     {
//         int n; std::cin>>n;
//         std::vector<int> v(n,0);
//         for (size_t j = 0; j < n; j++)
//         {
//             std::cin>>v[j];
//         }
//         int bal=0;
//         for (size_t j = 0; j < n; j++)
//         {
//             if(j==0 && v[j]>5){ans[i]=0; break;}
//             else if (j==0)
//             {
//                 bal += v[j];
//             }
//             if( v[j]>5 && v[j]-5 > bal)
//             {
//                 ans[i]=0; break;
//             }
//             else if (j>0) { bal+=5;}
//         }
        
//     }
//     for (size_t i = 0; i < q; i++)
//     {
//         if(ans[i]==1){std::cout<<"YES \n";}
//         else{std::cout<<"NO \n";}
//     }
// }

// THE TOM AND JERRY GAME
// #include <bits/stdc++.h>
// int main()
// {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     int n; std::cin>>n;
//     int ans;
//     for (size_t i = 0; i < n; i++)
//     {
//         long long int ts, js;
//         std::cin>>ts;
//         ans =0;
//         for (js = 1; js <= ts; js++)
//         {
//             if(ts%2==0 && js%2==0)
//             {
//             js = js/2;
//             ts = ts/2;
//             }
//             // if(ts%2!=0 && js%2!=0)
//             // {
//             // v[i]=0;
//             // }
//             // if(ts%2==0 && js%2!=0)
//             // {
//             // v[i]=0;
//             // }
//             if(ts%2!=0 && js%2==0)
//             {
//                 ans += 1;
//             }
//         }
//         std::cout<<ans<<"\n";
//     }
//     // for (size_t i = 0; i < n; i++)
//     // {
//     //     std::cout<<v[i]<<"\n";
//     // }
// }


// EVEN MATRIX
// #include <bits/stdc++.h>
// int main()
// {
//     int q;
//     std::cin>>q;
//     for (size_t i = 0; i < q; i++)
//     {
//         int n;
//         std::cin>>n;
//         int a=1;
//         if(n%2!=0)
//         {
//             for (size_t j = 0; j < n; j++)
//             {
//                 for (size_t k = 0; k < n; k++)
//                 {
//                     std::cout<<a<<" ";
//                     a++;
//                 }
//                 std::cout<<"\n";
//             }
//         }
//         else
//         {
//             for (size_t j = 1; j <= n; j++)
//             {
//                 if(j>1)
//                 {
//                     if(a%2!=0)
//                     {
//                         a = a + n-1;
//                     }
//                     else
//                     {
//                         a = a +n+1;
//                     }   
//                 }
//                 for (size_t k = 0; k < n; k++)
//                 {
//                     std::cout<<a<<" ";
//                     if(j%2==0){a--;}
//                     else{a++;}
//                 }
//                 std::cout<<"\n";
//             }
//         }
//     }
// }


// --------------- AFTER RESULT PRACTICE --------

#include <bits/stdc++.h>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long int n; std::cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        long long int a;
        std::cin>>a;
        while (a%2==0)
        {
            a = a/2;
        }
        std::cout<<a/2<<"\n";
    }
}