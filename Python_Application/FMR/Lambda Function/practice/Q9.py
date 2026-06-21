#9. **HackerRank — Validating Email Addresses With a Filter**: https://www.hackerrank.com/challenges/validate-list-of-email-address-with-filter/problem (use `filter` with a lambda-friendly validation function).
import re
def email_validator(email):
    regex = r'^[A-Za-z0-9_-]+@[A-Za-z0-9]+\.[A-Za-z]{1,3}$'
    return re.match(regex , email)

def email_result(lst):
    result = list(filter(email_validator , lst))
    return result

lst = ["lara@hackerrank.com", "invalid@.com" , 'abhay@.gmailcom']
ans = email_result(lst)
print(ans)