number = int(input())
for i in range(number):
    number_list = list(map(int,input().split()))
    average = sum(number_list[1:]) / int(len(number_list)-1)
    print(average)
    
    
    
