#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAP_SIZE 100

struct KV {
    char name[100];
    int value;
    struct KV* next;
};

int hash(char*);

struct KV* hashMap[MAP_SIZE];

struct KV* make_node(char* key, int val) {
    struct KV* kv_pair = (struct KV*)malloc(sizeof(struct KV));
    strcpy(kv_pair->name, key);
    kv_pair->value = val;
    kv_pair->next = NULL;
    return kv_pair;
}

void insertKV(char* key, int val) {
    int hashVal = hash(key);
    if(hashMap[hashVal] == NULL) {
        hashMap[hashVal] = make_node(key, val);
    } else {
        struct KV* node = hashMap[hashVal], *prev_node;
        int value_exists = 0;
        while(node != NULL) {
            if(strcmp(node->name, key) == 0) {
                node->value = val;
                value_exists = 1;
                break;
            }
            prev_node = node;
            node = node->next;
        }
        if(value_exists == 0) {
            struct KV* new_node = make_node(key, val);
            prev_node->next = new_node;
        }
    }
}

int getValue(char* key) {
    int hashVal = hash(key);
    if(hashMap[hashVal] == NULL)
        return -1;
    struct KV* node = hashMap[hashVal];
    while(node != NULL) {
        if(strcmp(node->name, key) == 0) {
            return node->value;
        }
        node = node->next;
    }
    return -1;
}

int hash(char* s) {
    int hashVal = 0;
    while( *s++ != '\0') {
        hashVal += 13 * (*s);
    }
    return hashVal % MAP_SIZE;
}

void printValue(char* key) {
    int val = getValue(key);
    if( val >= 0) {
        printf("=> %d\n", val);
    } else {
        printf("value of %s not found in hashMap.\n", key);
    }
}

int main() {
    char line[100], name[100];
    int val;
    insertKV("x", 10);
    insertKV("var1", 15);
    insertKV("var2", 25);
    insertKV("var3", 35);
    insertKV("var4", 45);
    insertKV("var5", 55);
    printValue("x");
    printValue("var1");
    printValue("var2");
    printValue("var3");
    printValue("var4");
    printValue("var5");
    printValue("var6");
    while(gets(line)) {
        if(sscanf(line, "%s = %d\n", name, &val) == 2) {
            insertKV(name, val);
        } else {
            printValue(name);
        }
    }
    return 0;
}
