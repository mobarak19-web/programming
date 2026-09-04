# from django.shortcuts import render, redirect
# from django.db import connection # SQL চালানোর জন্য এটি ইমপোর্ট করতে হবে

# # Raw SQL দিয়ে Data Fetch (Show) করা
# def home(request):
#     with connection.cursor() as cursor:
#         # SQL Select Query
#         cursor.execute("SELECT id, name, email, department, semester FROM myapp_student")
#         students = cursor.fetchall() # সব স্টুডেন্ট ফেচ করবে

#         cursor.execute("SELECT id, name, email, department, designation FROM myapp_teacher")
#         teachers = cursor.fetchall() # সব টিচার ফেচ করবে

#     # ডাটা ডিকশনারি ফরম্যাটে নেওয়া যেন HTML-এ সহজে ব্যবহার করা যায়
#     student_list = [{'id': row[0], 'name': row[1], 'email': row[2], 'department': row[3], 'semester': row[4]} for row in students]
#     teacher_list = [{'id': row[0], 'name': row[1], 'email': row[2], 'department': row[3], 'designation': row[4]} for row in teachers]

#     return render(request, 'index.html', {'students': student_list, 'teachers': teacher_list})


# # Raw SQL দিয়ে Student Add করা (INSERT Query)
# def add_student(request):
#     if request.method == 'POST':
#         name = request.POST.get('name')
#         email = request.POST.get('email')
#         department = request.POST.get('department')
#         semester = request.POST.get('semester')

#         with connection.cursor() as cursor:
#             # Raw SQL INSERT Query
#             cursor.execute(
#                 "INSERT INTO myapp_student (name, email, department, semester) VALUES (%s, %s, %s, %s)",
#                 [name, email, department, semester]
#             )
            
#     return redirect('home')


# # Raw SQL দিয়ে Teacher Add করা (INSERT Query)
# def add_teacher(request):
#     if request.method == 'POST':
#         name = request.POST.get('name')
#         email = request.POST.get('email')
#         department = request.POST.get('department')
#         designation = request.POST.get('designation')

#         with connection.cursor() as cursor:
#             # Raw SQL INSERT Query
#             cursor.execute(
#                 "INSERT INTO myapp_teacher (name, email, department, designation) VALUES (%s, %s, %s, %s)",
#                 [name, email, department, designation]
#             )

from django.shortcuts import render
from .models import Student, Teacher

def landing_page(request):
    total_students = Student.objects.count()
    total_teachers = Teacher.objects.count()
    context = {
        'total_students': total_students,
        'total_teachers': total_teachers
    }
    return render(request, 'landing.html', context)

def students_page(request):
    students = Student.objects.all()
    total_students = students.count()
    return render(request, 'students.html', {'students': students, 'total_students': total_students})

def teachers_page(request):
    teachers = Teacher.objects.all()
    total_teachers = teachers.count()
    return render(request, 'teachers.html', {'teachers': teachers, 'total_teachers': total_teachers})
