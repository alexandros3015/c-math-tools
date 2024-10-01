double x_1, x_2, y_1, y_2 = 0;

Console.Write("y_2: ");
y_2 = Convert.ToDouble(Console.ReadLine());

Console.Write("\ny_1: ");
y_1 = Convert.ToDouble(Console.ReadLine());

Console.Write("\nx_2: ");
x_2 = Convert.ToDouble(Console.ReadLine());

Console.Write("\nx_1: ");
x_1 = Convert.ToDouble(Console.ReadLine());

double top, bottom = 0;

top = y_2 - y_1;
Console.WriteLine($"\nTop of the fraction: {top}");

bottom = x_2 - x_1;
Console.WriteLine($"Bottom of the fraction: {bottom}");

Console.WriteLine($"Answer = {top} / {bottom}");

double total = top /  bottom;
Console.WriteLine($"Possible whole number: {total}");

double yIntercept = y_1 - (x_1 * total);
Console.WriteLine($"The y intercept is {yIntercept}");

Console.Write("\nPress enter to exit...");
Console.ReadLine();