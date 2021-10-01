import 'dart:convert';

import 'package:shared_preferences/shared_preferences.dart';
import 'package:profile_app/model/user.dart';

class UserPreferences {
  static late SharedPreferences _preferences;

  static const _keyUser = 'user';
  static const myUser = User(
    imagePath:
        'https://media.istockphoto.com/photos/newest-technological-tools-make-office-duties-easier-picture-id1225115545?k=20&m=1225115545&s=612x612&w=0&h=sMMf798jQPIoOmKsjKtnzyJ8AjNhVOTkiYN7TYg3jMg=',
    name: 'Shubham Shah',
    email: 'Shubhamshah14102@gmail.com',
    about: 'To Believe and Act as if it was impossible to fail.',
    isDarkMode: false,
  );

  static Future init() async =>
      _preferences = await SharedPreferences.getInstance();

  static Future setUser(User user) async {
    final json = jsonEncode(user.toJson());

    await _preferences.setString(_keyUser, json);
  }

  static User getUser() {
    final json = _preferences.getString(_keyUser);

    return json == null ? myUser : User.fromJson(jsonDecode(json));
  }
}
