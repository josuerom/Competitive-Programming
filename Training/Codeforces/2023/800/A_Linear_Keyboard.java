
/**
 *   author:  josuerom
 *   created: 06/08/23 22:18:08
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Linear_Keyboard {
   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         char[] a = io.next().toCharArray();
         char[] s = io.next().toCharArray();
         solve(a, s);
      }
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();
   static ArrayList<Integer> ar = new ArrayList<>();

   public static void solve(char a[], char s[]) {
      int n = a.length, _n = s.length;
      for (int i = 0; i < _n; i++) {
         for (int j = 0; j < n; j++) {
            if (s[i] == a[j]) {
               ar.add(j + 1);
               break;
            }
         }
      }
      _n = ar.size() - 1;
      n = 0;
      for (int i = 0; i < _n; i++) {
         n += abs(ar.get(i) - ar.get(i + 1));
      }
      io.println(n);
      ar.clear();
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