#ifndef CONVEX_HULL_H
#define CONVEX_HULL_H
#include "3dstruct.h"

typedef struct convexHull convexHull;
convexHull *convexHullCreate(void);
int convexHullAddVertex(convexHull *hull, vec3 *vertex, int plane,
  int orderOnPlane);
void convexHullDestroy(convexHull *hull);
int convexHullGenerate(convexHull *hull);
int convexHullUnifyNormals(convexHull *hull, vec3 *origin);
int convexHullGetFace3Num(convexHull *hull);
face3 *convexHullGetFace3(convexHull *hull, int faceIndex);
vec3 *convexHullGetVertex(convexHull *hull, int vertexIndex);
int convexHullAddTodo(convexHull *hull, int vertex1, int vertex2, int vertex3);

#endif