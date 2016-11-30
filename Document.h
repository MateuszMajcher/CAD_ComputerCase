#ifndef DOCUMENT_H
#define DOCUMENT_H

#include "DocumentCommon.h"
#include <Geom_BSplineSurface.hxx>

class SurfConstruction;
class ApplicationCommon;

class Document : public DocumentCommon{
	Q_OBJECT

public:
	Document(const int, ApplicationCommonWindow*);
	~Document();

	void onMakeBottle();

private:
	SurfConstruction* mySurfConstructor;
};

#endif