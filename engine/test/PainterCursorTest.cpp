#include "ETestDefine.h"
#include "PainterCursor.h"
#include "BaseType.h"
#include <unistd.h>

using namespace edolphin;
PainterCursor *painterCursor = new PainterCursor();

TEST(painterCursor, beforeClass) {
	TestCaseManager::getInstance().showResult = false;
	painterCursor->init();
}

TEST(painterCursor, afterClass) {
	sleep(1);
	painterCursor->destory();
	TestCaseManager::getInstance().showResult = true;
}

TEST(painterCursor, point) {
	painterCursor->drawPoint(3, 50);
	painterCursor->refresh();
	sleep(1);
}

TEST(painterCursor, line) {
	painterCursor->drawLine(Point2D(4, 4), Point2D(8, 8));
	painterCursor->refresh();
	sleep(5);
	painterCursor->drawLine(Point2D(14, 14), Point2D(25, 30));
	painterCursor->refresh();
	sleep(5);
}

TEST(painterCursor, rectangle) {
	painterCursor->drawRectangle(Point2D(4, 4), Point2D(8, 8));
	painterCursor->refresh();
	sleep(5);
	painterCursor->drawRectangle(Point2D(8, 8), Point2D(9, 10));
	painterCursor->refresh();
	sleep(5);
}

TEST(painterCursor, text) {
	painterCursor->drawText(Point2D(10, 50), "the test text");
	painterCursor->refresh();
}
