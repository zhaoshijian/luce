
/*
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
  
(c) , Peersuasive Technologies

*/

// LButton inheritage
const Luna<LTextButton>::Inheritence LTextButton::inherits[] = {
    // LComponent
    {"size", &LButton::getSize, &LButton::setSize}, // artificial
    {"explicitFocusOrder", &LButton::getExplicitFocusOrder, &LButton::setExplicitFocusOrder},
    {"lookAndFeel", &LButton::getLookAndFeel, &LButton::setLookAndFeel},
    {"focusContainer", &LButton::isFocusContainer, &LButton::setFocusContainer},
    {"componentEffect", &LButton::getComponentEffect, &LButton::setComponentEffect},
    {"bounds", &LButton::getBounds, &LButton::setBounds},
    {"opaque", &LButton::isOpaque, &LButton::setOpaque},
    {"positioner", &LButton::getPositioner, &LButton::setPositioner},
    {"transform", &LButton::getTransform, &LButton::setTransform},
    {"componentID", &LButton::getComponentID, &LButton::setComponentID},
    {"enabled", &LButton::isEnabled, &LButton::setEnabled},
    {"alpha", &LButton::getAlpha, &LButton::setAlpha},
    {"alwaysOnTop", &LButton::isAlwaysOnTop, &LButton::setAlwaysOnTop},
    {"mouseCursor", &LButton::getMouseCursor, &LButton::setMouseCursor},
    {"wantsKeyboardFocus", &LButton::getWantsKeyboardFocus, &LButton::setWantsKeyboardFocus},
    {"cachedComponentImage", &LButton::getCachedComponentImage, &LButton::setCachedComponentImage},
    {"visible", &LButton::isVisible, &LButton::setVisible},
    {"broughtToFrontOnMouseClick", &LButton::isBroughtToFrontOnMouseClick, &LButton::setBroughtToFrontOnMouseClick},
    {"mouseClickGrabsKeyboardFocus", &LButton::getMouseClickGrabsKeyboardFocus, &LButton::setMouseClickGrabsKeyboardFocus},
    {"interceptsMouseClicks", &LComponent::getInterceptMouseClicks, &LComponent::setInterceptMouseClicks},
    {"name", &LButton::getName, &LButton::setName},

    // LButton
    {"clickingTogglesState", &LButton::getClickingTogglesState, &LButton::setClickingTogglesState},
    {"toggleState", &LButton::getToggleState, &LButton::setToggleState},
    {"radioGroupId", &LButton::getRadioGroupId, &LButton::setRadioGroupId},
    {"tooltip", &LButton::getTooltip, &LButton::setTooltip},
    {"buttonText", &LButton::getButtonText, &LButton::setButtonText},
 
    {0,0}
};

