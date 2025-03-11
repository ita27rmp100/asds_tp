#include <stdio.h>
#include <string.h>

// Define structure for storing person details
struct Person {
    char firstName[50];
    char lastName[50];
    int age;
};

int main() {
    struct Person people[2];
    
    // Input details of two individuals
    for (int i = 0; i < 2; i++) {
        printf("Enter details for person %d:\n", i + 1);
        printf("First Name: ");
        scanf("%s", people[i].firstName);
        
        printf("Last Name: ");
        scanf("%s", people[i].lastName);
        
        printf("Age: ");
        scanf("%d", &people[i].age);
    }

    // Compare ages and find the younger person
    int youngerIndex = (people[0].age < people[1].age) ? 0 : 1;

    // Display the full name of the younger person
    printf("The younger person is: %s %s\n", people[youngerIndex].firstName, people[youngerIndex].lastName);

    return 0;
}