package lh;

import android.util.StateSet;
import com.facebook.imageutils.JfifUtil;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import okhttp3.HttpUrl;

/* loaded from: classes3.dex */
public final class y {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public int f14050b;

    /* renamed from: c, reason: collision with root package name */
    public Object f14051c;

    /* renamed from: d, reason: collision with root package name */
    public Serializable f14052d;

    /* renamed from: e, reason: collision with root package name */
    public Serializable f14053e;

    /* renamed from: f, reason: collision with root package name */
    public Object f14054f;

    /* renamed from: g, reason: collision with root package name */
    public Object f14055g;

    /* renamed from: h, reason: collision with root package name */
    public Object f14056h;

    /* renamed from: i, reason: collision with root package name */
    public Object f14057i;

    public y(m mVar) {
        this.a = 0;
        f();
        a(StateSet.WILD_CARD, mVar);
    }

    /* JADX WARN: Type inference failed for: r1v4, types: [java.io.Serializable, java.lang.Object, lh.m[]] */
    /* JADX WARN: Type inference failed for: r3v0, types: [int[][], java.io.Serializable, java.lang.Object] */
    public void a(int[] iArr, m mVar) {
        int i5 = this.f14050b;
        if (i5 == 0 || iArr.length == 0) {
            this.f14051c = mVar;
        }
        int[][] iArr2 = (int[][]) this.f14052d;
        if (i5 >= iArr2.length) {
            int i6 = i5 + 10;
            ?? r32 = new int[i6][];
            System.arraycopy(iArr2, 0, r32, 0, i5);
            this.f14052d = r32;
            ?? r12 = new m[i6];
            System.arraycopy((m[]) this.f14053e, 0, r12, 0, i5);
            this.f14053e = r12;
        }
        int[][] iArr3 = (int[][]) this.f14052d;
        int i10 = this.f14050b;
        iArr3[i10] = iArr;
        ((m[]) this.f14053e)[i10] = mVar;
        this.f14050b = i10 + 1;
    }

    public HttpUrl b() {
        ArrayList arrayList;
        String str = (String) this.f14051c;
        if (str == null) {
            throw new IllegalStateException("scheme == null");
        }
        String e9 = ps.o.e(0, (String) this.f14052d, 0, 7);
        String e10 = ps.o.e(0, (String) this.f14053e, 0, 7);
        String str2 = (String) this.f14054f;
        if (str2 == null) {
            throw new IllegalStateException("host == null");
        }
        int c6 = c();
        ArrayList arrayList2 = (ArrayList) this.f14055g;
        ArrayList arrayList3 = new ArrayList(d0.l(arrayList2, 10));
        Iterator it = arrayList2.iterator();
        while (it.hasNext()) {
            arrayList3.add(ps.o.e(0, (String) it.next(), 0, 7));
        }
        ArrayList<String> arrayList4 = (ArrayList) this.f14056h;
        if (arrayList4 == null) {
            arrayList = null;
        } else {
            ArrayList arrayList5 = new ArrayList(d0.l(arrayList4, 10));
            for (String str3 : arrayList4) {
                arrayList5.add(str3 == null ? null : ps.o.e(0, str3, 0, 3));
            }
            arrayList = arrayList5;
        }
        String str4 = (String) this.f14057i;
        return new HttpUrl(str, e9, e10, str2, c6, arrayList3, arrayList, str4 != null ? ps.o.e(0, str4, 0, 7) : null, toString());
    }

    public int c() {
        int i5 = this.f14050b;
        if (i5 != -1) {
            return i5;
        }
        String scheme = (String) this.f14051c;
        Intrinsics.checkNotNull(scheme);
        Intrinsics.checkNotNullParameter(scheme, "scheme");
        if (Intrinsics.areEqual(scheme, "http")) {
            return 80;
        }
        return Intrinsics.areEqual(scheme, "https") ? 443 : -1;
    }

    public void d(String str) {
        String b10;
        ArrayList arrayList = null;
        if (str != null && (b10 = ps.o.b(str, 0, " \"'<>#", 0, 211)) != null) {
            arrayList = ps.o.f(b10);
        }
        this.f14056h = arrayList;
    }

