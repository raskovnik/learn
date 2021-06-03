from django.urls import path

from .views import(
    product_create_view,
    product_detail_view,
    product_delete_view,
    product_list_view,
    product_update_view,
    dynamic_lookup_view,
    render_initial_data,
    social_view,
)

urlpatterns = [
         
    # path("<int:id>/", dynamic_lookup_view, name = "product-detail"),
    path("<int:id>/delete/", product_delete_view, name = "product-delete"), 
    path("<int:id>/", product_detail_view), 
    path("create/", render_initial_data), 
    path("/int:id>/update/", product_update_view, name = "product-update"),
   
    path("", product_list_view, name = "product-list"),
    # path("social/", social_view),
]
