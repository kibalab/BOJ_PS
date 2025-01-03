# [Silver II] 연속합 - 1912 

[문제 링크](https://www.acmicpc.net/problem/1912) 

### 성능 요약

메모리: 1772 KB, 시간: 12 ms

### 분류

다이나믹 프로그래밍

### 제출 일자

2024년 12월 23일 01:45:43

### 문제 설명

<p>n개의 정수로 이루어진 임의의 수열이 주어진다. 우리는 이 중 연속된 몇 개의 수를 선택해서 구할 수 있는 합 중 가장 큰 합을 구하려고 한다. 단, 수는 한 개 이상 선택해야 한다.</p>

<p>예를 들어서 10, -4, 3, 1, 5, 6, -35, 12, 21, -1 이라는 수열이 주어졌다고 하자. 여기서 정답은 12+21인 33이 정답이 된다.</p>

### 입력 

 <p>첫째 줄에 정수 n(1 ≤ n ≤ 100,000)이 주어지고 둘째 줄에는 n개의 정수로 이루어진 수열이 주어진다. 수는 -1,000보다 크거나 같고, 1,000보다 작거나 같은 정수이다.</p>

### 출력 

 <p>첫째 줄에 답을 출력한다.</p>

### 풀이 과정

이 문제는 단순히 시간복잡도 O(n^2)을 가지는 누적합 방법을 통해 최대 부분합을 간단하게 얻을 수 있다.
하지만 이 문제의 요구시간은 극히 제한되어있다.
그럼으로 이 문제의 풀이에는 "Dynamic Programming" 최적화 기법을 적용한 "카데인 알고리즘"이 필요하다.
카데인 알고리즘은 시간복잡도 O(n)를 가지며, N번째 수까지 누적시키며, 누적값이 i번째 수 보다 작다면 i번째 수 부터 다시 누적을 재개하는 방법이다.
