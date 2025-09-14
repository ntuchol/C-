def extract_and_reverse_digits(number):
 
  if number == 0:
    print(0)
    return

  while number > 0:
    digit = number % 10  
    print(digit, end=" ") 
    number //= 10        

extract_and_reverse_digits(12345)
