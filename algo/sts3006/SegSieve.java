import java.util.Vector; 
import static java.lang.Math.sqrt; 
import static java.lang.Math.floor; 

class SegSieve {
    static void sieve(int limit, Vector<Integer> prime) { 
        boolean res[] = new boolean[limit+1]; 

        for (int i = 0; i < res.length; i++) { 
            res[i] = true; 
        }

        for (int p=2; p*p<limit; p++) {
            if (res[p] == true) {
                for (int i=p*p; i<=limit; i+=p) {
                    res[i] = false;
                }
            }
        }

        for (int p=2; p<limit; p++)
        {
            if (res[p] == true) {
                prime.add(p); 
                System.out.print(p + " ");
            }
        }
    }

    static void segSieve(int n) {
        int limit = (int) (floor(sqrt(n)) + 1); 
        Vector<Integer> prime = new Vector<>(); 
        sieve(limit, prime);

        int low = limit; 
        int high = 2*limit; 

        while (low < n) { 
            if (high >= n) 
                high = n; 
            
            boolean res[] = new boolean[limit+1]; 
            for (int i=0; i < res.length; i++) {
                res[i] = true; 
            }

            for (int i=0; i<prime.size(); i++) {
                int lo = (int) (floor(low/prime.get(i)) * prime.get(i));
                if (lo < low)
                    lo += prime.get(i); 

                for (int j=lo; j<high; j+= prime.get(i))
                    res[j-low] = false; 
        }

        for (int i = low; i<high; i++)
            if (res[i-low] == true)
                System.out.print(i + " ");

        low += limit; 
        high += limit; 
        }
    }   

    public static void main(String args[]) { 
        int n = 100; 
        segSieve(n); 
    }
}