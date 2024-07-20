#include <string.h>

#define MAX_LINE_LENGTH 1024

#if 0

int oms_compareSimulationResults(const char* filenameA, const char* filenameB, const
char* var, double relTol, double absTol) {
    FILE *fileA = fopen(filenameA, "r");
    FILE *fileB = fopen(filenameB, "r");

    if (!fileA ||!fileB) {
        perror("Error opening files");
        return -1;
    }

    char lineA[MAX_LINE_LENGTH], lineB[MAX_LINE_LENGTH];
    int lineNumber = 0;

    while (fgets(lineA, MAX_LINE_LENGTH, fileA) && fgets(lineB, MAX_LINE_LENGTH, fileB)) {
        lineNumber++;

        if (strcmp(lineA, lineB)!= 0) {
            double valueA = strtod(strtok(lineA, "="));
            double valueB = strtod(strtok(NULL, "="));
            double diff = fabs(valueA - valueB);
            if (diff > relTol * valueA && diff > relTol * valueB) {
                printf("Line %d: %s differs by more than the specified tolerance\n", lineNumber, var);
                fclose(fileA);
                fclose(fileB);
                return 1;
            } else if (diff > absTol) {
                printf("Line %d: %s differs by more than the absolute tolerance\n", lineNumber, var);
                fclose(fileA);
                fclose(fileB);
                return 1;
            }
            break;
        }
        if (feof(fileA)!= feof(fileB)) {
            printf("Line %d: Files have different lengths\n", lineNumber);
            fclose(fileA);
            fclose(fileB);
            return 1;
        }
        if (lineNumber > 1000) {
            printf("Line number limit reached (1000 lines)\n");
            fclose(fileA);
            fclose(fileB);
            return 1;
        }
    }
    fclose(fileA);
}


int oms_compareSimulationResults(const char* filenameA, const char* filenameB, const
char* var, double relTol, double absTol);

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("Usage: %s <file1> <file2> <variable> <relative_tolerance> <absolute_tolerance>\n", argv[0]);
        return 1;
    }

    int result = oms_compareSimulationResults(argv[1], argv[2], argv[3], atof(argv[4]), atof(argv[5]));

    if (result == 0) {
        printf("Simulation results are identical within the specified tolerance\n");
    } else if (result > 0) {
        printf("Simulation results differ by more than the specified tolerance\n");
    } else {
        printf("Simulation results differ by less than the specified tolerance\n");
    }

    return 0;
}
#endif

