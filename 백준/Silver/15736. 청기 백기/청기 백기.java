import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int N = Integer.parseInt(br.readLine());
        int ans = 1;
        for(int i = 2; i<= N; i++){
            if(i*i > N)
                break;
            ans++;
        }
        bw.write(String.valueOf(ans));
        bw.flush();
    }
}
