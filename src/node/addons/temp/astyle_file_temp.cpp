/*
Generated by Luogu.js (within O-ide)

题目：T129159 【背包】【模板】完全背包

有 N 种物品和一个容量是 V 的背包，每种物品都有无限件可用。

第 i 种物品的体积是 vi，价值是 wi。

求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
输出最大价值。

 提示：0<N,V≤1000

0<vi,wi≤1000
输入格式：第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。

接下来有 N 行，每行两个整数 vi,wi，用空格隔开，分别表示第 i 种物品的体积和价值。
输出格式：输出一个整数，表示最大价值。
示例输入/输出
--------------------------------
输入1:
4 5
1 2
2 4
3 4
4 5

输出1:
10
--------------------------------
*/

/*--Luogu.js生成的初始代码--*/
/*
Generated by Luogu.js (within O-ide)

题目：T129159 【背包】【模板】完全背包

有 N 种物品和一个容量是 V 的背包，每种物品都有无限件可用。

第 i 种物品的体积是 vi，价值是 wi。

求解将哪些物品装入背包，可使这些物品的总体积不超过背包容量，且总价值最大。
输出最大价值。

 提示：0<N,V≤1000

0<vi,wi≤1000
输入格式：第一行两个整数，N，V，用空格隔开，分别表示物品种数和背包容积。

接下来有 N 行，每行两个整数 vi,wi，用空格隔开，分别表示第 i 种物品的体积和价值。
输出格式：输出一个整数，表示最大价值。
示例输入/输出
--------------------------------
输入1:
4 5
1 2
2 4
3 4
4 5

输出1:
10
--------------------------------
*/

/*--Luogu.js生成的初始代码--*/
#include<bits/stdc++.h>
using namespace std;
int w[3000],c[3000],f[400000];
int V,n;
int main()
{
    cin>>n>>V;
    for(int x=0; x<n; x++)cin>>w[x]>>c[x];

    for(int x=0; x<n; x++)
        for(int y=w[x]; y<=V; y++)
            f[y]=max(f[y],f[y-w[x]]+c[x]);
    cout<<f[V];
    return 0;
}




/*----End of generation-----*/

