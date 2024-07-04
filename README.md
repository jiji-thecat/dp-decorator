# Design Pattern - Decorator Pattern

## Description

![decorator](https://github.com/jiji-thecat/dp-decorator/assets/104809324/efb04cec-608e-45e7-9b2d-b82c961a29b6)

The Decorator pattern allows you to dynamically add functionality to objects, similar to decorating a cake. Imagine a fruit cake where you can add as many fruits on top as you like.

This pattern is particularly useful when you need to add functionality to objects without subclassing.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-decorator/assets/104809324/fcc48eb6-2060-4d1f-ac24-6360e28c8345)

[More details on Wikipedia](https://ja.wikipedia.org/wiki/Decorator_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

Using a cake as an example:

- `Component`: Cake.
- `ConcreteComponent`: Chocolate cake.
- `Decorator`: Cake with strawberry toppings.
- `ConcreteDecorator`: Cake with strawberry and chocolate chips toppings.

By adding functionality in the `Decorator` class, you can create various types of cakes.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![decorator](https://github.com/jiji-thecat/dp-decorator/assets/104809324/efb04cec-608e-45e7-9b2d-b82c961a29b6)

I've developed an app where users can choose between salt or soy sauce ramen and add toppings.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
