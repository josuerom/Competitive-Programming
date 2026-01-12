
/**
 *   author:  josuerom
 *   created: 01/08/23 19:26:51
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Arrival_of_the_General {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int n = io.nextInt();
      int[] a = new int[n];
      int max = 0, min = 101;
      int imx = 0, imn = 101;
      for (int i = 0; i < n; i++) {
         a[i] = io.nextInt();
         if (a[i] > max) {
            max = a[i];
            imx = i;
         }
         if (a[i] <= min) {
            min = a[i];
            imn = i;
         }
      }
      solve(n, imx, imn);
      io.close();
      System.exit(0);
   }

   public static void solve(int n, int imax, int imin) {
      if (imax == 0 && imin == n - 1) {
         io.println(0);
         return;
      }
      int ans = (imax > imin) ? -1 : 0;
      while (imax-- > 0)
         ans++;
      while (imin++ < (n - 1))
         ans++;
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