import itertools

def print_next_permutation(lst):
    itr = itertools.permutations(lst)
    print(list(itr))
    for i in itr:
        print(list(i),type(list(i)), id(list(i)))

lst = [1,3,2]
print_next_permutation(lst)