import copy


class Node():
    def __init__(self, x, y, matrix):
        self.value = matrix[x][y]
        self.x = x
        self.y = y
        self.current_sum = 0

    def calculate(self, matrix_sum):
        if self.x == self.y == 0:
            self.current_sum = self.value
        else:
            a = -1
            b = -1
            if self.y < len(matrix_sum[self.x]) - 1:
                a = matrix_sum[self.x - 1][self.y].current_sum

            if self.y - 1 >= 0:
                b = matrix_sum[self.x - 1][self.y - 1].current_sum

            self.current_sum = max(a, b) + self.value


t = int(input())
for _ in range(t):
    n = int(input())
    matrix = []
    for _ in range(n):
        matrix.append([i for i in list(map(int, input().split()))])
    matrix_sum = copy.copy(matrix)

    for i in range(n):
        for j in range(i + 1):
            a = Node(i, j, matrix)
            a.calculate(matrix_sum)
            matrix_sum[i][j] = a

    maxsum = -1
    for i in range(n):
        j = matrix_sum[n - 1][i].current_sum
        if j > maxsum:
            maxsum = j

    print(maxsum)
