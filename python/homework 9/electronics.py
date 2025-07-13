class Electronic: #create electronic class
    def __init__(self, brand: str) -> None:
        self.brand = brand
    def set_brand(self,brand) -> None:
        self.brand = brand
    def get_brand(self) -> str:
        return self.brand