#__DATA STURCTURE__

##__�Ұ�__

*�ڷᱸ����?

###��ǻ�Ϳ��� ó���� �ڷḦ ȿ�������� �����ϰ� ����ȭ��Ű�� ���� �й��̴�. 
###�ڷ��� Ư���� ���� ����, ó�� ����� �޸��ϴ� �۾��� �ǹ��Ѵ�. ��ϴ��б� ���ڰ��а����� 2�г� 2�б⿡ ������ �� �ִ�.

##����
1.<br/><a href="here1">Pointer Type & Struct Type</a>
2.<br/><a href="here2">STACK</a>
3.<br/><a href="here3">QUEUE</a>
4.<br/><a href="here4">LINKED LIST(llist)</a>
5.<br/><a href="here5">NON LINEAR LIST(TREE)</a>
6.<br/><a href="here6">GRAPH</a>

<a id="here1" />
__1. Pointer Type & Struct Type__
 >Pointer Type �̶�?
	�ּҿ� ���� �����Ͽ� �ּҿ� ����Ǿ� �ִ� ���� ȣ���Ѵ�.
	ex) int a = 100; / a�� 100�̶� ���� ������ִ�.
	     int* ap; / a�� �ڷ��� int�� �����ش�.
	     ap =&a; / a�� �ּҰ��� ap�� ����ȴ�.
	     *ap = 100;
	    = *(&ap); / *�� &�� ���� ��� �ȴ�. 
 >Struct Type �̶�?
	���� �ڷḦ �ϳ��� ������ ��� ����ϴ� �ڷ����̴�.
	ex) struct stdudent{
		unsigned int studentID; / �й�
		char name[10]; / �̸�
		unsigned score; / ����
		char grade;     / ���� 	
                  }
	    struct student mydata = {12341234 , "WIHOON" ,100,'A'}; /�̷��� �Է��ϸ�
	    mydata.studentID = 12341234; 
	    mydata.name = "WIHOON";
	    mydata.score = 100;
	    mydata.grade = 'A'; /�� �ѹ��� �Է� �����ϴ�.		

<a id="here2" />
__2.STACK__
 > stack �̶�?
 - �������������� �ڷḦ ����,ȣ�� �� �� �ִ� �����̴�.(��������? ���� �Էµ� �ڷᰡ ���߿� ��µȴ�.)
 - PUSH�� �ڷḦ �Է��Ѵ�. 
 - POP���� �ڷḦ ����Ѵ�.
 - 02stack ������ c���ϰ� makefile�� ����Ǿ��ִ�.

<a id="here3" />
__3.QUEUE__
 > queue ��?
 - ���Լ��������� �ڷḦ ����,ȣ�� �� �� �ִ� �����̴�.(���Լ���? ���� �Էµ� �ڷᰡ ���� ��µȴ�.)
 - enqueue�� �ڷḦ �Է��Ѵ�
 - dequeue�� �ڷḦ ����Ѵ�.
 - 03queue ������ c���ϰ� makefile�� ����Ǿ��ִ�.

<a id="here4" />
__4.LINKED LIST(llist)__
> LINKED LIST��?
 -�ԡ���¼����� ������� ���ϴ� �ڷḦ ����� �� �� �ִ� �����̴�.
 - CREATION���� llist�� �����Ѵ�.
 - INSERTION���� �ڷḦ �Է��Ѵ�.
 - DELETION���� �ڷḦ �����Ѵ�.
 - GET���� �ڷ��� data�� �����Ѵ�.
 - FIND�� �ڷ��� ������ ã�´�.
 - 04linked list ������ c���ϰ� makefile�� ����Ǿ��ִ�.

<a id="here5" />
__5.NON LINEAR LIST(TREE)__
 > tree��?
 - ���������� ���� linked list�̰� �ﰢ�� ����� �����̴�.
 
 > 5.1 Bst Tree(����Ʈ��)
 - �ڽĳ�尡 2������ tree���̴�.
 - 05_1bst tree������ c���ϰ� makefile�� ����Ǿ��ִ�. 
 
 > 5.2 Avl Tree(balance BST)
 - Bst Tree���� �ֻ��� ������ LeftƮ�� ���̿� RightƮ�� ������ ���̰� 1������ tree���̴�.  
 - 05_2������ c���ϰ� makefile�� ����Ǿ��ִ�.
 
 > 5.3 Heap
 - tree������ �ڷ��� �߾Ӱ��� �ֻ��� ����� tree���̴�.
 - 05_3������ c���ϰ� makefile�� ����Ǿ��ִ�.

<a id="here6" />
__6.GRAPH__ 
 >- graph��? 
 - ��(vertex : �ڷ�)�� ��(edge : �ڷ��� ������)���� �̷���� �����̴�.
 - 06graph������ c���ϰ� makefile�� ����Ǿ��ִ�.
 


