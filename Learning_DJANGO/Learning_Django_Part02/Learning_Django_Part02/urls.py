from django.contrib import admin
from django.urls import path
from django.urls import re_path as url,include
urlpatterns = [
 path('admin/', admin.site.urls),
 url('^',include('My_App.urls')),
]