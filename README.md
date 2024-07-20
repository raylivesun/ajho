# Ajho [Ajho](https://modelica.org/)

The provided code snippet is a Markdown link to the Modelica website. The link text is "Ajho" and the URL is "https://modelica.org/". There is no additional code to return beyond the immediate scope of the code block.

Modelica is a language for modeling of cyber-physical systems, supporting acausal connection of components governed by mathematical equations to facilitate modeling from first principles. It provides object-oriented constructs that facilitate reuse of models, and can be used conveniently for modeling complex systems containing, e.g., mechanical, electrical, electronic, magnetic, hydraulic, thermal, control, electric power or process-oriented subcomponents.
Learning the Modelica Language

We recommend learning the Modelica language through books or tutorials.
Using the Modelica Language

In order to use the Modelica Language you need a tool implementing the language - and to be more effective libaries of existing models.
Modelica Language Specification

Modelica Specification 3.6 (March 2023, current) [PDF]("https://specification.modelica.org/maint/3.6/MLS.pdf") [HTML]("https://specification.modelica.org/maint/3.6/MLS.html")

All versions are available at specification.modelica.org based on the development work.


## Documentation c++ 
```c++
#include <string.h>
#include <stdio.h>

int main() {
    char input_string[100];
    int vowels = 0;

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Remove newline character from input string
    input_string[strcspn(input_string, "\n")] = '\0';

    // Convert input string to lowercase
    for (int i = 0; input_string[i]; i++) {
        input_string[i] = (input_string[i]);
    }

    // Count vowels
    for (int i = 0; input_string[i]; i++) {
        if (input_string[i]) {
            vowels++;
        }
        else if (input_string[i] == 'y') {
            // If 'y' is followed by a vowel, it is not a vowel
            if (i + 1 < strlen(input_string) &&
                (input_string[i + 1])) {
                continue;

                // If 'y' is not followed by a vowel, it is a vowel
                } else {
                    vowels++;
                }
            }
            else {
                vowels++;
            }

            // Check for consecutive vowels
            if (i > 0 && input_string[i] == input_string[i - 1]) {
                vowels--;
            }
        }
        printf("Number of vowels: %d\n", vowels);
        return 0;
}
```

```makefile
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g main.cpp
LDFLAGS =  main.cpp

SRC = 
OBJ = $(SRC:.cc=.o)
EXEC = ajho

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)
```

## install ajho 
$-> make all