const Luna<LTextButton>::InheritenceF LTextButton::inheritsF[] = {
    // LComponent
    method( LButton, getExplicitFocusOrder ),
    method( LButton, setExplicitFocusOrder ),
    method( LButton, findColour ),
    method( LButton, getRight ),
    method( LButton, getProperties ),
    method( LButton, isParentOf ),
    method( LButton, getLookAndFeel ),
    method( LButton, setLookAndFeel ),
    method( LButton, createComponentSnapshot ),
    method( LButton, getScreenPosition ),
    method( LButton, proportionOfHeight ),
    method( LButton, isFocusContainer ),
    method( LButton, setFocusContainer ),
    method( LButton, getX ),
    method( LButton, getY ),
    method( LButton, getHeight ),
    method( LButton, getComponentEffect ),
    method( LButton, setComponentEffect ),
    method( LButton, getTopLevelComponent ),
    method( LButton, isMouseOver ),
    method( LButton, getBounds ),
    method( LButton, setBounds ),
    method( LButton, reallyContains ),
    method( LButton, localAreaToGlobal ),
    method( LButton, getDesktopScaleFactor ),
    method( LButton, getCurrentlyModalComponent ),
    method( LButton, isOpaque ),
    method( LButton, setOpaque ),
    method( LButton, getParentWidth ),
    method( LButton, getNumCurrentlyModalComponents ),
    method( LButton, hasKeyboardFocus ),
    method( LButton, getScreenY ),
    method( LButton, findChildWithID ),
    method( LButton, hitTest ),
    method( LButton, isMouseOverOrDragging ),
    method( LButton, getPositioner ),
    method( LButton, setPositioner ),
    method( LButton, isTransformed ),
    method( LButton, getWidth ),
    method( LButton, getLocalPoint ),
    method( LButton, getTransform ),
    method( LButton, setTransform ),
    method( LButton, getComponentAt ),
    method( LButton, getScreenBounds ),
    method( LButton, getMouseXYRelative ),
    method( LButton, getComponentID ),
    method( LButton, setComponentID ),
    method( LButton, keyStateChanged ),
    method( LButton, getChildComponent ),
    method( LButton, getScreenX ),
    method( LButton, getParentMonitorArea ),
    method( LButton, getLocalArea ),
    method( LButton, isColourSpecified ),
    method( LButton, isEnabled ),
    method( LButton, setEnabled ),
    method( LButton, canModalEventBeSentToComponent ),
    method( LButton, isCurrentlyBlockedByAnotherModalComponent ),
    method( LButton, findParentComponentOfClass ),
    method( LButton, getNumChildComponents ),
    method( LButton, isMouseButtonDownAnywhere ),
    method( LButton, createFocusTraverser ),
    method( LButton, isMouseButtonDown ),
    method( LButton, localPointToGlobal ),
    method( LButton, getPosition ),
    method( LButton, getMarkers ),
    method( LButton, getAlpha ),
    method( LButton, setAlpha ),
    method( LButton, isAlwaysOnTop ),
    method( LButton, setAlwaysOnTop ),
    method( LButton, getBoundsInParent ),
    method( LButton, getParentHeight ),
    method( LButton, getMouseCursor ),
    method( LButton, setMouseCursor ),
    method( LButton, getWantsKeyboardFocus ),
    method( LButton, setWantsKeyboardFocus ),
    method( LButton, proportionOfWidth ),
    method( LButton, getBottom ),
    method( LButton, getCachedComponentImage ),
    method( LButton, setCachedComponentImage ),
    method( LButton, getIndexOfChildComponent ),
    method( LButton, contains ),
    method( LButton, keyPressed ),
    method( LButton, isVisible ),
    method( LButton, setVisible ),
    method( LButton, getPeer ),
    method( LButton, isShowing ),
    method( LButton, getLocalBounds ),
    method( LButton, getParentComponent ),
    method( LButton, isCurrentlyModal ),
    method( LButton, isBroughtToFrontOnMouseClick ),
    method( LButton, setBroughtToFrontOnMouseClick ),
    method( LButton, getMouseClickGrabsKeyboardFocus ),
    method( LButton, setMouseClickGrabsKeyboardFocus ),
    method( LButton, getName ),
    method( LButton, setName ),
    method( LButton, getCurrentlyFocusedComponent ),
    method( LButton, isOnDesktop ),
    method( LButton, enterModalState ),
    method( LButton, setBoundsInset ),
    method( LButton, setRepaintsOnMouseActivity ),
    method( LButton, toFront ),
    method( LButton, addKeyListener ),
    method( LButton, addAndMakeVisible ),
    method( LButton, setTopLeftPosition ),
    method( LButton, removeKeyListener ),
    method( LButton, sendLookAndFeelChange ),
    method( LButton, getWindowHandle ),
    method( LButton, moveKeyboardFocusToSibling ),
    method( LButton, addChildComponent ),
    method( LButton, updateMouseCursor ),
    method( LButton, addMouseListener ),
    method( LButton, removeComponentListener ),
    method( LButton, setPaintingIsUnclipped ),
    method( LButton, unfocusAllComponents ),
    method( LButton, centreWithSize ),
    method( LButton, copyAllExplicitColoursTo ),
    method( LButton, exitModalState ),
    method( LButton, setInterceptsMouseClicks ),
    method( LButton, setTopRightPosition ),
    method( LButton, grabKeyboardFocus ),
    method( LButton, addToDesktop ),
    method( LButton, repaint ),
    method( LButton, setBufferedToImage ),
    method( LButton, setBoundsToFit ),
    method( LButton, addChildAndSetID ),
    method( LButton, getInterceptsMouseClicks ),
    method( LButton, removeMouseListener ),
    method( LButton, beginDragAutoRepeat ),
    method( LButton, setColour ),
    method( LButton, paintEntireComponent ),
    method( LButton, deleteAllChildren ),
    method( LButton, removeColour ),
    method( LButton, setBoundsRelative ),
    method( LButton, setCentrePosition ),
    method( LButton, removeFromDesktop ),
    method( LButton, getVisibleArea ),
    method( LButton, toBehind ),
    method( LButton, removeAllChildren ),
    method( LButton, postCommandMessage ),
    method( LButton, setCentreRelative ),
    method( LButton, setSize ),
    method( LButton, toBack ),
    method( LButton, addComponentListener ),
    method( LButton, visibilityChanged ),
    method( LButton, userTriedToCloseWindow ),
    method( LButton, minimisationStateChanged ),
    method( LButton, parentHierarchyChanged ),
    method( LButton, childrenChanged ),
    method( LButton, lookAndFeelChanged ),
    method( LButton, enablementChanged ),
    method( LButton, paint ),
    method( LButton, paintOverChildren ),
    method( LButton, mouseMove ),
    method( LButton, mouseEnter ),
    method( LButton, mouseExit ),
    method( LButton, mouseDown ),
    method( LButton, mouseDrag ),
    method( LButton, mouseUp ),
    method( LButton, mouseDoubleClick ),
    method( LButton, mouseWheelMove ),
    method( LButton, mouseMagnify ),
    method( LButton, modifierKeysChanged ),
    method( LButton, focusGained ),
    method( LButton, focusLost ),
    method( LButton, focusOfChildComponentChanged ),
    method( LButton, resized ),
    method( LButton, moved ),
    method( LButton, childBoundsChanged ),
    method( LButton, parentSizeChanged ),
    method( LButton, broughtToFront ),
    method( LButton, handleCommandMessage ),
    method( LButton, inputAttemptWhenModal ),
    method( LButton, colourChanged ),

    // LButton
    method( LButton, getConnectedEdgeFlags ),
    method( LButton, isConnectedOnRight ),
    method( LButton, isConnectedOnTop ),
    method( LButton, getClickingTogglesState ),
    method( LButton, setClickingTogglesState ),
    method( LButton, isOver ),
    method( LButton, isDown ),
    method( LButton, getToggleState ),
    method( LButton, setToggleState ),
    method( LButton, isConnectedOnLeft ),
    method( LButton, isConnectedOnBottom ),
    method( LButton, getRadioGroupId ),
    method( LButton, setRadioGroupId ),
    method( LButton, getTooltip ),
    method( LButton, setTooltip ),
    method( LButton, isRegisteredForShortcut ),
    method( LButton, getMillisecondsSinceButtonDown ),
    method( LButton, getButtonText ),
    method( LButton, setButtonText ),
    method( LButton, getCommandID ),
    method( LButton, getToggleStateValue ),
    //method( LButton, removeListener ),
    method( LButton, setConnectedEdges ),
    //method( LButton, addListener ),
    method( LButton, addShortcut ),
    method( LButton, setState ),
    method( LButton, clearShortcuts ),
    method( LButton, setCommandToTrigger ),
    method( LButton, setTriggeredOnMouseDown ),
    method( LButton, setRepeatSpeed ),
    method( LButton, triggerClick ),
    method( LButton, clicked ),
    method( LButton, paintButton ),
    method( LButton, buttonStateChanged ),
    method( LButton, buttonClicked ),
    method( LButton, internalClickCallback ),
    
    {0,0}
};

const Luna<LTextButton>::Enum LTextButton::enums[] = {
    {0}
};
