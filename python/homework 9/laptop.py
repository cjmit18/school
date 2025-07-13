import computer
class laptop(computer.Computer):
    def __init__(self, brand: str, OS: str, battery_life: str):
        super().__init__(brand, OS)
        self.battery_life = battery_life
    def set_battery(self, battery_life):
        self.battery_life = battery_life
    def get_battery(self):
        return self.battery_life