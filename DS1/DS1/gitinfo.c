gunjari@gunjari-VirtualBox:~/ArunBasicProg$ ls
arrays  arrays.c  myFirstProg  myFirstProg.c  test  test.c
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ groupadd dev
groupadd: Permission denied.
groupadd: cannot lock /etc/group; try again later.
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ sudo groupadd dev
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ useradd -G devs -d /home/Arungituser -m -s /bin/bash Arungituser
useradd: group 'devs' does not exist
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ useradd -G dev -d /home/Arungituser -m -s /bin/bash Arungituser
useradd: Permission denied.
useradd: cannot lock /etc/passwd; try again later.
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ sudo useradd -G dev -d /home/Arungituser -m -s /bin/bash Arungituser
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ passwd Arungituser
passwd: You may not view or modify password information for Arungituser.
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ sudo passwd Arungituser
New password: 
Retype new password: 
passwd: password updated successfully
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ ls
arrays  arrays.c  myFirstProg  myFirstProg.c  test  test.c
gunjari@gunjari-VirtualBox:~/ArunBasicProg$ cd /home/
gunjari@gunjari-VirtualBox:/home$ ls
Arungituser  gunjari
gunjari@gunjari-VirtualBox:/home$ cd Arungituser/
gunjari@gunjari-VirtualBox:/home/Arungituser$ mkdir ArunSampleproject.git
mkdir: cannot create directory ‘ArunSampleproject.git’: Permission denied
gunjari@gunjari-VirtualBox:/home/Arungituser$ sudo mkdir ArunSampleproject.git
gunjari@gunjari-VirtualBox:/home/Arungituser$ cd ArunSampleproject.git
gunjari@gunjari-VirtualBox:/home/Arungituser/ArunSampleproject.git$ git --bare init
/home/Arungituser/ArunSampleproject.git/branches/: Permission denied
gunjari@gunjari-VirtualBox:/home/Arungituser/ArunSampleproject.git$ sudo git --bare init
Initialized empty Git repository in /home/Arungituser/ArunSampleproject.git/
gunjari@gunjari-VirtualBox:/home/Arungituser/ArunSampleproject.git$
