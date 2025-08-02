def extract_and_reverse_digits(number):
  """
  Extracts the digits of an integer and prints them in reverse order.

  Args:
    number: The integer from which to extract and reverse digits.
  """
  if number == 0:
    print(0)
    return

  while number > 0:
    digit = number % 10  # Get the last digit
    print(digit, end=" ") # Print the digit
    number //= 10        # Remove the last digit

# Example usage:
extract_and_reverse_digits(12345)