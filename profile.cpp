#include <iostream>
#include <string>
#include "profile.hpp"


Profile::Profile(std::string username, int age, std::string city, std::string country, std::string pronouns) {
    // Constructor implementation
}

std::string Profile::view_profile() {
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies:\n";

  for (std::string hobby : hobbies) {

    hobby_string += " - " + hobby + "\n";

  }

  return bio + "\n" + hobby_string;

    
}

void Profile::add_hobby(std::string new_hobby) {

  hobbies.push_back(new_hobby);

}





