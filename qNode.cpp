#include <Qt3DCore/QNode>
#include <Qt3DCore/QEntity>


Qt3DCore::QEntity* rootEntity = new Qt3DCore::QEntity();
Qt3DCore::QEntity* childEntity = new Qt3DCore::QEntity(rootEntity); 
