from django import forms

from .models import Product

class ProductForm(forms.ModelForm):
    title       = forms.CharField(widget = forms.TextInput(attrs = { "placeholder" : "Input your title"}))
    description = forms.CharField()
    price       = forms.DecimalField()

    class Meta:
        model = Product
        fields = [
            "title", 
            "description", 
            "price"
        ]

    # def clean_title(self, *args, **kwargs):
    #     title = self.cleaned_data.get("title")
    #     if not "raskovnik" in title:
    #         raise forms.ValidationError("This is not a valid title!")
    #     return title

            
        
class RawProductForm(forms.Form):
    title       = forms.CharField(widget = forms.TextInput(attrs = { "placeholder" : "Input your title"}))
    description = forms.CharField()
    price       = forms.DecimalField()


