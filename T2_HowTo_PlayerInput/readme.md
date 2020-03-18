Over the course of this tutorial, you will learn to react to player input by extending the Pawn class.

There are two types of input mappings: Action and Axis.

- **Action Mappings** are useful to think of as "yes or no" inputs, like the buttons on a mouse or joystick. They report when they are pressed, released, double-clicked, or held down for a short time. Discrete actions like jumping, shooting, or interacting with objects are good candidates for this type of mapping.
- **Axis Mappings** are continuous - think of them as "how much" inputs, like the stick on a joystick, or the position of a mouse cursor. They report their value every frame, even if they're not moving. Things with magnitude or direction, such as walking, looking around, and steering a vehicle are usually handled this way.

While input mappings can be defined directly in code, the usual method is to define them in the **Unreal Engine** editor, so that's how we'll do it in this tutorial.



![ConfigureInput.png](https://docs.unrealengine.com/Images/Programming/Tutorials/PlayerInput/ConfigureInput.jpg)



https://docs.unrealengine.com/en-US/Programming/Tutorials/PlayerInput/index.html