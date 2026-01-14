import java.util.Random;

public class Producer implements Runnable {
    private final SharedBuffer buffer;
    private final Random random = new Random();

    public Producer(SharedBuffer buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        // TODO: Generate 10 random integers and insert into buffer
        for(int i = 0; i < 10; i++) {
            int value = random.nextInt(100) + 1; // Generate random integer between 1-100
            try {
                buffer.put(value); // Insert into buffer
                System.out.println(Thread.currentThread().getName() + " produced: " + value);
                // Sleep for random interval between 100-500 ms
                Thread.sleep(100 + random.nextInt(401));
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                break;
            }
        }
    }
}