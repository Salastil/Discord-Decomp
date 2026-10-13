package ps;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okhttp3.CookieJar;
import okhttp3.HttpUrl;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class o implements b, CookieJar, n {

    /* renamed from: d, reason: collision with root package name */
    public static final o f16572d = new o();

    public static final l a(o oVar, String str) {
        l lVar = new l(str);
        l.f16551d.put(str, lVar);
        return lVar;
    }

    public static String b(String str, int i5, String encodeSet, int i6, int i10) {
        int i11 = (i10 & 1) != 0 ? 0 : i5;
        int length = (i10 & 2) != 0 ? str.length() : i6;
        boolean z5 = (i10 & 8) == 0;
        boolean z6 = (i10 & 16) == 0;
        boolean z7 = (i10 & 32) == 0;
        boolean z8 = (i10 & 64) == 0;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(encodeSet, "encodeSet");
        int i12 = i11;
        while (i12 < length) {
            int codePointAt = str.codePointAt(i12);
            int i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
            int i14 = 32;
            if (codePointAt < 32 || codePointAt == 127 || ((codePointAt >= 128 && !z8) || StringsKt.E(encodeSet, (char) codePointAt) || ((codePointAt == 37 && (!z5 || (z6 && !d(i12, length, str)))) || (codePointAt == 43 && z7)))) {
                Buffer buffer = new Buffer();
                buffer.j0(i11, i12, str);
                Buffer buffer2 = null;
                while (i12 < length) {
                    int codePointAt2 = str.codePointAt(i12);
                    if (!z5 || (codePointAt2 != 9 && codePointAt2 != 10 && codePointAt2 != 12 && codePointAt2 != 13)) {
                        if (codePointAt2 == 43 && z7) {
                            buffer.l0(z5 ? "+" : "%2B");
                        } else if (codePointAt2 < i14 || codePointAt2 == 127 || ((codePointAt2 >= i13 && !z8) || StringsKt.E(encodeSet, (char) codePointAt2) || (codePointAt2 == 37 && (!z5 || (z6 && !d(i12, length, str)))))) {
                            if (buffer2 == null) {
                                buffer2 = new Buffer();
                            }
                            buffer2.m0(codePointAt2);
                            while (!buffer2.l()) {
                                byte readByte = buffer2.readByte();
                                buffer.U(37);
                                char[] cArr = HttpUrl.j;
                                buffer.U(cArr[((readByte & 255) >> 4) & 15]);
                                buffer.U(cArr[readByte & 15]);
                            }
                        } else {
                            buffer.m0(codePointAt2);
                        }
                    }
                    i12 += Character.charCount(codePointAt2);
                    i13 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    i14 = 32;
                }
                return buffer.W();
            }
            i12 += Character.charCount(codePointAt);
        }
        String substring = str.substring(i11, length);
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public static boolean d(int i5, int i6, String str) {
        int i10 = i5 + 2;
        return i10 < i6 && str.charAt(i5) == '%' && qs.b.q(str.charAt(i5 + 1)) != -1 && qs.b.q(str.charAt(i10)) != -1;
    }

    public static String e(int i5, String str, int i6, int i10) {
        int i11;
        if ((i10 & 1) != 0) {
            i5 = 0;
        }
        if ((i10 & 2) != 0) {
            i6 = str.length();
        }
        boolean z5 = (i10 & 4) == 0;
        Intrinsics.checkNotNullParameter(str, "<this>");
        int i12 = i5;
        while (i12 < i6) {
            int i13 = i12 + 1;
            char charAt = str.charAt(i12);
            if (charAt == '%' || (charAt == '+' && z5)) {
                Buffer buffer = new Buffer();
                buffer.j0(i5, i12, str);
                while (i12 < i6) {
                    int codePointAt = str.codePointAt(i12);
                    if (codePointAt != 37 || (i11 = i12 + 2) >= i6) {
                        if (codePointAt == 43 && z5) {
                            buffer.U(32);
                            i12++;
                        }
                        buffer.m0(codePointAt);
                        i12 += Character.charCount(codePointAt);
                    } else {
                        int q5 = qs.b.q(str.charAt(i12 + 1));
                        int q6 = qs.b.q(str.charAt(i11));
                        if (q5 != -1 && q6 != -1) {
                            buffer.U((q5 << 4) + q6);
                            i12 = Character.charCount(codePointAt) + i11;
                        }
                        buffer.m0(codePointAt);
                        i12 += Character.charCount(codePointAt);
                    }
                }
                return buffer.W();
            }
            i12 = i13;
        }
        String substring = str.substring(i5, i6);
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public static ArrayList f(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        ArrayList arrayList = new ArrayList();
        int i5 = 0;
        while (i5 <= str.length()) {
            int I = StringsKt.I(str, '&', i5, 4);
            if (I == -1) {
                I = str.length();
            }
            int I2 = StringsKt.I(str, '=', i5, 4);
            if (I2 == -1 || I2 > I) {
                String substring = str.substring(i5, I);
                Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                arrayList.add(substring);
                arrayList.add(null);
            } else {
                String substring2 = str.substring(i5, I2);
                Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String…ing(startIndex, endIndex)");
                arrayList.add(substring2);
                String substring3 = str.substring(I2 + 1, I);
                Intrinsics.checkNotNullExpressionValue(substring3, "this as java.lang.String…ing(startIndex, endIndex)");
                arrayList.add(substring3);
            }
            i5 = I + 1;
        }
        return arrayList;
    }

    public static void g(StringBuilder out, List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        Intrinsics.checkNotNullParameter(out, "out");
        kotlin.ranges.a g6 = yo.j.g(2, yo.j.i(0, list.size()));
        int i5 = g6.f13545d;
        int i6 = g6.f13546e;
        int i10 = g6.f13547i;
        if ((i10 <= 0 || i5 > i6) && (i10 >= 0 || i6 > i5)) {
            return;
        }
        while (true) {
            int i11 = i5 + i10;
            String str = (String) list.get(i5);
            String str2 = (String) list.get(i5 + 1);
            if (i5 > 0) {
                out.append('&');
            }
            out.append(str);
            if (str2 != null) {
                out.append('=');
                out.append(str2);
            }
            if (i5 == i6) {
                return;
            } else {
                i5 = i11;
            }
        }
    }

    public synchronized l c(String javaName) {
        l lVar;
        String str;
        try {
            Intrinsics.checkNotNullParameter(javaName, "javaName");
            LinkedHashMap linkedHashMap = l.f16551d;
            lVar = (l) linkedHashMap.get(javaName);
            if (lVar == null) {
                if (kotlin.text.x.o(javaName, "TLS_", false)) {
                    String substring = javaName.substring(4);
                    Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
                    str = Intrinsics.stringPlus("SSL_", substring);
                } else if (kotlin.text.x.o(javaName, "SSL_", false)) {
                    String substring2 = javaName.substring(4);
                    Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String).substring(startIndex)");
                    str = Intrinsics.stringPlus("TLS_", substring2);
                } else {
                    str = javaName;
                }
                lVar = (l) linkedHashMap.get(str);
                if (lVar == null) {
                    lVar = new l(javaName);
                }
                linkedHashMap.put(javaName, lVar);
            }
        } catch (Throwable th2) {
            throw th2;
        }
        return lVar;
    }

    @Override // okhttp3.CookieJar
    public List loadForRequest(HttpUrl url) {
        Intrinsics.checkNotNullParameter(url, "url");
        return m0.f13512d;
    }

    @Override // ps.n
    public List lookup(String hostname) {
        Intrinsics.checkNotNullParameter(hostname, "hostname");
        try {
            InetAddress[] allByName = InetAddress.getAllByName(hostname);
            Intrinsics.checkNotNullExpressionValue(allByName, "getAllByName(hostname)");
            return kotlin.collections.x.H(allByName);
        } catch (NullPointerException e9) {
            UnknownHostException unknownHostException = new UnknownHostException(Intrinsics.stringPlus("Broken system behaviour for dns lookup of ", hostname));
            unknownHostException.initCause(e9);
            throw unknownHostException;
        }
    }

    @Override // okhttp3.CookieJar
    public void saveFromResponse(HttpUrl url, List cookies) {
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(cookies, "cookies");
    }
}
