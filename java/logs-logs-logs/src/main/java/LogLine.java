public class LogLine {
    private LogLevel logLevel;
    private String message;

    public LogLine(String logLine) {
      String logLevelString = logLine.substring(1, 4);
      this.message = logLine.substring(7);
      switch (logLevelString) {
        case "TRC":
          logLevel = LogLevel.TRACE;
          break;
        case "DBG":
          logLevel = LogLevel.DEBUG;
          break;
        case "INF":
          logLevel = LogLevel.INFO;
          break;
        case "WRN":
          logLevel = LogLevel.WARNING;
          break;
        case "ERR":
          logLevel = LogLevel.ERROR;
          break;
        case "FTL":
          logLevel = LogLevel.FATAL;
          break;
        default:
          logLevel = LogLevel.UNKNOWN;
          break;
      }
    }

    public LogLevel getLogLevel() {
      return logLevel;
    }

    public String getOutputForShortLog() {
      int shortLogLevel = logLevel.getValue();
      return shortLogLevel + ":" + this.message;
    }
}
