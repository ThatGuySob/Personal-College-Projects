class Loggable:
    def __init__(self):
        # Private variable to hold logs
        self._logs = []

    @property
    def logs(self):
        return self._logs  # Getter to access logs

    def log(self, message: str):
        # Method to log a message
        self._logs.append(message)
        
    def save_logs_to_file(self, filename):
        f = open(filename, 'w')
        for log in self._logs:
            f.write(log + '\n')  
        f.close()
