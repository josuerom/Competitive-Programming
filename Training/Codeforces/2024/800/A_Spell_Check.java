
/**
 *   author:  josuerom
 *   created: 23/07/23 18:54:02
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Spell_Check {
   static FastReader io = new FastReader();

   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         char[] s = io.next().toCharArray();
         solve(n, s);
      }
      io.close();
      System.exit(0);
   }

   public static void solve(int n, char s[]) {
      boolean flag = (n == 5) ? true : false;
      if (!flag) {
         io.println("NO");
         return;
      }
      Arrays.sort(s);
      char[] c = { 'T', 'i', 'm', 'r', 'u' };
      for (int i = 0; i < n; i++) {
         if (c[i] != s[i]) {
            flag = false;
            break;
         }
      }
      io.println((flag ? "YES" : "NO"));
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