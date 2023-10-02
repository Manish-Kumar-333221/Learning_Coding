from django.db import models

# Create your models here.
class UserInfo(models.Model):
 name=models.CharField(max_length=20)
 gender=models.CharField(max_length=6)
 emailaddress=models.EmailField()
 contactno=models.CharField(max_length=10)
 address=models.TextField()
