def sieve_of_eratosthenes(limit: int):
    # Initialize a boolean array for primality; assume all numbers are prime initially
    is_prime = [True] * (limit + 1)
    is_prime[0] = is_prime[1] = False  # 0 and 1 are not primes

    # Sieve process
    for i in range(2, int(limit ** 0.5) + 1):
        if is_prime[i]:
            # Mark all multiples of i as non-prime
            for j in range(i * i, limit + 1, i):
                is_prime[j] = False

    return is_prime

# Example usage:
LIMIT = 10**6
is_prime = sieve_of_eratosthenes(LIMIT)

# Print some results
print("{", end="")
for i in is_prime:
    if i :
        print("true, ", end="")
    else :
        print("false, ", end="")

print("}", end="")
