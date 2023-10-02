import os
from django.core.asgi import get_asgi_application

os.environ.setdefault('DJANGO_SETTINGS_MODULE', 'Learning_Django_Part01.settings')

application = get_asgi_application()
