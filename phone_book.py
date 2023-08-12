import time

def add_number(phone_book, name, phone_number):
    phone_book[name] = phone_number
    print(f"Contact with {name} and {phone_number} added.")

def get_contact(phone_book, name):
    if name in phone_book:
        return phone_book[name]
    else:
        return None
    
def all_contacts(phone_book):
    print("Showing all contacts: ")
    for name, phone_number in phone_book.items():
        print(f"{name}:{phone_number}")


def main():
    phone_book = {}

    while True:
        print("1. Add contact")
        print("2. Show contact")
        print("3. Show all contacts")
        print("4. Leave")

        choice = input("Pick one bruv: ")

        if choice == "1":
            name = input("Enter their name: ")
            phone_number = input("Enter their number: ")
            add_number(phone_book, name, phone_number)
        elif choice == "2":
            name = input("Enter the name you want: ")
            phone_number = get_contact(phone_book, name)
            if phone_number:
                print(f"This ur's? {name}: {phone_number}")
            else:
                print(f"{name} not found. LOOK OUT BRUV!")
            
        elif choice == "3":
            all_contacts(phone_book)
        elif choice == "4":
            print("Closing program...")
            time.sleep(1)
            break
        else:
            print("Invalid choice! Pick one of the options below\n\n.")



if __name__ == "__main__":
    main()
    
    