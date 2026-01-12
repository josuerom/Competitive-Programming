
/**
 *   author:  josuerom
 *   created: 04/09/23 17:17:28
**/
import java.io.*;
import java.util.*;
import static java.lang.Math.*;

public class A_Twogram {
   public static void main(String[] args) {
      try (FastReader io = new FastReader()) {
         int n = io.nextInt();
         char[] s = io.next().toCharArray();
         solve(io, n, s);
      }
      System.exit(0);
   }

   public static void solve(FastReader io, int n, char s[]) {
      HashMap<String, Integer> map = new HashMap<String, Integer>();
      int max = -1;
      for (int i = 0; i < n - 1; i++) {
         String key = s[i] + "" + s[i + 1];
         if (map.containsKey(key)) {
            map.put(key, map.get(key) + 1);
            max = max(max, map.get(key));
         } else {
            map.put(key, 1);
            max = max(max, 1);
         }
      }
      Iterator<String> ptr = map.keySet().iterator();
      while (ptr.hasNext()) {
         String key = ptr.next();
         if (map.get(key) == max) {
            io.println(key);
            break;
         }
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

      public FastReader(String idFile) throws FileNotFoundException {
         super("samples/out_" + idFile);
         br = new BufferedReader(new FileReader("samples/" + idFile));
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
            a[i] = nextInt();
         }
         return a;
      }
   }
}