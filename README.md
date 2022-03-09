# lab02_timp
First commit
# Part I

ПУНКТ 1.
Создайть пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
<img width="957" alt="1" src="https://user-images.githubusercontent.com/91692911/157231864-7812ab4a-3333-4e7f-870d-d172fc30fa32.png">
<img width="698" alt="2" src="https://user-images.githubusercontent.com/91692911/157231904-d477a251-fe3b-4e34-ab5b-d061444b8d6d.png">

ПУНКТ 2.
Выполнить инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
<img width="1440" alt="3" src="https://user-images.githubusercontent.com/91692911/157231986-d97e2667-0ade-4e6d-9c26-9ac7c63a66d2.png">

ПУНКТ 3.
Создайть файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
<img width="1440" alt="4" src="https://user-images.githubusercontent.com/91692911/157232218-60579a25-dd22-4e7e-80ce-9f1cbae026c6.png">

ПУНКТ 4.
Добавить этот файл в локальную копию репозитория.
<img width="1440" alt="5" src="https://user-images.githubusercontent.com/91692911/157232284-8ccaac86-32b8-4501-bb14-ca98d849b3a2.png">

ПУНКТ 5.
Закоммитить изменения с осмысленным сообщением.
<img width="1440" alt="6" src="https://user-images.githubusercontent.com/91692911/157232667-4ade6af0-30da-422f-ad03-f437335595e9.png">


ПУНКТ 6.
Изменить исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
vi hello_world.cpp

ПУНКТ 7.
Закоммитить новую версию программы.
<img width="1440" alt="7" src="https://user-images.githubusercontent.com/91692911/157232509-f9d32cd8-7b5f-40ee-b988-bf33895c83e7.png">

ПУНКТ 8.
Запушить изменения в удалёный репозиторий.
<img width="1440" alt="8" src="https://user-images.githubusercontent.com/91692911/157232852-6356717f-cbfb-492c-a8b0-7988431f32cf.png">

ПУНКТ 9.
Проверить, что история коммитов доступна в удалёный репозитории.
<img width="1440" alt="9" src="https://user-images.githubusercontent.com/91692911/157232903-942d2ea3-e5b4-4164-a34b-795710fffbc2.png">

<img width="825" alt="10" src="https://user-images.githubusercontent.com/91692911/157232934-af95f3dc-1d00-4f6e-b3e1-1729bda2adad.png">


# Part II

ПУНКТ 1.
В локальной копии репозитория создайть локальную ветку patch1.
<img width="1440" alt="1" src="https://user-images.githubusercontent.com/91692911/157310299-32f8430d-a654-40f5-ab75-13f581a7bc07.png">

ПУНКТ 2.
Внести изменения в ветке patch1 по исправлению кода и избавления от using namespace std;
vi hello_world.cpp

ПУНКТ 3.
commit, push локальную ветку в удалённый репозиторий.
<img width="1440" alt="3" src="https://user-images.githubusercontent.com/91692911/157310645-d0e08f66-7345-4d23-bfe1-f8737a5097c2.png">

ПУНКТ 4.
Проверить, что ветка patch1 доступна в удалёный репозитории.

ПУНКТ 5.
Создать pull-request patch1 -> master.

ПУНКТ 6.
В локальной копии в ветке patch1 добавить в исходный код комментарии.
vi hello_world.cpp

ПУНКТ 7.
commit, push.

ПУНКТ 8.
Проверить, что новые изменения есть в созданном на шаге 5 pull-request
<img width="1352" alt="4" src="https://user-images.githubusercontent.com/91692911/157311016-20c921ff-8282-4a53-84f9-d663934b206f.png">

ПУНКТ 9.
В удалённый репозитории выполнить слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
<img width="1430" alt="5" src="https://user-images.githubusercontent.com/91692911/157311051-c8f6d040-c067-4a71-9fdf-862dd04b36ad.png">

ПУНКТ 10.
Локально выполнить pull.
<img width="1001" alt="6" src="https://user-images.githubusercontent.com/91692911/157311118-e0c541f0-8430-453a-9515-33ac5c0c4fd2.png">

ПУНКТ 11.
С помощью команды git log просмотреть историю в локальной версии ветки master.
<img width="1440" alt="7" src="https://user-images.githubusercontent.com/91692911/157311286-4c3ec5d6-31cb-419f-9e7f-09be7c32ea4a.png">

ПУНКТ 12.
Удалить локальную ветку patch1.
<img width="1440" alt="8" src="https://user-images.githubusercontent.com/91692911/157311336-e07791df-6ec1-4571-a8b8-b8c120e6a75f.png">

# Part III

ПУНКТ 1.
Создайть новую локальную ветку patch2.
<img width="1440" alt="1" src="https://user-images.githubusercontent.com/91692911/157379932-7674a297-d041-48cc-82f5-6192a63e4643.png">

ПУНКТ 2.
Изменить code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.

clang-format -i -style=Mozilla hello_world.cpp

ПУНКТ 3.
commit, push, создайть pull-request patch2 -> master.
<img width="1440" alt="3" src="https://user-images.githubusercontent.com/91692911/157380055-b68b0154-725c-410d-bf53-d9b079613c7e.png">

ПУНКТ 4.
В ветке master в удаленном репозитории изменить комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

ПУНКТ 5.
Убедиться, что в pull-request появились конфликтны.
<img width="712" alt="4" src="https://user-images.githubusercontent.com/91692911/157380149-d43039c9-b16f-469f-9237-6ea6e538bf23.png">

ПУНКТ 6.
Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
<img width="1440" alt="6" src="https://user-images.githubusercontent.com/91692911/157380312-b2166d73-e509-46f7-897f-4fbd48bc4b88.png">
<img width="1440" alt="7" src="https://user-images.githubusercontent.com/91692911/157380319-550e686f-b260-42dc-870b-50afb0e176f9.png">

ПУНКТ 7.
Сделайть force push в ветку patch2.

git push -f origin patch2

ПУНКТ 8.
Убедиться, что в pull-request пропали конфликтны.
<img width="1016" alt="8" src="https://user-images.githubusercontent.com/91692911/157380411-c6eea4a7-d4f9-46f7-a20c-cdfe3f9021db.png">

ПУНКТ 9.
Вмержить pull-request patch2 -> master.
<img width="1440" alt="Снимок экрана 2022-03-09 в 08 40 14" src="https://user-images.githubusercontent.com/91692911/157380447-02d32ead-1792-4e2f-8e48-2849d231b007.png">













