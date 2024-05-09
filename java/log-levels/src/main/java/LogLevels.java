public class LogLevels {
    
    public static String message(String logLine) {
      String message = logLine.split(":")[1];
      return message.trim();
    }

    public static String logLevel(String logLine) {
      String[] parts = logLine.split(":");
      String level = parts[0].replace("[", "").replace("]","").toLowerCase().trim();
      return level;
    }

    public static String reformat(String logLine) {
      String[] parts = logLine.split(":");
      String message = parts[1].trim();
      String level = logLevel(logLine);      
      return String.format("%s (%s)",message, level);
    }
}
