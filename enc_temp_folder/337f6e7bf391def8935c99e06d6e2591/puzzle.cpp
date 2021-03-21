#include <bangtal.h>

SceneID scene1, scene2;
ObjectID starting,one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifthteen,sixteen;




void mouseCallBack(ObjectID object, int x, int y, MouseAction action) {
	if (object == starting) {
		enterScene(scene2);
		hideObject(starting);
		
		showMessage("오른쪽위에 퍼즐조각들을 확인해보세요!");

		if (object == one) {
			pickObject(one);
		}
		pickObject(one);
		pickObject(two);
		pickObject(three);
		pickObject(four);
		pickObject(five);
		pickObject(six);
		pickObject(seven);
		pickObject(eight);
		pickObject(nine);
		pickObject(ten);
		pickObject(eleven);
		pickObject(twelve);
		pickObject(thirteen);
		pickObject(fourteen);
		pickObject(fifthteen);
		pickObject(sixteen);

		endGame;

		}
	}





int main() {
	setMouseCallback(mouseCallBack);

	scene1 = createScene("배경", "짱구배경.png");

	scene2 = createScene("원본", "짱구원본.png");


	showMessage("짱구 퍼즐 게임~");

	starting = createObject("start.png");

	locateObject(starting, scene1, 600, 300);
	showObject(starting);


	one = createObject("1.png");
	two = createObject("2.png");
	three = createObject("3.png");
	four = createObject("4.png");
	five = createObject("5.png");
	six = createObject("6.png");
	seven = createObject("7.png");
	eight = createObject("8.png");
	nine = createObject("9.png");
	ten = createObject("10.png");
	eleven = createObject("11.png");
	twelve = createObject("12.png");
	thirteen = createObject("13.png");
	fourteen = createObject("14.png");
	fifthteen = createObject("15.png");
	sixteen = createObject("16.png");

	
	locateObject(one, scene2, 330, 500);
	locateObject(two, scene2, 535, 245);
	locateObject(three, scene2, 645, 259);
	locateObject(four, scene2, 568, 374);
	locateObject(five, scene2, 264, 300);
	locateObject(six, scene2, 153, 678);
	locateObject(seven, scene2, 267, 689);
	locateObject(eight, scene2, 453, 157);
	locateObject(nine, scene2, 234, 215);
	locateObject(ten, scene2, 456, 123);
	locateObject(eleven, scene2, 457, 645);
	locateObject(twelve, scene2, 256, 645);
	locateObject(thirteen, scene2, 264, 300);
	locateObject(fourteen, scene2, 453, 341);
	locateObject(fifthteen, scene2, 531, 300);
	locateObject(sixteen, scene2, 600, 300);
    showObject(one);
	showObject(two);
	showObject(three);
	showObject(four);
	showObject(five);
	showObject(six);
	showObject(seven);
	showObject(eight);
	showObject(nine);
	showObject(ten);
	showObject(eleven);
	showObject(twelve);
	showObject(thirteen);
	showObject(fourteen);
	showObject(fifthteen);
	showObject(sixteen);

	startGame(scene1);
}