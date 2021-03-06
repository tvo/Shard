#ifndef IMAP_H
#define IMAP_H

class IMap {
public:
	//
	virtual std::string MapName()=0;

	virtual int SpotCount()=0;
	virtual Position GetSpot(int idx)=0;
	virtual std::vector<Position>& GetMetalSpots()=0;

	virtual Position MapDimensions()=0;

	virtual std::vector<IMapFeature*> GetMapFeatures()=0;
	virtual std::vector<IMapFeature*> GetMapFeaturesAt(Position p, double radius)=0;

	virtual double MinimumWindSpeed()=0;
	virtual double MaximumWindSpeed()=0;
	virtual double AverageWind()=0;

	virtual double TidalStrength()=0;

	virtual Position FindClosestBuildSite(IUnitType* t, Position builderPos, double searchRadius, double minimumDistance)=0;
	virtual bool CanBuildHere(IUnitType* t, Position pos)=0;

	
};

#endif
