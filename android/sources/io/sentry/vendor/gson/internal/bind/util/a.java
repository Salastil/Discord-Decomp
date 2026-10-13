package io.sentry.vendor.gson.internal.bind.util;

import a3.e;
import j$.util.DesugarTimeZone;
import java.text.ParseException;
import java.text.ParsePosition;
import java.util.Date;
import java.util.GregorianCalendar;
import java.util.TimeZone;
import k0.d;

/* loaded from: classes3.dex */
public abstract class a {
    public static final TimeZone a = DesugarTimeZone.getTimeZone("UTC");

    public static boolean a(char c6, int i5, String str) {
        return i5 < str.length() && str.charAt(i5) == c6;
    }

    public static void b(int i5, int i6, StringBuilder sb2) {
        String num = Integer.toString(i5);
        for (int length = i6 - num.length(); length > 0; length--) {
            sb2.append('0');
        }
        sb2.append(num);
    }

    /* JADX WARN: Removed duplicated region for block: B:104:0x01e5  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x00f6 A[Catch: IllegalArgumentException -> 0x00b8, NumberFormatException -> 0x00bb, IndexOutOfBoundsException -> 0x00be, TRY_LEAVE, TryCatch #2 {IllegalArgumentException -> 0x00b8, IndexOutOfBoundsException -> 0x00be, NumberFormatException -> 0x00bb, blocks: (B:3:0x0004, B:5:0x0017, B:6:0x0019, B:8:0x0025, B:9:0x0027, B:11:0x0036, B:13:0x003c, B:18:0x0051, B:20:0x0061, B:21:0x0063, B:23:0x006f, B:24:0x0072, B:26:0x0078, B:30:0x0082, B:35:0x0092, B:37:0x009a, B:38:0x009e, B:40:0x00a4, B:44:0x00b1, B:48:0x00c5, B:53:0x00f0, B:55:0x00f6, B:59:0x01a8, B:64:0x0108, B:65:0x0123, B:66:0x0124, B:69:0x0141, B:71:0x014e, B:74:0x0157, B:76:0x0176, B:79:0x0185, B:80:0x01a7, B:81:0x0130, B:82:0x01d9, B:83:0x01e0, B:84:0x00d5, B:85:0x00d8, B:88:0x00c1), top: B:2:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:82:0x01d9 A[Catch: IllegalArgumentException -> 0x00b8, NumberFormatException -> 0x00bb, IndexOutOfBoundsException -> 0x00be, TryCatch #2 {IllegalArgumentException -> 0x00b8, IndexOutOfBoundsException -> 0x00be, NumberFormatException -> 0x00bb, blocks: (B:3:0x0004, B:5:0x0017, B:6:0x0019, B:8:0x0025, B:9:0x0027, B:11:0x0036, B:13:0x003c, B:18:0x0051, B:20:0x0061, B:21:0x0063, B:23:0x006f, B:24:0x0072, B:26:0x0078, B:30:0x0082, B:35:0x0092, B:37:0x009a, B:38:0x009e, B:40:0x00a4, B:44:0x00b1, B:48:0x00c5, B:53:0x00f0, B:55:0x00f6, B:59:0x01a8, B:64:0x0108, B:65:0x0123, B:66:0x0124, B:69:0x0141, B:71:0x014e, B:74:0x0157, B:76:0x0176, B:79:0x0185, B:80:0x01a7, B:81:0x0130, B:82:0x01d9, B:83:0x01e0, B:84:0x00d5, B:85:0x00d8, B:88:0x00c1), top: B:2:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:96:0x01e3  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x01f3  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Date c(String str, ParsePosition parsePosition) {
        String message;
        int i5;
        int i6;
        int i10;
        int i11;
        int length;
        char charAt;
        int length2;
        try {
            int index = parsePosition.getIndex();
            int i12 = index + 4;
            int d6 = d(index, i12, str);
            if (a('-', i12, str)) {
                i12 = index + 5;
            }
            int i13 = i12 + 2;
            int d7 = d(i12, i13, str);
            if (a('-', i13, str)) {
                i13 = i12 + 3;
            }
            int i14 = i13 + 2;
            int d8 = d(i13, i14, str);
            boolean a10 = a('T', i14, str);
            if (!a10 && str.length() <= i14) {
                GregorianCalendar gregorianCalendar = new GregorianCalendar(d6, d7 - 1, d8);
                parsePosition.setIndex(i14);
                return gregorianCalendar.getTime();
            }
            if (a10) {
                int i15 = i13 + 5;
                int d10 = d(i13 + 3, i15, str);
                if (a(':', i15, str)) {
                    i15 = i13 + 6;
                }
                int i16 = i15 + 2;
                int d11 = d(i15, i16, str);
                if (a(':', i16, str)) {
                    i16 = i15 + 3;
                }
                if (str.length() > i16 && (charAt = str.charAt(i16)) != 'Z' && charAt != '+' && charAt != '-') {
                    int i17 = i16 + 2;
                    i11 = d(i16, i17, str);
                    if (i11 > 59 && i11 < 63) {
                        i11 = 59;
                    }
                    if (a('.', i17, str)) {
                        int i18 = i16 + 3;
                        for (int i19 = i16 + 4; i19 < str.length(); i19++) {
                            char charAt2 = str.charAt(i19);
                            if (charAt2 >= '0' && charAt2 <= '9') {
                            }
                            length2 = i19;
                        }
                        length2 = str.length();
                        int min = Math.min(length2, i16 + 6);
                        i10 = d(i18, min, str);
                        int i20 = min - i18;
                        if (i20 == 1) {
                            i10 *= 100;
                        } else if (i20 == 2) {
                            i10 *= 10;
                        }
                        i5 = d10;
                        i14 = length2;
                        i6 = d11;
                    } else {
                        i5 = d10;
                        i14 = i17;
                        i6 = d11;
                        i10 = 0;
                    }
                    if (str.length() > i14) {
                        throw new IllegalArgumentException("No time zone indicator");
                    }
                    char charAt3 = str.charAt(i14);
                    TimeZone timeZone = a;
                    if (charAt3 == 'Z') {
                        length = i14 + 1;
                    } else {
                        if (charAt3 != '+' && charAt3 != '-') {
                            throw new IndexOutOfBoundsException("Invalid time zone indicator '" + charAt3 + "'");
                        }
                        String substring = str.substring(i14);
                        if (substring.length() < 5) {
                            substring = substring + "00";
                        }
                        length = i14 + substring.length();
                        if (!"+0000".equals(substring) && !"+00:00".equals(substring)) {
                            String str2 = "GMT" + substring;
                            timeZone = DesugarTimeZone.getTimeZone(str2);
                            String id2 = timeZone.getID();
                            if (!id2.equals(str2) && !id2.replace(":", "").equals(str2)) {
                                throw new IndexOutOfBoundsException("Mismatching time zone indicator: " + str2 + " given, resolves to " + timeZone.getID());
                            }
                        }
                    }
                    GregorianCalendar gregorianCalendar2 = new GregorianCalendar(timeZone);
                    gregorianCalendar2.setLenient(false);
                    gregorianCalendar2.set(1, d6);
                    gregorianCalendar2.set(2, d7 - 1);
                    gregorianCalendar2.set(5, d8);
                    gregorianCalendar2.set(11, i5);
                    gregorianCalendar2.set(12, i6);
                    gregorianCalendar2.set(13, i11);
                    gregorianCalendar2.set(14, i10);
                    parsePosition.setIndex(length);
                    return gregorianCalendar2.getTime();
                }
                i14 = i16;
                i5 = d10;
                i6 = d11;
            } else {
                i5 = 0;
                i6 = 0;
            }
            i10 = 0;
            i11 = 0;
            if (str.length() > i14) {
            }
        } catch (IllegalArgumentException e9) {
            e = e9;
            String h6 = str == null ? null : d.h('\"', "\"", str);
            message = e.getMessage();
            if (message != null || message.isEmpty()) {
                message = "(" + e.getClass().getName() + ")";
            }
            ParseException parseException = new ParseException(e.l("Failed to parse date [", h6, "]: ", message), parsePosition.getIndex());
            parseException.initCause(e);
            throw parseException;
        } catch (IndexOutOfBoundsException e10) {
            e = e10;
            if (str == null) {
            }
            message = e.getMessage();
            if (message != null) {
            }
            message = "(" + e.getClass().getName() + ")";
            ParseException parseException2 = new ParseException(e.l("Failed to parse date [", h6, "]: ", message), parsePosition.getIndex());
            parseException2.initCause(e);
            throw parseException2;
        } catch (NumberFormatException e11) {
            e = e11;
            if (str == null) {
            }
            message = e.getMessage();
            if (message != null) {
            }
            message = "(" + e.getClass().getName() + ")";
            ParseException parseException22 = new ParseException(e.l("Failed to parse date [", h6, "]: ", message), parsePosition.getIndex());
            parseException22.initCause(e);
            throw parseException22;
        }
    }

    public static int d(int i5, int i6, String str) {
        int i10;
        int i11;
        if (i5 < 0 || i6 > str.length() || i5 > i6) {
            throw new NumberFormatException(str);
        }
        if (i5 < i6) {
            i11 = i5 + 1;
            int digit = Character.digit(str.charAt(i5), 10);
            if (digit < 0) {
                throw new NumberFormatException("Invalid number: " + str.substring(i5, i6));
            }
            i10 = -digit;
        } else {
            i10 = 0;
            i11 = i5;
        }
        while (i11 < i6) {
            int i12 = i11 + 1;
            int digit2 = Character.digit(str.charAt(i11), 10);
            if (digit2 < 0) {
                throw new NumberFormatException("Invalid number: " + str.substring(i5, i6));
            }
            i10 = (i10 * 10) - digit2;
            i11 = i12;
        }
        return -i10;
    }
}
