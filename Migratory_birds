#!/bin/python3

import math
import os
import random
import re
import sys

############################################################################################################
#https://www.hackerrank.com/contests/target-codevita-1/challenges/migratory-birds
############################################################################################################
# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    # Calling of migratoryBirds function with an argument 'arr' a list of birds seen in sequence
    # initaillization is done in main function
    
    #Next Step:  Declare empty dictionary d = { }
    # Dictioanry has taken, as the Type of bird act as 'key' and its frequency in 'value' format
    d={}
    
    # to count the frequency, Traverse the list
    # one-by-one, all the indexes are traversed ; for loop with temporary variable i 
    #Next Step:  frequency count
    for i in arr:
        
        # if the bird type is not seen, and a new entry is to be done; take value d[i] = 1
        if i not in d.keys():
            d[i] = 1
        else:
            #if the bird type is already seen, and bird entry is present in dictionary, just increase the value d[i]+=1
            d[i] += 1
    
    # once all the iterations completed, dictionary carry all type of birds with their seen count
    print(d)
    
    
    #Next Step: find maximum value among all the birds
    # call a max function, and apply it on d.values()
    f = max(d.values())
    
    #To find the bird type, and finding a key value, for loop is used
    for key, value in d.items(): 
         if f == value: 
                r = key   #type of bird
                break
    
    # Function return a bird type of commmonly seen bird.
    return r        

############################################################################################################
   
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    #Take the input from user to tell "number of birds" sighting in sequence
    arr_count = int(input().strip())

    #Take the input in sequence and store it in list type
    arr = list(map(int, input().rstrip().split()))

    # Calling of migratoryBirds function with an argument 'arr' a list of birds seen in sequence
    result = migratoryBirds(arr)

    # Function will return a type of bird seen most common frequency in variable "result"
    fptr.write(str(result) + '\n')

    fptr.close()

############################################################################################################
#https://www.hackerrank.com/contests/target-codevita-1/challenges/migratory-birds
############################################################################################################
