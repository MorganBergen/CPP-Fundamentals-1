bool Circle::intersect(Circle otherCircle){
	double distance = sqrt(pow(xPos-otherCircle.xPos, 2) + pow(yPos-otherCircle.yPos, 2));
	if(distance <= (radius+otherCircle.radius)){
		return true;
	}
	else{
		return false;
	}
