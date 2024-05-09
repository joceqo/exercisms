import java.util.Map;
import java.util.HashMap;

public class CarsAssemble {
    public static final Map<Integer, Integer> SUCCESS_RATE_PER_SPEED;
    static {
        SUCCESS_RATE_PER_SPEED = new HashMap<>();
        SUCCESS_RATE_PER_SPEED.put(1, 100);
        SUCCESS_RATE_PER_SPEED.put(2, 100);
        SUCCESS_RATE_PER_SPEED.put(3, 100);
        SUCCESS_RATE_PER_SPEED.put(4, 100);
        SUCCESS_RATE_PER_SPEED.put(5, 90);
        SUCCESS_RATE_PER_SPEED.put(6, 90);
        SUCCESS_RATE_PER_SPEED.put(7, 90);
        SUCCESS_RATE_PER_SPEED.put(8, 90);
        SUCCESS_RATE_PER_SPEED.put(9, 80);
        SUCCESS_RATE_PER_SPEED.put(10, 77);
    }

    public static final int productionRatePerHour = 221;
    public double productionRatePerHour(int speed) {
      if (speed == 0) {
        return 0;
      }
        return speed * productionRatePerHour * SUCCESS_RATE_PER_SPEED.get(speed) / 100.0;
    }

    public int workingItemsPerMinute(int speed) {
      if(speed == 0) {
        return 0;
      }
        return (int) Math.floor(speed * productionRatePerHour * SUCCESS_RATE_PER_SPEED.get(speed) / 100.0 / 60);
    }
}

