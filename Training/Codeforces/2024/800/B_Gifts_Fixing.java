
/**
 *   author:  josuerom
 *   created: 21/07/23 22:53:57
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class B_Gifts_Fixing {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         long[] ca = io.readArray(n);
         long[] or = io.readArray(n);
         solve(ca, or, n);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(long ca[], long or[], int n) {
      long[] a = ca.clone();
      long[] b = or.clone();
      Arrays.sort(a);
      Arrays.sort(b);
      if (a[0] == a[n - 1] && b[0] == b[n - 1]) {
         io.println(0);
         return;
      }
      long diffA = 0, diffB = 0;
      long minA = a[0], minB = b[0];
      for (int i = 1; i < n; i++) {
         diffA += (long) abs(b[0] - b[i]);
         diffB += (long) abs(a[0] - a[i]);
      }
      if (a[0] == a[n - 1] || b[0] == b[n - 1]) {
         io.println((diffA != 0) ? diffA : diffB);
         return;
      }
      long maxAB = diffA + diffB, diffC = 0;
      for (int i = 0; i < n; i++) {
         if (ca[i] != minA && or[i] != minB) {
            long mA = abs(minA - ca[i]);
            long mB = abs(minB - or[i]);
            diffC += min(mA, mB);
         }
      }
      long ans = abs(maxAB - diffC);
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

      public long[] readArray(int n) {
         long[] a = new long[n];
         for (int i = 0; i < n; i++) {
            a[i] = io.nextLong();
         }
         return a;
      }
   }
}