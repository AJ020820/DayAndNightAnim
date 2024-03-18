# DayAndNightAnim

The DayNightCycleManager is a class in our Unreal Engine project responsible for managing the day and night cycle animations. This class handles triggering animations based on whether it is currently morning or night in the game.

Usage
Constructor
The constructor of the DayNightCycleManager initializes the bIsMorning variable to true, assuming the game starts in the morning.

LeftClick Function
The LeftClick function is called when the player performs a left-click action. Inside this function, depending on whether it is morning or night, it triggers the appropriate animation. However, the actual animation triggering logic needs to be implemented within the if-else statements.

SetMorning Function
The SetMorning function is used to manually set the time of day. It takes a boolean parameter bMorning, where true represents morning and false represents night.

Implementation Details
To use the DayNightCycleManager class effectively, you need to implement the animation triggering logic within the LeftClick function. This involves calling the appropriate functions to play the morning or night animations based on the current time of day.
