from django.shortcuts import render,redirect
from . models import UserInfo

# Create your views here.

def index(request):
	users=UserInfo.objects.all()
	context={'users':users}
	
	return render(request,'index.html',context)

def registration(request):
	return render(request,'registration.html')

def insert(request):
	name=request.POST['name']
	gender=request.POST['gender']
	emailaddress=request.POST['emailaddress']
	contactno=request.POST['contactno']
	address=request.POST['address']

	user=UserInfo(name=name,gender=gender,address=address,contactno=contactno,emailaddress=emailaddress)
	user.save()

	return redirect('index')