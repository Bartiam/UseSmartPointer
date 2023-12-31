# UseSmartPointer
Обе основные задачи выполнены тут.

1. Использование умного указателя
Что нужно сделать: 
Реализуйте класс Dog, который использует стандартный умный указатель shared_ptr для класса Toy.
Реализуйте у класса Dog метод getToy, с помощью которого собака подбирает игрушку. 
Если у собаки уже есть эта игрушка, необходимо вывести в консоль фразу: I already have this toy.
Если в данный момент игрушка находится у другой собаки, нужно вывести в консоль: Another dog is playing with this toy.
Если игрушка свободна, собака подбирает её.
Реализуйте у класса Dog метод dropToy, с помощью которого собака бросает игрушку на пол, после чего другая может подобрать её. 
Если у собаки в этот момент нет игрушки, в консоль необходимо вывести: Nothing to drop.
Советы и рекомендации
Чтобы узнать, у скольких собак в данный момент есть игрушка, можно использовать метод use_count() у класса shared_ptr. При этом необходимо учитывать, что создание shared_ptr от класса Toy тоже увеличивает показатели счётчика.
Чтобы увидеть удаление класса Toy, используйте следующее определение:
class Toy {
public:
   Toy(const std::string& name) {
       name_ = name;
   }
   std::string getNmae() {
       return name_;
   }
   ~Toy() {
       std::cout << "Toy " << name_ << " was dropped " << std::endl;
   }
private:
   std::string name_;
};

2. Реализация умного указателя
Что нужно сделать
Реализуйте умный указатель shared_ptr_toy с распределённым доступом и механикой подсчёта ссылок для класса Toy, реализованного в задании. 
Указатель должен: 
иметь все стандартные методы класса,
быть функциональной заменой использованию shared_ptr<Toy>.
Реализуйте свободную функцию make_shared_toy, которая принимает набор аргументов и конструирует игрушку от названия или при помощи копии другой игрушки.
Советы и рекомендации
Не забудьте уменьшить число ссылок на единицу в деструкторе умного указателя. Когда на счётчике появится значение 0, удалите объект.} 

Вы можете использовать перегрузки под разные типы. Их количество ограничено.
Чек-лист для проверки задания
Класс называется shared_ptr_toy.
Реализованы конструктор, конструктор копий, оператор присваивания копированием, деструктор и функция make_shared.
Что оценивается
Соответствие разработанного типа указателя стандартному типу shared_ptr при использовании с классом Toy.
Корректность логики работы функции создания экземпляра класса.
