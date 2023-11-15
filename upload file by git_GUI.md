##  git上传本地文件

1.在 github 上创建一个新的仓库，给它一个合适的名字，比如 my-project。

2.在本地创建一个文件夹，用来存放你的项目文件，比如 my-project。

3.在本地文件夹中右键点击，选择 Git GUI Here，打开 git 图形界面工具。

4.选择 Create New Repository，创建一个新的本地仓库，并选择你刚才创建的文件夹作为路径。

5.将你的项目文件复制或移动到本地文件夹中，然后在 git 图形界面工具中点击 Rescan 按钮，扫描变化的文件。

6.在 Unstaged Changes 区域中选择所有文件，并点击 Stage Changed 按钮，将所有文件添加到暂存区。

7.在 Commit Message 区域中输入一个提交信息，比如 “first commit”，然后点击 Commit 按钮，将暂存区的文件提交到本地仓库。

8.点击 Remote 菜单，选择 Add… 选项，添加一个远程仓库，并输入一个名称（比如 origin）和一个地址（比如 https://github.com/yourname/my-project.git），其中 yourname 是你的 github 用户名，my-project 是你的 github 仓库名。

9.点击 Push 菜单，选择 origin 作为远程仓库，并选择 master 作为分支，并勾选 Set upstream for push/pull configuration 选项，然后点击 Push 按钮，将本地仓库的内容推送到远程仓库。

这时你可以在 github 上查看你的仓库，应该能看到你的项目文件已经上传成功了。