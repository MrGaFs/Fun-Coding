num = int(input())
# to save the value of num
tmp = num
# the variable that I creat in it the new value after reversing
x = 0
# List of the reversed numbers
# (if number have no reverse then it will be reprsented with -1)
#    [0, 1, 2,  3,  4, 5, 6,  7, 8, 9]
ls = [0, 1, 5, -1, -1, 2, 9, -1, 8, 6]
# boolean to check if the number is reversable
ok = True
# the loop is to check every number in the original number and reverse it
# I make the loop with value tmp becuase when the value tmp reches 0
# it will stop
while tmp:
    x *= 10
    # make variable tmp_1 the revesed value of the last digit
    tmp_1 = ls[int(tmp % 10)]
    # check it the num is reversable or not (if not the loop will end)
    if tmp_1 == -1:
        ok = False
        break
    # add the reversed value to the vairable x
    x += tmp_1
    # delete the last num
    tmp = tmp // 10
# check if the reversed variable x is equal to the orginal number and 
# the number is reversable
if x == num and ok:
    print(f'The number {num} is strobogrammatic number.')
else:
    print(f'The number {num} is not astrobogrammatic number.')
