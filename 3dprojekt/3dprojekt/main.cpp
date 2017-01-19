#include <GL/glew.h>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
#include <gl/GL.h>
#include <iostream>


int main(void) 
{



	

	GLFWwindow* window;

	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 
							  480, 
							  "Hello World", 
							  NULL, 
							  NULL);

	if (!window) 
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);


	GLenum err = glewInit();
	if (GLEW_OK != err) 
	{
		// error
	}

	if (glewIsSupported("GL_VERSION_4_5")) 
	{
		std::cout << "OpenGL 4.5!!!\n";
	}


	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window)) 
	{
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}