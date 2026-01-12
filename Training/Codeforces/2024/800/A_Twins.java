
/**
 *   author:  josuerom
 *   created: 13/08/23 19:05:35
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Twins {
   public static void main(String[] authorJosuerom) {
      int n = io.nextInt();
      int[] a = new int[n];
      int sum = 0;
      for (int i = 0; i < n; i++)
         sum += a[i] = io.nextInt();
      solve(a, n, sum);
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(int a[], int n, int sum) {
      if (n == 1) {
         io.println(1);
         return;
      }
      Arrays.sort(a);
      int ans = 0, b = 0;
      for (int i = n - 1; i >= 0; i--) {
         b += a[i];
         sum -= a[i];
         ans++;
         if ((sum - b) < 0)
            break;
      }
      io.println(ans);
   }

   static class FastReader extends PrintWriter {
      private BufferedReader br;
      private StringTokenizer st;

      public FastReader() {
         this(System.in, System.out);
      }

      public FastReader(InputStream i, OutputStream o) {
         super(o);
         br = new BufferedReader(new InputStreamReader(i));
      }

      public FastReader(String problemName) throws IOException {
         super(problemName + ".out");
         br = new BufferedReader(new FileReader(problemName + ".in"));
      }

      public String next() {
         try {
            while (st == null || !st.hasMoreTokens())
               st = new StringTokenizer(br.readLine());
            return st.nextToken();
         } catch (Exception e) {
            e.printStackTrace();
         }
         return null;
      }

      public String nextLine() {
         String line = null;
         try {
            line = br.readLine();
         } catch (IOException e) {
            e.printStackTrace();
         }
         return line;
      }

      public int nextInt() {
         return Integer.parseInt(next());
      }

      public long nextLong() {
         return Long.parseLong(next());
      }

      public double nextDouble() {
         return Double.parseDouble(next());
      }

      public int[] readArray(int n) {
         int[] a = new int[n];
         for (int i = 0; i < n; i++) {
            a[i] = io.nextInt();
         }
         return a;
      }
   }
}