package qs;

import com.facebook.react.devsupport.StackTraceHelper;
import et.o;
import et.y;
import fo.f;
import io.sentry.hints.j;
import j$.util.DesugarTimeZone;
import java.io.Closeable;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.Socket;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.TimeZone;
import java.util.concurrent.TimeUnit;
import k0.d;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.Charsets;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.x;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.OkHttpClient;
import okhttp3.RequestBody;
import okhttp3.Response;
import okhttp3.ResponseBody;
import okhttp3.e;
import okio.Buffer;
import okio.BufferedSource;
import okio.ByteString;
import okio.Source;
import ws.c;

/* loaded from: classes3.dex */
public abstract class b {
    public static final byte[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final Headers f17051b = d9.a.G(new String[0]);

    /* renamed from: c, reason: collision with root package name */
    public static final e f17052c;

    /* renamed from: d, reason: collision with root package name */
    public static final o f17053d;

    /* renamed from: e, reason: collision with root package name */
    public static final TimeZone f17054e;

    /* renamed from: f, reason: collision with root package name */
    public static final Regex f17055f;

    /* renamed from: g, reason: collision with root package name */
    public static final String f17056g;

    static {
        byte[] bArr = new byte[0];
        a = bArr;
        ResponseBody.Companion.getClass();
        f17052c = ResponseBody.Companion.c(bArr, null);
        RequestBody.Companion.d(RequestBody.Companion, bArr, null, 0, 7);
        int i5 = o.f8260v;
        ByteString byteString = ByteString.f16115v;
        f17053d = y.h(j.C("efbbbf"), j.C("feff"), j.C("fffe"), j.C("0000ffff"), j.C("ffff0000"));
        TimeZone timeZone = DesugarTimeZone.getTimeZone("GMT");
        Intrinsics.checkNotNull(timeZone);
        f17054e = timeZone;
        f17055f = new Regex("([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)");
        String name = OkHttpClient.class.getName();
        Intrinsics.checkNotNullExpressionValue(name, "OkHttpClient::class.java.name");
        f17056g = StringsKt.O(StringsKt.N(name, "okhttp3."), "Client");
    }

    public static final boolean a(HttpUrl httpUrl, HttpUrl other) {
        Intrinsics.checkNotNullParameter(httpUrl, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        return Intrinsics.areEqual(httpUrl.f16034d, other.f16034d) && httpUrl.f16035e == other.f16035e && Intrinsics.areEqual(httpUrl.a, other.a);
    }

    public static final int b(long j, TimeUnit timeUnit) {
        Intrinsics.checkNotNullParameter("timeout", StackTraceHelper.NAME_KEY);
        if (j < 0) {
            throw new IllegalStateException(Intrinsics.stringPlus("timeout", " < 0").toString());
        }
        if (timeUnit == null) {
            throw new IllegalStateException("unit == null");
        }
        long millis = timeUnit.toMillis(j);
        if (millis > 2147483647L) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("timeout", " too large.").toString());
        }
        if (millis != 0 || j <= 0) {
            return (int) millis;
        }
        throw new IllegalArgumentException(Intrinsics.stringPlus("timeout", " too small.").toString());
    }

    public static final void c(Closeable closeable) {
        Intrinsics.checkNotNullParameter(closeable, "<this>");
        try {
            closeable.close();
        } catch (RuntimeException e9) {
            throw e9;
        } catch (Exception unused) {
        }
    }

    public static final void d(Socket socket) {
        Intrinsics.checkNotNullParameter(socket, "<this>");
        try {
            socket.close();
        } catch (AssertionError e9) {
            throw e9;
        } catch (RuntimeException e10) {
            if (!Intrinsics.areEqual(e10.getMessage(), "bio == null")) {
                throw e10;
            }
        } catch (Exception unused) {
        }
    }

    public static final int e(char c6, int i5, int i6, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        while (i5 < i6) {
            int i10 = i5 + 1;
            if (str.charAt(i5) == c6) {
                return i5;
            }
            i5 = i10;
        }
        return i6;
    }

