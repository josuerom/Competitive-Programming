
/**
 *   author:  josuerom
 *   created: 19/08/23 19:32:35
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Ilya_and_Bank_Account {
   public static void main(String[] authorJosuerom) {
      String n = io.next();
      solve(n);
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();

   public static void solve(String n) {
      if (Integer.parseInt(n) >= 0) {
         io.println(n);
         return;
      }
      int m = n.length() - 1;
      int x = Integer.parseInt(n);
      if (m <= 2 && (n.charAt(m) == '0')) {
         io.println(0);
      } else {
         String a = n.substring(0, m);
         String b = n.substring(0, m - 1) + n.charAt(m);
         io.println(max(Integer.parseInt(a), Integer.parseInt(b)));
      }
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