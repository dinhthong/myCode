import time
from datetime import datetime
startTime=str(datetime.now())
drone_logs="Hello I'm thong"
text_file = open("workwithtxt.txt", "w")
text_file.write("Logs for %s \n" % startTime)
text_file.write("%s" % drone_logs)
text_file.close()