    public static final int f(int i5, int i6, String str, String delimiters) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(delimiters, "delimiters");
        while (i5 < i6) {
            int i10 = i5 + 1;
            if (StringsKt.E(delimiters, str.charAt(i5))) {
                return i5;
            }
            i5 = i10;
        }
        return i6;
    }

    public static /* synthetic */ int g(char c6, int i5, int i6, int i10, String str) {
        if ((i10 & 2) != 0) {
            i5 = 0;
        }
        if ((i10 & 4) != 0) {
            i6 = str.length();
        }
        return e(c6, i5, i6, str);
    }

    public static final String h(String format, Object... args) {
        Intrinsics.checkNotNullParameter(format, "format");
        Intrinsics.checkNotNullParameter(args, "args");
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        Locale locale = Locale.US;
        Object[] copyOf = Arrays.copyOf(args, args.length);
        return a3.e.p(copyOf, copyOf.length, locale, format, "format(locale, format, *args)");
    }

    public static final boolean i(String[] strArr, String[] strArr2, Comparator comparator) {
        Intrinsics.checkNotNullParameter(strArr, "<this>");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        if (strArr.length != 0 && strArr2 != null && strArr2.length != 0) {
            int length = strArr.length;
            int i5 = 0;
            while (i5 < length) {
                String str = strArr[i5];
                i5++;
                Iterator it = ArrayIteratorKt.iterator(strArr2);
                while (it.hasNext()) {
                    if (comparator.compare(str, (String) it.next()) == 0) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public static final long j(Response response) {
        Intrinsics.checkNotNullParameter(response, "<this>");
        String a10 = response.f16090x.a("Content-Length");
        if (a10 == null) {
            return -1L;
        }
        Intrinsics.checkNotNullParameter(a10, "<this>");
        try {
            return Long.parseLong(a10);
        } catch (NumberFormatException unused) {
            return -1L;
        }
    }

    public static final List k(Object... elements) {
        Intrinsics.checkNotNullParameter(elements, "elements");
        Object[] objArr = (Object[]) elements.clone();
        List unmodifiableList = Collections.unmodifiableList(c0.g(Arrays.copyOf(objArr, objArr.length)));
        Intrinsics.checkNotNullExpressionValue(unmodifiableList, "unmodifiableList(listOf(*elements.clone()))");
        return unmodifiableList;
    }

    public static final int l(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        int length = str.length();
        int i5 = 0;
        while (i5 < length) {
            int i6 = i5 + 1;
            char charAt = str.charAt(i5);
            if (Intrinsics.compare((int) charAt, 31) <= 0 || Intrinsics.compare((int) charAt, 127) >= 0) {
                return i5;
            }
            i5 = i6;
        }
        return -1;
    }

    public static final int m(int i5, int i6, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        while (i5 < i6) {
            int i10 = i5 + 1;
            char charAt = str.charAt(i5);
            if (charAt != '\t' && charAt != '\n' && charAt != '\f' && charAt != '\r' && charAt != ' ') {
                return i5;
            }
            i5 = i10;
        }
        return i6;
    }

    public static final int n(int i5, int i6, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        int i10 = i6 - 1;
        if (i5 <= i10) {
            while (true) {
                int i11 = i10 - 1;
                char charAt = str.charAt(i10);
                if (charAt != '\t' && charAt != '\n' && charAt != '\f' && charAt != '\r' && charAt != ' ') {
                    return i10 + 1;
                }
                if (i10 == i5) {
                    break;
                }
                i10 = i11;
            }
        }
        return i5;
    }

    public static final String[] o(String[] strArr, String[] other, Comparator comparator) {
        Intrinsics.checkNotNullParameter(strArr, "<this>");
        Intrinsics.checkNotNullParameter(other, "other");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        ArrayList arrayList = new ArrayList();
        int length = strArr.length;
        int i5 = 0;
        while (i5 < length) {
            String str = strArr[i5];
            i5++;
            int length2 = other.length;
            int i6 = 0;
            while (true) {
                if (i6 < length2) {
                    String str2 = other[i6];
                    i6++;
                    if (comparator.compare(str, str2) == 0) {
                        arrayList.add(str);
                        break;
                    }
                }
            }
        }
        Object[] array = arrayList.toArray(new String[0]);
        if (array != null) {
            return (String[]) array;
        }
        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
    }

    public static final boolean p(String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        return x.i(name, "Authorization", true) || x.i(name, "Cookie", true) || x.i(name, "Proxy-Authorization", true) || x.i(name, "Set-Cookie", true);
    }

    public static final int q(char c6) {
        if ('0' <= c6 && c6 < ':') {
            return c6 - '0';
        }
        if ('a' <= c6 && c6 < 'g') {
            return c6 - 'W';
        }
        if ('A' > c6 || c6 >= 'G') {
            return -1;
        }
        return c6 - '7';
    }

    public static final Charset r(BufferedSource bufferedSource, Charset charset) {
        Intrinsics.checkNotNullParameter(bufferedSource, "<this>");
        Intrinsics.checkNotNullParameter(charset, "default");
        int Y = bufferedSource.Y(f17053d);
        if (Y == -1) {
            return charset;
        }
        if (Y == 0) {
            Charset UTF_8 = StandardCharsets.UTF_8;
            Intrinsics.checkNotNullExpressionValue(UTF_8, "UTF_8");
            return UTF_8;
        }
        if (Y == 1) {
            Charset UTF_16BE = StandardCharsets.UTF_16BE;
            Intrinsics.checkNotNullExpressionValue(UTF_16BE, "UTF_16BE");
            return UTF_16BE;
        }
        if (Y == 2) {
            Charset UTF_16LE = StandardCharsets.UTF_16LE;
            Intrinsics.checkNotNullExpressionValue(UTF_16LE, "UTF_16LE");
            return UTF_16LE;
        }
        if (Y == 3) {
            Charsets.a.getClass();
            Charset charset2 = Charsets.f13557c;
            if (charset2 != null) {
                return charset2;
            }
            Charset forName = Charset.forName("UTF-32BE");
            Intrinsics.checkNotNullExpressionValue(forName, "forName(...)");
            Charsets.f13557c = forName;
            return forName;
        }
        if (Y != 4) {
            throw new AssertionError();
        }
        Charsets.a.getClass();
        Charset charset3 = Charsets.f13556b;
        if (charset3 != null) {
            return charset3;
        }
        Charset forName2 = Charset.forName("UTF-32LE");
        Intrinsics.checkNotNullExpressionValue(forName2, "forName(...)");
        Charsets.f13556b = forName2;
        return forName2;
    }

    public static final int s(BufferedSource bufferedSource) {
        Intrinsics.checkNotNullParameter(bufferedSource, "<this>");
        return (bufferedSource.readByte() & 255) | ((bufferedSource.readByte() & 255) << 16) | ((bufferedSource.readByte() & 255) << 8);
    }

    public static final boolean t(Source source, int i5) {
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        Intrinsics.checkNotNullParameter(source, "<this>");
        Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
        long nanoTime = System.nanoTime();
        long c6 = source.timeout().e() ? source.timeout().c() - nanoTime : Long.MAX_VALUE;
        source.timeout().d(Math.min(c6, timeUnit.toNanos(i5)) + nanoTime);
        try {
            Buffer buffer = new Buffer();
            while (source.read(buffer, 8192L) != -1) {
                buffer.c();
            }
            if (c6 == LongCompanionObject.MAX_VALUE) {
                source.timeout().a();
                return true;
            }
            source.timeout().d(nanoTime + c6);
            return true;
        } catch (InterruptedIOException unused) {
            if (c6 == LongCompanionObject.MAX_VALUE) {
                source.timeout().a();
                return false;
            }
            source.timeout().d(nanoTime + c6);
            return false;
        } catch (Throwable th2) {
            if (c6 == LongCompanionObject.MAX_VALUE) {
                source.timeout().a();
            } else {
                source.timeout().d(nanoTime + c6);
            }
            throw th2;
        }
    }

    public static final Headers u(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        ArrayList arrayList = new ArrayList(20);
        Iterator it = list.iterator();
        while (it.hasNext()) {
            c cVar = (c) it.next();
            ByteString byteString = cVar.a;
            ByteString byteString2 = cVar.f20073b;
            String name = byteString.k();
            String value = byteString2.k();
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(value, "value");
            arrayList.add(name);
            arrayList.add(StringsKt.b0(value).toString());
        }
        Object[] array = arrayList.toArray(new String[0]);
        if (array != null) {
            return new Headers((String[]) array);
        }
        throw new NullPointerException("null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>");
    }

    public static final String v(HttpUrl httpUrl, boolean z5) {
        Intrinsics.checkNotNullParameter(httpUrl, "<this>");
        String str = httpUrl.f16034d;
        int i5 = httpUrl.f16035e;
        if (StringsKt.D(str, ":", false)) {
            str = d.h(']', "[", str);
        }
        if (!z5) {
            String scheme = httpUrl.a;
            Intrinsics.checkNotNullParameter(scheme, "scheme");
            if (i5 == (Intrinsics.areEqual(scheme, "http") ? 80 : Intrinsics.areEqual(scheme, "https") ? 443 : -1)) {
                return str;
            }
        }
        return str + ':' + i5;
    }

    public static final List w(List list) {
        Intrinsics.checkNotNullParameter(list, "<this>");
        List unmodifiableList = Collections.unmodifiableList(CollectionsKt.j0(list));
        Intrinsics.checkNotNullExpressionValue(unmodifiableList, "unmodifiableList(toMutableList())");
        return unmodifiableList;
    }

    public static final int x(int i5, String str) {
        Long valueOf;
        if (str == null) {
            valueOf = null;
        } else {
            try {
                valueOf = Long.valueOf(Long.parseLong(str));
            } catch (NumberFormatException unused) {
                return i5;
            }
        }
        if (valueOf == null) {
            return i5;
        }
        long longValue = valueOf.longValue();
        if (longValue > 2147483647L) {
            return Integer.MAX_VALUE;
        }
        if (longValue < 0) {
            return 0;
        }
        return (int) longValue;
    }

    public static final String y(int i5, int i6, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        int m5 = m(i5, i6, str);
        String substring = str.substring(m5, n(m5, i6, str));
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public static final void z(IOException iOException, List suppressed) {
        Intrinsics.checkNotNullParameter(iOException, "<this>");
        Intrinsics.checkNotNullParameter(suppressed, "suppressed");
        if (suppressed.size() > 1) {
            System.out.println(suppressed);
        }
        Iterator it = suppressed.iterator();
        while (it.hasNext()) {
            f.a(iOException, (Exception) it.next());
        }
    }
}
