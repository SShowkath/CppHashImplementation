# Quadratic Probing Hash Table

This program implements a hash table with **quadratic probing** for collision resolution and **dynamic resizing** to maintain efficiency.

---

## **Features**
- Resolves collisions using quadratic probing: 
  bucket = (hash(key) + i^2) % capacity
- Resizes the table when the load factor exceeds 0.5, doubling capacity and ensuring it remains a prime number.
- Prints the table, showing `_` for empty slots and values for occupied buckets.

---

## **Implementation**
1. **`hashFunction(int key)`**:
   - Computes the hash as `key % capacity`.

2. **`isPrime(int num)`** and **`nextPrime(int num)`**:
   - Verify and find the next prime number for resizing.

3. **`insert(int num)`**:
   - Inserts a number, rehashing when the load factor exceeds 0.5.

4. **`hashResize(int max)`**:
   - Doubles capacity, adjusts to the next prime, and rehashes all elements.

5. **`printTable()`**:
   - Outputs the hash table with `_` for empty slots.

---

