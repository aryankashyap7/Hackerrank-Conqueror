def is_leap(YEAR):
    '''Checking whether year is a leap year'''
    return YEAR % 4 == 0 and (YEAR % 400 == 0 or YEAR % 100 != 0)

YEAR = int(input())

print(is_leap(YEAR))
