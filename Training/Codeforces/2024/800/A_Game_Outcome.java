
/**
 *   author:  josuerom
 *   created: 28/08/23 11:20:48
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Game_Outcome {
   public static void main(String[] authorJosuerom) {
      int n = io.nextInt();
      int[][] m = new int[n][n];
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++)
            m[i][j] = io.nextInt();
      }
      solve(m, n);
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(int m[][], int n) {
      int[] sumr = new int[n];
      int[] sumc = new int[n];
      for (int i = 0; i < n; i++) {
         int sr = 0, sc = 0;
         for (int j = 0; j < n; j++)
            sr += m[i][j];
         for (int l = 0; l < n; l++)
            sc += m[l][i];
         sumr[i] = sr;
         sumc[i] = sc;
      }
      int ans = 0;
      for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
            if (sumc[i] > sumr[j])
               ans++;
         }
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