/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
JdistortionAudioProcessorEditor::JdistortionAudioProcessorEditor (JdistortionAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    addAndMakeVisible(driveKnob = new Slider("Drive"));
    driveKnob->setSliderStyle(Slider::Rotary);
    driveKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(rangeKnob = new Slider("Range"));
    rangeKnob->setSliderStyle(Slider::Rotary);
    rangeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(blenderKnob = new Slider("Blend"));
    blenderKnob->setSliderStyle(Slider::Rotary);
    blenderKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(volumeKnob = new Slider("Volume"));
    volumeKnob->setSliderStyle(Slider::Rotary);
    volumeKnob->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    
    driveAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "drive", *driveKnob);
    
    ramgeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "range", *rangeKnob);
    
    blenderAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "blend", *blenderKnob);
    
    volumeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "volume", *volumeKnob);
    
    setSize (500, 200);
}

JdistortionAudioProcessorEditor::~JdistortionAudioProcessorEditor()
{
}

//==============================================================================
void JdistortionAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (Colours::lightgrey);
    g.setColour (Colours::black);
    Font("Skia", "Light", 20.f);
    g.setFont (15.0f);
    g.drawFittedText ("Vemuram", getLocalBounds(), Justification::centredTop, 6);
    
    g.drawText("Drive", ((getWidth() / 5) *1) -(100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Range", ((getWidth() / 5) *2) -(100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Blend", ((getWidth() / 5) *3) -(100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);
    g.drawText("Volume", ((getWidth() / 5) *4) -(100 / 2), (getHeight() / 2) + 5, 100, 100, Justification::centred, false);

    
}

void JdistortionAudioProcessorEditor::resized()
{
   //
    driveKnob->setBounds(((getWidth() / 5) *1) - (100 / 2), (getHeight() / 2) -(100 / 2), 100, 100);
    rangeKnob->setBounds(((getWidth() / 5) *2) - (100 / 2), (getHeight() / 2) -(100 / 2), 100, 100);
    blenderKnob->setBounds(((getWidth() / 5) *3) -(100 / 2), (getHeight() / 2) -(100 / 2), 100, 100);
    volumeKnob->setBounds(((getWidth() / 5) *4) - (100 / 2), (getHeight() / 2) -(100 / 2), 100, 100);
    
}
