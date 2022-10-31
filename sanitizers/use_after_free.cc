int main(int argc, char **) {
    int *array = new int[100];
    delete [] array;
    return array[argc];  // BOOM
}