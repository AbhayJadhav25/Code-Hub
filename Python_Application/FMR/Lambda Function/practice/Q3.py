#Q3. Use `filter()` with a lambda to extract only the palindromic strings from a list of words.

def isPalindrome(word):
    left = 0 
    right = len(word)-1
    while(left < right):
        if word[left] != word[right]:
            return False
        left+=1
        right-=1
    return True

words = ["madam", "apple", "racecar", "banana"]
palindrome_list = list(filter(lambda x : isPalindrome(x) , words))
print(palindrome_list)

#one_line expression
palindrome = list(filter(lambda x : x == x[::-1] , words))
print(palindrome)
