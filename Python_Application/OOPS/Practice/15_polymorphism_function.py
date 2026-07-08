class Pen:
    def use(self):
        return "Writing"
class Ereaser:
    def use(self):
        return "Eraser"
    
def perform_task(tool):
    print(tool.use())

perform_task(Pen())
perform_task(Ereaser())