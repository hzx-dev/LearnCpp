import os
import time
import random

index = 1

for i in range(100000, int(1e6), 7):
    if random.randint(1, 2) == 1 and i % 1000 == 0 and i % 1145 == 0 and random.choice([True, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False, False]) == True:
        continue
    if index > 20:
        break
    for j in range(len(str(i))):
        if random.randint(1, 2) == 1 and j % 114 == 0:
            continue
        print(f"\rGenerating test data {index}...", end="")
        
        print(f"\rGenerating test data {index}... Saving output to file...", end="")
        with open(f"./input.in", "w") as f:
            f.write(f"{i} {j}\n")
        print(f"\rGenerating test data {index}... The output data is saved... Ready to running program...", end="")
        
        print(f"\rGenerating test data {index}... Running program...                                     ", end="")
        os.system("./移除掉k位数字")
        print(f"\rGenerating test data {index}... Program run completed...                                ", end="")
        
        print(f"\rGenerating test data {index}... Moving test data {index} to folder.                    ", end="")
        os.rename("./input.in", f"./RMkTestData/input{index}.in")
        os.rename("./output.out", f"./RMkTestData/output{index}.out")
        print(f"\rGenerating test data {index}... Test data {index} is moved to folder.                    ", end="")
        
        print(f"\rGenerating test data {index}... Completed.                                  ", end="")
        index += 1
        if index > 20:
            break

print("\nAll test data is generated and saved to folder.")
print("Done!")