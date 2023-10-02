#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct UniqueID
{
    int i;
    char ID[10000][50];
};

struct UserData
{
    char uniqueId[50];
    char name[21];
    int dateOfBirth[3];
    int phoneNumber[1];
    unsigned long userHashCode[20];
    unsigned long hashCode[95];
};

void displayHashCode(unsigned long hashCode[])
{
    printf("\nYour Password's HashCode is: ");

    for (int i = 0; i < 20; i++)
        {
            printf("%lu", hashCode[i]);
        }
    printf("\n");
}

unsigned long returnHashCode(char c, unsigned long hashCode[])
{
    char a[] = {"fE?~Kv*JVb&xN M!Rl|Ce(4ho9$Ok=7ZTcU`mI-q_rPB]2Gz^6}5{sD:@0%aj\"yg[F1A8;'\\p<3uw>XWtY#ni+)Ld/SHQ"};

    for (int i = 0; a[i] != '\0'; i++)
        {
            if (a[i] == c)
                {
                    return hashCode[i];
                }
        }
}

void createHashCode(char *c, unsigned long userHashCode[], unsigned long hashCode[])
{
    for (int i = 0; i < 20; i++)
        {
            userHashCode[i] = returnHashCode(c[i], hashCode);
        }
}

char* storeUserPassword()
{
    char *c = (char *) calloc(21, sizeof(char));
    char *fill = {"J/#[']R}L)"};

    int size;
    do
        {
            printf("(Password length should be of 10 to 20 character): ");
            gets(c);
            size = strlen(c);
        }
    while (size < 10 || size > 20);

    for (int i = 9; size < 20; i--)
        {
            c[size++] = fill[i];
        }

    return c;
}

void getUserPassword(unsigned long userHashCode[], unsigned long hashCode[])
{
    printf("Create Your Password ");
    char *c = storeUserPassword();

    createHashCode(c, userHashCode, hashCode);

    free(c);
}

int logIn(unsigned long userHashCode[], unsigned long hashCode[])
{
    printf("\nEnter the Password to Login ");
    char *c = storeUserPassword();
    unsigned long newHashCode[20];
    createHashCode(c, newHashCode, hashCode);

    for (int i = 0; i < 20; i++)
        {
            if (userHashCode[i] != newHashCode[i])
                {
                    printf("Password didn't match!\n");
                    return 0;
                }
            if (i == 19)
                {
                    printf("You have successfully Logged in!\n");
                }
        }
    return 1;
}

void UserLogIn(unsigned long userHashCode[], unsigned long hashCode[])
{
    int login;
    do
        {
            login = logIn(userHashCode, hashCode);
        }
    while (!login);

}

unsigned long returnHashValue(unsigned long hashCode[], int index)
{
    unsigned long random = (rand() % 9999999999L) + 1111111111L;

    for (int i = 0; i < index; i++)
        {
            if (hashCode[i] == random)
                {
                    random = returnHashValue(hashCode, index);
                }
        }

    return random;
}

void generate(unsigned long hashCode[])
{


    for (int index = 0; index < 95; index++)
        {
            hashCode[index] = returnHashValue(hashCode, index);
        }
}

int isUniqueID(char userUniqueId[], struct UniqueID* uniqueId)
{
    for (int i = 0; i < uniqueId->i; i++)
        {
            if (strcmp(userUniqueId, uniqueId->ID[i]) == 0)
                {
                    return 0;
                }
        }
    strcpy(uniqueId->ID[uniqueId->i++], userUniqueId);
    return 1;
}

void getUserData(struct UserData *user, struct UniqueID* uniqueId)
{
    printf("Enter Your Name: ");
    gets(user->name);

    printf("Enter Your Date Of Birth(in ('DD' 'MM' 'YYYY') formate: ");
    scanf("%d %d %d", &user->dateOfBirth[0], &user->dateOfBirth[1], &user->dateOfBirth[2]);

    printf("Enter Your Phone Number: ");
    scanf("%d", &user->phoneNumber[0]);

    printf("Create Your Unique ID (Ex. Abcd@uniqueid.in): ");
    char userUniqueId[50];
    while (1)
        {
            scanf("%s", &userUniqueId);
            int isUniqueId = isUniqueID(userUniqueId,uniqueId);
            if (isUniqueId)
                {
                    break;
                }
            printf("%s have been already used, try another one: ", userUniqueId);
        }
    strcpy(user->uniqueId, userUniqueId);

    srand(time(0));
    generate(user->hashCode);
}

void run(struct UserData* user, struct UniqueID* uniqueId)
{
    getUserData(user, uniqueId);
    getUserPassword(user->userHashCode, user->hashCode);
    UserLogIn(user->userHashCode, user->hashCode);
    displayHashCode(user->userHashCode);
    printf("\n\n");
}

struct UserData* initialise()
{
    struct UserData* user =  (struct UserData*) malloc(sizeof(struct UserData));
    return user;
}

int main()
{
    struct UniqueID* uniqueId = (struct UniqueID*) malloc(sizeof(struct UniqueID));
    uniqueId->i = 0;

    struct UserData* one = initialise(),* two = initialise(),* three = initialise();

    run(one, uniqueId);
    run(two, uniqueId);
    run(three, uniqueId);

    free(uniqueId);

    return 0;
}