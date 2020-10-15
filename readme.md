# C++ 

## printf

문자열을 화면에 표시해주는 역할을 하는 함수

### 서식 문자

`%d` : 정수
`%s` : 문자열
`%c` : 문자
`%f` : 실수
`%g` : 실수 (지수)

### 특수 제어 문자

`\n` : 개행
`\"` : 따옴표(quote) 문자를 표시

## 자료형

### 정수형

* char (1byte) : 문자를 담는데에 쓰임
* short (2byte)
* long (4byte)
* int (4byte)

### 실수형

* float (4byte)
* double (8byte)

### unsigned, signed

음수를 표현할 수 있을지 없을지의 여부.

* `int`(signed int) = -2,147,483,648 ~ 2,147,483,647
* `unsigned int` = 0 ~ 4,294,967,295

### void

리턴값이 없는 함수의 자료형.

### bool

boolean. 참과 거짓을 저장. ( = char )

## type casting

* 실수를 정수형 변수에 담을 수 없다.
* 하지만 정수를 실수에 담을 수 있다. 

## break, continue

`for`, `switch` 문 안에서 break, continue 문을 사용할 수 있다.

* `break` : 현재 반복문, 스위치문에서 빠져나감.
* `continue` : 반복문의 현재 반복 에서 빠져나간후 다음 반복을 실행함.

## pointer : 포인터

변수의 주소를 저장하는 변수이다. 변수의 주소가 저장이 된다.

### 배열 포인터

배열 포인터 삼계명 👩‍⚖️

1. `ptr == &ptr[0]`
2. `*ptr == ptr[0]`
3. `ptr + 1 == ptr + sizeof(*ptr)을 더한 값`


## 함수

* 전역변수와 지역변수
* 매개변수

`int main()` 함수는 리턴값을 명시하지않으면 자동으로 0을 리턴한다.

### call by value : 값에 의한 호출

매개변수로 값만 넘겨주는 것

### call by address : 주소에 의한 호출

매개변수의 주소를 넘겨주는 것!!!

이 언어는 새롭게도 매개변수로 포인터 주소를 넘겨줄 수 있다!! 😻

이 말인 즉슨 이런 우아한 코드가 가능하다는 것이다.

``` cpp
void swap(int *arg1, int *arg2) {
  int tmp = *arg1;
  *arg1 = *arg2;
  *arg2 = tmp;
}

int main() {
  int a = 2;
  int b = 5;
  
  swap(&a, &b);

  printf("a : %d, b : %d", a, b); // a : 5, b : 2
}
```


#### 번외. javascript

자바스크립트로 하려면 뭐 이딴식으로 해야하나? 🤦‍♀️

``` javascript
const values = {
    a : 1,
    b : 2
}

const swap = (obj, a, b) => {
    const temp = obj[a]
    obj[a] = obj[b]
    obj[b] = temp
}

swap(values, 'a', 'b');
console.log(values)
```

## prototype : 함수의 원형 선언

c는 함수 호이스팅이 발생하지않아 사전에 정의되지 않은 함수를 실행할 수 없다.
함수를 구현부 하단에 두고 호출할 수 있는 방법이 있다. 프로토타입으로 상단에 함수의 형을 정의해놓는 것이다.
아래의 코드는 함수의 원형이 호출부의 하단에 위치해 있음에도 문제없이 실행된다.

``` cpp
void walk(int distence);

int main() {
  walk(10);
}

void walk(int distence) {
  printf("%d미터 만큼 걸었어요. 🚶‍♂️\n", distence);
}
```

프로토타입의 또 다른 이점은 상단부에 프로토타입 함수들을 정의해두면 코드내에 어떤 함수가 선언되어져있는지 미리 알 수 있는 이점이 있다.