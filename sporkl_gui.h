/*******************************************************************************
BEGIN_JUCE_MODULE_DECLARATION

ID:               sporkl_gui 
vendor:           sporklpony
version:          0.1
name:             Sporkl Look and Feel
description:      Custom look and feel for personal projects.
dependencies:     juce_graphics juce_gui_basics
website:   htttps://dmitrivolkov.com

END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#pragma once
#define SPORKL_GUI_INCLUDED

// generated by BinaryBuilder in JUCE extras
// #include "Resources/LatoRegular.h"

// format: alpha, r, g, b 0xaarrggbb
const int LIGHT_COLOR = 0xffe6e1dc;
const int DARK_COLOR = 0xff2b2b2b;
const int ACCENT_COLOR = 0xffa6c166;
const int OTHER_COLOR = 0xff77bbdd;

class LookAndFeel_Sporkl : public juce::LookAndFeel_V4
{

public:
    LookAndFeel_Sporkl(bool dark)
    {
        // handle font
        // auto latoRegular = juce::Typeface::createSystemTypefaceFor(LatoRegular::latoregular_ttf, LatoRegular::latoregular_ttfSize);
        // setDefaultSansSerifTypeface(latoRegular);
        
        // handle color scheme
        if (!dark)
        { // light color scheme
            // handle color scheme
            setColourScheme({
                LIGHT_COLOR, // windowBackground
                LIGHT_COLOR, // widgetBackground
                LIGHT_COLOR, // menuBackground
                DARK_COLOR, // outline
                DARK_COLOR, // defaultTex
                ACCENT_COLOR, // defaultFill
                DARK_COLOR, // highlightedText
                ACCENT_COLOR, // highlightedFill
                DARK_COLOR // menuText
            });
            
            setColour(juce::Slider::backgroundColourId, juce::Colour(DARK_COLOR));
        }
        else
        { // dark color scheme
            setColourScheme({
                DARK_COLOR, // windowBackground
                DARK_COLOR, // widgetBackground
                DARK_COLOR, // menuBackground
                LIGHT_COLOR, // outline
                LIGHT_COLOR, // defaultTex
                ACCENT_COLOR, // defaultFill
                LIGHT_COLOR, // highlightedText
                ACCENT_COLOR, // highlightedFill
                LIGHT_COLOR // menuText
            });
            
            setColour(juce::Slider::backgroundColourId, juce::Colour(LIGHT_COLOR));
        }
    };
    
    LookAndFeel_Sporkl()
    : LookAndFeel_Sporkl(false) { };

    ~LookAndFeel_Sporkl() { };
};
