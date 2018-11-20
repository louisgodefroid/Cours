# coding: utf-8

import pdb

def sort(array):
    for i in range(1, len(array)):
        current = array[i]
        print(f"* current: {current}, index: {i}")
        j = i
        while j > 0 and current < array[j - 1]:
            array[j] = array[j - 1]
            j -= 1
        array[j] = current
    return array

if __name__ == '__main__':
    array = [6, 5, 3, 1, 8, 7, 2, 4]
    print(sort(array))
