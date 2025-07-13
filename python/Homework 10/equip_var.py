class pieces():
    def __init__(self,equipment,total,value):
        self.equipment = equipment
        self.total = total
        self.value = value
    def get_info(self):
        return self.equipment,self.total,self.value
        