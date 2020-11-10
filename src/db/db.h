#ifndef DB_H_
#define DB_H_

struct users readusers(int id, char username[]);
struct products readproducts(int id);
void writeusers(struct users input);
void writeproducts(struct products input);
#endif
