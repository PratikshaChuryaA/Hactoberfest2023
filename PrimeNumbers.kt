fun isPrimeNumber(n: Int): Boolean {
    if (n <= 1) return false
    for (i in 2..n / 2) {
        if (n % i == 0) return false
    }
    return true
}

fun primeNumbersWithinARange(start: Int, end: Int) {
    for (i in start..end) {
        if (isPrimeNumber(i)) {
            println(i)
        }
    }
}

fun main(args: Array<String>
    primeNumbersWithinARange(1, 100)
}
