// Shahrukh Showkath sxs200232
#include <iostream>
#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class hashTable
{
    public:
        const double load = 0.5;
        int cap = 11;
        int* table = new int[11];
        double inserted = 0;
    
    //public:
        int hashFunction(int key);
        void printTable();
        bool isPrime(int num);
        int nextPrime(int num);
        bool insert(int num);
        void hashResize (int max);
};


int hashTable::hashFunction(int key)
{
    return key % cap;
}

bool hashTable::isPrime(int num)
{
    if (num == 2 || num == 3)
        return true;
    
    if (num == 1 || num % 2 == 0)
        return false;
    
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    
    return true;
    
}

int hashTable::nextPrime(int num)
{
    int nextPrime = num;
    bool found = false;

    while (!found)
    {
        nextPrime++;
        if (isPrime(nextPrime))
            found = true;
    }

    return nextPrime;
}

bool hashTable::insert(int num)
{  
    int i = 1;
    int probed = 0;
    
    
    if ((inserted / cap) >= load)
    {
        hashResize(cap);
    }
    int bucket = hashFunction(num);
    
    while (probed < cap)
    {
        if (!table[bucket] )
        {
            inserted++;
            table[bucket] = num;
            return true;
        }
        bucket = ((num) +  (i * i)) % cap;
        i++;
        probed++;
    }
    
   
    return false;
}

void hashTable::hashResize (int max)
{
    int newMax = nextPrime(max * 2);
    int* newArr = table;
    table = new int[newMax];
    
    for (int i = 0; i < newMax; i++)
    {
        table[i] = 0;
    }
    
    int bucket = 0;
    inserted = 0;
    cap = newMax;
    while (bucket < max)
    {
        if (newArr[bucket])
        {
            int key = newArr[bucket];
            insert(key);
        }
        bucket++;
    }
    delete[] newArr;
}

void hashTable::printTable()
{
    for (int i = 0; i < cap; i++)
    {
        if (!table[i])
            std::cout << "_ ";
        else
            std::cout << table[i] << " ";
    }
}
int main()
{
    int num = 0;
    hashTable hash;
    cin >> num;
    int x = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> x;
        hash.insert(x);
    }
    hash.printTable();
    return 0;
}




