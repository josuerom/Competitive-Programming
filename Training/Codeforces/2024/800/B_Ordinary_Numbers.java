
/**
 *   author:  josuerom
 *   created: 23/07/23 23:34:54
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class B_Ordinary_Numbers {
   static FastReader io = new FastReader();
   static final int N = 1_000_000_000;
   static int[] orn = new int[73];

   public static void main(String[] authorJosuerom) {
      ordinaryNumbers(orn);
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         solve(n);
      }
      io.close();
      System.exit(0);
   }

   public static void ordinaryNumbers(int orn[]) {
      int inc = 2, j = 11, n = orn.length;
      for (int i = 0, l = 0; l < n - 1; l++) {
         i += j;
         orn[l] = i;
         if (i == 99 || i == 999 || i == 9999 || i == 99999 || i == 999999 || i == 9999999 || i == 99999999
               || i == 999999999) {
            inc = inc * 10 - 8;
            i += inc;
            ++l;
            orn[l] = i;
            j = j * 10 + 1;
         }
      }
   }

   public static void solve(int n) {
      if (n <= 11) {
         io.println((n == 10) ? 9 : (n == 11) ? 10 : n);
         return;
      }
      if (n == N - 1 || n >= N) {
         io.println(81);
         return;
      }
      int ans = 9, i = 0;
      while (n >= orn[i]) {
         ans++;
         i++;
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