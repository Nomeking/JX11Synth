/*
  ==============================================================================

    Voice.h
    Created: 3 Feb 2024 3:39:17pm
    Author:  odyrn

  ==============================================================================
*/

#pragma once

struct Voice
{
    int note;
    int velocity;

    void reset()
    {
        note = 0;
        velocity = 0;
    }
};
