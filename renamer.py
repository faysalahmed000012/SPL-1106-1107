import os


def rename_files_in_folder():

    folder_path = './Beecrowd_Beginner_Problems'  # তোমার ফোল্ডারের লোকেশন ।
    try:
       
        files = os.listdir(folder_path)
        
        for file in files:
            
            if os.path.isfile(os.path.join(folder_path, file)):
                
                old_file_path = os.path.join(folder_path, file)
                new_file_name = f"Beecrowd-{file}"
                new_file_path = os.path.join(folder_path, new_file_name)
                
               
                os.rename(old_file_path, new_file_path)
        
        print("Files renamed successfully!")
    
    except Exception as e:
        print(f"An error occurred: {e}")


rename_files_in_folder()