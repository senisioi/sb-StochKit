#include "StochKit.hpp"


Plugin *plugin;


void init(Plugin *p) {
	plugin = p;
	p->slug = TOSTRING(SLUG);
	p->version = TOSTRING(VERSION);

	// Add all Models defined throughout the plugin
	p->addModel(modelGrandy);
  p->addModel(modelGenEcho);
  p->addModel(modelStitcher);
}
