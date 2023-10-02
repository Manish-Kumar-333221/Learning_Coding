import os
from django.core.wsgi import get_wsgi_application

os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'Learning_Django_Part01.settings')

application = get_wsgi_application()
