enum class Color {red, blue, green};
enum class Trafic_light {green, yellow, red};

Color col = Color::red;
Trafic_light light = Trafic_light::red;

//example of errors
Color x = red;					//error: which red?
Color y = Trafic_light::red;		//error: that red is not a Color
Color z = Color::red;			//OK

int i = Color::red;				//error: Color::red is not an int
Color c = 2;					//error: 2 is not a Color

Trafic_light& operator++(Trafic_light& t) {	//prefix increment: ++
	switch(t) {
	case Trafic_light::green:	return t=Trafic_light::yellow;
	case Trafic_light::yellow:	return t=Trafic_light::red;
	case Trafic_light::red:		return t=Trafic_light::green;
	}
}

Trafic_light next = ++light;		//next becomes Trafic_light::green; because light is red (line 5)

//"plain" enum: implicitly convert to integer value
enum Color {red, green, blue};
int col = green;				//col gets the value 1; because enum starts from 0 and increases by one
