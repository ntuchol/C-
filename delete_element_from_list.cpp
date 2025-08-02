my_list = [1, 2, 3, 2, 4]
my_list.remove(2)  # Removes the first '2'
print(my_list)  # Output: [1, 3, 2, 4]

my_list = [1, 2, 3, 4, 5]
del my_list[2]  # Deletes element at index 2 (value 3)
print(my_list)  # Output: [1, 2, 4, 5]

del my_list[1:3]  # Deletes elements from index 1 up to (but not including) index 3
print(my_list)  # Output: [1, 5]
