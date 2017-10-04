public class 027 {
	public static void main(String[] args) {
		int maxNum = 0;
		int maxA = 0;
		int maxB = 0;
		for(int a = -1000; a <= 1000; a++) {
			for(int b = -1000; b <= 1000; b++) {
				int consecutivePrimes = numConsecutivePrimes(a, b);
				if(consecutivePrimes > maxNum) {
					maxNum = consecutivePrimes;
					maxA = a;
					maxB = b;
				}
			}
		}
		System.out.println(maxA * maxB);
	}
	public static int numConsecutivePrimes(int a, int b) {
		int i = 0;
		while(isPrime(i * i + a * i + b)) {
			i++;
		}
		return i;
	}
	public static boolean isPrime(int n) {
		if(n == 2) {
			return true;
		}
		if(n <= 1 || n % 2 == 0) {
			return false;
		}
		for(int i = 3; i * i <= n; i += 2) {
			if(n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
