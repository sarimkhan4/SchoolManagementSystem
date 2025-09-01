# 🏫 School Management System

A comprehensive desktop application built with Qt C++ and MySQL for managing educational institutions. This system provides role-based access control with dedicated interfaces for administrators, teachers, and students.

## ✨ Features

### 🔐 Authentication & Security
- **Multi-role Login System**: Secure authentication for administrators, teachers, and students
- **Role-based Access Control**: Different interfaces and permissions based on user role
- **Password Management**: Secure password storage and validation

### 👨‍💼 Admin Panel
- **Student Management**: Add, edit, remove, and view student records
- **Teacher Management**: Comprehensive teacher database management
- **Exam Management**: Schedule and organize examinations
- **Class Schedule Management**: Create and manage class timetables
- **Attendance Management**: Track student and teacher attendance
- **Database Administration**: Full control over system data

### 👨‍🏫 Teacher Panel
- **Exam Result Management**: Record and manage student exam results
- **Exam Management**: Create and manage examinations
- **Class Schedule Viewing**: Access to class timetables
- **Attendance Marking**: Mark and view student attendance
- **Student Performance Tracking**: Monitor academic progress

### 👨‍🎓 Student Panel
- **Personal Information**: View and manage personal details
- **Exam Results**: Access academic performance and grades
- **Class Schedule**: View personal class timetables
- **Attendance Records**: Check attendance history
- **Exam Information**: Access exam schedules and details

## 🛠️ Technology Stack

- **Frontend**: Qt 6 (C++17)
- **Backend**: C++17
- **Database**: MySQL
- **UI Framework**: Qt Widgets
- **Build System**: qmake
- **Platform**: Cross-platform (Windows, Linux, macOS)

## 📋 Prerequisites

Before running this application, ensure you have:

- **Qt 6.x** installed on your system
- **MySQL Server** running locally
- **MySQL Connector C** (version 6.1.11 or compatible)
- **C++17 compatible compiler** (GCC, Clang, or MSVC)

## 🚀 Installation

### 1. Clone the Repository
```bash
git clone <repository-url>
cd SchoolManagementSystem
```

### 2. Database Setup
1. Start your MySQL server
2. Update database credentials in `DatabaseSetup.cpp`:
   ```cpp
   db.setUserName("your_username");
   db.setPassword("your_password");
   ```

### 3. Build the Project
```bash
# Using qmake
qmake SchoolManagementSystem.pro
make

# Or on Windows with MinGW
qmake SchoolManagementSystem.pro
mingw32-make
```

### 4. Run the Application
```bash
./SchoolManagementSystem
```

## 🔧 Configuration

### Default Admin Credentials
- **Username**: `Admin`
- **Password**: `admin123`

⚠️ **Important**: Change these credentials after first login for security.

### Database Configuration
The system automatically creates the following database structure:
- `school_management_system` database
- 11 tables for comprehensive data management
- Automatic table creation and population

## 📊 Database Schema

The system includes the following core tables:
- `students` - Student information and credentials
- `teachers` - Teacher information and credentials
- `admins` - Administrator accounts
- `class_schedule` - Class timetables
- `exam_schedule` - Examination schedules
- `login_credentials` - User authentication
- `student_attendance` - Student attendance records
- `student_reports` - Academic performance data
- `teacher_attendance` - Teacher attendance records
- `exam_management` - Exam administration
- `exam_results` - Student exam results

## 🎯 Usage

### For Administrators
1. Login with admin credentials
2. Access the comprehensive admin panel
3. Manage students, teachers, and system settings
4. Monitor attendance and academic performance

### For Teachers
1. Login with teacher credentials
2. Access teaching-related functions
3. Mark attendance and record exam results
4. View class schedules and student information

### For Students
1. Login with student credentials
2. View personal information and academic records
3. Check attendance and exam results
4. Access class schedules

## 🔒 Security Features

- **Case-sensitive authentication** using BINARY comparison
- **Role-based access control** preventing unauthorized access
- **Secure password storage** in database
- **Session management** for active users

## 🚧 System Requirements

- **Operating System**: Windows 10+, macOS 10.14+, Ubuntu 18.04+
- **Memory**: Minimum 4GB RAM
- **Storage**: 100MB available disk space
- **Database**: MySQL 5.7+ or MySQL 8.0+

## 🐛 Troubleshooting

### Common Issues

1. **Database Connection Failed**
   - Verify MySQL server is running
   - Check database credentials in `DatabaseSetup.cpp`
   - Ensure MySQL Connector C is properly installed

2. **Build Errors**
   - Verify Qt installation and version compatibility
   - Check C++17 compiler support
   - Ensure all dependencies are installed

3. **Runtime Errors**
   - Check database permissions
   - Verify table structure integrity
   - Review application logs for detailed error messages

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

**Sarim Khan**
- GitHub: [@yourusername](https://github.com/yourusername)
- LinkedIn: [Your LinkedIn Profile]

## 🙏 Acknowledgments

- Qt Framework for the excellent C++ GUI framework
- MySQL for robust database management
- Open source community for inspiration and support

## 📞 Support

If you encounter any issues or have questions:
- Create an issue in the GitHub repository
- Contact: [your-email@example.com]
- Documentation: [Link to detailed documentation if available]

---

⭐ **Star this repository if you find it helpful!**
