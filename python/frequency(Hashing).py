def find_frequency(array):
    freq = {}
    for number in array:
        if number in freq:
            freq[number]+=1
        else:
            freq[number] = 1
    return freq



numbers = [1,2,2,3,1,1,4,5,7,7,4]

print(max(numbers))

result = find_frequency(numbers)

print(result)
