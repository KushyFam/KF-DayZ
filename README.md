This is a work around reversing the changes made by the 1.26 concrete_panel_1 geometry change.

1 - pull from backup of the 1.25 concrete_panel_1, if not available search discord servers- I don't think BI will let us share this asset here as they've cited performance as the reason for changing it.
2 - set up as a custom asset with unique class name.
3 - extract layers with affected panels (might be easier for some depending on how you set up the layers)
4 - use a find and replace to swap concrete_panel_1 with your unique_class_replacement.

Now the awkward bit. You'll need to add back 0.93 (the offset of geo) from your Y position co-ordinates of your newly replaced panel. Because TB has already repositioned it by this amount. If you have already begun reposition some... consider putting them in another layer so you don't change them.

There's lot of tools in the community if there is one which can read an exported layer and display in table form then you can maybe find it quicker but if there's no such tools you can do this a manual grinding way..

Familiarise yourself with vertical highlight and selection on notepad++
Grab the Y position column and copy it. Paste it into a blank Google sheet.
On the cell to the right just do a quick =SUM(A1+0.93) and then copy the format down to get the readjusted pos with the 0.93 added back.

Copy the new figures and replace your originals on the export txt.

Save it and bring it back make sure to clear the original/updated 1.26 panels off your map if no longer needed.

It's dirty work but the only solution as I doubt they'll fix it.

So to recap...

Set up the 1.25 panel as a custom asset with unique class.
Export affected layers with the new 1.26 panel.
Find and replace the class with your unique class.
Use an advanced text editor to vertically select the Y pos data from the export.
Paste and Use a spreadsheet editor to add 0.93 to all the Y pos data.
Copy new figures and paste them over the old Y pos data.
Import the fixed .txt with your new_custom_class and the corrected Y pos data.
Remove any 1.26 panels still affected on your map.
