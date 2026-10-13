package us;

import af.h0;
import java.text.DateFormat;
import java.text.ParsePosition;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class c {
    public static final h0 a = new h0(6);

    /* renamed from: b, reason: collision with root package name */
    public static final String[] f19111b;

    /* renamed from: c, reason: collision with root package name */
    public static final DateFormat[] f19112c;

    static {
        String[] strArr = {"EEE, dd MMM yyyy HH:mm:ss zzz", "EEEE, dd-MMM-yy HH:mm:ss zzz", "EEE MMM d HH:mm:ss yyyy", "EEE, dd-MMM-yyyy HH:mm:ss z", "EEE, dd-MMM-yyyy HH-mm-ss z", "EEE, dd MMM yy HH:mm:ss z", "EEE dd-MMM-yyyy HH:mm:ss z", "EEE dd MMM yyyy HH:mm:ss z", "EEE dd-MMM-yyyy HH-mm-ss z", "EEE dd-MMM-yy HH:mm:ss z", "EEE dd MMM yy HH:mm:ss z", "EEE,dd-MMM-yy HH:mm:ss z", "EEE,dd-MMM-yyyy HH:mm:ss z", "EEE, dd-MM-yyyy HH:mm:ss z", "EEE MMM d yyyy HH:mm:ss z"};
        f19111b = strArr;
        f19112c = new DateFormat[strArr.length];
    }

    public static final Date a(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str.length() == 0) {
            return null;
        }
        ParsePosition parsePosition = new ParsePosition(0);
        Date parse = ((DateFormat) a.get()).parse(str, parsePosition);
        if (parsePosition.getIndex() == str.length()) {
            return parse;
        }
        String[] strArr = f19111b;
        synchronized (strArr) {
            try {
                int length = strArr.length;
                int i5 = 0;
                while (i5 < length) {
                    int i6 = i5 + 1;
                    DateFormat[] dateFormatArr = f19112c;
                    DateFormat dateFormat = dateFormatArr[i5];
                    if (dateFormat == null) {
                        dateFormat = new SimpleDateFormat(f19111b[i5], Locale.US);
                        dateFormat.setTimeZone(qs.b.f17054e);
                        dateFormatArr[i5] = dateFormat;
                    }
                    parsePosition.setIndex(0);
                    Date parse2 = dateFormat.parse(str, parsePosition);
                    if (parsePosition.getIndex() != 0) {
                        return parse2;
                    }
                    i5 = i6;
                }
                Unit unit = Unit.a;
                return null;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
