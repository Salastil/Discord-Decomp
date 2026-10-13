package fe;

import java.util.regex.Pattern;
import ke.w;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: c, reason: collision with root package name */
    public static final Pattern f8503c = Pattern.compile("\\[voice=\"([^\"]*)\"\\]");

    /* renamed from: d, reason: collision with root package name */
    public static final Pattern f8504d = Pattern.compile("^((?:[0-9]*\\.)?[0-9]+)(px|em|%)$");
    public final w a = new w();

    /* renamed from: b, reason: collision with root package name */
    public final StringBuilder f8505b = new StringBuilder();

    public static String a(w wVar, StringBuilder sb2) {
        boolean z5 = false;
        sb2.setLength(0);
        int i5 = wVar.f13363b;
        int i6 = wVar.f13364c;
        while (i5 < i6 && !z5) {
            char c6 = (char) wVar.a[i5];
            if ((c6 < 'A' || c6 > 'Z') && ((c6 < 'a' || c6 > 'z') && !((c6 >= '0' && c6 <= '9') || c6 == '#' || c6 == '-' || c6 == '.' || c6 == '_'))) {
                z5 = true;
            } else {
                i5++;
                sb2.append(c6);
            }
        }
        wVar.G(i5 - wVar.f13363b);
        return sb2.toString();
    }

    public static String b(w wVar, StringBuilder sb2) {
        c(wVar);
        if (wVar.a() == 0) {
            return null;
        }
        String a = a(wVar, sb2);
        if (!"".equals(a)) {
            return a;
        }
        return "" + ((char) wVar.u());
    }

    public static void c(w wVar) {
        while (true) {
            for (boolean z5 = true; wVar.a() > 0 && z5; z5 = false) {
                int i5 = wVar.f13363b;
                byte[] bArr = wVar.a;
                byte b10 = bArr[i5];
                char c6 = (char) b10;
                if (c6 == '\t' || c6 == '\n' || c6 == '\f' || c6 == '\r' || c6 == ' ') {
                    wVar.G(1);
                } else {
                    int i6 = wVar.f13364c;
                    int i10 = i5 + 2;
                    if (i10 <= i6) {
                        int i11 = i5 + 1;
                        if (b10 == 47 && bArr[i11] == 42) {
                            while (true) {
                                int i12 = i10 + 1;
                                if (i12 >= i6) {
                                    break;
                                }
                                if (((char) bArr[i10]) == '*' && ((char) bArr[i12]) == '/') {
                                    i10 += 2;
                                    i6 = i10;
                                } else {
                                    i10 = i12;
                                }
                            }
                            wVar.G(i6 - wVar.f13363b);
                        }
                    }
                }
            }
            return;
        }
    }
}
