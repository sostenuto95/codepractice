/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JdistortionAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    JdistortionAudioProcessorEditor (JdistortionAudioProcessor&);
    ~JdistortionAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

    AudioProcessorValueTreeState& getState();
private:

    ScopedPointer<Slider> driveKnob;
    ScopedPointer<Slider> rangeKnob;
    ScopedPointer<Slider> blenderKnob;
    ScopedPointer<Slider> volumeKnob;
   
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> ramgeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blenderAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachment;
       

        ScopedPointer<AudioProcessorValueTreeState> state;
    
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JdistortionAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JdistortionAudioProcessorEditor)
};
