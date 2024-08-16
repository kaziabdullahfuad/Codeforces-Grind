def maxmoney(houses,n,curindex):

    if(curindex>=n):
        return 0
    
    takeit=houses[curindex]+maxmoney(houses,n,curindex+2)

    nottakeit=maxmoney(houses,n,curindex+1)

    return max(takeit,nottakeit)

def maxmoneymemodp(houses,n,curindex,dp):

    if(curindex>=n):
        return 0
    elif(dp[curindex]!=-1):
        return dp[curindex]
    
    takeit=houses[curindex]+maxmoneymemodp(houses,n,curindex+2,dp)

    nottakeit=maxmoneymemodp(houses,n,curindex+1,dp)

    dp[curindex]=max(takeit,nottakeit)
    return dp[curindex]
    
def maxmoneybottomup(houses,n,curindex):
    
    if(n==2):
        return max(houses[0],houses[1])
    
    holder=houses
    print(houses)

    for i in range(2,n):
        holder[i]=max(holder[i]+holder[i-2],holder[i-1])

    print(holder)

    return holder[n-1]


# n=7
# houses=[6,7,1,30,8,2,4]
n=6
houses=[10,2,30,20,3,50]
dp=[-1]*(n+1)
# print(dp)
# #print(maxmoney(houses,n,0))
# print(maxmoneymemodp(houses,n,0,dp))
# print(dp)

print(maxmoneybottomup(houses,n,0))