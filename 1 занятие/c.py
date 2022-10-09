with open("input.txt") as file:
    f, c = map(int, file.readline().split())

with open("output.txt", "w") as file:
    file.write(str(5 / 9 * (f - 32)))
    file.write(" ")
    file.write(str(9 / 5 * c + 32))