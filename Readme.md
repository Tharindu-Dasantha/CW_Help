# CourseWork Part2 class version

Todo ths first we need to create two classes which are `Customers` and `FoodQueue`

## Customers Class

in this class we need to create a blueprint of a object which is what we used to save each and every customer that enteres the shop  
Priviously we saved the Name of the customer but now we need to save the entire customer  
But what is a customer, according to the specification a customer is something that has a firstname, lastname and a burgercount  
So inside the Customer class lets create a placce to insert those values  

## Customer class

```java
private String firstname;
private String lastname;
private int burgercount;
```

In here we only have created a space to enter the values but we also need to save the values what the user gives and create the object. To do this we ues a special method in java called the constructor, Which we can use to create the object.  

```java
// ususally constructor has the same name as the class
// and it also doesn't have a return method
// in inside the brackets we need to say what inputs we are taking with the type
public Customer(String firstname, String lastname, int burgercount) {
    this.firstname = firstname; // this.firstname means there is a variable called firstname somewhere in this class -> go to that class and change the value to the value given by the user
    this.lastname = lastname;
    this.burgercount = burgercount;
}
```

Since the variables which we used to save names and counts are private, we need to make a getter class that returns the values so we can access them outside of the class

```java
public Customer getCustomers() {
    return Customer;
}
```

## FoodQueue Class

Here we need to do the same as before first chcek what are the things that we need to take from the user. we need to take a size of a array that we need to create and also we need to create a array of customers with that size.  

```java 
private Customer[] customers;
private int size;

public FoodQueue(int size) {
    this.size = size;
    this.customers = new Customer[size];
}

public Customer[] getCustomers() {
    return customers;
}
```

and also since the array is private we cannot add or remove customers from outside of the class itself. So we need to make a method to add or remove customers from the list.

```java
public void addCustomer(Customer customer) {
    for (int i =0; i < customers.length; i++) {
        if (customers[i] == null) {
            customers[i] = customer;
        }
    }
}

public void removeCustomer(Customer customer) {
    for (int i = 0; i< custmers.length; i++) {
        if (custmers[i] == customer) {
            custmers[i] = null;
        }
    }
}
```

also add a method to check if there is a empty space in the array or also if the customer you need to remove is in the list or not. I'm leaving those parts to you.

### Main method Changes

We can use the main method which we create for the first part.  
We only need to change very things  
one thing is that we need to get the customer list every time we need to print or we need to use the add and remove methods to make changes to the customer list.  
To create the customer object and the foodqueue objects we can do  

```java
Customer customer = new Customer("firstName", "lastName", 10);
FoodQueue foodQueue1 = new FoodQueue(2);
FoodQueue foodQueue2 = new FoodQueue(3);
FoodQueue foodQueue3 = new FoodQueue(5);
```

and to add a customer to the food queue, first check which array we need to check which queue we need to add the customer.  
Once we create the customer we can check which queue has the smallest index.  

```java
int index = 10;
Customer[] queue1 = FoodQueue.getCustomers();
for (int i = 0; i < queue1.length; i++) {
    if (queue1[i] == null ) {
        if (i < index) {
            index = i;
        }
    }
}
```

do this to all three arrays and get the smallest out of those three.  
And use the addcustomer method to the add the customer to the selected queue.  
And in the remove method get the name of the customer by the user and then use the remove method which we created to remove the user from the queue.  
And also to print the array we can use the getCustomers method and do the print just like how we did before.  

- when we need to reduce the number of burgers in the burerStock we can create a new getter inside the customer class and use it to get the amount of burgers that the customer wants.  
- And also we can create a get_name method and use it to get the name of the customer when needs.  

when removing a served customer use the getburger method to get the amount of burgers need and then change the burger stock by that amount.  

To print the full name list first create a array with 10 spots then add every member in the 3 queues to that array and then use the same sort method used in the first cw to organize it.  
