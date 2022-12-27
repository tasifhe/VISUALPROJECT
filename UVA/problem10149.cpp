#include<algorithm>
#include<stdio.h>
#include<string.h>

using namespace std;
#define STATE 8192
#define STATE2 64   //bonus use
#define DICESIZE 13

int DICE [13][5];
int score_cat(int dice[], int cat)
{
    int t = 0,i;
    int D[7];
    switch(cat)
    {
        case1: case2: case3: case4: case5: case6:
        for(i=0;i<5;i++)
            if(dice[i] == cat)
                t += cat;
                break;
        //for chance
        case 7:
        for(i=0;i<5;i++)
            t += dice[i];
            break;
        //three of a kind
        case 8:
        if(dice[0] == dice[2] || dice[1] == dice[3] || dice[2] == dice[4])
        for(i=0;i<5;i++)
            t += dice[i];
            break;
        //four of a kind
        case 9:
        if(dice[0] == dice[3] || dice[1] == dice[4])
        for(i=0;i<5;i++)
            t += dice[i];
        //five of a kind
        case 10:
        if(dice[0] == dice[4])
            t = 50;
            break;
        //short straight
        case 11:
        for(i=0;i<=6;i++)
            D[i] = 0;
        for(i=0;i<5;i++)
            D[dice[i]] = 1;
        for(i=1;i<=3;i++)
        {
            if(D[i] && D[i+1] && D[i+2] && D[i+3])
                t =25;
        }
        break;
        //long straight
        case 12:
        for(i=0;i<4;i++)
        {
            if(dice[i] != dice[i+1]-1)
                return 0;
        }
        t =35;
        break;
        //full house
        case 13:
        if(dice[0] == dice[1] && dice[2] == dice[4])
            t =40;
        if(dice[0] == dice[2] && dice[3] == dice[4])
            t = 40;
            break;
    }
    return t;
}

int count(int n)
{
    static int i,j;
    for(i=0,j=0;i<13;i++)
        j += (n>>i) & 1;
        return j;
}
int dp[STATE][STATE2]; //MAX SCORE
int score[DICESIZE][DICESIZE];
int arg_dp[STATE][STATE2][2];

void solu_dp()
{
    int i,j,k,p,q;
    for(i=0;i<13;i++)
        for(j=0; j<13;j++)
            score[i][j] = score_cat(DICE[i], j+1);
            memset(dp, -1, sizeof(dp));
            dp[0][0] = 0;
    int s, nstate, a,b;
    for(k = 0;k<13;k++) //add DICE[k]
    {
        for(i=0;i<STATE; i++)   //i=STATE MARK
        {
        if(count(i) == k)
        {
            for(j=0;k<13;j++)
            {   
                if (!(i>>j)&1)
                {
                    s = score[k][j];
                    nstate = i|(1<<j);
                    a = j < 6 ? s:0;
                    for(p=0;p<STATE2;p++)
                    {
                        if(dp[i][p] >= 0)
                        {
                            b = (p+a < 63) ? p+a : 63;
                            if(dp[nstate][b] < dp[i][p]+s)
                            {
                                dp[nstate][b] = dp[i][p]+s;
                                arg_dp[nstate][b][0] = j;
                                arg_dp[nstate][b][1] = p;
                            }
                        }
                    }
                }
            }
        }
    }
}
    int mx = 0, bonus =0;
    for(i=0; i<63; i++)
        if(dp[STATE-1][i] > mx)
        {
            mx =dp[STATE-1][i];
            b =1;
        }
        if(dp[STATE-1][63] >= 0 && dp[STATE-1][63]+35 > mx)
        {
            mx = dp[STATE-1][63]+35;
            b= 63;
            bonus = 35;
        }
        //backtracking
        int catagory[13], state = STATE-1;
        int  ans[13];
        for(i =12;i>=0; i--)
        {
            catagory[i] = arg_dp[state][b][0];
            b= arg_dp[state][b][1];
            state ^= 1<<catagory[i];
            ans[catagory[i]] =  score[i][catagory[i]];
        }
        for(i=0;i<13;i++)
        printf("%d", ans[i]);
        printf("%d %d\n", bonus, mx);
}
int main()
{
    int i,j;
    while (1)
    {
        for(i=0;i<13;i++)
        {
            for(j=0;j<5;j++)
            {
                if(scanf("%d", &DICE[i][j]) !=1 )
                return 0;
            }
            sort(DICE[i], DICE[i]+5);
        }
        puts("=== START");
        solu_dp();
    }
    return 0;
}