n = int(input())
 
stack = [0] * n
stack_size = 0
 
for i in range(n):
    parts = input().strip().split()
 
    if parts[0] == '1':
        stack[stack_size] = int(parts[1])
        if stack_size > 0:
            stack[stack_size] = min(stack[stack_size], stack[stack_size - 1])
        stack_size += 1
 
    elif parts[0] == '2':
        stack_size -= 1
 
    else:  # parts[0] == '3'
        print(stack[stack_size - 1])