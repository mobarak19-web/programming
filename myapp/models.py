# from django.db import models
from django.db import models

class Student(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField(blank=True, null=True)
    department = models.CharField(max_length=100)
    semester = models.IntegerField()

    def __str__(self):
        return self.name

class Teacher(models.Model):
    name = models.CharField(max_length=100)
    email = models.EmailField(blank=True, null=True)
    department = models.CharField(max_length=100)
    designation = models.CharField(blank=True, null=True)

    def __str__(self):
        return self.name
# Create your models here.
