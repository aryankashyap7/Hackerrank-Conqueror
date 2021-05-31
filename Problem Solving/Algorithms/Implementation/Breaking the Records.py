limit=9
#scores=[10,5,20,20,4,5,2,25,1]
scores=[int(x) for x in input().split(" ")]
lowest=0
highest=0
low=scores[0]
high=scores[0]
for i in range(0,limit+1):
    if(i==limit):
        break
    elif(low==scores[i]):
        i+=1
    elif(low>scores[i]):
        low=scores[i]
        lowest+=1
        i+=1
    elif(low<scores[i]):
        if(scores[i]>high):
            high=scores[i]
            highest+=1
        i+=1    
print(highest,lowest)    
