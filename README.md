# git-course-exercises

### 1️⃣ How to start

Fork this repository and clone your fork into your machine using:
```
git clone git@github.com:USERNAME/git-course-exercises.git
```

enter to your project directory using:
```
cd git-course-exercises
```

---

### 2️⃣ How to make a branch

To create a new `branch` from the main repository and work on a specific exercise (ex. `file.cpp`) you can use the following commands:
```
git checkout main

git checkout -b new-branch-name
```

---

### 3️⃣ How to make a commit

From this step you can edit your `file.cpp` and make some commits using:
```
git add exercises/file.cpp

git commit -m 'feat: description'
```
Use the [Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0/) when you write a commit description.

---

### 4️⃣ How to make a PR

Push the commits into GitHub using:
```
git push -u origin new-branch-name
```

Afterward, it is possible to create a Pull Request by going to your fork `https://github.com/USERNAME/git-course-exercises.git` clicking on "create Pull Request" or going to the right section "Pull Request" -> "New Pull Request".

If you want to work on another `file.cpp`, go to step 2️⃣.

---

Use git wisely.