    public void e(String host) {
        Intrinsics.checkNotNullParameter(host, "host");
        String M = e4.f.M(ps.o.e(0, host, 0, 7));
        if (M == null) {
            throw new IllegalArgumentException(Intrinsics.stringPlus("unexpected host: ", host));
        }
        this.f14054f = M;
    }

    /* JADX WARN: Type inference failed for: r0v2, types: [java.io.Serializable, lh.m[]] */
    /* JADX WARN: Type inference failed for: r1v0, types: [int[][], java.io.Serializable] */
    public void f() {
        this.f14051c = new m();
        this.f14052d = new int[10][];
        this.f14053e = new m[10];
    }

    /* JADX WARN: Code restructure failed: missing block: B:168:0x01f7, code lost:
    
        if (r8 < 65536) goto L121;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0081, code lost:
    
        if (r15 == ':') goto L40;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void g(HttpUrl httpUrl, String input) {
        int i5;
        char c6;
        int i6;
        int f2;
        int i10;
        ArrayList arrayList = (ArrayList) this.f14055g;
        Intrinsics.checkNotNullParameter(input, "input");
        byte[] bArr = qs.b.a;
        int m5 = qs.b.m(0, input.length(), input);
        int n6 = qs.b.n(m5, input.length(), input);
        char c8 = 65535;
        if (n6 - m5 >= 2) {
            char charAt = input.charAt(m5);
            char c10 = 'a';
            if ((Intrinsics.compare((int) charAt, 97) >= 0 && Intrinsics.compare((int) charAt, 122) <= 0) || (Intrinsics.compare((int) charAt, 65) >= 0 && Intrinsics.compare((int) charAt, 90) <= 0)) {
                i5 = m5 + 1;
                while (true) {
                    if (i5 >= n6) {
                        break;
                    }
                    int i11 = i5 + 1;
                    char charAt2 = input.charAt(i5);
                    if ((c10 <= charAt2 && charAt2 < '{') || (('A' <= charAt2 && charAt2 < '[') || (('0' <= charAt2 && charAt2 < ':') || charAt2 == '+' || charAt2 == '-' || charAt2 == '.'))) {
                        i5 = i11;
                        c10 = 'a';
                    }
                }
            }
        }
        i5 = -1;
        int i12 = 1;
        if (i5 != -1) {
            if (kotlin.text.x.n(input, m5, "https:", true)) {
                this.f14051c = "https";
                m5 += 6;
            } else {
                if (!kotlin.text.x.n(input, m5, "http:", true)) {
                    StringBuilder sb2 = new StringBuilder("Expected URL scheme 'http' or 'https' but was '");
                    String substring = input.substring(0, i5);
                    Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String…ing(startIndex, endIndex)");
                    sb2.append(substring);
                    sb2.append('\'');
                    throw new IllegalArgumentException(sb2.toString());
                }
                this.f14051c = "http";
                m5 += 5;
            }
        } else {
            if (httpUrl == null) {
                throw new IllegalArgumentException(Intrinsics.stringPlus("Expected URL scheme 'http' or 'https' but no scheme was found for ", input.length() > 6 ? Intrinsics.stringPlus(kotlin.text.b0.B(6, input), "...") : input));
            }
            this.f14051c = httpUrl.a;
        }
        int i13 = m5;
        int i14 = 0;
        while (true) {
            c6 = '/';
            i6 = i12;
            if (i13 >= n6) {
                break;
            }
            int i15 = i13 + 1;
            char charAt3 = input.charAt(i13);
            if (charAt3 != '\\' && charAt3 != '/') {
                break;
            }
            i14++;
            i12 = i6;
            i13 = i15;
        }
        char c11 = '#';
        if (i14 >= 2 || httpUrl == null || !Intrinsics.areEqual(httpUrl.a, (String) this.f14051c)) {
            int i16 = m5 + i14;
            int i17 = 0;
            int i18 = 0;
            while (true) {
                f2 = qs.b.f(i16, n6, input, "@/\\?#");
                char charAt4 = f2 != n6 ? input.charAt(f2) : c8;
                if (charAt4 == c8 || charAt4 == c11 || charAt4 == c6 || charAt4 == '\\' || charAt4 == '?') {
                    break;
                }
                if (charAt4 != '@') {
                    c11 = '#';
                } else {
                    if (i17 == 0) {
                        int e9 = qs.b.e(':', i16, f2, input);
                        String b10 = ps.o.b(input, i16, " \"':;<=>@[]^`{}|/\\?#", e9, 240);
                        if (i18 != 0) {
                            b10 = a3.e.n(new StringBuilder(), (String) this.f14052d, "%40", b10);
                        }
                        this.f14052d = b10;
                        if (e9 != f2) {
                            this.f14053e = ps.o.b(input, e9 + 1, " \"':;<=>@[]^`{}|/\\?#", f2, 240);
                            i17 = i6;
                        }
                        i18 = i6;
                    } else {
                        this.f14053e = ((String) this.f14053e) + "%40" + ps.o.b(input, i16, " \"':;<=>@[]^`{}|/\\?#", f2, 240);
                    }
                    i16 = f2 + 1;
                    c6 = '/';
                    c11 = '#';
                    c8 = 65535;
                }
            }
            int i19 = i16;
            while (true) {
                if (i19 >= f2) {
                    i19 = f2;
                    break;
                }
                char charAt5 = input.charAt(i19);
                if (charAt5 == '[') {
                    do {
                        i19++;
                        if (i19 >= f2) {
                            break;
                        }
                    } while (input.charAt(i19) != ']');
                } else if (charAt5 == ':') {
                    break;
                }
                i19++;
            }
            int i20 = i19 + 1;
            if (i20 < f2) {
                this.f14054f = e4.f.M(ps.o.e(i16, input, i19, 4));
                try {
                    i10 = Integer.parseInt(ps.o.b(input, i20, "", f2, 248));
                    if (i6 <= i10) {
                    }
                } catch (NumberFormatException unused) {
                }
                i10 = -1;
                this.f14050b = i10;
                if (i10 == -1) {
                    StringBuilder sb3 = new StringBuilder("Invalid URL port: \"");
                    String substring2 = input.substring(i20, f2);
                    Intrinsics.checkNotNullExpressionValue(substring2, "this as java.lang.String…ing(startIndex, endIndex)");
                    sb3.append(substring2);
                    sb3.append('\"');
                    throw new IllegalArgumentException(sb3.toString().toString());
                }
            } else {
                int i21 = -1;
                this.f14054f = e4.f.M(ps.o.e(i16, input, i19, 4));
                String scheme = (String) this.f14051c;
                Intrinsics.checkNotNull(scheme);
                Intrinsics.checkNotNullParameter(scheme, "scheme");
                if (Intrinsics.areEqual(scheme, "http")) {
                    i21 = 80;
                } else if (Intrinsics.areEqual(scheme, "https")) {
                    i21 = 443;
                }
                this.f14050b = i21;
            }
            if (((String) this.f14054f) == null) {
                StringBuilder sb4 = new StringBuilder("Invalid URL host: \"");
                String substring3 = input.substring(i16, i19);
                Intrinsics.checkNotNullExpressionValue(substring3, "this as java.lang.String…ing(startIndex, endIndex)");
                sb4.append(substring3);
                sb4.append('\"');
                throw new IllegalArgumentException(sb4.toString().toString());
            }
            m5 = f2;
        } else {
            this.f14052d = httpUrl.e();
            this.f14053e = httpUrl.a();
            this.f14054f = httpUrl.f16034d;
            this.f14050b = httpUrl.f16035e;
            arrayList.clear();
            arrayList.addAll(httpUrl.c());
            if (m5 == n6 || input.charAt(m5) == '#') {
                d(httpUrl.d());
            }
        }
        int f10 = qs.b.f(m5, n6, input, "?#");
        if (m5 != f10) {
            char charAt6 = input.charAt(m5);
            if (charAt6 == '/' || charAt6 == '\\') {
                arrayList.clear();
                arrayList.add("");
                m5++;
            } else {
                arrayList.set(arrayList.size() - 1, "");
            }
            while (m5 < f10) {
                int f11 = qs.b.f(m5, f10, input, "/\\");
                boolean z5 = f11 < f10;
                String b11 = ps.o.b(input, m5, " \"<>^`{}|/\\?#", f11, 240);
                if (!Intrinsics.areEqual(b11, ".") && !kotlin.text.x.i(b11, "%2e", true)) {
                    if (!Intrinsics.areEqual(b11, "..") && !kotlin.text.x.i(b11, "%2e.", true) && !kotlin.text.x.i(b11, ".%2e", true) && !kotlin.text.x.i(b11, "%2e%2e", true)) {
                        if (((CharSequence) k0.d.f(1, arrayList)).length() == 0) {
                            arrayList.set(arrayList.size() - 1, b11);
                        } else {
                            arrayList.add(b11);
                        }
                        if (z5) {
                            arrayList.add("");
                        }
                    } else if (((String) arrayList.remove(arrayList.size() - 1)).length() != 0 || arrayList.isEmpty()) {
                        arrayList.add("");
                    } else {
                        arrayList.set(arrayList.size() - 1, "");
                    }
                }
                m5 = z5 ? f11 + 1 : f11;
            }
        }
        if (f10 < n6 && input.charAt(f10) == '?') {
            int e10 = qs.b.e('#', f10, n6, input);
            this.f14056h = ps.o.f(ps.o.b(input, f10 + 1, " \"'<>#", e10, JfifUtil.MARKER_RST0));
            f10 = e10;
        }
        if (f10 >= n6 || input.charAt(f10) != '#') {
            return;
        }
        this.f14057i = ps.o.b(input, f10 + 1, "", n6, 176);
    }

    public void h(String scheme) {
        Intrinsics.checkNotNullParameter(scheme, "scheme");
        if (scheme.equalsIgnoreCase("http")) {
            this.f14051c = "http";
        } else {
            if (!scheme.equalsIgnoreCase("https")) {
                throw new IllegalArgumentException(Intrinsics.stringPlus("unexpected scheme: ", scheme));
            }
            this.f14051c = "https";
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00b4, code lost:
    
        if (r1 != r3) goto L38;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String toString() {
        switch (this.a) {
            case 1:
                StringBuilder out = new StringBuilder();
                String str = (String) this.f14051c;
                if (str != null) {
                    out.append(str);
                    out.append("://");
                } else {
                    out.append("//");
                }
                if (((String) this.f14052d).length() > 0 || ((String) this.f14053e).length() > 0) {
                    out.append((String) this.f14052d);
                    if (((String) this.f14053e).length() > 0) {
                        out.append(':');
                        out.append((String) this.f14053e);
                    }
                    out.append('@');
                }
                String str2 = (String) this.f14054f;
                if (str2 != null) {
                    Intrinsics.checkNotNull(str2);
                    if (StringsKt.E(str2, ':')) {
                        out.append('[');
                        out.append((String) this.f14054f);
                        out.append(']');
                    } else {
                        out.append((String) this.f14054f);
                    }
                }
                int i5 = -1;
                if (this.f14050b != -1 || ((String) this.f14051c) != null) {
                    int c6 = c();
                    String scheme = (String) this.f14051c;
                    if (scheme != null) {
                        Intrinsics.checkNotNull(scheme);
                        Intrinsics.checkNotNullParameter(scheme, "scheme");
                        if (Intrinsics.areEqual(scheme, "http")) {
                            i5 = 80;
                            break;
                        } else if (Intrinsics.areEqual(scheme, "https")) {
                            i5 = 443;
                            break;
                        }
                    }
                    out.append(':');
                    out.append(c6);
                }
                ArrayList arrayList = (ArrayList) this.f14055g;
                Intrinsics.checkNotNullParameter(arrayList, "<this>");
                Intrinsics.checkNotNullParameter(out, "out");
                int size = arrayList.size();
                for (int i6 = 0; i6 < size; i6++) {
                    out.append('/');
                    out.append((String) arrayList.get(i6));
                }
                if (((ArrayList) this.f14056h) != null) {
                    out.append('?');
                    ArrayList arrayList2 = (ArrayList) this.f14056h;
                    Intrinsics.checkNotNull(arrayList2);
                    ps.o.g(out, arrayList2);
                }
                if (((String) this.f14057i) != null) {
                    out.append('#');
                    out.append((String) this.f14057i);
                }
                String sb2 = out.toString();
                Intrinsics.checkNotNullExpressionValue(sb2, "StringBuilder().apply(builderAction).toString()");
                return sb2;
            default:
                return super.toString();
        }
    }

    public y(int i5) {
        this.a = i5;
        switch (i5) {
            case 1:
                this.f14052d = "";
                this.f14053e = "";
                this.f14050b = -1;
                ArrayList arrayList = new ArrayList();
                this.f14055g = arrayList;
                arrayList.add("");
                break;
        }
    }
}
