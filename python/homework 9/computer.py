import electronics #import electronics class
class Computer(electronics.Electronic):
    def __init__(self, brand: str, OS: str) -> None:
        super().__init__(brand)
        self.OS = OS
    def set_os(self, OS)-> None: #set os
        self.OS = OS
    def get_os(self) -> str: #get os
        return self.OS