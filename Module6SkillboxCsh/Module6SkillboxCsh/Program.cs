
using System;
using System.Data;
using static System.Net.Mime.MediaTypeNames;

namespace Module6SkillboxCsh
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bool isOut = false;

            while (!isOut)
            {
                Console.Write("Введите команду\n\n1-вывести данные на экран\n2-заполнить данные и добавить новую запись в конец файла\n3-выйти из программы\n\nНомер команды: ");

                switch (Convert.ToInt32(Console.ReadLine()))
                {
                    case 1:
                        ReadFile();
                        break;
                    case 2:
                        WriteFile();
                        break;
                    case 3:
                        isOut = true;
                        Console.WriteLine("Нажмите любую кнопку для выхода");
                        break;
                }

                Console.ReadKey();
                Console.Clear();
            }
        }

        static void WriteFile()
        {
            Console.WriteLine("Введите запись");
            Console.Write("Введите ID: ");
            int id = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите ФИО: ");
            string name = Console.ReadLine();
            Console.Write("Введите возраст: ");
            int age = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите рост: ");
            int heigtth = Convert.ToInt32(Console.ReadLine());
            Console.Write("Введите дату рождения: ");
            string dataOfBirth = Console.ReadLine();
            Console.Write("Введите в каком городе родился рождения: ");
            string placeOfBirth = Console.ReadLine();
            var allData = $"{id}#{DateTime.Now}#{name}#{age}#{heigtth}#{dataOfBirth}#город {placeOfBirth}\n\n\n";
            File.AppendAllText(@"f:\module6.txt", allData);
            Console.WriteLine("Нажмите любую кнопку");
        }

        static void ReadFile()
        {
            if (File.Exists(@"f:\module6.txt"))
            {
                string text = File.ReadAllText(@"f:\module6.txt");
                string[] lines = text.Split('#');


                foreach (string line in lines)
                {
                    Console.WriteLine(line);
                }

                Console.WriteLine("Нажмите любую кнопку");
            }
            else
            {
                Console.WriteLine("Файл не существует\nНажмите любую кнопку, чтобы вернуться назад");
            }
        }
    }
}











