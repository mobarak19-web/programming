# from django.urls import path
# from . import views

# urlpatterns = [
#     path('', views.home, name='home'),
#     path('add-student/', views.add_student, name='add_student'),
#     path('add-teacher/', views.add_teacher, name='add_teacher'),
# ]
from django.urls import path
from . import views

urlpatterns = [
    path('', views.landing_page, name='landing'),
    path('students/', views.students_page, name='students'),
    path('teachers/', views.teachers_page, name='teachers'),
]