
/**
 *   author:  josuerom
 *   created: 07/08/23 00:46:51
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Stone_Game {
   public static void main(String[] authorJosuerom) {
      int tt = io.nextInt();
      while (tt-- > 0) {
         int n = io.nextInt();
         for (int i = 0; i < n; i++)
            list.add(io.nextInt());
         solve(n);
         list.clear();
      }
      io.close();
      System.exit(0);
   }

   static FastReader io = new FastReader();
   static LinkedList<Integer> list = new LinkedList<>();

   public static void solve(int n) {
      LinkedList<Integer> a = new LinkedList<>(list);
      LinkedList<Integer> b = new LinkedList<>(list);
      LinkedList<Integer> c = new LinkedList<>(list);
      LinkedList<Integer> d = new LinkedList<>(list);
      int ans = n, cnt = 0;
      for (int i = 0, l = 0; i < n; i++) {
         int el = a.getFirst();
         cnt++;
         if (el == 1 || el == n) {
            if (++l == 2)
               break;
         }
         a.removeFirst();
      }
      ans = min(ans, cnt);
      cnt = 0;
      for (int i = 0, l = 0; i < n; i++) {
         int el = b.getLast();
         cnt++;
         if (el == 1 || el == n) {
            if (++l == 2)
               break;
         }
         b.removeLast();
      }
      ans = min(ans, cnt);
      cnt = 0;
      for (int i = 1, l = 0; i <= n; i++) {
         int el = 0;
         if (i % 2 == 0) {
            el = c.getLast();
            cnt++;
            if (el == 1 || el == n)
               l++;
            c.removeLast();
         } else {
            el = c.getFirst();
            cnt++;
            if (el == 1 || el == n)
               l++;
            c.removeFirst();
         }
         if (l == 2)
            break;
      }
      ans = min(ans, cnt);
      cnt = 0;
      for (int i = 1, l = 0; i <= n; i++) {
         int el = 0;
         if (i % 2 == 0) {
            el = d.getFirst();
            cnt++;
            if (el == 1 || el == n)
               l++;
            d.removeFirst();
         } else {
            el = d.getLast();
            cnt++;
            if (el == 1 || el == n)
               l++;
            d.removeLast();
         }
         if (l == 2)
            break;
      }
      ans = min(ans, cnt);
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