# Generated by Django 4.1 on 2022-08-22 06:10

from django.db import migrations, models

class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='UserInfo',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=20)),
                ('gender', models.CharField(max_length=6)),
                ('emailaddress', models.EmailField(max_length=254)),
                ('contactno', models.CharField(max_length=10)),
                ('address', models.TextField()),
            ],
        ),
    ]
