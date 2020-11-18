#include <stdio.h>


/*
typedef int Int32
Int32 n; // int n;
*/

// struct Point { int x, y; }; // typedef struct { int x , y; } Point;  똑같음

struct ProductInfo {
    int num; // 4바이트
    char name[100]; // 100 바이트
    int cost; // 4바이 트
  };

void productSale(ProductInfo *p, int percent) {
  p -> cost -= p -> cost * percent / 100;
}

void productSwap(ProductInfo *a, ProductInfo *b) {
  ProductInfo tmp = *a;
  *a = *b;
  *b = tmp;
}



int main() { 
  // Point p; // struct { int x, y; } p; 랑 똑같음

  // p.x = 3;
  // p.y = 4;

  // printf("(%d, %d)\n", p.x, p.y);
  // printf("sizeof(p) = %lu\n", sizeof(p));
  
  // ProductInfo myProduct = { 112332, "제주 한라봉", 30};

  // ProductInfo *ptr_product = &myProduct;

  // // (*a).b == a -> b

  // printf("상품 번호 : %d\n", ptr_product -> num); // (*ptr_product).num 과 같음
  // printf("상품 이름 : %s\n", ptr_product -> name);
  // printf("상품 가격 : %d\n", ptr_product -> cost);

  // printf("sizeof(myProduct) : %lu\n", sizeof(myProduct)); // 108 바이트

  ProductInfo myProduct = { 112332, "제주 한라봉", 20000 };
  ProductInfo otherProduct = { 112333, "성주 꿀참외", 10000 };

  // myProduct.cost -= myProduct.cost * 10 / 100;

  // productSale(&myProduct, 10);

  productSwap(&myProduct, &otherProduct);

  printf("상품 번호 : %d\n", myProduct.num); // (*ptr_product).num 과 같음
  printf("상품 이름 : %s\n", myProduct.name);
  printf("상품 가격 : %d\n", myProduct.cost); 
}