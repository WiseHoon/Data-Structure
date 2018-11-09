#__DATA STURCTURE__

##__소개__

*자료구조란?

###컴퓨터에서 처리할 자료를 효율적으로 관리하고 구조화시키기 위한 학문이다. 
###자료의 특성에 따라 저장, 처리 방법을 달리하는 작업을 의미한다. 경북대학교 전자공학과에서 2학년 2학기에 수강할 수 있다.

##개요
1.<br/><a href="here1">Pointer Type & Struct Type</a>
2.<br/><a href="here2">STACK</a>
3.<br/><a href="here3">QUEUE</a>
4.<br/><a href="here4">LINKED LIST(llist)</a>
5.<br/><a href="here5">NON LINEAR LIST(TREE)</a>
6.<br/><a href="here6">GRAPH</a>

<a id="here1" />
__1. Pointer Type & Struct Type__
 >Pointer Type 이란?
	주소에 직접 접근하여 주소에 저장되어 있는 값을 호출한다.
	ex) int a = 100; / a에 100이란 값이 저장되있다.
	     int* ap; / a와 자료형 int를 맞춰준다.
	     ap =&a; / a의 주소값이 ap에 저장된다.
	     *ap = 100;
	    = *(&ap); / *과 &는 서로 상쇄 된다. 
 >Struct Type 이란?
	여러 자료를 하나의 단위로 묶어서 사용하는 자료형이다.
	ex) struct stdudent{
		unsigned int studentID; / 학번
		char name[10]; / 이름
		unsigned score; / 점수
		char grade;     / 성적 	
                  }
	    struct student mydata = {12341234 , "WIHOON" ,100,'A'}; /이렇게 입력하면
	    mydata.studentID = 12341234; 
	    mydata.name = "WIHOON";
	    mydata.score = 100;
	    mydata.grade = 'A'; /로 한번에 입력 가능하다.		

<a id="here2" />
__2.STACK__
 > stack 이란?
 - 선입후출방식으로 자료를 저장,호출 할 수 있는 구조이다.(선입후출? 먼저 입력된 자료가 나중에 출력된다.)
 - PUSH로 자료를 입력한다. 
 - POP으로 자료를 출력한다.
 - 02stack 폴더에 c파일과 makefile이 저장되어있다.

<a id="here3" />
__3.QUEUE__
 > queue 란?
 - 선입선출방식으로 자료를 저장,호출 할 수 있는 구조이다.(선입선출? 먼저 입력된 자료가 먼저 출력된다.)
 - enqueue로 자료를 입력한다
 - dequeue로 자료를 출력한다.
 - 03queue 폴더에 c파일과 makefile이 저장되어있다.

<a id="here4" />
__4.LINKED LIST(llist)__
> LINKED LIST란?
 -입·출력순서에 상관없이 원하는 자료를 입출력 할 수 있는 구조이다.
 - CREATION으로 llist를 생성한다.
 - INSERTION으로 자료를 입력한다.
 - DELETION으로 자료를 삭제한다.
 - GET으로 자료의 data를 추출한다.
 - FIND로 자료의 순서를 찾는다.
 - 04linked list 폴더에 c파일과 makefile이 저장되어있다.

<a id="here5" />
__5.NON LINEAR LIST(TREE)__
 > tree란?
 - 선형적이지 않은 linked list이고 삼각형 모양의 구조이다.
 
 > 5.1 Bst Tree(이진트리)
 - 자식노드가 2개뿐인 tree형이다.
 - 05_1bst tree폴더에 c파일과 makefile이 저장되어있다. 
 
 > 5.2 Avl Tree(balance BST)
 - Bst Tree에서 최상위 노드기준 Left트리 높이와 Right트리 높이의 차이가 1이하인 tree형이다.  
 - 05_2폴더에 c파일과 makefile이 저장되어있다.
 
 > 5.3 Heap
 - tree내부의 자료중 중앙값이 최상위 노드인 tree형이다.
 - 05_3폴더에 c파일과 makefile이 저장되어있다.

<a id="here6" />
__6.GRAPH__ 
 >- graph란? 
 - 점(vertex : 자료)와 선(edge : 자료의 연관성)으로 이루어진 구조이다.
 - 06graph폴더에 c파일과 makefile이 저장되어있다.
 


