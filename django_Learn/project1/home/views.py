from http.client import HTTPS_PORT
from django.shortcuts import render,HttpResponse
from django.template import context
from httplib2 import Http
from django.contrib import messages

from home.models import Contact

# Create your views here.

def index(request):
    # return HttpResponse("this is our homepage")
   
    return render(request,"index.html") 


def about(request):
    # return HttpResponse("this is our about")
    return render(request,"about.html") 

def services(request):
    # return HttpResponse("this is services page")
    return render(request,"services.html") 

def contact(request):
    # return HttpResponse("this is contact page")

    if request.method=="POST":
       email=request.POST.get('em')
       password=request.POST.get("pas")
       contact=Contact(email=email,password=password)
       contact.save()
       messages.success(request, 'Message upload ho gaya hai bhai.')

    return render(request,"contact.html") 