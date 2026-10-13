package gt;

import java.util.Locale;
import java.util.concurrent.ConcurrentHashMap;

/* loaded from: classes.dex */
public abstract class a {
    static {
        new ConcurrentHashMap();
        new ConcurrentHashMap();
    }

    public static boolean a(String str) {
        if (str == null || str.length() == 0) {
            return false;
        }
        int length = str.length();
        int i5 = 0;
        while (true) {
            if (i5 < length) {
                if (!Character.isUpperCase(str.charAt(i5))) {
                    break;
                }
                i5++;
            } else if (str.length() == 2) {
                return true;
            }
        }
        return false;
    }

    public static boolean b(String str) {
        if (str == null || str.length() == 0) {
            return false;
        }
        int length = str.length();
        int i5 = 0;
        while (true) {
            if (i5 < length) {
                if (!Character.isLowerCase(str.charAt(i5))) {
                    break;
                }
                i5++;
            } else if (str.length() == 2 || str.length() == 3) {
                return true;
            }
        }
        return false;
    }

    public static boolean c(String str) {
        if (str != null && str.length() != 0) {
            int length = str.length();
            int i5 = 0;
            while (true) {
                if (i5 < length) {
                    if (!Character.isDigit(str.charAt(i5))) {
                        break;
                    }
                    i5++;
                } else if (str.length() == 3) {
                    return true;
                }
            }
        }
        return false;
    }

    public static Locale d(String str) {
        if (str == null) {
            return null;
        }
        if (str.isEmpty()) {
            return new Locale("", "");
        }
        if (str.contains("#")) {
            throw new IllegalArgumentException("Invalid locale format: ".concat(str));
        }
        int length = str.length();
        if (length < 2) {
            throw new IllegalArgumentException("Invalid locale format: ".concat(str));
        }
        if (str.charAt(0) == '_') {
            if (length < 3) {
                throw new IllegalArgumentException("Invalid locale format: ".concat(str));
            }
            char charAt = str.charAt(1);
            char charAt2 = str.charAt(2);
            if (!Character.isUpperCase(charAt) || !Character.isUpperCase(charAt2)) {
                throw new IllegalArgumentException("Invalid locale format: ".concat(str));
            }
            if (length == 3) {
                return new Locale("", str.substring(1, 3));
            }
            if (length < 5) {
                throw new IllegalArgumentException("Invalid locale format: ".concat(str));
            }
            if (str.charAt(3) == '_') {
                return new Locale("", str.substring(1, 3), str.substring(4));
            }
            throw new IllegalArgumentException("Invalid locale format: ".concat(str));
        }
        if (b(str)) {
            return new Locale(str);
        }
        String[] split = str.split("_", -1);
        String str2 = split[0];
        if (split.length == 2) {
            String str3 = split[1];
            if ((b(str2) && a(str3)) || c(str3)) {
                return new Locale(str2, str3);
            }
        } else if (split.length == 3) {
            String str4 = split[1];
            String str5 = split[2];
            if (b(str2) && ((str4.isEmpty() || a(str4) || c(str4)) && !str5.isEmpty())) {
                return new Locale(str2, str4, str5);
            }
        }
        throw new IllegalArgumentException("Invalid locale format: ".concat(str));
    }
}
