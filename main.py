import os
head = """
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{

    return 0;
}
"""
for i in range(0, 6):
    for j in range(0, 6):
        dir_path = f"./serie0{i}/"
        old_file = f"{dir_path}exo{j}"
        new_file = f"{old_file}.c"
        if os.path.exists(old_file) and not os.path.exists(new_file):
            os.rename(old_file, new_file)
        with open(new_file, mode="w") as file:
            file.write(head)
