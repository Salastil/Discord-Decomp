package okhttp3;

import com.discord.notifications.renderer.NotificationRenderer;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.ArrayList;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import lh.y;
import ps.o;

/* loaded from: classes3.dex */
public final class HttpUrl {
    public static final char[] j = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16032b;

    /* renamed from: c, reason: collision with root package name */
    public final String f16033c;

    /* renamed from: d, reason: collision with root package name */
    public final String f16034d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16035e;

    /* renamed from: f, reason: collision with root package name */
    public final List f16036f;

    /* renamed from: g, reason: collision with root package name */
    public final String f16037g;

    /* renamed from: h, reason: collision with root package name */
    public final String f16038h;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f16039i;

    public HttpUrl(String scheme, String username, String password, String host, int i5, ArrayList pathSegments, ArrayList arrayList, String str, String url) {
        Intrinsics.checkNotNullParameter(scheme, "scheme");
        Intrinsics.checkNotNullParameter(username, "username");
        Intrinsics.checkNotNullParameter(password, "password");
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(pathSegments, "pathSegments");
        Intrinsics.checkNotNullParameter(url, "url");
        this.a = scheme;
        this.f16032b = username;
        this.f16033c = password;
        this.f16034d = host;
        this.f16035e = i5;
        this.f16036f = arrayList;
        this.f16037g = str;
        this.f16038h = url;
        this.f16039i = Intrinsics.areEqual(scheme, "https");
    }

    public final String a() {
        if (this.f16033c.length() == 0) {
            return "";
        }
        int length = this.a.length() + 3;
        String str = this.f16038h;
        String substring = str.substring(StringsKt.I(str, ':', length, 4) + 1, StringsKt.I(str, '@', 0, 6));
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public final String b() {
        int length = this.a.length() + 3;
        String str = this.f16038h;
        int I = StringsKt.I(str, '/', length, 4);
        String substring = str.substring(I, qs.b.f(I, str.length(), str, "?#"));
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public final ArrayList c() {
        int length = this.a.length() + 3;
        String str = this.f16038h;
        int I = StringsKt.I(str, '/', length, 4);
        int f2 = qs.b.f(I, str.length(), str, "?#");
        ArrayList arrayList = new ArrayList();
        while (I < f2) {
            int i5 = I + 1;
            int e9 = qs.b.e('/', i5, f2, str);
            String substring = str.substring(i5, e9);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
            arrayList.add(substring);
            I = e9;
        }
        return arrayList;
    }

    public final String d() {
        if (this.f16036f == null) {
            return null;
        }
        String str = this.f16038h;
        int I = StringsKt.I(str, '?', 0, 6) + 1;
        String substring = str.substring(I, qs.b.e('#', I, str.length(), str));
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public final String e() {
        if (this.f16032b.length() == 0) {
            return "";
        }
        int length = this.a.length() + 3;
        String str = this.f16038h;
        String substring = str.substring(length, qs.b.f(length, str.length(), str, ":@"));
        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
        return substring;
    }

    public final boolean equals(Object obj) {
        return (obj instanceof HttpUrl) && Intrinsics.areEqual(((HttpUrl) obj).f16038h, this.f16038h);
    }

    public final String f() {
        y yVar;
        Intrinsics.checkNotNullParameter("/...", "link");
        try {
            yVar = new y(1);
            yVar.g(this, "/...");
        } catch (IllegalArgumentException unused) {
            yVar = null;
        }
        Intrinsics.checkNotNull(yVar);
        yVar.getClass();
        Intrinsics.checkNotNullParameter("", NotificationRenderer.USERNAME);
        String b10 = o.b("", 0, " \"':;<=>@[]^`{}|/\\?#", 0, 251);
        Intrinsics.checkNotNullParameter(b10, "<set-?>");
        yVar.f14052d = b10;
        Intrinsics.checkNotNullParameter("", "password");
        String b11 = o.b("", 0, " \"':;<=>@[]^`{}|/\\?#", 0, 251);
        Intrinsics.checkNotNullParameter(b11, "<set-?>");
        yVar.f14053e = b11;
        return yVar.b().f16038h;
    }

    public final URI g() {
        String substring;
        y yVar = new y(1);
        ArrayList arrayList = (ArrayList) yVar.f14055g;
        String scheme = this.a;
        yVar.f14051c = scheme;
        String e9 = e();
        Intrinsics.checkNotNullParameter(e9, "<set-?>");
        yVar.f14052d = e9;
        String a = a();
        Intrinsics.checkNotNullParameter(a, "<set-?>");
        yVar.f14053e = a;
        yVar.f14054f = this.f16034d;
        Intrinsics.checkNotNullParameter(scheme, "scheme");
        int i5 = Intrinsics.areEqual(scheme, "http") ? 80 : Intrinsics.areEqual(scheme, "https") ? 443 : -1;
        int i6 = this.f16035e;
        yVar.f14050b = i6 != i5 ? i6 : -1;
        arrayList.clear();
        arrayList.addAll(c());
        yVar.d(d());
        if (this.f16037g == null) {
            substring = null;
        } else {
            String str = this.f16038h;
            substring = str.substring(StringsKt.I(str, '#', 0, 6) + 1);
            Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
        }
        yVar.f14057i = substring;
        String str2 = (String) yVar.f14054f;
        yVar.f14054f = str2 == null ? null : new Regex("[\"<>^`{|}]").replace(str2, "");
        int size = arrayList.size();
        for (int i10 = 0; i10 < size; i10++) {
            arrayList.set(i10, o.b((String) arrayList.get(i10), 0, "[]", 0, 227));
        }
        ArrayList arrayList2 = (ArrayList) yVar.f14056h;
        if (arrayList2 != null) {
            int size2 = arrayList2.size();
            int i11 = 0;
            while (i11 < size2) {
                int i12 = i11 + 1;
                String str3 = (String) arrayList2.get(i11);
                arrayList2.set(i11, str3 == null ? null : o.b(str3, 0, "\\^`{|}", 0, 195));
                i11 = i12;
            }
        }
        String str4 = (String) yVar.f14057i;
        yVar.f14057i = str4 != null ? o.b(str4, 0, " \"#<>\\^`{|}", 0, 163) : null;
        String yVar2 = yVar.toString();
        try {
            return new URI(yVar2);
        } catch (URISyntaxException e10) {
            try {
                URI create = URI.create(new Regex("[\\u0000-\\u001F\\u007F-\\u009F\\p{javaWhitespace}]").replace(yVar2, ""));
                Intrinsics.checkNotNullExpressionValue(create, "{\n      // Unlikely edge…Unexpected!\n      }\n    }");
                return create;
            } catch (Exception unused) {
                throw new RuntimeException(e10);
            }
        }
    }

    public final int hashCode() {
        return this.f16038h.hashCode();
    }

    public final String toString() {
        return this.f16038h;
    }
}
