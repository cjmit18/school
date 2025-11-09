import java.util.concurrent.ArrayBlockingQueue;

public class SharedBuffer {
    // TODO: Create an ArrayBlockingQueue with size 5
    ArrayBlockingQueue<Integer> buffer = new ArrayBlockingQueue<>(5);
    // TODO: Add put() and take() methods that will be used by Producer and Consumer
    public void put(int value) throws InterruptedException {
        buffer.put(value);
    }
    public int take() throws InterruptedException {
        return buffer.take();
    }
};
