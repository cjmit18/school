import java.util.Random;

public class Consumer implements Runnable {
    private final SharedBuffer buffer;
    private final Random random = new Random();

    public Consumer(SharedBuffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        // TODO: Consume 10 integers from buffer
        for(int i = 0; i < 10; i++) {
            try {
                int value = buffer.take(); // Remove from buffer
                System.out.println(Thread.currentThread().getName() + " consumed: " + value);
                // Sleep for random interval between 100-500 ms
                Thread.sleep(100 + random.nextInt(401));
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                break;
            }
        }
    }
}
