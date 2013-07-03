__author__ = 'Devon'

from django.conf.urls import patterns, url

from trackStack import views

urlpatterns = patterns('',
    url(r'^$', views.index, name='index')
)