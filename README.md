# Quadratic Probing Hash Table

This program implements a **quadratic probing hash table** in C++. It provides functionality for inserting integers, dynamically resizing the hash table, and printing its contents.

---

## **Features**

1. **Hash Table with Quadratic Probing**:
   - Resolves collisions using quadratic probing:
     \[
     \text{bucket} = (\text{hash(key)} + i^2) \% \text{capacity}
     \]
     where \(i\) is the probe count.

2. **Dynamic Resizing**:
   - Automatically resizes the table when the load factor exceeds 0.5.
   - Resizing doubles the table's capacity and adjusts it to the next prime number for better hash distribution.

3. **Prime Number Utilities**:
   - Ensures the hash table's capacity is always a prime number, reducing clustering and improving performance.

4. **Table Printing**:
   - Prints the hash table with `_` for empty buckets and the stored value for occupied buckets.

---

## **How It Works**

1. **Hash Function**:
   - Computes the hash value:
     \[
     \text{hash} = \text{key} \% \text{capacity}
     \]

2. **Collision Resolution**:
   - If a collision occurs, quadratic probing calculates the next bucket:
     \[
     \text{bucket} = (\text{hash(key)} + i^2) \% \text{capacity}
     \]

3. **Resizing**:
   - When the load factor exceeds 0.5:
     - The capacity is doubled.
     - The new capacity is adjusted to the next prime number.
     - All existing elements are rehashed into the new table.

4. **Insertion**:
   - The program inserts integers into the hash table, using the hash function and quadratic probing to handle collisions.
   - Resizes the table if necessary.

5. **Printing**:
   - Outputs the current state of the hash table:
     - `_` for empty buckets.
     - Stored values for occupied buckets.

---

## **Example**

### Input:
