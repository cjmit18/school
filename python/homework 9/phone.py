import computer
class Phone(computer.Computer): # inheriting all previously created classes
    def __init__(self, brand: str, OS: str, phone_number: str):
        super().__init__(brand, OS)
        self.phone_number = phone_number
    def set_number(self, phone_number) -> None:
        self.phone_number = phone_number
    def get_number(self) -> str:
        return self.phone_number
