import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ConcurrencyDriver {
    public static void main(String[] args) {
        // TODO: Create shared buffer
        SharedBuffer buffer = new SharedBuffer();
        // TODO: Create and submit 2 producers and 2 consumers using ExecutorService
        ExecutorService executor = Executors.newFixedThreadPool(4);
        for (int i = 0; i < 2; i++) {
            executor.submit(new Producer(buffer));
            executor.submit(new Consumer(buffer));
        }
        executor.shutdown();
}
};