#!/bin/python3

import math
import os
import random
import re
import sys
##########################################################################################################
# https://www.hackerrank.com/contests/target-codevita-1/challenges/the-birthday-bar
###########################################################################################################
# Complete the birthday function below.
def birthday(s, d, m):
    # Function Calling : ------   birthday with three arguments (list of elements, date of birth, month of birth)
    
    #First thing is to initialze a variable 'count' to store and count the possible combinations
    count = 0       # initialize to zero
    
    # take the length of list, where the number of elements present in list store to a variable 'n'
    # This 'n' will help in iterate the loop,  n times
    n=len(s)
    
    # Apply a for loop, to iterate it element-wise
    for i in range(n):
        #one - by- one each element traverse
        #to check the sum of m pieces, a temporary variable 'sum' is initialize to zero 
        sum=0
        
        #as per the constraint, the sum of 'm' values should be taken
        # if i+m elements are not present in list, then loop terminates immediately, else work iteratively
        if i+m > n:
            break       # terminate immediately
        else:    # i+m elements are feasible to compute
            # check for the next 'm' elements sum
            # the sum variable stores the value of elements start from 'i'th element till 'i + m'th element
            for j in range(m):
                sum = sum + s[i+j]
            
            # if the sum of 'm' pieces of chocolate is equal to 'd' date of birth, then increase the value of count
            if sum == d:
                count=count + 1
    #When both the for loops terminate, the final value is returned from function in form of count
    return count
#######################################################################################################################

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    
    # Input the number of blocks/pieces in chocolate
    # Integer value is stored in variable 'n'
    n = int(input().strip())

    #Enter the list of integers which are present on the chocolate in a series
    # Integer value per piece of chocolate
    
    s = list(map(int, input().rstrip().split()))

    # Enter the Date and month of the birth of Ron 
    dm = input().rstrip().split()

    #Variable d stores the value of date of Ron's Birth and the sum of pieces of chocolate should be equal to this only
    d = int(dm[0])

    #Variable m stores the value of month of Ron's Birth and the number of pieces of chocolate should be equal to this only
    m = int(dm[1])

    # Function Calling : ------   birthday with three arguments (list of elements, date of birth, month of birth)
    result = birthday(s, d, m)

    # Function will return the value in variable result
       
    fptr.write(str(result) + '\n')

    fptr.close()
    
# https://www.hackerrank.com/contests/target-codevita-1/challenges/the-birthday-bar
