
/**
 *   author:  josuerom
 *   created: 07/08/23 20:15:37
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Arithmetic_Array {
   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         int sum = 0;
         for (int i = 0; i < n; i++)
            sum += io.nextInt();
         solve(sum, n);
      }
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(int sum, int n) {
      if (sum <= 0 || sum < n) {
         io.println(1);
         return;
      }
      io.println(abs(n - sum));
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