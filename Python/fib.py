def fib(N: int) -> int:
        fib = [0 for i in range(N+1)]
        fib[1] = 1
        for i in range(2, N+1):
            fib[i] = fib[i-1] + fib[i-2]
            print(fib)
            
        return fib[N]


print(fib(3))