
/**
 *   author:  josuerom
 *   created: 13/08/23 18:43:33
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Football {
   public static void main(String[] authorJosuerom) {
      char[] s = io.next().toCharArray();
      solve(s);
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(char s[]) {
      int n = s.length, ans = 0, t = 0, r = 0;
      for (int i = 0; i < n; i++) {
         if (s[i] == '0') {
            t++;
            r = 0;
            ans = max(ans, t);
         }
         if (s[i] == '1') {
            r++;
            t = 0;
            ans = max(ans, r);
         }
         if (ans == 7)
            break;
      }
      io.println((ans >= 7) ? "YES" : "NO");
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