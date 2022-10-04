def combinations(n):
    # Find Fibonacci numbers not exceeding n, along with their indices.
    # We don't need Fib(0) or Fib(1), so start at Fib(2).
    fibs = []
    a, b, index = 1, 2, 2
    while a <= n:
        fibs.append((index, a))
        a, b, index = b, a + b, index + 1

    # Compute greedy representation of n as a sum of Fibonacci numbers;
    # accumulate the indices of those numbers in indices.
    indices = []
    for index, fib in reversed(fibs):
        if n >= fib:
            n -= fib
            indices.append(index)
    indices = indices[::-1]

    # Compute the 'signature' of the number: the lengths of the pieces
    # of the form 00...01.
    signature = [i2 - i1 for i1, i2 in zip([-1] + indices[:-1], indices)]

    # Iterate to simultaneously compute total number of rewrites,
    # and the total number with the top bit set.
    total, top_set = 1, 1
    for l in signature:
        total, top_set = ((l + 2) // 2 * total - (l + 1) % 2 * top_set, total)

    # And return the grand total.
    return total