#ifndef SCENE_H_PWNTUEIQ
#define SCENE_H_PWNTUEIQ

#include "ObjectContainer.h"
#include "Drawable.h"

namespace edolphin {

class Scene : public ObjectContainer<Drawable>, public Drawable
{
public:
	Scene ();
	virtual ~Scene ();

	virtual void draw();
private:
	/* data */
};


}

#endif /* end of include guard: SCENE_H_PWNTUEIQ */
