
/**
 *   author:  josuerom
 *   created: 24/07/23 19:06:22
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_I_Wanna_Be_the_Guy {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      solve();
      io.close();
      System.exit(0);
   }

   public static void solve() {
      int n = io.nextInt();
      int p = io.nextInt();
      int[] x = io.readArray(p);
      int q = io.nextInt();
      int[] y = io.readArray(q);
      Arrays.sort(x);
      Arrays.sort(y);
      boolean flag = true;
      for (int i = 1; i <= n; i++) {
         int l = Arrays.binarySearch(x, i);
         int c = Arrays.binarySearch(y, i);
         if (l < 0 && c < 0) {
            flag = false;
            break;
         }
      }
      io.println((flag) ? "I become the guy." : "Oh, my keyboard!");
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