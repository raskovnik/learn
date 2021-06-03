from django.db import models
from django.urls import reverse


# Create your models here.
class Product(models.Model):
    title = models.CharField(max_length = 120)
    description = models.TextField(blank = True, null = True)
    price = models.DecimalField(max_digits=10000, decimal_places=2) 
    summary = models.TextField(blank = False, null = True)
    featured = models.BooleanField(default= True)

    def get_absolute_url(self):
        return reverse("product-detail", kwargs={"id": self.id})
        
    
 