#ifndef ELEMENT_H
#define ELEMENT_H

struct Element {
    void* data;
    size_t size;
    bool valid;
};

extern const struct ElementClass {
    struct Element (*new)(void* data, size_t size);
} Element;

#endif ELEMENT_H