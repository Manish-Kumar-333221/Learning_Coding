from django import forms
def check_size(value):
 	if len(value) < 6:
 		raise forms.ValidationError("the Password is too short")
 
class SignUp(forms.Form):
	first_name = forms.CharField(initial = 'First Name' )
	last_name = forms.CharField()
	email = forms.EmailField(help_text = 'Write your email')
	address = forms.CharField(required = False)
	technology = forms.CharField(initial = 'Django', disabled = True)
	age = forms.IntegerField()
	password = forms.CharField(widget = forms.PasswordInput,validators = [check_size])
	re_password = forms.CharField(help_text = 'Re-enter your password', widget = forms.PasswordInput)