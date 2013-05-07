DCIntrospectARC
===============

The DCIntrospect library made ARC &amp; iOS6 compatible.

Despite having several ports to ARC to the DCIntrospect project, i've done my own filling my needs.
Original project can be found [here](https://github.com/domesticcatsoftware/DCIntrospect). 

Changes done in DCIntrospect:
-----------------------------

- Changed all property definitions to use the new strong/weak. 
- Deleted all @synthesize properties and used local properties as __myProperty_ instead of _self.myProperty_.
- Deleted all non-ARC code like _autorelease_, _[super dealloc]_ and such.
- Added a checking in all files to not include them in a Release version of the App, only in Debug mode. 


How to use it
--------------

Add the all files to your project, and the QuartzCore framework.

Then to start the library:

	[window makeKeyAndVisible];
	
	#if TARGET_IPHONE_SIMULATOR
    	[[DCIntrospect sharedIntrospector] start];
	#endif

The `#if` sentence is not required, but a good idea to have it to prevent leaving it on production code. 

Then simply run the app and push space bar to invoke the DCIntrospect.

* * * 
Rest of documentation can be found in the [original project source](https://github.com/domesticcatsoftware/DCIntrospect)